#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ input_cnp;
	private: System::Windows::Forms::TextBox^ afisaj_cnp;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textbox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(63, 40);
			this->input_cnp->Multiline = true;
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(205, 62);
			this->input_cnp->TabIndex = 0;
			this->input_cnp->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->Location = System::Drawing::Point(63, 207);
			this->afisaj_cnp->Multiline = true;
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->Size = System::Drawing::Size(205, 82);
			this->afisaj_cnp->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"calculeaza CNP";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(450, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(352, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 30);
			this->button3->TabIndex = 5;
			this->button3->Text = L"afisati";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(429, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"data";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(214, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 48);
			this->button2->TabIndex = 7;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(429, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"gen";
			// 
			// textbox1
			// 
			this->textbox1->Location = System::Drawing::Point(352, 297);
			this->textbox1->Multiline = true;
			this->textbox1->Name = L"textbox1";
			this->textbox1->Size = System::Drawing::Size(184, 36);
			this->textbox1->TabIndex = 9;
			this->textbox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 475);
			this->Controls->Add(this->textbox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->afisaj_cnp);
			this->Controls->Add(this->input_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = DateTime::Now;
	label1->Text = today.ToString("dd/MM/yyyy");
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		input_cnp->Clear();
		afisaj_cnp->Clear();
	}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (input_cnp->Text->Length == 0)
	{
		MessageBox::Show(" Introduceti CNP-ul!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
	} 
	else 
	{
		String^ cnp = input_cnp->Text;
		int an = Int32::Parse(cnp -> Substring(1, 2));
		int luna = Int32::Parse(cnp->Substring(3, 2));
		int zi = Int32::Parse(cnp -> Substring(5, 2));
		int gen = Int32::Parse(cnp-> Substring(0, 1));
		DateTime azi = DateTime::Now;
		int varsta = azi.Year - (2003 + an);
		if (luna > azi.Month || (luna == azi.Month && zi > azi.Day))
		{
			varsta--;
			
		}
		afisaj_cnp->Text = "Data nasterii:" + zi.ToString() + "/" + luna.ToString() + "/" + an.ToString() + "\n";
		if (gen % 2 == 0)
			textbox1->Text = "genul feminin";
		else textbox1->Text = "genul masculin";



}
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {


}
};
}
