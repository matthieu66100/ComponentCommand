#pragma once

namespace Commande_Composants {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Description résumée de GestUtilisateurs
	/// </summary>
	public ref class GestUtilisateurs : public System::Windows::Forms::Form
	{
	public:
		GestUtilisateurs(void)
		{
			InitializeComponent();


			// Initialisation du Tableau au lancement de l'application
			// System::String^ path = gcnew System::String("..\BDD\Data.txt");
			System::String^ path = gcnew System::String("BDD/Utilisateur.txt");
			array<String^>^ lines = File::ReadAllLines(path);
			dataGridView1->Rows->Clear();
			dataGridView1->Refresh();


			// Ne recupere que la premiere ligne du document et la decoupe
			array<String^>^ colTitle = lines[0]->Split(';');


			// Permet d'afficher les titres des colonnes
			for (int j = 0; j < colTitle->Length; j++)
			{
				dataGridView1->ColumnCount = colTitle->Length;
				dataGridView1->Columns[j]->Name = colTitle[j];
			}
			// Permet d'afficher les contenus des lignes
			for (int i = 1; i < lines->Length; i++)
			{
				array<String^>^ rowData = lines[i]->Split(';');
				dataGridView1->Rows->Add(rowData);
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestUtilisateurs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxFirstName;


	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxPW;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::ComboBox^ comboBoxStatus;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnMaJ;
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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPW = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnMaJ = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->button7->Location = System::Drawing::Point(1105, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 61);
			this->button7->TabIndex = 7;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &GestUtilisateurs::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label2->Location = System::Drawing::Point(27, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"NOM (Maj)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label1->Location = System::Drawing::Point(28, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Prenom";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(31, 261);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(430, 22);
			this->textBoxFirstName->TabIndex = 9;
			// 
			// textBoxName
			// 
			this->textBoxName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxName->Location = System::Drawing::Point(30, 135);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(430, 22);
			this->textBoxName->TabIndex = 8;
			// 
			// textBoxPW
			// 
			this->textBoxPW->Location = System::Drawing::Point(31, 402);
			this->textBoxPW->Name = L"textBoxPW";
			this->textBoxPW->Size = System::Drawing::Size(430, 22);
			this->textBoxPW->TabIndex = 9;
			this->textBoxPW->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label3->Location = System::Drawing::Point(28, 379);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Mot de Passe";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label4->Location = System::Drawing::Point(27, 510);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Statut";
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnSave->Location = System::Drawing::Point(149, 598);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(174, 75);
			this->btnSave->TabIndex = 12;
			this->btnSave->Text = L"Enregistrer";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &GestUtilisateurs::btnSave_Click);
			// 
			// comboBoxStatus
			// 
			this->comboBoxStatus->FormattingEnabled = true;
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Gest", L"Tech", L"Mag" });
			this->comboBoxStatus->Location = System::Drawing::Point(31, 533);
			this->comboBoxStatus->Name = L"comboBoxStatus";
			this->comboBoxStatus->Size = System::Drawing::Size(429, 24);
			this->comboBoxStatus->TabIndex = 14;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(501, 135);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 422);
			this->panel1->TabIndex = 15;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(665, 422);
			this->dataGridView1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label5->Location = System::Drawing::Point(496, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(240, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Gestion des Utilisateurs";
			// 
			// btnMaJ
			// 
			this->btnMaJ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnMaJ->FlatAppearance->BorderSize = 0;
			this->btnMaJ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaJ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaJ->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnMaJ->Location = System::Drawing::Point(762, 598);
			this->btnMaJ->Name = L"btnMaJ";
			this->btnMaJ->Size = System::Drawing::Size(174, 75);
			this->btnMaJ->TabIndex = 12;
			this->btnMaJ->Text = L"Mettre à Jour";
			this->btnMaJ->UseVisualStyleBackColor = false;
			this->btnMaJ->Click += gcnew System::EventHandler(this, &GestUtilisateurs::btnMaJ_Click);
			// 
			// GestUtilisateurs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(1178, 719);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->comboBoxStatus);
			this->Controls->Add(this->btnMaJ);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPW);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->button7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GestUtilisateurs";
			this->Text = L"GestUtilisateurs";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ path = gcnew System::String("BDD/Utilisateur.txt");
	array<String^>^ lines = File::ReadAllLines(path);

	//Recupere toutes les valeurs dans les Textbox et les affecte a des Strings
	String^ nom		= textBoxName->Text;
	String^ prenom	= textBoxFirstName->Text;
	String^ mdp		= textBoxPW	->Text;
	String^ fonction = comboBoxStatus->Text;


	// Creation de la ligne de completion du tableau
	array<String^>^ valors = gcnew array<String^> { 
		nom +
		";" +
		prenom+
		";" +
		fonction +
		";" +
		mdp 
	};

	File::AppendAllLines("BDD/Utilisateur.txt", valors);

	//Nettoyage des TextBox's
	textBoxName->Clear();
	textBoxFirstName->Clear();
	textBoxPW->Clear();
	comboBoxStatus->ResetText();

	//##########################################

	dataGridView1->Rows->Clear();

	dataGridView1->Refresh();


	//ne recupere que la premiere ligne du document et la decoupe
	array<String^>^ colTitle = lines[0]->Split(';');


	//permet d'afficher les titres des colonnes
	for (int j = 0; j < colTitle->Length; j++)
	{
		dataGridView1->ColumnCount = colTitle->Length;
		dataGridView1->Columns[j]->Name = colTitle[j];
	}
	//permet d'afficher les contenus des lignes
	for (int i = 1; i < lines->Length; i++)
	{
		array<String^>^ rowData = lines[i]->Split(';');
		dataGridView1->Rows->Add(rowData);
	}
}

private: System::Void btnMaJ_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ path = gcnew System::String("BDD/Utilisateur.txt");
	TextWriter^ sw = gcnew StreamWriter(path);
	int rowcount = dataGridView1->Rows->Count;
	int colcount = dataGridView1->Columns->Count;

	sw->WriteLine("Nom;Prenom;Fonction;MDP");
	for (int i = 0; i < rowcount - 1; i++) {

		sw->WriteLine(
			dataGridView1->Rows[i]->Cells[0]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[1]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[2]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[3]->Value->ToString()
		);
	}
	sw->Close();
	MessageBox::Show("informations mises a jour");
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	GestUtilisateurs::Close();

}
};
}
