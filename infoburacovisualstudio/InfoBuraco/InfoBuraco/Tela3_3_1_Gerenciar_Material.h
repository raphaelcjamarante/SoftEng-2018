#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_3_1_Gerenciar_Material
	/// </summary>
	public ref class Tela3_3_1_Gerenciar_Material : public System::Windows::Forms::Form
	{
	public:
		Tela3_3_1_Gerenciar_Material(void)
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
		~Tela3_3_1_Gerenciar_Material()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Info;
	protected:
	private: System::Windows::Forms::Button^  button_Alterar;
	private: System::Windows::Forms::Button^  button_Deletar;
	private: System::Windows::Forms::Button^  button_Voltar;



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
			this->label_Info = (gcnew System::Windows::Forms::Label());
			this->button_Alterar = (gcnew System::Windows::Forms::Button());
			this->button_Deletar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Info
			// 
			this->label_Info->AutoSize = true;
			this->label_Info->Location = System::Drawing::Point(55, 25);
			this->label_Info->Name = L"label_Info";
			this->label_Info->Size = System::Drawing::Size(123, 13);
			this->label_Info->TabIndex = 0;
			this->label_Info->Text = L"Informacoes do Material:";
			// 
			// button_Alterar
			// 
			this->button_Alterar->Location = System::Drawing::Point(58, 240);
			this->button_Alterar->Name = L"button_Alterar";
			this->button_Alterar->Size = System::Drawing::Size(75, 23);
			this->button_Alterar->TabIndex = 1;
			this->button_Alterar->Text = L"Alterar";
			this->button_Alterar->UseVisualStyleBackColor = true;
			this->button_Alterar->Click += gcnew System::EventHandler(this, &Tela3_3_1_Gerenciar_Material::button_Alterar_click);
			// 
			// button_Deletar
			// 
			this->button_Deletar->Location = System::Drawing::Point(241, 240);
			this->button_Deletar->Name = L"button_Deletar";
			this->button_Deletar->Size = System::Drawing::Size(75, 23);
			this->button_Deletar->TabIndex = 2;
			this->button_Deletar->Text = L"Deletar";
			this->button_Deletar->UseVisualStyleBackColor = true;
			this->button_Deletar->Click += gcnew System::EventHandler(this, &Tela3_3_1_Gerenciar_Material::button_Deletar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(424, 240);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 3;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela3_3_1_Gerenciar_Material::button_Voltar_click);
			// 
			// Tela3_3_1_Gerenciar_Material
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 342);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Deletar);
			this->Controls->Add(this->button_Alterar);
			this->Controls->Add(this->label_Info);
			this->Name = L"Tela3_3_1_Gerenciar_Material";
			this->Text = L"Tela3_3_1_Gerenciar_Material";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Alterar_click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button_Deletar_click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
