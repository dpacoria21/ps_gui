#pragma once

#include <iostream>
#include "addProduct.h"
#include "viewProducts.h"
#include "searchProduct.h"
#include "ventaProducts.h"
#include "viewVentas.h"
#include "Clientes.h"
#include "Medicamentos.h"
#include "Ventas.h"

using namespace std;


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(56, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 77);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Vender";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(285, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 75);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Agregar Medicamentos";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(501, 207);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 77);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Ver Medicamentos";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(285, 343);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(172, 77);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Ver Detalles de Venta";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(501, 343);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(178, 77);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Salir";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(725, 115);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(655, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido a la Farmacia";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(56, 343);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 77);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Buscar medicamento";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 507);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			guardarMedicamentos();
			guardarClientes();
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			Ventas_Farmacia::addProduct^ addProduct = gcnew Ventas_Farmacia::addProduct();
			this->Visible = false;
			addProduct->ShowDialog();
			this->Visible = true;
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Ventas_Farmacia::viewProducts^ viewProducts = gcnew Ventas_Farmacia::viewProducts();
			this->Visible = false;
			viewProducts->ShowDialog();
			this->Visible = true;
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			Ventas_Farmacia::searchProduct^ searchProduct = gcnew Ventas_Farmacia::searchProduct();
			this->Visible = false;
			searchProduct->ShowDialog();
			this->Visible = true;
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Ventas_Farmacia::ventaProducts^ ventaProducts = gcnew Ventas_Farmacia::ventaProducts();
			this->Visible = false;
			ventaProducts->ShowDialog();
			this->Visible = true;
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			Ventas_Farmacia::viewVentas^ viewVentas = gcnew Ventas_Farmacia::viewVentas();
			this->Visible = false;
			viewVentas->ShowDialog();
			this->Visible = true;
		}
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		}
};
}
