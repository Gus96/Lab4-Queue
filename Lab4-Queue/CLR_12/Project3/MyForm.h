#pragma once
#include "..\..\Lab4-Queue\Queue.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			gr = CreateGraphics();
			rnd1 = gcnew Random();


			
			BlackPen = gcnew Pen(Color::Black);
			BlackPen->Width = 10.0;
			WhitePen = gcnew Pen(SystemColors::MenuHighlight);////
			WhitePen->Width = 10.0;

			CenterX = 150;
			CenterY = 220;
			Width = Height = 150;

			PopCount = PushCount = 0;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		/////////////НАЧАЛО ПАРАШИ
		int MaxSize;
		int Size;
		double p;
		double q;
		int PopCount;
		int PushCount;


		TQueue<int> *pQueue;
		int CenterX, CenterY, Width, Height;
		Graphics^ gr;
		Random^ rnd1;

		Pen^ BlackPen;
		Pen^ WhitePen;
		////КОНЕЦ ПАРАШИ
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(180, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(180, 128);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(180, 154);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(180, 180);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(350, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 47);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Стоп";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Максимальная длина очереди";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Исходная длина очереди";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Вероятность добавления";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Вероятность извлечения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Добавлено в очередь";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Извлечено из очереди";
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(522, 381);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void DrawQueue()
		{
			//Вычисляем стартовый угол
			int start = 360 * pQueue->GetFirst() / pQueue->GetMaxSize();
			int finish = 360 * (pQueue->GetSize()) / pQueue->GetMaxSize();
			//нарисовать дугу от tall до head
			gr->DrawArc(BlackPen, CenterX, CenterY, Width, Height, start, finish);

		}
		void Clean()
		{
			//Вычисляем стартовый угол
			int start = 360 * pQueue->GetFirst() / pQueue->GetMaxSize();
			int finish = 360 * (pQueue->GetSize()) / pQueue->GetMaxSize();
			//нарисовать дугу от tall до head
			gr->DrawArc(WhitePen, CenterX, CenterY, Width, Height, start, finish);

		}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//Стереть очередь
	Clean();

	if (rnd1->NextDouble() < p)
		if (!pQueue->IsFull())
		{
			pQueue->Push(1);
			PushCount++;
		}
	if (rnd1->NextDouble() < q)//генерирует случ число
		if (!pQueue->IsEmpty())
		{
			pQueue->Pop();
			PopCount++;
		}
	DrawQueue();
	textBox5->Text = Convert::ToString(PushCount);
	textBox6->Text = Convert::ToString(PopCount);
	//gr->DrawArc(BlackPen, 10, 6, 7, 11, 15, 17);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MaxSize = Convert::ToInt32(textBox1->Text);
	Size = Convert::ToInt32(textBox2->Text);
	p = Convert::ToDouble(textBox3->Text);
	q = Convert::ToDouble(textBox4->Text);
	///////
	pQueue = new TQueue<int>(MaxSize);//т.к. указатель
	for (int i = 0; i < Size; i++)
	{
		pQueue->Push(i);
	}
	timer1->Enabled = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
}
};
}
