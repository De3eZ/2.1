#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);
}


System::Void Project1::MyForm::AddButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "" || textBox3->Text == "")
	{
		MessageBox::Show("Имя или размер не введены");
	}
	else
	{
		string value;
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(textBox3->Text)).ToPointer();
		value = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		int size = Convert::ToInt16(textBox1->Text);

		if (size < 256)
		{
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] == "")
				{
					arr[i] = value;
					break;
				}
			}
		}
		else
		{
			double n = size;
				n/= 256;
			size =ceil(n);
			if (size > 10)
			{
				
			}
			for (int i = 0; i < 10 - size; i++)
			{
				bool free = true;
				for (int j = 0; j < size; j++)
				{
					if (arr[i + j] != "")
					{
						free = false;
					}	
				}
				if (free)
				{
					for (int j = 0; j < size; j++)
					{
						arr[i + j] = value;
					}
					break;
				}
				else
				{
					
				}
			}
		}
		textBox1->Text = "";
		textBox3->Text = "";
	}

}


System::Void Project1::MyForm::DeleteButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->Text == "" )
	{
		MessageBox::Show("Имя не введено");
	}
	else
	{
		string value;	
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();
		value = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
		bool del = false;
		for (int i = 0; i < 10; i++)
		{	
			if (arr[i] == value)
			{
				arr[i] = "";
				del = true;
			}
		}
		textBox2->Text = "";

		if (del)
		{
			MessageBox::Show("Файл не найден");
		}
	}
}

System::Void Project1::MyForm::StartButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->RowCount = 1;
	dataGridView1->ColumnCount = 10;

	dataGridView1->TopLeftHeaderCell->Value = "Участок памяти";
	dataGridView1->AutoResizeColumns();

	

	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		
		dataGridView1->Rows[i]->HeaderCell->Value = "Размер ячейки 256 байт";
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
		{
			string mes = arr[j];
			String^ mess = gcnew System::String(mes.c_str());

			dataGridView1->Rows[i]->Cells[j]->Value = mess;
		}
		
	}

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
}

System::Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = "";
	}
}
