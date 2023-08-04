#include "pch.h"
#include "definitions.h"

// Define the variables
unsigned long long idClienteDisponible;
vector<Cliente> clientes;
unordered_map<unsigned long long, Cliente> clientesIndexadosPorId;
unordered_map<string, Cliente> clientesIndexadosPorDNI;


unsigned long long idMedicamentoDisponible;
unordered_map<unsigned long long, Medicamento> medicamentosIndexadosPorId;
vector<Medicamento> medicamentos;


unsigned long long idVentaDisponible;
vector<VentaCabecera> ventas;
vector<VentaDetalle> carrito;

// Define the STORAGE_PATH map
unordered_map<string, string> STORAGE_PATH = {
    {RCliente, "./clientes.dat"},
    {RMedicamento, "./medicamentos.dat"},
    {RVenta, "./ventas.dat"}
};



void verificarOInicializarArchivo(const string& where) {
    ifstream archivoEntrada(STORAGE_PATH[where], ios::binary | ios::in);

    if (archivoEntrada.fail()) {
        ofstream archivoSalida(STORAGE_PATH[where], ios::binary | ios::out);

        unsigned long long inicializador = 1LL;
        archivoSalida.write(reinterpret_cast<char*>(&inicializador), sizeof(unsigned long long));

        archivoSalida.close();
    }

    archivoEntrada.close();
}