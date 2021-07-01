#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace System::Data;

namespace Commande_Composants {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Connexion
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
		/// Nettoyage des ressources utilisées.
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
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::TextBox^ textBoxPW;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;

	protected:


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPW = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button1->Location = System::Drawing::Point(97, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Aide";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button2->Location = System::Drawing::Point(353, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Connexion";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Connexion::button2_Click);
			// 
			// textBoxID
			// 
			this->textBoxID->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxID->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxID->Location = System::Drawing::Point(97, 71);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(430, 22);
			this->textBoxID->TabIndex = 2;
			this->textBoxID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Connexion::textBoxID_KeyDown);
			// 
			// textBoxPW
			// 
			this->textBoxPW->Location = System::Drawing::Point(97, 153);
			this->textBoxPW->Name = L"textBoxPW";
			this->textBoxPW->Size = System::Drawing::Size(430, 22);
			this->textBoxPW->TabIndex = 3;
			this->textBoxPW->UseSystemPasswordChar = true;
			this->textBoxPW->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Connexion::textBoxPW_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label1->Location = System::Drawing::Point(94, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Mot de Passe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label2->Location = System::Drawing::Point(94, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Identifiant";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button7->Location = System::Drawing::Point(553, 10);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 61);
			this->button7->TabIndex = 6;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Connexion::button7_Click);
			// 
			// Connexion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(626, 303);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPW);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Connexion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Connexion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Return TextID pour d'autres classes
public: String^ GetData() {
	return textBoxID->Text;

}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Connexion::Close();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ path = gcnew System::String("BDD/Utilisateur.txt");
	array<String^>^ lines = File::ReadAllLines(path);

	array<String^>^ colTitle = lines[0]->Split(';');

	int count=0;
	for (int i = 1; i < lines->Length; i++)
	{
		array<String^>^ rowData = lines[i]->Split(';'); //[0]= Nom [3]=MDP
		
		if (textBoxID->Text == rowData[0]) { 
			if (textBoxPW->Text == rowData[3]) {
				count = 1;
			}
		}
	}
	
	if (count == 1)
	{
				MessageBox::Show("connexion reussie");
				Connexion::Close();
	}
	else
	{
			MessageBox::Show("connexion echouée");
	}
}


	   //admin enterkey
private: System::Void textBoxID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		textBoxPW->Focus();
	}
}
	   //password enterkey
private: System::Void textBoxPW_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		button2->PerformClick();
	}
}

};
}
