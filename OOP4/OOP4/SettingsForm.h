#pragma once
#include "MainForm.h"

namespace OOP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ SettingsDaysTrackBar;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ settingsLabel1;
	private: System::Windows::Forms::Label^ SettingsLabel2;
	private: System::Windows::Forms::TrackBar^ SettingsRoomsTrackBar;
	private: System::Windows::Forms::Label^ SettingsDaysValueLabel;
	private: System::Windows::Forms::Label^ SettingsRoomsValueLabel;
	private: System::Windows::Forms::Button^ ApplySettingsButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ BasePriceBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ CapcityPriceBox;
	private: System::Windows::Forms::TextBox^ ComfortPriceBox;


	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::TextBox^ maxRequestBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ minRequestBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ speedLabel;

	private: System::Windows::Forms::TrackBar^ SpeedBar;
	private: System::Windows::Forms::Label^ label7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->SettingsDaysTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->settingsLabel1 = (gcnew System::Windows::Forms::Label());
			this->SettingsLabel2 = (gcnew System::Windows::Forms::Label());
			this->SettingsRoomsTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->SettingsDaysValueLabel = (gcnew System::Windows::Forms::Label());
			this->SettingsRoomsValueLabel = (gcnew System::Windows::Forms::Label());
			this->ApplySettingsButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BasePriceBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CapcityPriceBox = (gcnew System::Windows::Forms::TextBox());
			this->ComfortPriceBox = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->minRequestBox = (gcnew System::Windows::Forms::TextBox());
			this->maxRequestBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->speedLabel = (gcnew System::Windows::Forms::Label());
			this->SpeedBar = (gcnew System::Windows::Forms::TrackBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsDaysTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsRoomsTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpeedBar))->BeginInit();
			this->SuspendLayout();
			// 
			// SettingsDaysTrackBar
			// 
			this->SettingsDaysTrackBar->Location = System::Drawing::Point(16, 50);
			this->SettingsDaysTrackBar->Maximum = 30;
			this->SettingsDaysTrackBar->Minimum = 12;
			this->SettingsDaysTrackBar->Name = L"SettingsDaysTrackBar";
			this->SettingsDaysTrackBar->Size = System::Drawing::Size(246, 45);
			this->SettingsDaysTrackBar->TabIndex = 0;
			this->SettingsDaysTrackBar->Value = 12;
			this->SettingsDaysTrackBar->Scroll += gcnew System::EventHandler(this, &SettingsForm::SettingsDaytrackBar_Scroll);
			// 
			// settingsLabel1
			// 
			this->settingsLabel1->AutoSize = true;
			this->settingsLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->settingsLabel1->Location = System::Drawing::Point(12, 26);
			this->settingsLabel1->Name = L"settingsLabel1";
			this->settingsLabel1->Size = System::Drawing::Size(253, 21);
			this->settingsLabel1->TabIndex = 1;
			this->settingsLabel1->Text = L"Количество дней моделирования:";
			// 
			// SettingsLabel2
			// 
			this->SettingsLabel2->AutoSize = true;
			this->SettingsLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SettingsLabel2->Location = System::Drawing::Point(16, 97);
			this->SettingsLabel2->Name = L"SettingsLabel2";
			this->SettingsLabel2->Size = System::Drawing::Size(163, 21);
			this->SettingsLabel2->TabIndex = 2;
			this->SettingsLabel2->Text = L"Количество номеров:";
			// 
			// SettingsRoomsTrackBar
			// 
			this->SettingsRoomsTrackBar->Location = System::Drawing::Point(16, 121);
			this->SettingsRoomsTrackBar->Maximum = 30;
			this->SettingsRoomsTrackBar->Minimum = 20;
			this->SettingsRoomsTrackBar->Name = L"SettingsRoomsTrackBar";
			this->SettingsRoomsTrackBar->Size = System::Drawing::Size(156, 45);
			this->SettingsRoomsTrackBar->TabIndex = 3;
			this->SettingsRoomsTrackBar->Value = 20;
			this->SettingsRoomsTrackBar->Scroll += gcnew System::EventHandler(this, &SettingsForm::SettingsRoomsTrackBar_Scroll);
			// 
			// SettingsDaysValueLabel
			// 
			this->SettingsDaysValueLabel->AutoSize = true;
			this->SettingsDaysValueLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SettingsDaysValueLabel->Location = System::Drawing::Point(271, 50);
			this->SettingsDaysValueLabel->Name = L"SettingsDaysValueLabel";
			this->SettingsDaysValueLabel->Size = System::Drawing::Size(28, 21);
			this->SettingsDaysValueLabel->TabIndex = 4;
			this->SettingsDaysValueLabel->Text = L"12";
			// 
			// SettingsRoomsValueLabel
			// 
			this->SettingsRoomsValueLabel->AutoSize = true;
			this->SettingsRoomsValueLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SettingsRoomsValueLabel->Location = System::Drawing::Point(178, 121);
			this->SettingsRoomsValueLabel->Name = L"SettingsRoomsValueLabel";
			this->SettingsRoomsValueLabel->Size = System::Drawing::Size(28, 21);
			this->SettingsRoomsValueLabel->TabIndex = 5;
			this->SettingsRoomsValueLabel->Text = L"20";
			// 
			// ApplySettingsButton
			// 
			this->ApplySettingsButton->BackColor = System::Drawing::SystemColors::Control;
			this->ApplySettingsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ApplySettingsButton->Location = System::Drawing::Point(293, 228);
			this->ApplySettingsButton->Name = L"ApplySettingsButton";
			this->ApplySettingsButton->Size = System::Drawing::Size(75, 30);
			this->ApplySettingsButton->TabIndex = 6;
			this->ApplySettingsButton->Text = L"Запуск";
			this->ApplySettingsButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ApplySettingsButton->UseVisualStyleBackColor = false;
			this->ApplySettingsButton->Click += gcnew System::EventHandler(this, &SettingsForm::ApplySettingsButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(406, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 21);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Базовая цена номера:";
			// 
			// BasePriceBox
			// 
			this->BasePriceBox->Location = System::Drawing::Point(410, 50);
			this->BasePriceBox->Name = L"BasePriceBox";
			this->BasePriceBox->Size = System::Drawing::Size(100, 20);
			this->BasePriceBox->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(406, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 21);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Наценка за уровень вместимости:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(406, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 21);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Наценка за уровень комфорта:";
			// 
			// CapcityPriceBox
			// 
			this->CapcityPriceBox->Location = System::Drawing::Point(410, 98);
			this->CapcityPriceBox->Name = L"CapcityPriceBox";
			this->CapcityPriceBox->Size = System::Drawing::Size(100, 20);
			this->CapcityPriceBox->TabIndex = 11;
			// 
			// ComfortPriceBox
			// 
			this->ComfortPriceBox->Location = System::Drawing::Point(410, 146);
			this->ComfortPriceBox->Name = L"ComfortPriceBox";
			this->ComfortPriceBox->Size = System::Drawing::Size(100, 20);
			this->ComfortPriceBox->TabIndex = 12;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(406, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 21);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Минимальное время заявки:";
			// 
			// minRequestBox
			// 
			this->minRequestBox->Location = System::Drawing::Point(410, 193);
			this->minRequestBox->Name = L"minRequestBox";
			this->minRequestBox->Size = System::Drawing::Size(100, 20);
			this->minRequestBox->TabIndex = 14;
			// 
			// maxRequestBox
			// 
			this->maxRequestBox->Location = System::Drawing::Point(410, 243);
			this->maxRequestBox->Name = L"maxRequestBox";
			this->maxRequestBox->Size = System::Drawing::Size(100, 20);
			this->maxRequestBox->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(406, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 21);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Максимальное время заявки:";
			// 
			// speedLabel
			// 
			this->speedLabel->AutoSize = true;
			this->speedLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->speedLabel->Location = System::Drawing::Point(178, 219);
			this->speedLabel->Name = L"speedLabel";
			this->speedLabel->Size = System::Drawing::Size(19, 21);
			this->speedLabel->TabIndex = 19;
			this->speedLabel->Text = L"3";
			// 
			// SpeedBar
			// 
			this->SpeedBar->Location = System::Drawing::Point(16, 219);
			this->SpeedBar->Minimum = 1;
			this->SpeedBar->Name = L"SpeedBar";
			this->SpeedBar->Size = System::Drawing::Size(156, 45);
			this->SpeedBar->TabIndex = 18;
			this->SpeedBar->Value = 3;
			this->SpeedBar->Scroll += gcnew System::EventHandler(this, &SettingsForm::SpeedBar_Scroll);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(16, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(258, 42);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Скорость моделирования\r\n(реальных секунд за час в модели)\r\n";
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 270);
			this->Controls->Add(this->speedLabel);
			this->Controls->Add(this->SpeedBar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maxRequestBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->minRequestBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ComfortPriceBox);
			this->Controls->Add(this->CapcityPriceBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BasePriceBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ApplySettingsButton);
			this->Controls->Add(this->SettingsRoomsValueLabel);
			this->Controls->Add(this->SettingsDaysValueLabel);
			this->Controls->Add(this->SettingsRoomsTrackBar);
			this->Controls->Add(this->SettingsLabel2);
			this->Controls->Add(this->settingsLabel1);
			this->Controls->Add(this->SettingsDaysTrackBar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"SettingsForm";
			this->Text = L"SettingsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsDaysTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsRoomsTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpeedBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: void clear() {
			errorProvider1->SetError(BasePriceBox, "");
			errorProvider1->SetError(CapcityPriceBox, "");
			errorProvider1->SetError(ComfortPriceBox, "");
		}

	private: System::Void SettingsDaytrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->SettingsDaysValueLabel->Text = this->SettingsDaysTrackBar->Value.ToString();
	}

	private: System::Void SettingsRoomsTrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->SettingsRoomsValueLabel->Text = this->SettingsRoomsTrackBar->Value.ToString();
	}

	private: System::Void ApplySettingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clear();
		int nomera = System::Int32::Parse(this->SettingsRoomsValueLabel->Text);
		int dni = System::Int32::Parse(this->SettingsDaysValueLabel->Text);
		int speed = System::Int32::Parse(this->speedLabel->Text);
		int basePrice;
		int comfortPrice;
		int capacityPrice;
		int minRequest;
		int maxRequest;
		bool result = System::Int32::TryParse(this->BasePriceBox->Text, basePrice);
		if (!result || basePrice <= 0) {
			errorProvider1->SetError(BasePriceBox, "Ошибка!");
		}
		else {
			result = System::Int32::TryParse(this->CapcityPriceBox->Text, capacityPrice);
			if (!result || capacityPrice < 0) {
				errorProvider1->SetError(CapcityPriceBox, "Ошибка!");
			}
			else {
				result = System::Int32::TryParse(this->ComfortPriceBox->Text, comfortPrice);
				if (!result || comfortPrice < 0) {
					errorProvider1->SetError(ComfortPriceBox, "Ошибка!");
				}
				else {
					result = System::Int32::TryParse(this->minRequestBox->Text, minRequest);
					if (!result || minRequest <= 1)
						errorProvider1->SetError(minRequestBox, "Ошибка");
					else {
						result = System::Int32::TryParse(this->minRequestBox->Text, maxRequest);
						if (!result || maxRequest < minRequest)
							errorProvider1->SetError(maxRequestBox, "Ошибка");

						else {
							MainForm^ form = gcnew MainForm(nomera, dni, basePrice, capacityPrice, comfortPrice,minRequest,maxRequest,speed);
							form->Show();
							this->Hide();
						}
					}
				}
			}
		}
		
	}
	
	private: System::Void SpeedBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->speedLabel->Text = this->SpeedBar->Value.ToString();
	}
};
}
