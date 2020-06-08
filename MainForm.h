#pragma once

#include <fstream>//ввод вывод
#include <iostream>
#include <msclr\marshal_cppstd.h>//нужна для конвертации между string и String(Вывод текста на графические элементы)
#include "Storage.h"

namespace StoreHouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(391, 263);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Таблица";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(148, 25);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(94, 20);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MainForm::DateTimePicker1_ValueChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(379, 206);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Название";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Кол-во";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->monthCalendar1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->domainUpDown1);
			this->groupBox2->Location = System::Drawing::Point(412, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(312, 477);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Отчёты";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(136, 303);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 14;
			this->monthCalendar1->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(96, 67);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 20);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Поиск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::Button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 92);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(297, 379);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBox1, L"Для поиска без фильтров оставьте поле пустым");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Поиск по контрагенту:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Вид отчёта:";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"Поставка");
			this->domainUpDown1->Items->Add(L"Убытие");
			this->domainUpDown1->Items->Add(L"Все");
			this->domainUpDown1->Location = System::Drawing::Point(9, 41);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->ReadOnly = true;
			this->domainUpDown1->Size = System::Drawing::Size(119, 20);
			this->domainUpDown1->TabIndex = 0;
			this->domainUpDown1->Text = L"Поставка";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->domainUpDown2);
			this->groupBox3->Location = System::Drawing::Point(12, 281);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(391, 208);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Операции";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(224, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(221, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Товар:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(369, 34);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::Button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(221, 98);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Число:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(224, 113);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(108, 20);
			this->numericUpDown1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(58, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Контрагент:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Вид операции:";
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Items->Add(L"Поставка");
			this->domainUpDown2->Items->Add(L"Убытие");
			this->domainUpDown2->Location = System::Drawing::Point(58, 58);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->ReadOnly = true;
			this->domainUpDown2->Size = System::Drawing::Size(108, 20);
			this->domainUpDown2->TabIndex = 5;
			this->domainUpDown2->Text = L"Поставка";
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Подсказка";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(736, 498);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void DateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	/* Выбор даты и вывод товаров на эту дату */
	this->dataGridView1->Rows->Clear();

	ifstream in;
	bool isForRecord = false;
	string title, value;

	string reader = "";
	string date = msclr::interop::marshal_as<string>(dateTimePicker1->Text);//для перевода string на String
	in.open("table.txt");

	while (getline(in, reader)) {
		if (reader.find("#") != std::string::npos) {
			isForRecord = false;
		}
		if (isForRecord) {
			int i = 0;
			title = "";
			value = "";
			while (reader[i] != ' ') {
				title += reader[i];
				i++;
			}
			while (reader[i] != '$') {
				value += reader[i];
				i++;
			}

			cli::array<String^>^ row = gcnew cli::array<String^>{ gcnew String(title.c_str()), gcnew String(value.c_str())};
			this->dataGridView1->Rows->Add(row);
		}
		if (reader.find(date) != std::string::npos) {
			isForRecord = true;
		}
	}
	in.close();
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/* Выполнение операции */
	ofstream out,p,m;
	ifstream in;
	string title = msclr::interop::marshal_as<string>(textBox3->Text);
	string contragent = msclr::interop::marshal_as<string>(textBox2->Text);
	string type = msclr::interop::marshal_as<string>(domainUpDown2->Text);
	int value = atoi((msclr::interop::marshal_as<string>(numericUpDown1->Value.ToString()).c_str()));
	string date = msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10);
	string reader;
	bool isForRecord = false;
	bool noName = true;

	p.open("plusReport", std::ios::app);
	m.open("minusReport", std::ios::app);
	in.open("table.txt");
	out.open("temp.txt");
	if (contragent != "" && contragent != " " && title != "" && title != " ") {
		while (getline(in,reader)) {
			if (reader != "") {
				if (reader.find("#") != std::string::npos) {
					isForRecord = false;
				}
				if (reader.find(date) != std::string::npos) {
					isForRecord = true;
				}
				if (isForRecord) {
					if (reader.find(title) != std::string::npos) {
						noName = false;
						int i = 0;
						string newTitle = "";
						string newValue = "";
						while (reader[i] != ' ') {
							newTitle += reader[i];
							i++;
						}
						while (reader[i] != '$') {
							newValue += reader[i];
							i++;
						}
						int val = atoi(newValue.c_str());

						if (type == "Поставка") {
							out << newTitle << " " << to_string(val + value) << " $" << endl;
							p << contragent << " поставил " << title << " - " << value << " у.е. [" << date << "]" << endl;
						} else if (type == "Убытие") {
							if (val - value >= 0) {
								out << newTitle << " " << to_string(val - value) << " $" << endl;
								m << contragent << " забрал " << title << " - " << value << " у.е. [" << date << "]" << endl;
							} else {
								out << reader << endl;
							}
						}
					} else {
						out << reader << endl;
					}
				} else {
					out << reader << endl;
				}
			}
		}
		if (noName && type == "Поставка") {
			out << "# " << date << endl << title << " " << value << " $" << endl;
			p << contragent << " поставил " << title << " - " << value << " у.е. [" << date << "]" << endl;
		}
		in.close();
		out.close();
		p.close();
		m.close();
		remove("table.txt");
		rename("temp.txt", "table.txt");
	}

	dataGridView1->Rows->Clear();
	isForRecord = false;
	string t, v;

	reader = "";
	date = msclr::interop::marshal_as<string>(dateTimePicker1->Text);
	in.open("table.txt");

	while (getline(in, reader)) {
		if (reader.find("#") != std::string::npos) {
			isForRecord = false;
		}
		if (isForRecord) {
			int i = 0;
			t = "";
			v = "";
			while (reader[i] != ' ') {
				t += reader[i];
				i++;
			}
			while (reader[i] != '$') {
				v += reader[i];
				i++;
			}

			cli::array<String^>^ row = gcnew cli::array<String^>{ gcnew String(t.c_str()), gcnew String(v.c_str())};
			dataGridView1->Rows->Add(row);
		}
		if (reader.find(date) != std::string::npos) {
			isForRecord = true;
		}
	}
	in.close();
	// отчеты
	richTextBox1->Text = "";
	if (textBox1->Text == "" || textBox1->Text == " ") {
		if (domainUpDown1->Text == "Поставка") {
			in.open("plusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader+"\n").c_str());
			}
			in.close();
		} else if (domainUpDown1->Text == "Убытие") {
			in.open("minusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
		} else {
			in.open("plusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
			in.open("minusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
		}
	}
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ifstream in;
	string reader;
	string search = msclr::interop::marshal_as<string>(textBox1->Text);//поиск контрагента
	richTextBox1->Text = "";
	if (textBox1->Text == "" || textBox1->Text == " ") {
		if (domainUpDown1->Text == "Поставка") {
			in.open("plusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
		} else if (domainUpDown1->Text == "Убытие") {
			in.open("minusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
		} else {
			in.open("plusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
			in.open("minusReport");
			while (getline(in, reader)) {
				richTextBox1->Text += gcnew String((reader + "\n").c_str());
			}
			in.close();
		}
	} else {
		if (domainUpDown1->Text == "Поставка") {
			in.open("plusReport");
			while (getline(in, reader)) {
				if (reader.find(search) != std::string::npos) {
					richTextBox1->Text += gcnew String((reader + "\n").c_str());
				}
			}
			in.close();
		} else if (domainUpDown1->Text == "Убытие") {
			in.open("minusReport");
			while (getline(in, reader)) {
				if (reader.find(search) != std::string::npos) {
					richTextBox1->Text += gcnew String((reader + "\n").c_str());
				}
			}
			in.close();
		} else {
			in.open("plusReport");
			while (getline(in, reader)) {
				if (reader.find(search) != std::string::npos) {
					richTextBox1->Text += gcnew String((reader + "\n").c_str());
				}
			}
			in.close();
			in.open("minusReport");
			while (getline(in, reader)) {
				if (reader.find(search) != std::string::npos) {
					richTextBox1->Text += gcnew String((reader + "\n").c_str());
				}
			}
			in.close();
		}
	}
}
};
}
