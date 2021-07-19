#pragma once

namespace Commande_Composants {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
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
			System::String^ path = gcnew System::String("BDD/Data.txt");
			array<String^>^ lines = File::ReadAllLines(path);
			dataGridView2->Rows->Clear();

			//ne recupere que la premiere ligne du document et la decoupe
			array<String^>^ colTitle = lines[0]->Split(';');

			//permet d'afficher les titres des colonnes
			for (int j = 0; j < colTitle->Length; j++)
			{
				dataGridView2->ColumnCount = colTitle->Length;
				dataGridView2->Columns[j]->Name = colTitle[j];
			}
			//permet d'afficher les contenus des lignes
			for (int i = 1; i < lines->Length; i++)
			{
				array<String^>^ rowData = lines[i]->Split(';');
				dataGridView2->Rows->Add(rowData);
			}
			dataGridView2->Refresh();

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
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Controls->Add(this->btnAdd);
			this->panel1->Controls->Add(this->btnRefresh);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(203, 851);
			this->panel1->TabIndex = 1;
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
			this->btnClose->Click += gcnew System::EventHandler(this, &AffichageTab::btnClose_Click_1);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnAdd->Location = System::Drawing::Point(102, 786);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(85, 53);
			this->btnAdd->TabIndex = 24;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AffichageTab::btnAdd_Click);
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
			this->btnRefresh->Click += gcnew System::EventHandler(this, &AffichageTab::btnRefresh_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(6, 604);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(181, 164);
			this->textBox10->TabIndex = 22;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(6, 506);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(181, 22);
			this->textBox9->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 451);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 22);
			this->textBox6->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 396);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 22);
			this->textBox5->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 341);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(181, 22);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 286);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 22);
			this->textBox3->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 175);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 22);
			this->textBox7->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 229);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 126);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label10->Location = System::Drawing::Point(3, 584);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Commentaire";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label9->Location = System::Drawing::Point(3, 486);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 17);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Date de livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label6->Location = System::Drawing::Point(3, 431);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Imputation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label5->Location = System::Drawing::Point(3, 376);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Qté";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label4->Location = System::Drawing::Point(0, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"N°Serie_Carte";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label3->Location = System::Drawing::Point(3, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PN du composant";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label7->Location = System::Drawing::Point(0, 155);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Division";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label2->Location = System::Drawing::Point(0, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PN de la carte réparée";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label1->Location = System::Drawing::Point(3, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nom du demandeur";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(203, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1381, 851);
			this->panel2->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeight = 29;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1381, 851);
			this->dataGridView2->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->checkBox1->Location = System::Drawing::Point(105, 549);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(79, 21);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"Urgent";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// AffichageTab
			// 
			this->ClientSize = System::Drawing::Size(1584, 851);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AffichageTab";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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


private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	//System::String^ path = gcnew System::String("Commande.csv"); //a tester 
	System::String^ path = gcnew System::String("BDD/Data.txt");
	array<String^>^ lines = File::ReadAllLines(path);
	dataGridView2->Rows->Clear();

	dataGridView2->Refresh();
	

		//ne recupere que la premiere ligne du document et la decoupe
	array<String^>^ colTitle = lines[0]->Split(';');


		//permet d'afficher les titres des colonnes
	for (int j = 0; j < colTitle->Length; j++)
	{
		dataGridView2->ColumnCount = colTitle->Length;
		dataGridView2->Columns[j]->Name = colTitle[j];
	}
		//permet d'afficher les contenus des lignes
	for (int i = 1; i < lines->Length; i++)
	{
		array<String^>^ rowData = lines[i]->Split(';');
		dataGridView2->Rows->Add(rowData);
	}
}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ path = gcnew System::String("BDD/Data.txt");
	array<String^>^ lines = File::ReadAllLines(path);

	//Recupere toutes les valeurs dans les Textbox et les affecte a des Strings
	String^ demandeur	= textBox1 ->Text;
	String^ pnCarte		= textBox2 ->Text;
	String^ numSerie	= textBox3 ->Text;
	String^ pnComp		= textBox4 ->Text;
	String^ qte			= textBox5 ->Text;
	String^ imputation	= textBox6 ->Text;
	String^ division	= textBox7 ->Text;
	String^ dateRecep	= textBox9 ->Text;
	String^ commentaire = textBox10->Text;
	String^ urgent ;
	if (checkBox1->Checked) {
		urgent = "OUI";
	}
	else {
		urgent = "NON";
	}

	String^ statut = "En cours de traitement";

	// Creation de la ligne de completion du tableau
	array<String^>^ valors = gcnew array<String^> { //N°Commande
													";" +
													//Date_Cde
													";" + 
													urgent+
													";"+
													demandeur + 
													";" + 
													division +
													";" + 
													pnCarte +
													";" + 
													numSerie+
													";" + 
													//RepereTopo 
													";" +
													pnComp +//Code_BDDP_Composant
													";" + 
													qte +
													";" + 
													imputation+
													";" +
													//Com_Technicien
													";"+
													//Com_Technicien_Post_Validation
													";" +
													//Fournisseur
													";" +
													//Delai_Livraison
													";" +
													statut + //Statut
													";" +
													commentaire+ //comGestionaire
													";" +
													dateRecep //Date_Reception
													};

	File::AppendAllLines("BDD/Data.txt",valors);

	//Nettoyage des TextBox's
	textBox1 ->Clear();
	textBox2 ->Clear();
	textBox3 ->Clear();
	textBox4 ->Clear();
	textBox5 ->Clear();
	textBox6 ->Clear();
	textBox7 ->Clear();
	textBox9 ->Clear();
	textBox10->Clear();
	btnRefresh_Click(sender,  e);
}
	   
private: System::Void btnClose_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AffichageTab::Close(); 
}

};
}
