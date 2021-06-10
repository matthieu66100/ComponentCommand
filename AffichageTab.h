#pragma once

namespace Commande_Composants {

	using namespace System;
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
			InitializeDataGridView();

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
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1122, 577);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AffichageTab::dataGridView2_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// AffichageTab
			// 
			this->ClientSize = System::Drawing::Size(1122, 577);
			this->Controls->Add(this->dataGridView2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AffichageTab";
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
};
}
