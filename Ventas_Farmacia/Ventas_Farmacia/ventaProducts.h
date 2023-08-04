#pragma once
#include "Medicamentos.h"
#include "Clientes.h"
#include "Ventas.h"

namespace Ventas_Farmacia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ventaProducts
	/// </summary>
	public ref class ventaProducts : public System::Windows::Forms::Form
	{

	public:
		ventaProducts(void)
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
		~ventaProducts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tel;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nomb;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ dni;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ idProd;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ cant;

	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Label^ User;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ verify;
	private: System::Windows::Forms::Label^ total;
	private: System::Windows::Forms::Label^ label5;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tel = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nomb = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dni = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->idProd = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cant = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->User = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->verify = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->tel);
			this->panel3->Location = System::Drawing::Point(77, 242);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(198, 72);
			this->panel3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"TELEFONO";
			// 
			// tel
			// 
			this->tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tel->Location = System::Drawing::Point(3, 43);
			this->tel->Name = L"tel";
			this->tel->Size = System::Drawing::Size(192, 26);
			this->tel->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->nomb);
			this->panel2->Location = System::Drawing::Point(77, 133);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(198, 72);
			this->panel2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NOMBRE";
			// 
			// nomb
			// 
			this->nomb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomb->Location = System::Drawing::Point(3, 43);
			this->nomb->Name = L"nomb";
			this->nomb->Size = System::Drawing::Size(192, 26);
			this->nomb->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dni);
			this->panel1->Location = System::Drawing::Point(77, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(198, 72);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ventaProducts::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(78, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"DNI";
			// 
			// dni
			// 
			this->dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dni->Location = System::Drawing::Point(3, 43);
			this->dni->Name = L"dni";
			this->dni->Size = System::Drawing::Size(192, 26);
			this->dni->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(99, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 62);
			this->button1->TabIndex = 6;
			this->button1->Text = L"VALIDAR USUARIO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ventaProducts::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Crimson;
			this->label4->Location = System::Drawing::Point(35, 464);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"* Si el usuario ya existe, solo colocar DNI";
			this->label4->Click += gcnew System::EventHandler(this, &ventaProducts::label4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->Nombre,
					this->Precio, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(442, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(593, 126);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ventaProducts::dataGridView1_CellContentClick);
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Width = 150;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->ReadOnly = true;
			this->Precio->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Stock";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->idProd);
			this->panel4->Location = System::Drawing::Point(442, 165);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(198, 72);
			this->panel4->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Id del Producto";
			// 
			// idProd
			// 
			this->idProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProd->Location = System::Drawing::Point(3, 43);
			this->idProd->Name = L"idProd";
			this->idProd->Size = System::Drawing::Size(192, 26);
			this->idProd->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->cant);
			this->panel5->Location = System::Drawing::Point(675, 165);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(198, 72);
			this->panel5->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(68, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Cantidad";
			// 
			// cant
			// 
			this->cant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cant->Location = System::Drawing::Point(3, 43);
			this->cant->Name = L"cant";
			this->cant->Size = System::Drawing::Size(192, 26);
			this->cant->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(442, 285);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(593, 155);
			this->dataGridView2->TabIndex = 12;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ventaProducts::dataGridView2_CellContentClick);
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(438, 242);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 37);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Venta de :";
			this->label8->Click += gcnew System::EventHandler(this, &ventaProducts::label8_Click);
			// 
			// User
			// 
			this->User->AutoSize = true;
			this->User->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User->Location = System::Drawing::Point(599, 242);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(0, 37);
			this->User->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(895, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 49);
			this->button2->TabIndex = 15;
			this->button2->Text = L"AGREGAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ventaProducts::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(459, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 49);
			this->button3->TabIndex = 16;
			this->button3->Text = L"CONFIRMAR";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ventaProducts::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(652, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 49);
			this->button4->TabIndex = 17;
			this->button4->Text = L"CANCELAR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ventaProducts::button4_Click);
			// 
			// verify
			// 
			this->verify->AutoSize = true;
			this->verify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->verify->Location = System::Drawing::Point(387, 464);
			this->verify->Name = L"verify";
			this->verify->Size = System::Drawing::Size(0, 16);
			this->verify->TabIndex = 18;
			this->verify->Click += gcnew System::EventHandler(this, &ventaProducts::label5_Click_1);
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total->Location = System::Drawing::Point(965, 458);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(0, 24);
			this->total->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(859, 458);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 24);
			this->label5->TabIndex = 19;
			this->label5->Text = L"TOTAL: ";
			// 
			// ventaProducts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 526);
			this->Controls->Add(this->total);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->verify);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->User);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"ventaProducts";
			this->Text = L"ventaProducts";
			this->Load += gcnew System::EventHandler(this, &ventaProducts::ventaProducts_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void ventaProducts_Load(System::Object^ sender, System::EventArgs^ e) {
			carrito.clear();
			vector<Medicamento> medicamentos = obtenerMedicamentos();
			for (int i = 0; i < medicamentos.size(); i++) {
				int n = this->dataGridView1->Rows->Add();
				string str(medicamentos[i].nombre);
				String^ name = gcnew String(str.c_str());
				this->dataGridView1->Rows[n]->Cells[0]->Value = medicamentos[i].id;
				this->dataGridView1->Rows[n]->Cells[1]->Value = name;
				this->dataGridView1->Rows[n]->Cells[2]->Value = medicamentos[i].precio;
				this->dataGridView1->Rows[n]->Cells[3]->Value = medicamentos[i].cantidad;
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			string dni = toStandardString(this->dni->Text);
			string nombre = toStandardString(this->nomb->Text);
			string telefono = toStandardString(this->tel->Text);

			Cliente cli = obtenerClientePorDNI(dni);
			if (cli.dni != dni) {
				strcpy_s(cli.dni, dni.c_str());
				strcpy_s(cli.nombre, nombre.c_str());
				strcpy_s(cli.telefono, telefono.c_str());
				agregarCliente(cli);
			}
			if (nombre == "") {
				string str(cli.nombre);
				String^ name = gcnew String(str.c_str());
				this->User->Text = name;
			}
			else {
				this->User->Text = this->nomb->Text;
			}
			this->button1->Enabled = false;
			this->dni->Enabled = false;
			this->nomb->Enabled = false;
			this->tel->Enabled = false;
			
		}
		private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			//Contenedor de los productos
		}
		private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			// Este es un contenedor para los productos que vaya agregando
		}

		private: int suma;

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			string id = this->toStandardString(this->idProd->Text);
			string cant = this->toStandardString(this->cant->Text);
			try {
				if (id == "") throw string("");
				long long search = this->toLongLong(id);
				int cantidad = this->toInteger(cant);
				Medicamento product = obtenerMedicamentoPorId(search);
				int precioTotal = cantidad * product.precio;

				VentaDetalle v;
				v.medicamento = product;
				v.cantidad = cantidad;
				v.precio = precioTotal;

				int rest = product.cantidad - cantidad;

				if (rest < 0) throw 42;
				for (int i = 0; i < medicamentos.size(); i++) {
					if (medicamentos[i].id == product.id) {
						medicamentos[i].cantidad = product.cantidad - cantidad;
						break;
					}
				}
				this->dataGridView1->Rows[search-1]->Cells[3]->Value = product.cantidad - cantidad;

				int n = this->dataGridView2->Rows->Add();
				string str(product.nombre);
				String^ name = gcnew String(str.c_str());
				this->dataGridView2->Rows[n]->Cells[0]->Value = product.id;
				this->dataGridView2->Rows[n]->Cells[1]->Value = name;
				this->dataGridView2->Rows[n]->Cells[2]->Value = cantidad;
				this->dataGridView2->Rows[n]->Cells[3]->Value = precioTotal;

				agregarMedicamentoAlCarrito(v);
				this->suma += precioTotal;
				this->total->Text = this->suma+"";
				this->idProd->Text = "";
				this->cant->Text = "";
			
			}
			catch (const string& e) {
				MessageBox::Show("Ingrese un Id");
			}
			catch (const invalid_argument& e) {
				MessageBox::Show("Ingrese un Id válido");
			}
			catch (int e) {
				MessageBox::Show("Ingrese un stock valido");
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

			VentaCabecera vc;
			string dni = toStandardString(this->dni->Text);
			Cliente cli = obtenerClientePorDNI(dni);

			vc.cliente = cli;

			string str(cli.nombre);
			String^ name = gcnew String(str.c_str());

			agregarVenta(vc);
			guardarClientes();
			guardarVentas();
			guardarMedicamentos();
			this->Close();

		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: static string toStandardString(System::String^ string) {
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}
		private: static long long toLongLong(string s) {
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
		private: static int toInteger(string s) {
			int i = 0;
			for (char c : s)
			{
				if (c >= '0' && c <= '9') {
					i = i * 10 + (c - '0');
				}
				else {
					throw invalid_argument("error");
				}
			}
			return i;
		}
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
