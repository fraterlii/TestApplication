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

	int index = -100;
	bool increaseProgressBar1 = false;
	bool increaseProgressBar2 = false;

	bool murderDoneTalking = false;
	bool drugsDoneTalking = false;

	int getRandom() {
		return (rand() % 3);
	}

	void retrieveDrugsTableResponse(std::string currentUserInput) {
		int responseNumber = getRandom();

		if (drugsDoneTalking == false) {
			// array has not been visited before
			// output a random response from category 3
			if (arrayStuff::drugsTableInitialized == false) {
				arrayStuff::drugsTableInitialized = true;
				arrayStuff::mainresponse = arrayStuff::alice_DrugsTable[arrayStuff::drugsTableCurrentCategory][responseNumber].response;
				arrayStuff::alice_DrugsTable[arrayStuff::drugsTableCurrentCategory][responseNumber].outputCount += 1;
			}
			else {
				// if the user is repeating himself, penalize him
				if (currentUserInput == arrayStuff::previousUserInput) {
					for (int i = 0; i < 3; i++){
						if (arrayStuff::alice_DrugsTable[0][i].outputCount == 0) {
							arrayStuff::mainresponse = arrayStuff::alice_DrugsTable[0][i].response;
							arrayStuff::alice_DrugsTable[0][i].outputCount += 1;
							increaseProgressBar2 = true;
							break;
						}
						// if the user runs out of chances, he fails the Case Point
						else if (arrayStuff::alice_DrugsTable[0][i].outputCount != 0 && i == 2) {
							arrayStuff::mainresponse = "We're done talking about this.";
							increaseProgressBar2 = true;
							drugsDoneTalking = true;
						}
					}
				}
				else {
					if (index == 0){
						for (int i = 0; i < 3; i++){
						if (arrayStuff::alice_DrugsTable[2][i].outputCount == 0) {
							arrayStuff::mainresponse = arrayStuff::alice_DrugsTable[2][i].response;
							arrayStuff::alice_DrugsTable[2][i].outputCount += 1;
							increaseProgressBar2 = true;
							break;
						}
						// if the user runs out of chances, he fails the Case Point
						else if (arrayStuff::alice_DrugsTable[2][i].outputCount != 0 && i == 2) {
							arrayStuff::mainresponse = "We're done talking about this.";
							increaseProgressBar2 = true;
							drugsDoneTalking = true;
						}
						}
					}
					if (index == 10) {
						arrayStuff::mainresponse = arrayStuff::alice_DrugsTable[3][responseNumber].response;
						arrayStuff::alice_DrugsTable[arrayStuff::drugsTableCurrentCategory][responseNumber].outputCount += 1;
						increaseProgressBar1 = true;
					}
					if (index == 20) {
						arrayStuff::mainresponse = arrayStuff::alice_DrugsTable[4][responseNumber].response;
						arrayStuff::alice_DrugsTable[arrayStuff::drugsTableCurrentCategory][responseNumber].outputCount += 1;
						increaseProgressBar1 = true;
					}
				}
			}
			arrayStuff::drugsTableCurrentCategory += 1;
		
		}
		else if (drugsDoneTalking == true) {
			arrayStuff::mainresponse = "We're done talking about this.";
			increaseProgressBar2 = true;
		}
	}


	void retrieveMurderTableResponse(std::string currentUserInput) {
		int responseNumber = getRandom();

		if (murderDoneTalking == false) {
			// array has not been visited before
			// output a random response from category 3
			if (arrayStuff::murderTableInitialized == false) {
				arrayStuff::murderTableInitialized = true;
				arrayStuff::mainresponse = arrayStuff::alice_MurderTable[arrayStuff::murderTableCurrentCategory][responseNumber].response;
				arrayStuff::alice_MurderTable[arrayStuff::murderTableCurrentCategory][responseNumber].outputCount += 1;
			}
			else {
				// if the user is repeating himself, penalize him
				if (currentUserInput == arrayStuff::previousUserInput) {
					for (int i = 0; i < 3; i++){
						if (arrayStuff::alice_MurderTable[0][i].outputCount == 0) {
							arrayStuff::mainresponse = arrayStuff::alice_MurderTable[0][i].response;
							arrayStuff::alice_MurderTable[0][i].outputCount += 1;
							increaseProgressBar2 = true;
							break;
						}
						// if the user runs out of chances, he fails the Case Point
						else if (arrayStuff::alice_MurderTable[0][i].outputCount != 0 && i == 2) {
							arrayStuff::mainresponse = "We're done talking about this.";
							increaseProgressBar2 = true;
							murderDoneTalking = true;
						}
					}
				}
				else {
					if (index == 4){
						for (int i = 0; i < 3; i++){
						if (arrayStuff::alice_MurderTable[2][i].outputCount == 0) {
							arrayStuff::mainresponse = arrayStuff::alice_MurderTable[2][i].response;
							arrayStuff::alice_MurderTable[2][i].outputCount += 1;
							increaseProgressBar2 = true;
							break;
						}
						// if the user runs out of chances, he fails the Case Point
						else if (arrayStuff::alice_MurderTable[2][i].outputCount != 0 && i == 2) {
							arrayStuff::mainresponse = "We're done talking about this.";
							increaseProgressBar2 = true;
							murderDoneTalking = true;
						}
						}
					}
					if (index == 14) {
						arrayStuff::mainresponse = arrayStuff::alice_MurderTable[3][responseNumber].response;
						arrayStuff::alice_MurderTable[arrayStuff::murderTableCurrentCategory][responseNumber].outputCount += 1;
						increaseProgressBar1 = true;
					}
					if (index == 24) {
						arrayStuff::mainresponse = arrayStuff::alice_MurderTable[4][responseNumber].response;
						arrayStuff::alice_MurderTable[arrayStuff::murderTableCurrentCategory][responseNumber].outputCount += 1;
						increaseProgressBar1 = true;
					}
				}
			}
			arrayStuff::murderTableCurrentCategory += 1;
		
		}
		else if (murderDoneTalking == true) {
			arrayStuff::mainresponse = "We're done talking about this.";
			increaseProgressBar2 = true;
		}
	}

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
			arrayStuff::build_alice_MurderTable();
			arrayStuff::build_alice_DrugsTable();
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
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Echevvery))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Suspect))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Echevvery
			// 
			this->Echevvery->BackColor = System::Drawing::Color::White;
			this->Echevvery->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Echevvery.ErrorImage")));
			this->Echevvery->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Echevvery.Image")));
			this->Echevvery->ImageLocation = L"";
			this->Echevvery->Location = System::Drawing::Point(210, 72);
			this->Echevvery->Name = L"Echevvery";
			this->Echevvery->Size = System::Drawing::Size(535, 495);
			this->Echevvery->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Echevvery->TabIndex = 0;
			this->Echevvery->TabStop = false;
			// 
			// Suspect
			// 
			this->Suspect->BackColor = System::Drawing::Color::White;
			this->Suspect->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Suspect.ErrorImage")));
			this->Suspect->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Suspect.Image")));
			this->Suspect->ImageLocation = L"";
			this->Suspect->Location = System::Drawing::Point(751, 72);
			this->Suspect->Name = L"Suspect";
			this->Suspect->Size = System::Drawing::Size(535, 495);
			this->Suspect->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
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
			this->CharmButton->Text = L"Press the Issue!";
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
			this->label2->Text = L"The suspect is guilty";
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
			this->label3->Text = L"You\'ve been outmatched";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(4, 13);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label4->Size = System::Drawing::Size(181, 39);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Alice Krimieux";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 91);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label5->Size = System::Drawing::Size(181, 39);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Born: 02/10/1969";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 52);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label6->Size = System::Drawing::Size(181, 39);
			this->label6->TabIndex = 2;
			this->label6->Text = L"43, Female";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 277);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label7->Size = System::Drawing::Size(181, 39);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Arrest Record:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 316);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label8->Size = System::Drawing::Size(181, 39);
			this->label8->TabIndex = 4;
			this->label8->Text = L"1. Drug Possession";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 355);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label9->Size = System::Drawing::Size(181, 39);
			this->label9->TabIndex = 5;
			this->label9->Text = L"2. Assault with a deadly weapon";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(4, 506);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label10->Size = System::Drawing::Size(181, 39);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Additional Info:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(4, 545);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label11->Size = System::Drawing::Size(181, 39);
			this->label11->TabIndex = 7;
			this->label11->Text = L"1. Alice\'s boyfriend is a known drug dealer";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->BackColor == System::Drawing::Color::White) {
				 textBox1->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (textBox1->BackColor == System::Drawing::Color::Yellow) {
				 textBox1->BackColor = System::Drawing::Color::White;
			 }
			 
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
			arrayStuff::kwIndex = arrayStuff::compareKeywords(arrayStuff::buf, textBox1->BackColor);
			if (arrayStuff::kwIndex >= 0) {
				index = arrayStuff::kwIndex;
			}
			if (arrayStuff::kwIndex >= 0){
				hit++;
				/*arrayStuff::mainresponse = arrayStuff::alice_RNArray[arrayStuff::kwIndex][rand() % 5].responseOutput();*/
			}
			
		} outputFile.close();
		if (hit == 0) {
			arrayStuff::mainresponse = arrayStuff::noMatchResponsesArray[rand() % 5];
			label1->Text = msclr::interop::marshal_as<System::String^>(arrayStuff::mainresponse);
			progressBar2->Value += 10;
		}
		else if (hit > 1){
			arrayStuff::mainresponse = "One thing at a time, please.";
			label1->Text = msclr::interop::marshal_as<System::String^>(arrayStuff::mainresponse);
		}
		else if(hit == 1){
			if (index == 0 || index == 10 || index == 20) {
				retrieveDrugsTableResponse(context.marshal_as<std::string>(textBox1->Text));
				label1->Text = msclr::interop::marshal_as<System::String^>(arrayStuff::mainresponse);

				if (index == 10 && increaseProgressBar1 && (increaseProgressBar2 == false)) {
					progressBar1->Value += 10;
					increaseProgressBar1 = false;
				}
				else if (index == 10 && (increaseProgressBar2 == true)) {
					progressBar2->Value += 15;
					increaseProgressBar2 = false;
				}
				else if (index == 20) {
					progressBar1->Value += 30;
					increaseProgressBar1 = false;
					drugsDoneTalking = true;
				}
				else if (index == 0 && (increaseProgressBar2 == true)) {
					progressBar2->Value += 10;
					increaseProgressBar2 = false;
				}
			}

			
			if (index == 4 || index == 14 || index == 24) {
				retrieveMurderTableResponse(context.marshal_as<std::string>(textBox1->Text));
				label1->Text = msclr::interop::marshal_as<System::String^>(arrayStuff::mainresponse);

				if (index == 14 && increaseProgressBar1 && (increaseProgressBar2 == false)) {
					progressBar1->Value += 10;
					increaseProgressBar1 = false;
				}
				else if (index == 14 && (increaseProgressBar2 == true)) {
					progressBar2->Value += 15;
					increaseProgressBar2 = false;
				}
				else if (index == 24) {
					progressBar1->Value += 30;
					increaseProgressBar1 = false;
					murderDoneTalking = true;
				}
				else if (index == 4 && (increaseProgressBar2 == true)) {
					progressBar2->Value += 10;
					increaseProgressBar2 = false;
				}
			}

			if (index == 100) {
				progressBar2->Value += 30;
			}

		arrayStuff::previousUserInput = context.marshal_as<std::string>(textBox1->Text);
		textBox1->Text = "";
		textBox1->BackColor = System::Drawing::Color::White;
		index = -1;
		 
		 }
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