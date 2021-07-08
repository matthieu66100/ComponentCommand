#pragma once
#include "Connexion.h"
#include "AffichageTab.h"
#include "Tableau.h"
#include "TabGestionaire1.h"
#include "TabShop.h"

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
	private: System::Windows::Forms::Button^ btnUser;

	private: System::Windows::Forms::Button^ btnQuit;

	private: System::Windows::Forms::Button^ btnTech;

	private: System::Windows::Forms::Button^ btnGest;

	private: System::Windows::Forms::Button^ btnShop;
	private: System::Windows::Forms::Button^ btnIDC;
	private: System::Windows::Forms::Button^ btnCom;


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
			this->btnUser = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->btnCom = (gcnew System::Windows::Forms::Button());
			this->btnTech = (gcnew System::Windows::Forms::Button());
			this->btnGest = (gcnew System::Windows::Forms::Button());
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
			this->splitContainer2->Panel1->Controls->Add(this->btnUser);
			this->splitContainer2->Panel1->Controls->Add(this->btnQuit);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->btnCom);
			this->splitContainer2->Panel2->Controls->Add(this->btnTech);
			this->splitContainer2->Panel2->Controls->Add(this->btnGest);
			this->splitContainer2->Panel2->Controls->Add(this->btnIDC);
			this->splitContainer2->Panel2->Controls->Add(this->btnShop);
			this->splitContainer2->Size = System::Drawing::Size(251, 851);
			this->splitContainer2->SplitterDistance = 83;
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
			this->btnUser->Name = L"btnUser";
			this->btnUser->Size = System::Drawing::Size(114, 83);
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
			this->btnQuit->Location = System::Drawing::Point(136, 0);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(115, 83);
			this->btnQuit->TabIndex = 1;
			this->btnQuit->Text = L"Quitter";
			this->btnQuit->UseVisualStyleBackColor = false;
			this->btnQuit->Click += gcnew System::EventHandler(this, &Form1::btnQuit_Click);
			// 
			// btnCom
			// 
			this->btnCom->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCom->Enabled = false;
			this->btnCom->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnCom->FlatAppearance->BorderSize = 0;
			this->btnCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnCom->Location = System::Drawing::Point(0, 280);
			this->btnCom->Name = L"btnCom";
			this->btnCom->Size = System::Drawing::Size(251, 70);
			this->btnCom->TabIndex = 7;
			this->btnCom->Text = L"Passer Commande";
			this->btnCom->UseVisualStyleBackColor = true;
			this->btnCom->Visible = false;
			this->btnCom->Click += gcnew System::EventHandler(this, &Form1::btnCom_Click);
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
			this->btnTech->Name = L"btnTech";
			this->btnTech->Size = System::Drawing::Size(251, 70);
			this->btnTech->TabIndex = 2;
			this->btnTech->Text = L"Technicien";
			this->btnTech->UseVisualStyleBackColor = true;
			this->btnTech->Visible = false;
			this->btnTech->Click += gcnew System::EventHandler(this, &Form1::btnTech_Click);
			// 
			// btnGest
			// 
			this->btnGest->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnGest->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGest->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnGest->FlatAppearance->BorderSize = 0;
			this->btnGest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGest->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnGest->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnGest->Location = System::Drawing::Point(0, 140);
			this->btnGest->Name = L"btnGest";
			this->btnGest->Size = System::Drawing::Size(251, 70);
			this->btnGest->TabIndex = 3;
			this->btnGest->Text = L"Gestionaire";
			this->btnGest->UseVisualStyleBackColor = true;
			this->btnGest->Visible = false;
			this->btnGest->Click += gcnew System::EventHandler(this, &Form1::btnGest_Click);
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
			this->btnIDC->Name = L"btnIDC";
			this->btnIDC->Size = System::Drawing::Size(251, 70);
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
			this->btnShop->Name = L"btnShop";
			this->btnShop->Size = System::Drawing::Size(251, 70);
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

private: System::Void btnUser_Click(System::Object^ sender, System::EventArgs^ e) {
	Connexion^ connexion = gcnew Connexion;
	connexion -> ShowDialog();

	if (connexion->GetData() == "")
	{
		btnUser->Text = "Utilisateur";
	}
	else{
	btnUser->Text = connexion->GetData();
	}
	String^ etat = connexion->GetStatus();

	btnIDC->Visible =  false;
	btnTech->Visible = false;
	btnShop->Visible = false;
	btnGest->Visible = false;

	if (etat == "Gest") {
		btnIDC->Visible = true;
		btnTech->Visible = true;
		btnShop->Visible = true;
		btnGest->Visible = true;
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
	btnGest->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnCom->BackColor = Color::FromArgb(24, 30, 54);

	Connexion^ connexion = gcnew Connexion;
	
}
private: System::Void btnTech_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTech->BackColor = Color::FromArgb(46, 51, 73);
	
	btnGest->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);
	btnCom->BackColor = Color::FromArgb(24, 30, 54);
	
	//mise en place de la table si aucun profil n'est selectioné
	//AffichageTab^ tab = gcnew AffichageTab{Dock = DockStyle.fill, TopLevel = false};

	AffichageTab^ commande = gcnew AffichageTab;
	commande->TopLevel = false;
	commande->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(commande);
	commande->Show();
}
private: System::Void btnGest_Click(System::Object^ sender, System::EventArgs^ e) {
	btnGest->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);
	btnCom->BackColor = Color::FromArgb(24, 30, 54);
	
	TabGestionaire^ tab = gcnew TabGestionaire;
	tab;
	tab->TopLevel = false;
	tab->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(tab);
	tab->Show();
	
}
private: System::Void btnShop_Click(System::Object^ sender, System::EventArgs^ e) {
	btnShop->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnGest->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);
	btnCom->BackColor = Color::FromArgb(24, 30, 54);

	TabShop^ shop = gcnew TabShop;
	shop->TopLevel = false;
	shop->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(shop);
	shop->Show();

}
	   //test importation des données 
private: System::Void btnCom_Click(System::Object^ sender, System::EventArgs^ e) {
	btnCom->BackColor = Color::FromArgb(46, 51, 73);

	btnTech->BackColor = Color::FromArgb(24, 30, 54);
	btnGest->BackColor = Color::FromArgb(24, 30, 54);
	btnShop->BackColor = Color::FromArgb(24, 30, 54);
	btnIDC->BackColor = Color::FromArgb(24, 30, 54);

	/*
	AffichageTab^ commande = gcnew AffichageTab;
	commande->TopLevel = false;
	commande->TopMost = true;
	panel1->Controls->Clear();
	panel1->Controls->Add(commande);
	commande->Show();
	*/

	}
private: System::Void btnQuit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}


};
}
// voir cahier des charges "ingenieur composants"
