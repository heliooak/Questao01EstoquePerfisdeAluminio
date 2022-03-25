#pragma once

namespace Questao01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
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
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbOperacao;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbQuantidade;
	private: System::Windows::Forms::Button^ btInserir;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dgHistorico;




	private: System::Windows::Forms::TextBox^ tbEntradas;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbSaidas;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::TextBox^ tbEstoque;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Instante;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipoOperacao;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantidade;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbOperacao = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->btInserir = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dgHistorico = (gcnew System::Windows::Forms::DataGridView());
			this->tbEntradas = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbSaidas = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbEstoque = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Instante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipoOperacao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistorico))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de movimentação";
			this->label1->Click += gcnew System::EventHandler(this, &FormPrincipal::label1_Click);
			// 
			// cbOperacao
			// 
			this->cbOperacao->FormattingEnabled = true;
			this->cbOperacao->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Entrada", L"Retirada" });
			this->cbOperacao->Location = System::Drawing::Point(12, 25);
			this->cbOperacao->Name = L"cbOperacao";
			this->cbOperacao->Size = System::Drawing::Size(121, 21);
			this->cbOperacao->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(136, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Quantidade";
			// 
			// tbQuantidade
			// 
			this->tbQuantidade->Location = System::Drawing::Point(139, 25);
			this->tbQuantidade->Name = L"tbQuantidade";
			this->tbQuantidade->Size = System::Drawing::Size(100, 20);
			this->tbQuantidade->TabIndex = 4;
			// 
			// btInserir
			// 
			this->btInserir->Location = System::Drawing::Point(288, 22);
			this->btInserir->Name = L"btInserir";
			this->btInserir->Size = System::Drawing::Size(75, 23);
			this->btInserir->TabIndex = 5;
			this->btInserir->Text = L"Registrar";
			this->btInserir->UseVisualStyleBackColor = true;
			this->btInserir->Click += gcnew System::EventHandler(this, &FormPrincipal::btInserir_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Histórico de movimentações";
			// 
			// dgHistorico
			// 
			this->dgHistorico->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgHistorico->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Instante,
					this->TipoOperacao, this->Quantidade
			});
			this->dgHistorico->Location = System::Drawing::Point(12, 78);
			this->dgHistorico->Name = L"dgHistorico";
			this->dgHistorico->Size = System::Drawing::Size(472, 206);
			this->dgHistorico->TabIndex = 7;
			// 
			// tbEntradas
			// 
			this->tbEntradas->Location = System::Drawing::Point(15, 315);
			this->tbEntradas->Name = L"tbEntradas";
			this->tbEntradas->Size = System::Drawing::Size(100, 20);
			this->tbEntradas->TabIndex = 9;
			this->tbEntradas->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Total de entradas";
			this->label4->Click += gcnew System::EventHandler(this, &FormPrincipal::label4_Click);
			// 
			// tbSaidas
			// 
			this->tbSaidas->Location = System::Drawing::Point(139, 315);
			this->tbSaidas->Name = L"tbSaidas";
			this->tbSaidas->Size = System::Drawing::Size(100, 20);
			this->tbSaidas->TabIndex = 11;
			this->tbSaidas->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(136, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Total de retiradas";
			// 
			// tbEstoque
			// 
			this->tbEstoque->Location = System::Drawing::Point(267, 315);
			this->tbEstoque->Name = L"tbEstoque";
			this->tbEstoque->Size = System::Drawing::Size(100, 20);
			this->tbEstoque->TabIndex = 13;
			this->tbEstoque->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(264, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Total em estoque";
			// 
			// Instante
			// 
			this->Instante->HeaderText = L"Data e horário";
			this->Instante->Name = L"Instante";
			this->Instante->Width = 175;
			// 
			// TipoOperacao
			// 
			this->TipoOperacao->HeaderText = L"Tipo de movimentação";
			this->TipoOperacao->Name = L"TipoOperacao";
			// 
			// Quantidade
			// 
			this->Quantidade->HeaderText = L"Quantidade";
			this->Quantidade->Name = L"Quantidade";
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 347);
			this->Controls->Add(this->tbEstoque);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbSaidas);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbEntradas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgHistorico);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btInserir);
			this->Controls->Add(this->tbQuantidade);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbOperacao);
			this->Controls->Add(this->label1);
			this->Name = L"FormPrincipal";
			this->Text = L"Controle de estoque de barras de  perfil de alumínio";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistorico))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double qtdEntradas = 0;
		double qtdSaidas = 0;
		double qtdEstoque = 0;
		
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btInserir_Click(System::Object^ sender, System::EventArgs^ e) {
	dgHistorico->Rows->Add(DateTime::Now.ToString(), cbOperacao->Text, tbQuantidade->Text);

	if (cbOperacao->SelectedIndex == 0)
	{
		double entradas = Convert::ToDouble(tbQuantidade->Text);
		qtdEntradas = qtdEntradas + entradas;
		tbEntradas->Text = Convert::ToString(qtdEntradas);
		
	}
	else
	{
		double saidas = Convert::ToDouble(tbQuantidade->Text);
		qtdSaidas = qtdSaidas + saidas;
		tbSaidas->Text = Convert::ToString(qtdSaidas);
		
	}

	qtdEstoque = qtdEntradas - qtdSaidas;
	tbEstoque->Text = Convert::ToString(qtdEstoque);

	tbQuantidade->Text = "";
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
