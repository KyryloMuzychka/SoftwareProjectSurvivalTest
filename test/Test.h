#pragma once

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
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
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_next;
	protected:

	protected:
	private: System::Windows::Forms::RadioButton^ radio_zero;
	private: System::Windows::Forms::RadioButton^ radio_one;
	private: System::Windows::Forms::RadioButton^ radio_two;
	private: System::Windows::Forms::RadioButton^ radio_three;
	private: System::Windows::Forms::Label^ question;
	private: System::Windows::Forms::Button^ reset;	
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ progress;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::Button^ btn_calculate;


	private: int indexOfQuestion = 0;
	private: int sum = 0;		
	private: 
			System::String^ path = gcnew System::String("questions.txt");
			cli::array<String^>^ questions = IO::File::ReadAllLines(path);
	private: int length = questions->Length;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Test::typeid));
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->radio_zero = (gcnew System::Windows::Forms::RadioButton());
			this->radio_one = (gcnew System::Windows::Forms::RadioButton());
			this->radio_two = (gcnew System::Windows::Forms::RadioButton());
			this->radio_three = (gcnew System::Windows::Forms::RadioButton());
			this->question = (gcnew System::Windows::Forms::Label());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->progress = (gcnew System::Windows::Forms::Label());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->btn_calculate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_next
			// 
			this->btn_next->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_next->Location = System::Drawing::Point(24, 358);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(123, 34);
			this->btn_next->TabIndex = 0;
			this->btn_next->Text = L"Next";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &Test::btn_next_Click);
			// 
			// radio_zero
			// 
			this->radio_zero->AutoSize = true;
			this->radio_zero->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_zero->Location = System::Drawing::Point(24, 149);
			this->radio_zero->Name = L"radio_zero";
			this->radio_zero->Size = System::Drawing::Size(44, 30);
			this->radio_zero->TabIndex = 1;
			this->radio_zero->TabStop = true;
			this->radio_zero->Text = L"0";
			this->radio_zero->UseVisualStyleBackColor = true;
			// 
			// radio_one
			// 
			this->radio_one->AutoSize = true;
			this->radio_one->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_one->Location = System::Drawing::Point(24, 196);
			this->radio_one->Name = L"radio_one";
			this->radio_one->Size = System::Drawing::Size(44, 30);
			this->radio_one->TabIndex = 2;
			this->radio_one->TabStop = true;
			this->radio_one->Text = L"1";
			this->radio_one->UseVisualStyleBackColor = true;
			// 
			// radio_two
			// 
			this->radio_two->AutoSize = true;
			this->radio_two->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_two->Location = System::Drawing::Point(24, 245);
			this->radio_two->Name = L"radio_two";
			this->radio_two->Size = System::Drawing::Size(44, 30);
			this->radio_two->TabIndex = 3;
			this->radio_two->TabStop = true;
			this->radio_two->Text = L"2";
			this->radio_two->UseVisualStyleBackColor = true;
			// 
			// radio_three
			// 
			this->radio_three->AutoSize = true;
			this->radio_three->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_three->Location = System::Drawing::Point(24, 290);
			this->radio_three->Name = L"radio_three";
			this->radio_three->Size = System::Drawing::Size(44, 30);
			this->radio_three->TabIndex = 4;
			this->radio_three->TabStop = true;
			this->radio_three->Text = L"3";
			this->radio_three->UseVisualStyleBackColor = true;
			// 
			// question
			// 
			this->question->AutoSize = true;
			this->question->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->question->Location = System::Drawing::Point(19, 18);
			this->question->MaximumSize = System::Drawing::Size(600, 0);
			this->question->Name = L"question";
			this->question->Size = System::Drawing::Size(91, 26);
			this->question->TabIndex = 5;
			this->question->Text = L"question";
			// 
			// reset
			// 
			this->reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset->Location = System::Drawing::Point(193, 406);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(123, 34);
			this->reset->TabIndex = 6;
			this->reset->Text = L"Restart";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Test::reset_Click);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(188, 362);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(93, 26);
			this->result->TabIndex = 7;
			this->result->Text = L"Result: 0";
			// 
			// progress
			// 
			this->progress->AutoSize = true;
			this->progress->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->progress->Location = System::Drawing::Point(361, 362);
			this->progress->Name = L"progress";
			this->progress->Size = System::Drawing::Size(147, 26);
			this->progress->TabIndex = 8;
			this->progress->Text = L"Question: 1/33";
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox->Location = System::Drawing::Point(366, 410);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(170, 30);
			this->checkBox->TabIndex = 9;
			this->checkBox->Text = L"Up to 5 people";
			this->checkBox->UseVisualStyleBackColor = true;
			// 
			// btn_calculate
			// 
			this->btn_calculate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_calculate->Location = System::Drawing::Point(24, 406);
			this->btn_calculate->Name = L"btn_calculate";
			this->btn_calculate->Size = System::Drawing::Size(123, 34);
			this->btn_calculate->TabIndex = 10;
			this->btn_calculate->Text = L"Calculate";
			this->btn_calculate->UseVisualStyleBackColor = true;
			this->btn_calculate->Click += gcnew System::EventHandler(this, &Test::btn_calculate_Click);
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 460);
			this->Controls->Add(this->btn_calculate);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->progress);
			this->Controls->Add(this->result);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->question);
			this->Controls->Add(this->radio_three);
			this->Controls->Add(this->radio_two);
			this->Controls->Add(this->radio_one);
			this->Controls->Add(this->radio_zero);
			this->Controls->Add(this->btn_next);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Test";
			this->Text = L"Test";
			this->Load += gcnew System::EventHandler(this, &Test::Test_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radio_one->Checked) {
			sum += 1;
			this->radio_one->Checked = 0;
		}
		else if (radio_two->Checked) {
			sum += 2;
			this->radio_two->Checked = 0;
		}
		else if (radio_three->Checked) {
			this->radio_three->Checked = 0;
			sum += 3;
		}
		else if (radio_zero->Checked) {
			this->radio_zero->Checked = 0;
		}
		else {
			return;
		}
		this->result->Text = "Result: " + System::Convert::ToString(sum);
		if (indexOfQuestion >= length - 1)
		{
			this->btn_next->Enabled = 0;
			this->btn_calculate->Enabled = 1;
			return;
		}			
		indexOfQuestion++;
		this->question->Text = questions[indexOfQuestion];		
		this->progress->Text = "Question: " + System::Convert::ToString(indexOfQuestion+1) + "/" + System::Convert::ToString(length);
	}

	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {							
		sum = 0;
		indexOfQuestion = 0;		
		this->question->Text = questions[0];	
		this->result->Text = "Result: " + System::Convert::ToString(sum);
		this->progress->Text = "Question: " + System::Convert::ToString(indexOfQuestion + 1) + "/" + System::Convert::ToString(length);
		this->btn_next->Enabled = 1;		
		this->checkBox->Enabled = 1;
		this->btn_calculate->Enabled = 0;
		if (radio_one->Checked) {			
			this->radio_one->Checked = 0;
		}
		else if (radio_two->Checked) {			
			this->radio_two->Checked = 0;
		}
		else if (radio_three->Checked) {
			this->radio_three->Checked = 0;			
		}
		else if (radio_zero->Checked) {
			this->radio_zero->Checked = 0;
		}
	}

	private: System::Void Test_Load(System::Object^ sender, System::EventArgs^ e) {
		this->question->Text = questions[0];
		this->btn_calculate->Enabled = 0;		
	}

	private: System::Void btn_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		float coef;
		this->checkBox->Checked ? coef = 1.5 : coef = 1.25;		
		sum *= coef;
		this->result->Text = "Result: " + System::Convert::ToString(sum);
		this->btn_calculate->Enabled = 0;	
		if (sum < 40) {
			Show("Завершение проекта сомнительно");			
		}
		else if (sum <= 59) {			
			Show("В ходе проекта следует ожидать серьезные проблемы.");
		}
		else if (sum <= 79) {
			Show("Проект, скорее всего, будет успешным.");
		} else if (sum <= 89) {
			Show("Вероятность успеха высока.");
		} else {
			Show("Великолепный результат. 100% шансов на успех.");
		}			
	}
	
	private: void Show(String^ str) {
		MessageBox::Show(this, str, "Результат тестирования", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

};
}	
	