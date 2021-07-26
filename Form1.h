#pragma once
#include "Connexion.h"
#include "AffichageTab.h"
#include "Tableau.h"
#include "TabGestionaire1.h"
#include "TabShop.h"
#include "GestUtilisateurs.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Commande_Composants;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

			// Initialisation du Tableau au lancement de l'application
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
	private: System::Windows::Forms::Button^ btnUser;
	private: System::Windows::Forms::Button^ btnQuit;
	private: System::Windows::Forms::Button^ btnTech;
	private: System::Windows::Forms::Button^ btnSynth;

	private: System::Windows::Forms::Button^ btnShop;
	private: System::Windows::Forms::Button^ btnIDC;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnGestUtilisateurs;


	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->btnUser = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->btnGestUtilisateurs = (gcnew System::Windows::Forms::Button());
			this->btnTech = (gcnew System::Windows::Forms::Button());
			this->btnSynth = (gcnew System::Windows::Forms::Button());
			this->btnIDC = (gcnew System::Windows::Forms::Button());
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
			this->splitContainer1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->splitContainer1->Size = System::Drawing::Size(1839, 850);
			this->splitContainer1->SplitterDistance = 250;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->btnUser);
			this->splitContainer2->Panel1->Controls->Add(this->btnQuit);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->btnGestUtilisateurs);
			this->splitContainer2->Panel2->Controls->Add(this->btnTech);
			this->splitContainer2->Panel2->Controls->Add(this->btnSynth);
			this->splitContainer2->Panel2->Controls->Add(this->btnIDC);
			this->splitContainer2->Panel2->Controls->Add(this->btnShop);
			this->splitContainer2->Size = System::Drawing::Size(250, 850);
			this->splitContainer2->SplitterDistance = 82;
			this->splitContainer2->TabIndex = 0;
			// 
			// btnUser
			// 
			this->btnUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnUser->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnUser->FlatAppearance->BorderSize = 0;
			this->btnUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUser->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnUser->Location = System::Drawing::Point(0, 0);
			this->btnUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUser->Name = L"btnUser";
			this->btnUser->Size = System::Drawing::Size(123, 82);
			this->btnUser->TabIndex = 0;
			this->btnUser->Text = L"Utilisateur";
			this->btnUser->UseVisualStyleBackColor = false;
			this->btnUser->Click += gcnew System::EventHandler(this, &Form1::btnUser_Click);
			// 
			// btnQuit
			// 
			this->btnQuit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnQuit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnQuit->FlatAppearance->BorderSize = 0;
			this->btnQuit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuit->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnQuit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnQuit->Location = System::Drawing::Point(127, 0);
			this->btnQuit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(123, 82);
			this->btnQuit->TabIndex = 1;
			this->btnQuit->Text = L"Quitter";
			this->btnQuit->UseVisualStyleBackColor = false;
			this->btnQuit->Click += gcnew System::EventHandler(this, &Form1::btnQuit_Click);
			// 
			// btnGestUtilisateurs
			// 
			this->btnGestUtilisateurs->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGestUtilisateurs->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnGestUtilisateurs->FlatAppearance->BorderSize = 0;
			this->btnGestUtilisateurs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestUtilisateurs->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnGestUtilisateurs->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnGestUtilisateurs->Location = System::Drawing::Point(0, 280);
			this->btnGestUtilisateurs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGestUtilisateurs->Name = L"btnGestUtilisateurs";
			this->btnGestUtilisateurs->Size = System::Drawing::Size(250, 70);
			this->btnGestUtilisateurs->TabIndex = 8;
			this->btnGestUtilisateurs->Text = L"Gestion Utilisateurs";
			this->btnGestUtilisateurs->UseVisualStyleBackColor = true;
			this->btnGestUtilisateurs->Visible = false;
			this->btnGestUtilisateurs->Click += gcnew System::EventHandler(this, &Form1::btnGestUtilisateurs_Click);
			// 
			// btnTech
			// 
			this->btnTech->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnTech->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTech->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnTech->FlatAppearance->BorderSize = 0;
			this->btnTech->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTech->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnTech->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnTech->Location = System::Drawing::Point(0, 210);
			this->btnTech->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTech->Name = L"btnTech";
			this->btnTech->Size = System::Drawing::Size(250, 70);
			this->btnTech->TabIndex = 2;
			this->btnTech->Text = L"Technicien";
			this->btnTech->UseVisualStyleBackColor = true;
			this->btnTech->Visible = false;
			this->btnTech->Click += gcnew System::EventHandler(this, &Form1::btnTech_Click);
			// 
			// btnSynth
			// 
			this->btnSynth->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnSynth->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSynth->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnSynth->FlatAppearance->BorderSize = 0;
			this->btnSynth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSynth->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnSynth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnSynth->Location = System::Drawing::Point(0, 140);
			this->btnSynth->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSynth->Name = L"btnSynth";
			this->btnSynth->Size = System::Drawing::Size(250, 70);
			this->btnSynth->TabIndex = 3;
			this->btnSynth->Text = L"Synthèse";
			this->btnSynth->UseVisualStyleBackColor = true;
			this->btnSynth->Visible = false;
			this->btnSynth->Click += gcnew System::EventHandler(this, &Form1::btnSynth_Click);
			// 
			// btnIDC
			// 
			this->btnIDC->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnIDC->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnIDC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnIDC->FlatAppearance->BorderSize = 0;
			this->btnIDC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIDC->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnIDC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnIDC->Location = System::Drawing::Point(0, 70);
			this->btnIDC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnIDC->Name = L"btnIDC";
			this->btnIDC->Size = System::Drawing::Size(250, 70);
			this->btnIDC->TabIndex = 5;
			this->btnIDC->Text = L"IDC";
			this->btnIDC->UseVisualStyleBackColor = true;
			this->btnIDC->Visible = false;
			this->btnIDC->Click += gcnew System::EventHandler(this, &Form1::btnIDC_Click);
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
			this->btnShop->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnShop->Name = L"btnShop";
			this->btnShop->Size = System::Drawing::Size(250, 70);
			this->btnShop->TabIndex = 4;
			this->btnShop->Text = L"Magasin";
			this->btnShop->UseVisualStyleBackColor = true;
			this->btnShop->Visible = false;
			this->btnShop->Click += gcnew System::EventHandler(this, &Form1::btnShop_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1585, 850);
			this->panel1->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1585, 850);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1839, 850);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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

