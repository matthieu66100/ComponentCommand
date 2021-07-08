#pragma once

namespace Commande_Composants {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;


	/// <summary>
	/// Description résumée de TabGestionaire
	/// </summary>
	public ref class TabGestionaire : public System::Windows::Forms::Form
	{
	public:
		TabGestionaire(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			System::String^ path = gcnew System::String("BDD/Data.txt");
			array<String^>^ lines = File::ReadAllLines(path);
			dataGridView1->Rows->Clear();

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
			dataGridView1->Refresh();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~TabGestionaire()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ label1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Controls->Add(this->btnAdd);
			this->panel1->Controls->Add(this->btnRefresh);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(203, 851);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label1->Location = System::Drawing::Point(0, 727);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(203, 59);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Modifications apportées au tableau";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnClose->Location = System::Drawing::Point(12, 12);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(65, 65);
			this->btnClose->TabIndex = 25;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &TabGestionaire::btnClose_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnAdd->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnAdd->Location = System::Drawing::Point(0, 786);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(203, 65);
			this->btnAdd->TabIndex = 23;
			this->btnAdd->Text = L"Mettre à jour";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &TabGestionaire::btnAdd_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnRefresh->FlatAppearance->BorderSize = 0;
			this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnRefresh->Location = System::Drawing::Point(102, 12);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(85, 65);
			this->btnRefresh->TabIndex = 23;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = false;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &TabGestionaire::btnRefresh_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(203, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1381, 851);
			this->dataGridView1->TabIndex = 3;
			// 
			// TabGestionaire
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 851);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TabGestionaire";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ path = gcnew System::String("BDD/Data.txt");
	TextWriter^ sw = gcnew StreamWriter(path);
	int rowcount = dataGridView1->Rows->Count;
	int colcount = dataGridView1->Columns->Count;

	sw->WriteLine("Num_Commande;Date_Cmde;Demandeur_Nom;Division;Pn_Carte;Num_Serie_Carte;Repere_Topo_Carte;Composant ;Qte;Imputation;Com_Technicien;Com_Technicien_Post_Validation;Fournisseur;Date supposée de réception;Statut;Com_Gestion;Date_Reception");
	for (int i = 0; i < rowcount-1 ; i++) {

		sw->WriteLine(
			  dataGridView1->Rows[i]->Cells[0]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[1]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[2]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[3]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[4]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[5]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[6]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[7]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[8]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[9]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[10]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[11]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[12]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[13]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[14]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[15]->Value->ToString()
			+ ";"
			+ dataGridView1->Rows[i]->Cells[16]->Value->ToString()
		);
	}
	sw->Close();
	MessageBox::Show("informations mises a jour");
	btnRefresh_Click(sender, e);

}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	//System::String^ path = gcnew System::String("Commande.csv"); //a tester 
	System::String^ path = gcnew System::String("BDD/Data.txt");
	array<String^>^ lines = File::ReadAllLines(path);
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
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	TabGestionaire::Close();
}
};
}
