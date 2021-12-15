#pragma once
#include <string>
#include <cmath>

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}











	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(14, 135);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 20);
			this->textBox1->TabIndex = 12;
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(14, 161);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(93, 23);
			this->AddButton->TabIndex = 13;
			this->AddButton->Text = L"Добавить файл";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MyForm::AddButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 15);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Размер файла";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 15);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Имя файла";
			// 
			// DeleteButton
			// 
			this->DeleteButton->Location = System::Drawing::Point(12, 284);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(95, 23);
			this->DeleteButton->TabIndex = 16;
			this->DeleteButton->Text = L"Удалить";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButton_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 258);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 20);
			this->textBox2->TabIndex = 15;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(14, 12);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(93, 23);
			this->StartButton->TabIndex = 18;
			this->StartButton->Text = L"Старт";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkRed;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::DarkRed;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(113, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(528, 312);
			this->dataGridView1->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(14, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 20);
			this->textBox3->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 15);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Имя файла";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowText;
			this->ClientSize = System::Drawing::Size(653, 336);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkRed;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Непрерывное размещение файлов";
			this->TransparencyKey = System::Drawing::Color::Lime;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
public: static string *arr = new string[10];
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
};




}
