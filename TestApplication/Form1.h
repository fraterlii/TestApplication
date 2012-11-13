#pragma once
#include "responseNS.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
#include <vector>

namespace TestApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			arrayStuff::build_alice_RNArray();
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
	private: System::Windows::Forms::PictureBox^  Echevvery;
	private: System::Windows::Forms::PictureBox^  Suspect;
	protected: 




	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Button^  CharmButton;

	private: System::Windows::Forms::Button^  ContinueButton;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  EchevveryLabel;
	private: System::Windows::Forms::Label^  SuspectLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



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
			this->Echevvery = (gcnew System::Windows::Forms::PictureBox());
			this->Suspect = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->CharmButton = (gcnew System::Windows::Forms::Button());
			this->ContinueButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EchevveryLabel = (gcnew System::Windows::Forms::Label());
			this->SuspectLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Echevvery))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Suspect))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Echevvery
			// 
			this->Echevvery->BackColor = System::Drawing::Color::White;
			this->Echevvery->Location = System::Drawing::Point(210, 72);
			this->Echevvery->Name = L"Echevvery";
			this->Echevvery->Size = System::Drawing::Size(535, 495);
			this->Echevvery->TabIndex = 0;
			this->Echevvery->TabStop = false;
			// 
			// Suspect
			// 
			this->Suspect->BackColor = System::Drawing::Color::White;
			this->Suspect->Location = System::Drawing::Point(751, 72);
			this->Suspect->Name = L"Suspect";
			this->Suspect->Size = System::Drawing::Size(535, 495);
			this->Suspect->TabIndex = 2;
			this->Suspect->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(210, 573);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(535, 114);
			this->textBox1->TabIndex = 3;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->ItemSize = System::Drawing::Size(60, 30);
			this->tabControl1->Location = System::Drawing::Point(4, 12);
			this->tabControl1->Margin = System::Windows::Forms::Padding(0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(0, 0);
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(200, 729);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Margin = System::Windows::Forms::Padding(0);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(192, 691);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"    Case Points    ";
			// 
			// tabPage2
			// 
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(192, 691);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"   Suspect Profile   ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(751, 690);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(260, 25);
			this->progressBar1->Step = 25;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 6;
			this->progressBar1->Tag = L"";
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(1026, 690);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(260, 25);
			this->progressBar2->TabIndex = 7;
			// 
			// CharmButton
			// 
			this->CharmButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CharmButton->Location = System::Drawing::Point(210, 690);
			this->CharmButton->Name = L"CharmButton";
			this->CharmButton->Size = System::Drawing::Size(150, 48);
			this->CharmButton->TabIndex = 8;
			this->CharmButton->Text = L"Charm";
			this->CharmButton->UseVisualStyleBackColor = true;
			this->CharmButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// ContinueButton
			// 
			this->ContinueButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ContinueButton->Location = System::Drawing::Point(595, 690);
			this->ContinueButton->Name = L"ContinueButton";
			this->ContinueButton->Size = System::Drawing::Size(150, 47);
			this->ContinueButton->TabIndex = 10;
			this->ContinueButton->Text = L"Continue";
			this->ContinueButton->UseVisualStyleBackColor = true;
			this->ContinueButton->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(751, 573);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(535, 114);
			this->label1->TabIndex = 11;
			// 
			// EchevveryLabel
			// 
			this->EchevveryLabel->BackColor = System::Drawing::Color::Transparent;
			this->EchevveryLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EchevveryLabel->ForeColor = System::Drawing::Color::DarkOrange;
			this->EchevveryLabel->Location = System::Drawing::Point(210, 12);
			this->EchevveryLabel->Name = L"EchevveryLabel";
			this->EchevveryLabel->Size = System::Drawing::Size(535, 57);
			this->EchevveryLabel->TabIndex = 12;
			this->EchevveryLabel->Text = L"Officer Echevvery";
			this->EchevveryLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SuspectLabel
			// 
			this->SuspectLabel->BackColor = System::Drawing::Color::Transparent;
			this->SuspectLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SuspectLabel->ForeColor = System::Drawing::Color::DarkOrange;
			this->SuspectLabel->Location = System::Drawing::Point(751, 12);
			this->SuspectLabel->Name = L"SuspectLabel";
			this->SuspectLabel->Size = System::Drawing::Size(535, 57);
			this->SuspectLabel->TabIndex = 13;
			this->SuspectLabel->Text = L"Alice Kremieux";
			this->SuspectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::GhostWhite;
			this->label2->Location = System::Drawing::Point(751, 718);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Submissive";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(1026, 717);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(260, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Assertive";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(1293, 753);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SuspectLabel);
			this->Controls->Add(this->EchevveryLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ContinueButton);
			this->Controls->Add(this->CharmButton);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Suspect);
			this->Controls->Add(this->Echevvery);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Officer Echevvery";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Echevvery))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Suspect))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->BackColor = System::Drawing::Color::Yellow;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	
			 msclr::interop::marshal_context context;

			int hit = 0;
			arrayStuff::keywords = arrayStuff::input2UPPER(context.marshal_as<std::string>(textBox1->Text));
			std::string x = arrayStuff::keywords;
			std::stringstream ss(arrayStuff::keywords);
			std::vector<std::string> tokens;
			std::ofstream outputFile;
			outputFile.open("datafile.txt");
			arrayStuff::mainresponse = "";

			while(ss>>arrayStuff::buf){
			tokens.push_back(arrayStuff::buf);
			outputFile<<arrayStuff::buf+"\n";
			arrayStuff::kwIndex = arrayStuff::compareKeywords(arrayStuff::buf);
			if (arrayStuff::kwIndex >= 0){
				hit++;
				arrayStuff::mainresponse = arrayStuff::alice_RNArray[arrayStuff::kwIndex][rand() % 5].responseOutput();
			}
			
		} outputFile.close();
		if (hit == 0) arrayStuff::mainresponse = arrayStuff::noMatchResponsesArray[rand() % 5];
		else if (hit > 1) arrayStuff::mainresponse = "One thing at a time, please.";
		 label1->Text = msclr::interop::marshal_as<System::String^>(arrayStuff::mainresponse);

			 //// If White
			 //if (textBox1->BackColor == System::Drawing::Color::White) {
				//textBox1->Text = "";
				//label1->Text = msclr::interop::marshal_as<System::String^>(arrayStuff::alice_RNArray[2][0].response);
			 //}

			 //// If Yellow
			 //if (textBox1->BackColor == System::Drawing::Color::Yellow) {
				// if (progressBar1->Value < 100) {
				//	 label1->Text = "chatbot response";
				//	 textBox1->BackColor = System::Drawing::Color::White;
				//	 progressBar1->Value += 10;
				//}u
				//else {
				// label1->Text = "I'm guilty";
				//}
			 //}
		 }
};

}

//		int hit = 0;
//		keywords = input2Upper(textBox1->Text);
//		stringstream ss(keywords);
//		vector<string> tokens;
//		ofstream outputFile;
//		outputFile.open("datafile.txt");
//		mainresponse = "";
//
//
//		while(ss>>buf){
//			tokens.push_back(buf);
//			outputFile<<buf+"\n";
//			kwIndex = compareKeywords(buf);
//			if (kwIndex >= 0){
//				hit++;
//				mainresponse = alice_RNArray[kwIndex][rand() % 5].responseOutput();
//			}
//			
//		} outputFile.close();
//		if (hit == 0) mainresponse = noMatchResponsesArray[rand() % 5];
//		else if (hit > 1) mainresponse = "One thing at a time, please.";
//		cout << "Alice: " << mainresponse << endl << endl;
//
//	}while (running(buf));
//	