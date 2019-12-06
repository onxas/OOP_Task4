#pragma once

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->SettingsDaysTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->settingsLabel1 = (gcnew System::Windows::Forms::Label());
			this->SettingsLabel2 = (gcnew System::Windows::Forms::Label());
			this->SettingsRoomsTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->SettingsDaysValueLabel = (gcnew System::Windows::Forms::Label());
			this->SettingsRoomsValueLabel = (gcnew System::Windows::Forms::Label());
			this->ApplySettingsButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsDaysTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsRoomsTrackBar))->BeginInit();
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
			this->SettingsLabel2->Location = System::Drawing::Point(12, 119);
			this->SettingsLabel2->Name = L"SettingsLabel2";
			this->SettingsLabel2->Size = System::Drawing::Size(163, 21);
			this->SettingsLabel2->TabIndex = 2;
			this->SettingsLabel2->Text = L"Количество номеров:";
			// 
			// SettingsRoomsTrackBar
			// 
			this->SettingsRoomsTrackBar->Location = System::Drawing::Point(12, 143);
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
			this->SettingsRoomsValueLabel->Location = System::Drawing::Point(174, 143);
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
			this->ApplySettingsButton->Location = System::Drawing::Point(224, 134);
			this->ApplySettingsButton->Name = L"ApplySettingsButton";
			this->ApplySettingsButton->Size = System::Drawing::Size(75, 30);
			this->ApplySettingsButton->TabIndex = 6;
			this->ApplySettingsButton->Text = L"Запуск";
			this->ApplySettingsButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ApplySettingsButton->UseVisualStyleBackColor = false;
			this->ApplySettingsButton->Click += gcnew System::EventHandler(this, &SettingsForm::ApplySettingsButton_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 221);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SettingsDaytrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->SettingsDaysValueLabel->Text = this->SettingsDaysTrackBar->Value.ToString();
	}
private: System::Void SettingsRoomsTrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
	this->SettingsRoomsValueLabel->Text = this->SettingsRoomsTrackBar->Value.ToString();
}
private: System::Void ApplySettingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
