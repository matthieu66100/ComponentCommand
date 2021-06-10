#pragma once

namespace Commande_Composants {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Connexion
	/// </summary>
	public ref class Connexion : public System::Windows::Forms::Form
	{
	public:
		Connexion(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Connexion(String^data)
		{
			InitializeComponent();
			
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Connexion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;

	protected:








	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Aide";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(353, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Connexion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Connexion::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(97, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(430, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Connexion::textBox1_TextChanged_1);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Connexion::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(430, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Connexion::textBox2_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(94, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Mot de Passe";
			this->label1->Click += gcnew System::EventHandler(this, &Connexion::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(94, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Identifiant";
			this->label2->Click += gcnew System::EventHandler(this, &Connexion::label2_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button7->Location = System::Drawing::Point(553, 10);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 61);
			this->button7->TabIndex = 6;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Connexion::button7_Click);
			// 
			// Connexion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 303);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Connexion";
			this->Text = L"Connexion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: String^ GetData() {
	return textBox1->Text;
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//Connexion::~Connexion();
	Connexion::Close();
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "root") {
		if (textBox2->Text == "root") {
			Connexion::Close();


		}
	}
}
	   //admin enterkey
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		textBox2->Focus();
	}
}
	   //password enterkey
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		button2->PerformClick();
	}
}
};
}