#pragma once

#include "Tela4_1_Registrar_Buraco.h"


namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela4_2_Registrar_Notificacao
	/// </summary>
	public ref class Tela4_2_Registrar_Notificacao : public System::Windows::Forms::Form
	{
	public:
		Tela4_2_Registrar_Notificacao(void)
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
		~Tela4_2_Registrar_Notificacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_ID_Buraco;
	protected:
	private: System::Windows::Forms::TextBox^  textBox_ID_Buraco;


	private: System::Windows::Forms::Label^  label_Data_Hora;
	private: System::Windows::Forms::Label^  label_Contato;


	private: System::Windows::Forms::TextBox^  textBox_Contato;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label_Foto;
	private: System::Windows::Forms::Button^  button_Salvar;
	private: System::Windows::Forms::Button^  button_Cancelar;
	private: System::Windows::Forms::TextBox^  textBox_Data;
	private: System::Windows::Forms::TextBox^  textBox_Foto;

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
			this->label_ID_Buraco = (gcnew System::Windows::Forms::Label());
			this->textBox_ID_Buraco = (gcnew System::Windows::Forms::TextBox());
			this->label_Data_Hora = (gcnew System::Windows::Forms::Label());
			this->label_Contato = (gcnew System::Windows::Forms::Label());
			this->textBox_Contato = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_Foto = (gcnew System::Windows::Forms::Label());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->textBox_Data = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Foto = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_ID_Buraco
			// 
			this->label_ID_Buraco->AutoSize = true;
			this->label_ID_Buraco->Location = System::Drawing::Point(216, 58);
			this->label_ID_Buraco->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_ID_Buraco->Name = L"label_ID_Buraco";
			this->label_ID_Buraco->Size = System::Drawing::Size(142, 25);
			this->label_ID_Buraco->TabIndex = 0;
			this->label_ID_Buraco->Text = L"ID do Buraco:";
			// 
			// textBox_ID_Buraco
			// 
			this->textBox_ID_Buraco->Location = System::Drawing::Point(498, 52);
			this->textBox_ID_Buraco->Margin = System::Windows::Forms::Padding(6);
			this->textBox_ID_Buraco->Name = L"textBox_ID_Buraco";
			this->textBox_ID_Buraco->Size = System::Drawing::Size(428, 31);
			this->textBox_ID_Buraco->TabIndex = 1;
			// 
			// label_Data_Hora
			// 
			this->label_Data_Hora->AutoSize = true;
			this->label_Data_Hora->Location = System::Drawing::Point(216, 137);
			this->label_Data_Hora->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Data_Hora->Name = L"label_Data_Hora";
			this->label_Data_Hora->Size = System::Drawing::Size(133, 25);
			this->label_Data_Hora->TabIndex = 3;
			this->label_Data_Hora->Text = L"Data e Hora:";
			// 
			// label_Contato
			// 
			this->label_Contato->AutoSize = true;
			this->label_Contato->Location = System::Drawing::Point(216, 217);
			this->label_Contato->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Contato->Name = L"label_Contato";
			this->label_Contato->Size = System::Drawing::Size(209, 25);
			this->label_Contato->TabIndex = 4;
			this->label_Contato->Text = L"Contato do Cidadao:";
			// 
			// textBox_Contato
			// 
			this->textBox_Contato->Location = System::Drawing::Point(498, 212);
			this->textBox_Contato->Margin = System::Windows::Forms::Padding(6);
			this->textBox_Contato->Name = L"textBox_Contato";
			this->textBox_Contato->Size = System::Drawing::Size(428, 31);
			this->textBox_Contato->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(498, 302);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(432, 248);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::pictureBox1_Click);
			// 
			// label_Foto
			// 
			this->label_Foto->AutoSize = true;
			this->label_Foto->Location = System::Drawing::Point(216, 302);
			this->label_Foto->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Foto->Name = L"label_Foto";
			this->label_Foto->Size = System::Drawing::Size(135, 25);
			this->label_Foto->TabIndex = 9;
			this->label_Foto->Text = L"Upload Foto:";
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(222, 646);
			this->button_Salvar->Margin = System::Windows::Forms::Padding(6);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(150, 44);
			this->button_Salvar->TabIndex = 10;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(548, 646);
			this->button_Cancelar->Margin = System::Windows::Forms::Padding(6);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(150, 44);
			this->button_Cancelar->TabIndex = 11;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::button_Cancelar_click);
			// 
			// textBox_Data
			// 
			this->textBox_Data->Location = System::Drawing::Point(498, 137);
			this->textBox_Data->Name = L"textBox_Data";
			this->textBox_Data->Size = System::Drawing::Size(428, 31);
			this->textBox_Data->TabIndex = 12;
			this->textBox_Data->TextChanged += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::textBox_Data_TextChanged);
			// 
			// textBox_Foto
			// 
			this->textBox_Foto->Location = System::Drawing::Point(498, 302);
			this->textBox_Foto->Name = L"textBox_Foto";
			this->textBox_Foto->Size = System::Drawing::Size(428, 31);
			this->textBox_Foto->TabIndex = 13;
			this->textBox_Foto->TextChanged += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::textBox_Foto_TextChanged);
			// 
			// Tela4_2_Registrar_Notificacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1152, 744);
			this->Controls->Add(this->textBox_Foto);
			this->Controls->Add(this->textBox_Data);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->label_Foto);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox_Contato);
			this->Controls->Add(this->label_Contato);
			this->Controls->Add(this->label_Data_Hora);
			this->Controls->Add(this->textBox_ID_Buraco);
			this->Controls->Add(this->label_ID_Buraco);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Tela4_2_Registrar_Notificacao";
			this->Text = L"Tela4_2_Registrar_Notificacao";
			this->Load += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::Tela4_2_Registrar_Notificacao_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {

	ControllerBuraco* registro = new ControllerBuraco();

	std::string idburacostr = msclr::interop::marshal_as<std::string>(this->textBox_ID_Buraco->Text);
	int idburaco = std::stoi(idburacostr);
	std::string contato = msclr::interop::marshal_as<std::string>(this->textBox_Contato->Text);
	std::string data = msclr::interop::marshal_as<std::string>(this->textBox_Data->Text);
	std::string foto = msclr::interop::marshal_as<std::string>(this->textBox_Foto->Text);

	int idnot = registro->registrarNotificacao(contato, data, idburaco);
	registro->registrarFoto(foto, idnot);

	MessageBox::Show("ID da Nova Notificacao: " + idnot + "\n");
}

private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void Tela4_2_Registrar_Notificacao_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox_Data_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox_Foto_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
