#include "pch.h"
#include "Medicamentos.h"
#include "Clientes.h"
#include "Ventas.h"
using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

void inicializar();

[STAThread]
int main()
{
    inicializar();
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}

void inicializar() {
    inicializarClientes();
    inicializarMedicamentos();
    inicializarVentas();
}