private: System::Void btnUser_Click(System::Object^ sender, System::EventArgs^ e) {
	Connexion^ connexion = gcnew Connexion;
	connexion -> ShowDialog();

	//changement du texte du bouton selon la personne connectee
	if (connexion->GetData() == "")
	{
		btnUser->Text = "Utilisateur";
	}
	else{
	btnUser->Text = connexion->GetData();
	}
	String^ etat = connexion->GetStatus();

	//par defaut et sans connexion les boutons ne sont pas accessibles
	btnIDC->Visible =  false;
	btnTech->Visible = false;
	btnShop->Visible = false;
	btnSynth->Visible = false;
	btnGestUtilisateurs->Visible = false;

	//detection du statut du user et affichage des boutons selon ses droits.
	if (etat == "Gest") {
		btnIDC->Visible = true;
		btnTech->Visible = true;
		btnShop->Visible = true;
		btnSynth->Visible = true;
		btnGestUtilisateurs->Visible = true;
	}
	else if (etat == "Tech") {
		btnTech->Visible = true;
	}
	else if(etat == "Mag"){
		btnShop->Visible = true;
	}

}
private: System::Void btnIDC_Click(System::Object^ sender, System::EventArgs^ e) {
	btnIDC->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnSynth->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnGestUtilisateurs->BackColor = Color::FromArgb(24, 30, 54);
	
}
private: System::Void btnTech_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTech->BackColor = Color::FromArgb(46, 51, 73);
	
	btnSynth->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);
	btnGestUtilisateurs->BackColor = Color::FromArgb(24, 30, 54);

	AffichageTab^ commande = gcnew AffichageTab;
	commande->TopLevel = false;
	commande->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(commande);
	commande->Show();
}
private: System::Void btnSynth_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSynth->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);
	btnGestUtilisateurs->BackColor = Color::FromArgb(24, 30, 54);
	
	TabGestionaire^ tab = gcnew TabGestionaire;
	tab->TopLevel = false;
	tab->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(tab);
	tab->Show();
}
private: System::Void btnShop_Click(System::Object^ sender, System::EventArgs^ e) {
	btnShop->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnSynth->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);
	btnGestUtilisateurs->BackColor = Color::FromArgb(24, 30, 54);

	TabGestionaire^ tab = gcnew TabGestionaire;
	tab->TopLevel = false;
	tab->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(tab);
	tab->Show();

}
private: System::Void btnGestUtilisateurs_Click(System::Object^ sender, System::EventArgs^ e) {
	btnGestUtilisateurs->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnSynth->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);

	GestUtilisateurs^ gUtili = gcnew GestUtilisateurs;
	gUtili->TopLevel = false;
	gUtili->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(gUtili);
	gUtili->Show();

}
private: System::Void btnQuit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}

/*
NOTES:

1-Documentation sur le chaier des charges "ingenieur composants"
2-Utilisation d'une BDD "de secours" grâce à des fichiers textes. transferer les données sur un serveur SQL dès que possible.
3-GIT mis à jour regulierement.
4-Renomer les [design] pour une comprehension ameliorée du code
5-Ajouter du commentaire code dans les differentes pages
6-

*/

/*
TODO:

- ajouter les colonnes supplementaires aux tableaux
--coche "urgent" + colonne "urgent"
--colonne "numero de commande" à coté de gestionaire
--colonne "kanban crée" à gauche de date de recption
-trier le numero de commande le plus recent
-ajouter une autocompletion du numero de commande en l'incrementant
-
-
-

*/
// voir cahier des charges "ingenieur composants"
//
//
