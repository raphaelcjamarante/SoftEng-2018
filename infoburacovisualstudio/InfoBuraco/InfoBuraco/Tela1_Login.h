#pragma once

#include "Tela2_Inicio.h"
#include <iostream>
#include "ControllerLogin.h"
#include <msclr\marshal_cppstd.h>
#include <iomanip>
#include <sstream>

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela1_Login
	/// </summary>
	public ref class Tela1_Login : public System::Windows::Forms::Form
	{
	public:
		Tela1_Login(void)
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
		~Tela1_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Usuario;
	private: System::Windows::Forms::Label^  label_Senha;
	private: System::Windows::Forms::TextBox^  textBox_Usuario;
	private: System::Windows::Forms::TextBox^  textBox_Senha;
	protected:

	protected:



	private: System::Windows::Forms::Button^  button_Entrar;
	private: System::Windows::Forms::Button^  button_Limpar;



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
			this->label_Usuario = (gcnew System::Windows::Forms::Label());
			this->label_Senha = (gcnew System::Windows::Forms::Label());
			this->textBox_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Senha = (gcnew System::Windows::Forms::TextBox());
			this->button_Entrar = (gcnew System::Windows::Forms::Button());
			this->button_Limpar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Usuario
			// 
			this->label_Usuario->AutoSize = true;
			this->label_Usuario->Location = System::Drawing::Point(312, 212);
			this->label_Usuario->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Usuario->Name = L"label_Usuario";
			this->label_Usuario->Size = System::Drawing::Size(92, 25);
			this->label_Usuario->TabIndex = 0;
			this->label_Usuario->Text = L"Usuario:";
			// 
			// label_Senha
			// 
			this->label_Senha->AutoSize = true;
			this->label_Senha->Location = System::Drawing::Point(322, 262);
			this->label_Senha->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Senha->Name = L"label_Senha";
			this->label_Senha->Size = System::Drawing::Size(80, 25);
			this->label_Senha->TabIndex = 1;
			this->label_Senha->Text = L"Senha:";
			// 
			// textBox_Usuario
			// 
			this->textBox_Usuario->Location = System::Drawing::Point(416, 206);
			this->textBox_Usuario->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_Usuario->Name = L"textBox_Usuario";
			this->textBox_Usuario->Size = System::Drawing::Size(196, 31);
			this->textBox_Usuario->TabIndex = 2;
			this->textBox_Usuario->TextChanged += gcnew System::EventHandler(this, &Tela1_Login::textBox_Usuario_TextChanged);
			// 
			// textBox_Senha
			// 
			this->textBox_Senha->Location = System::Drawing::Point(416, 256);
			this->textBox_Senha->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_Senha->Name = L"textBox_Senha";
			this->textBox_Senha->Size = System::Drawing::Size(196, 31);
			this->textBox_Senha->TabIndex = 3;
			// 
			// button_Entrar
			// 
			this->button_Entrar->Location = System::Drawing::Point(328, 360);
			this->button_Entrar->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_Entrar->Name = L"button_Entrar";
			this->button_Entrar->Size = System::Drawing::Size(150, 44);
			this->button_Entrar->TabIndex = 4;
			this->button_Entrar->Text = L"Entrar";
			this->button_Entrar->UseVisualStyleBackColor = true;
			this->button_Entrar->Click += gcnew System::EventHandler(this, &Tela1_Login::button_Entrar_click);
			// 
			// button_Limpar
			// 
			this->button_Limpar->Location = System::Drawing::Point(524, 360);
			this->button_Limpar->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_Limpar->Name = L"button_Limpar";
			this->button_Limpar->Size = System::Drawing::Size(150, 44);
			this->button_Limpar->TabIndex = 5;
			this->button_Limpar->Text = L"Limpar";
			this->button_Limpar->UseVisualStyleBackColor = true;
			this->button_Limpar->Click += gcnew System::EventHandler(this, &Tela1_Login::button_Limpar_click);
			// 
			// Tela1_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1002, 758);
			this->Controls->Add(this->button_Limpar);
			this->Controls->Add(this->button_Entrar);
			this->Controls->Add(this->textBox_Senha);
			this->Controls->Add(this->textBox_Usuario);
			this->Controls->Add(this->label_Senha);
			this->Controls->Add(this->label_Usuario);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"Tela1_Login";
			this->Text = L"Tela1_Login";
			this->Load += gcnew System::EventHandler(this, &Tela1_Login::Tela1_Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

private: System::Void button_Entrar_click(System::Object^  sender, System::EventArgs^  e) {
	//Aqui vai ter uma classe controler

	if ((this->textBox_Usuario->Text != String::Empty) || (this->textBox_Senha->Text != String::Empty)) {

		ControllerLogin * seguranca = new ControllerLogin();
		std::string login = msclr::interop::marshal_as<std::string>(this->textBox_Usuario->Text);
		std::string senha = msclr::interop::marshal_as<std::string>(this->textBox_Senha->Text);

		Usuario* usuario = seguranca->logar(login, senha);
		if (usuario != nullptr) {
			Tela2_Inicio^ ti = gcnew Tela2_Inicio();
//			this->Hide();					// tinha isso no michelet 
			ti->ShowDialog();
		}
		else {
			MessageBox::Show("Usuário ou senha inválidos\n");
		}
	}
	else if (this->textBox_Usuario->Text == "login admin" && this->textBox_Senha->Text == "senha admin") {

		Tela2_Inicio^ tela_inicio = gcnew Tela2_Inicio();
		tela_inicio->ShowDialog();
	}
	else MessageBox::Show("Usuario ou senha incorretos\n");
}
private: System::Void button_Limpar_click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox_Usuario->Clear();
	this->textBox_Senha->Clear();
}
private: System::Void Tela1_Login_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox_Usuario_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
