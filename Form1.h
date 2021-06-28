#pragma once
#include "Connexion.h"
#include "AffichageTab.h"
#include "Tableau.h"



namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace Commande_Composants;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

			// Initialisation du Tableau au lancement de l'application
//			System::String^ path = gcnew System::String("..\BDD\Data.txt");
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

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnShop;

	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

	private:



#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnShop = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->panel1);
			this->splitContainer1->Size = System::Drawing::Size(1839, 851);
			this->splitContainer1->SplitterDistance = 251;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->button1);
			this->splitContainer2->Panel1->Controls->Add(this->button2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->button9);
			this->splitContainer2->Panel2->Controls->Add(this->button3);
			this->splitContainer2->Panel2->Controls->Add(this->button4);
			this->splitContainer2->Panel2->Controls->Add(this->button6);
			this->splitContainer2->Panel2->Controls->Add(this->btnShop);
			this->splitContainer2->Size = System::Drawing::Size(251, 851);
			this->splitContainer2->SplitterDistance = 83;
			this->splitContainer2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Left;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 83);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Utilisateur";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button2->Dock = System::Windows::Forms::DockStyle::Right;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button2->Location = System::Drawing::Point(136, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 83);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Quitter";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Top;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button9->Location = System::Drawing::Point(0, 280);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(251, 70);
			this->button9->TabIndex = 7;
			this->button9->Text = L"Passer Commande";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button3->Location = System::Drawing::Point(0, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(251, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Technicien";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button4->Location = System::Drawing::Point(0, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(251, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestionaire";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_2);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button6->Location = System::Drawing::Point(0, 70);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(251, 70);
			this->button6->TabIndex = 5;
			this->button6->Text = L"IDC";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// btnShop
			// 
			this->btnShop->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnShop->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnShop->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnShop->FlatAppearance->BorderSize = 0;
			this->btnShop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShop->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnShop->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnShop->Location = System::Drawing::Point(0, 0);
			this->btnShop->Name = L"btnShop";
			this->btnShop->Size = System::Drawing::Size(251, 70);
			this->btnShop->TabIndex = 4;
			this->btnShop->Text = L"Magasin";
			this->btnShop->UseVisualStyleBackColor = true;
			this->btnShop->Click += gcnew System::EventHandler(this, &Form1::btnShop_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1584, 851);
			this->panel1->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1584, 851);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1839, 851);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Commandes Composants";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Connexion^ connexion = gcnew Connexion;
	//connexion -> ShowDialog();

	if (connexion->GetData() == "") {
		button1->Text = "User";
	}
	else {
		button1->Text = connexion->GetData();
	}


	connexion->TopLevel = false;
	connexion->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(connexion);
	connexion->Show();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->BackColor = Color::FromArgb(46, 51, 73);

	button3->BackColor = Color::FromArgb(24, 30, 54);
	button4->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	button9->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	
	button3->BackColor = Color::FromArgb(46, 51, 73);
	
	button4->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	button6->BackColor = Color::FromArgb(24, 30, 54);
	button9->BackColor = Color::FromArgb(24, 30, 54);
	
	//mise en place de la table si aucun profil n'est selection�
	//AffichageTab^ tab = gcnew AffichageTab{Dock = DockStyle.fill, TopLevel = false};

	Tableau^ tab = gcnew Tableau;
	tab;
	tab->TopLevel = false;
	tab->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(tab);
	tab->Show();
	
}
private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	button4->BackColor = Color::FromArgb(46, 51, 73);

	button3->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	button6->BackColor = Color::FromArgb(24, 30, 54);
	button9->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnShop_Click(System::Object^ sender, System::EventArgs^ e) {
	btnShop->BackColor = Color::FromArgb(46, 51, 73);

	button3->BackColor = Color::FromArgb(24, 30, 54);
	button4->BackColor = Color::FromArgb(24, 30, 54);
	button6->BackColor = Color::FromArgb(24, 30, 54);
	button9->BackColor = Color::FromArgb(24, 30, 54);
}
	   //test importation des donn�es 
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	button9->BackColor = Color::FromArgb(46, 51, 73);

	button3->BackColor = Color::FromArgb(24, 30, 54);
	button4->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	button6->BackColor = Color::FromArgb(24, 30, 54);

	/*
	AffichageTab^ Fenetrecommande = gcnew AffichageTab;
	Fenetrecommande->ShowDialog();
	*/
	AffichageTab^ commande = gcnew AffichageTab;
	commande->TopLevel = false;
	commande->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(commande);
	commande->Show();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

};
}
// voir cahier des charges "ingenieur composants"
