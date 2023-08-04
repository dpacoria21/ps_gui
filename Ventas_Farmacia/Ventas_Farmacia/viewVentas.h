#pragma once

#include "Ventas.h"
#include "Clientes.h"
#include "Medicamentos.h"

namespace Ventas_Farmacia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for viewVentas
	/// </summary>
	public ref class viewVentas : public System::Windows::Forms::Form
	{
	public:
		viewVentas(void)
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
		~viewVentas()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuario;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ User;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ total;






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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->User = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(35, 14);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(198, 72);
			this->panel3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id de la Venta";
			this->label1->Click += gcnew System::EventHandler(this, &viewVentas::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 26);
			this->textBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->id, this->Usuario });
			this->dataGridView1->Location = System::Drawing::Point(49, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(293, 291);
			this->dataGridView1->TabIndex = 5;
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// Usuario
			// 
			this->Usuario->HeaderText = L"Usuario";
			this->Usuario->Name = L"Usuario";
			this->Usuario->ReadOnly = true;
			this->Usuario->Width = 150;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(408, 58);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(593, 387);
			this->dataGridView2->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Costo";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(67, 349);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(261, 147);
			this->panel1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(58, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 49);
			this->button2->TabIndex = 16;
			this->button2->Text = L"BUSCAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &viewVentas::button2_Click);
			// 
			// User
			// 
			this->User->AutoSize = true;
			this->User->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User->Location = System::Drawing::Point(565, 18);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(0, 37);
			this->User->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(401, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 37);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Venta de :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(680, 466);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"TOTAL: ";
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total->Location = System::Drawing::Point(786, 466);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(0, 24);
			this->total->TabIndex = 18;
			this->total->Click += gcnew System::EventHandler(this, &viewVentas::label3_Click);
			// 
			// viewVentas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 554);
			this->Controls->Add(this->total);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->User);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"viewVentas";
			this->Text = L"viewVentas";
			this->Load += gcnew System::EventHandler(this, &viewVentas::viewVentas_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			string id = this->toStandardString(this->textBox1->Text);

			try {
				if (id == "") throw string("");
				long long search = this->toInteger(id);
				vector<VentaCabecera>ventas = obtenerVentas();
				VentaCabecera vc;
				for (int i = 0; i < ventas.size(); i++) {
					if (ventas[i].id == search) {
						vc = ventas[i];
						break;
					}
				}

				string str(vc.cliente.nombre);
				String^ name = gcnew String(str.c_str());
				this->User->Text = name;

				this->dataGridView2->Rows->Clear();

				for (int i = 0; i < vc.medicamentos.size(); i++) {
					int n = this->dataGridView2->Rows->Add();
					string str(vc.medicamentos[i].medicamento.nombre);
					String^ name = gcnew String(str.c_str());
					this->dataGridView2->Rows[n]->Cells[0]->Value = vc.medicamentos[i].medicamento.id;
					this->dataGridView2->Rows[n]->Cells[1]->Value = name;
					this->dataGridView2->Rows[n]->Cells[2]->Value = vc.medicamentos[i].cantidad;
					this->dataGridView2->Rows[n]->Cells[3]->Value = vc.medicamentos[i].precio;
				}

				this->total->Text = vc.total+"";
				this->textBox1->Text = "";
			}
			catch (const string& e) {
				MessageBox::Show("Ingrese un Id");
			}
			catch (const invalid_argument& e) {
				MessageBox::Show("Ingrese un Id válido");
			}
		}
		private: System::Void viewVentas_Load(System::Object^ sender, System::EventArgs^ e) {
			vector<VentaCabecera>ventas = obtenerVentas();
			for (int i = 0; i < ventas.size(); i++) {
				int n = this->dataGridView1->Rows->Add();
				string str(ventas[i].cliente.nombre);
				String^ name = gcnew String(str.c_str());
				this->dataGridView1->Rows[n]->Cells[0]->Value = ventas[i].id;
				this->dataGridView1->Rows[n]->Cells[1]->Value = name;
			}
		}
		private: static string toStandardString(System::String^ string) {
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}
		private: static long long toInteger(string s) {
			long long i = 0;
			for (char c : s)
			{
				if (c >= '0' && c <= '9') {
					i = i * 10 + (long long)(c - '0');
				}
				else {
					throw invalid_argument("error");
				}
			}
			return i;
		}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
