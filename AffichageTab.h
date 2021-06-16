#pragma once

namespace Commande_Composants {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AffichageTab
	/// </summary>
	public ref class AffichageTab : public System::Windows::Forms::Form
	{
	public:
		AffichageTab(void)
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
		~AffichageTab()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
			 System::Windows::Forms::BindingSource^ bindingSource1;






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnClose;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnAdd;


	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnAdd);
			this->panel1->Controls->Add(this->btnRefresh);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(302, 577);
			this->panel1->TabIndex = 1;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(211, 521);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(85, 53);
			this->btnAdd->TabIndex = 24;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(211, 84);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(85, 55);
			this->btnRefresh->TabIndex = 23;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &AffichageTab::btnRefresh_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(6, 484);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(181, 22);
			this->textBox10->TabIndex = 22;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(6, 541);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(181, 22);
			this->textBox9->TabIndex = 21;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(6, 427);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(181, 22);
			this->textBox8->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 370);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 22);
			this->textBox7->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 313);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 22);
			this->textBox6->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 252);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 22);
			this->textBox5->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 197);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(181, 22);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 22);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 521);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Commentaire";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 464);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 17);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Date de livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 407);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Statut";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Fournisseur";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 293);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Imputation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Qté";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"N°Serie_Carte";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PN du composant";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PN de la carte réparée";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nom du demandeur";
			this->label1->Click += gcnew System::EventHandler(this, &AffichageTab::label1_Click);
			// 
			// btnClose
			// 
			this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnClose->Location = System::Drawing::Point(235, 3);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(61, 61);
			this->btnClose->TabIndex = 2;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &AffichageTab::btnClose_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(302, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(820, 577);
			this->panel2->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(820, 577);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AffichageTab::dataGridView2_CellContentClick);
			// 
			// AffichageTab
			// 
			this->ClientSize = System::Drawing::Size(1122, 577);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"AffichageTab";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}



	internal:
		static property AffichageTab^ GetInstance
		{
			AffichageTab^ get()
			{
				if (m_DefaultInstance == nullptr || m_DefaultInstance->IsDisposed)
				{
					System::Threading::Monitor::Enter(m_SyncObject);
					try
					{
						if (m_DefaultInstance == nullptr || m_DefaultInstance->IsDisposed)
						{
							m_DefaultInstance = gcnew AffichageTab;
						}
					}
					finally
					{
						System::Threading::Monitor::Exit(m_SyncObject);
					}
				}

				return m_DefaultInstance;
			}
		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: static AffichageTab^ m_DefaultInstance;
			 static Object^ m_SyncObject = gcnew Object;




	void InitializeDataGridView()
	{
		 try
		 {
			 // Set up the DataGridView.
			 dataGridView1->Dock = DockStyle::Fill;

			 // Automatically generate the DataGridView columns.
			 dataGridView1->AutoGenerateColumns = true;

			 // Set up the data source.
			 bindingSource1->DataSource = GetData("Select * From Products");
			 dataGridView1->DataSource = bindingSource1;

			 // Automatically resize the visible rows.
			 dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;

			 // Set the DataGridView control's border.
			 dataGridView1->BorderStyle = BorderStyle::Fixed3D;

			 // Put the cells in edit mode when user enters them.
			 dataGridView1->EditMode = DataGridViewEditMode::EditOnEnter;
		 }
		 catch (SqlException^)
		 {
			 MessageBox::Show("To run this sample replace connection.ConnectionString"
				 " with a valid connection string to a Northwind"
				 " database accessible to your system.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 System::Threading::Thread::CurrentThread->Abort();
		 }
		 catch (System::Exception^ ex)
		 {
			 MessageBox::Show(ex->ToString());
		 }
	}

	DataTable^ GetData(String^ sqlCommand)
	{
		 String^ connectionString = "Integrated Security=SSPI;Persist Security Info=False;"
			 "Initial Catalog=Northwind;Data Source= localhost";
		 SqlConnection^ northwindConnection = gcnew SqlConnection(connectionString);
		 SqlCommand^ command = gcnew SqlCommand(sqlCommand, northwindConnection);
		 SqlDataAdapter^ adapter = gcnew SqlDataAdapter;
		 adapter->SelectCommand = command;
		 DataTable^ table = gcnew DataTable;
		 adapter->Fill(table);
		 return table;
	}
		private: System::Void bindingSource2_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
		}


		private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			
		}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	AffichageTab::Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	//System::String^ path = gcnew System::String("Commande.csv");
	System::String^ path = gcnew System::String("Texte.txt");
	array<String^>^ lines = File::ReadAllLines(path);



	//############################ Partie de test
	//dataGridView2->ColumnCount = 5;

	//dataGridView2->Columns[0]->Name = "Release Date";
	//dataGridView2->Rows->Add(result[0]);



	//MessageBox::Show(result[0]); //affichage d'une colonne complete
	//MessageBox::Show(lines[0]); //affichage d'une ligne complete

	//#############################

		//ne recupere que la premiere ligne du document et la decoupe
	array<String^>^ colTitle = lines[0]->Split(';');


		//permet d'enregistrer les titres des colonnes
	for (int j = 0; j < colTitle->Length; j++)
	{
		dataGridView2->ColumnCount = colTitle->Length;
		dataGridView2->Columns[j]->Name = colTitle[j];
	}

	for (int i = 1; i < lines->Length; i++)
	{
	array<String^>^ rowData = lines[i]->Split(';');
	dataGridView2->Rows->Add(rowData);
	}
	


}
};
}
