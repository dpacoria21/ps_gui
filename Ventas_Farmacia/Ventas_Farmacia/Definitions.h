#pragma once
#ifndef SISTEMA_VENTAS_FARMACIA_DEFINITIONS_H
#define SISTEMA_VENTAS_FARMACIA_DEFINITIONS_H

#include <cstddef>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

#define MACRO(code) do {code} while (false)
#define DBG(x) MACRO(cerr << #x << " = " << (x) << endl;)
#define DBGY(x) MACRO(cerr << #x << " = " << (x) << " , ";)
#define DBG2(x,y) MACRO(DBGY(x); DBG(y);)
#define DBG3(x,y,z) MACRO(DBGY(x); DBGY(y); DBG(z);)
#define DBG4(x,y,z,w) MACRO(DBGY(x); DBGY(y); DBGY(z); DBG(w);)
#define RAYA MACRO(cerr << " ================ " << endl;)

typedef struct Cliente {
    unsigned long long id;
    char nombre[255];
    char dni[9]; // 71136033\0
    char telefono[10]; // 999508648\0
} Cliente;


typedef struct Medicamento {
    unsigned long long id;
    char nombre[255];
    unsigned int precio; // en céntimos
    unsigned int cantidad;
} Medicamento;


typedef struct VentaDetalle {
    Medicamento medicamento;
    unsigned int cantidad;
    unsigned int precio; // en céntimos
} VentaDetalle;


typedef struct VentaCabecera {
    unsigned long long id;
    Cliente cliente;
    vector<VentaDetalle> medicamentos;
    unsigned int total;
} VentaCabecera;


// Declare the variables as "extern" in the header file
extern unsigned long long idClienteDisponible;
extern vector<Cliente> clientes;
extern unordered_map<unsigned long long, Cliente> clientesIndexadosPorId;
extern unordered_map<string, Cliente> clientesIndexadosPorDNI;

extern unsigned long long idMedicamentoDisponible;
extern vector<Medicamento> medicamentos;
extern unordered_map<unsigned long long, Medicamento> medicamentosIndexadosPorId;

extern unsigned long long idVentaDisponible;
extern vector<VentaCabecera> ventas;
extern vector<VentaDetalle> carrito;

const string RCliente = "Cliente";
const string RMedicamento = "Medicamento";
const string RVenta = "Venta";
extern unordered_map<string, string> STORAGE_PATH;


void verificarOInicializarArchivo(const string& where);

#endif
