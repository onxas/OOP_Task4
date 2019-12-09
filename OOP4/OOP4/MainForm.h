#pragma once
#include  <cstdlib>
#include <ctime>
#include "Room.h"
#include "Request.h"
namespace OOP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(int nomera, int dni, int basePrice, int capacityPrice, int comfortPrice)		{
			
			InitializeComponent();
			hours = 0;
			RoomsGrid->Rows->Add(nomera);
			this->dni = dni;
			this->nomera = nomera;
			this->capacityPrice = capacityPrice;
			this->comfortPrice = comfortPrice;
			this->basePrice = basePrice;
			rooms = gcnew array<Room^>(nomera);
			capacities = gcnew array<Capacity^>(4);
			comforts = gcnew array<Comfort^>(3);
			for (int i = 0; i < 4; i++) {
				Capacity^ capacity = gcnew Capacity((CapacityCode)i, capacityPrice * (i + 1));
				capacities[i] = capacity;
				if (i < 3) {
					Comfort^ comfort = gcnew Comfort((ComfortCode)i, comfortPrice * (i + 1));
					comforts[i] = comfort;
				}
			}
			for (int i = 0; i < nomera; i++) {
				int capacity = rand() % 4;
				int comfort = rand() % 3;
				Room^ room = gcnew Room(capacities[capacity], comforts[comfort], basePrice);
				rooms[i] = room;
				this->RoomsGrid->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->RoomsGrid->Rows[i]->Cells[1]->Value = "Свободен";
				this->RoomsGrid->Rows[i]->Cells[1]->Style->ForeColor = Color::Green;
				this->RoomsGrid->Rows[i]->Cells[2]->Value = room->getCapacity()->getCapacityString();
				this->RoomsGrid->Rows[i]->Cells[3]->Value = room->getComfort()->getComfortString();
				this->RoomsGrid->Rows[i]->Cells[4]->Value = room->getPrice();
				this->RoomsGrid->Rows[i]->Cells[5]->Value = "-";
				this->RoomsGrid->Rows[i]->Cells[6]->Value = "-";
			}
			this->DayValue->Text = timePicker->Value.Day.ToString();
			this->timeValue->Text = timePicker->Value.TimeOfDay.Hours.ToString();
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
	private: System::Windows::Forms::DataGridView^ RoomsGrid;
	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ timeValue;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ DayValue;

	private: int nomera;
	private: int dni;
	private: int hours;
	private: int capacityPrice;
	private: int comfortPrice;
	private: int basePrice;
	private: array<Room^>^ rooms;
	private: array<Capacity^>^ capacities;
	private: array<Comfort^>^ comforts;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numberColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StatusColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CapacityColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComfortColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceColumn;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::DateTimePicker^ timePicker;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ requestGrid;







	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;



	private: System::ComponentModel::IContainer^ components;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent()
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->RoomsGrid = (gcnew System::Windows::Forms::DataGridView());
			this->numberColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StatusColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CapacityColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ComfortColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timeValue = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DayValue = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->timePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->requestGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->requestGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// RoomsGrid
			// 
			this->RoomsGrid->AllowUserToAddRows = false;
			this->RoomsGrid->AllowUserToDeleteRows = false;
			this->RoomsGrid->AllowUserToResizeColumns = false;
			this->RoomsGrid->AllowUserToResizeRows = false;
			this->RoomsGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RoomsGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->numberColumn,
					this->StatusColumn, this->CapacityColumn, this->ComfortColumn, this->PriceColumn, this->Column1, this->Column2
			});
			this->RoomsGrid->Location = System::Drawing::Point(109, 40);
			this->RoomsGrid->Name = L"RoomsGrid";
			this->RoomsGrid->Size = System::Drawing::Size(584, 603);
			this->RoomsGrid->TabIndex = 0;
			// 
			// numberColumn
			// 
			this->numberColumn->HeaderText = L"№";
			this->numberColumn->Name = L"numberColumn";
			this->numberColumn->ReadOnly = true;
			this->numberColumn->Width = 20;
			// 
			// StatusColumn
			// 
			this->StatusColumn->HeaderText = L"Статус";
			this->StatusColumn->Name = L"StatusColumn";
			this->StatusColumn->ReadOnly = true;
			this->StatusColumn->Width = 70;
			// 
			// CapacityColumn
			// 
			this->CapacityColumn->HeaderText = L"Вместимость";
			this->CapacityColumn->Name = L"CapacityColumn";
			this->CapacityColumn->ReadOnly = true;
			this->CapacityColumn->Width = 80;
			// 
			// ComfortColumn
			// 
			this->ComfortColumn->HeaderText = L"Комфортабельность";
			this->ComfortColumn->Name = L"ComfortColumn";
			this->ComfortColumn->ReadOnly = true;
			this->ComfortColumn->Width = 120;
			// 
			// PriceColumn
			// 
			this->PriceColumn->HeaderText = L"Цена";
			this->PriceColumn->Name = L"PriceColumn";
			this->PriceColumn->ReadOnly = true;
			this->PriceColumn->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Дата и Время Заселения";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Дата и Время Выселения";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Время:";
			// 
			// timeValue
			// 
			this->timeValue->AutoSize = true;
			this->timeValue->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeValue->Location = System::Drawing::Point(89, 9);
			this->timeValue->Name = L"timeValue";
			this->timeValue->Size = System::Drawing::Size(0, 25);
			this->timeValue->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"День:";
			// 
			// DayValue
			// 
			this->DayValue->AutoSize = true;
			this->DayValue->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DayValue->Location = System::Drawing::Point(74, 43);
			this->DayValue->Name = L"DayValue";
			this->DayValue->Size = System::Drawing::Size(0, 25);
			this->DayValue->TabIndex = 4;
			// 
			// startButton
			// 
			this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->Location = System::Drawing::Point(1179, 567);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(169, 76);
			this->startButton->TabIndex = 5;
			this->startButton->Text = L"Начать моделирование";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MainForm::startButton_Click);
			// 
			// timePicker
			// 
			this->timePicker->Location = System::Drawing::Point(12, 659);
			this->timePicker->Name = L"timePicker";
			this->timePicker->Size = System::Drawing::Size(200, 20);
			this->timePicker->TabIndex = 6;
			this->timePicker->UseWaitCursor = true;
			this->timePicker->Value = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->timePicker->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(984, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Последняя заявка";
			// 
			// requestGrid
			// 
			this->requestGrid->AllowUserToAddRows = false;
			this->requestGrid->AllowUserToDeleteRows = false;
			this->requestGrid->AllowUserToResizeColumns = false;
			this->requestGrid->AllowUserToResizeRows = false;
			this->requestGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->requestGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column8,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->requestGrid->Location = System::Drawing::Point(728, 43);
			this->requestGrid->Name = L"requestGrid";
			this->requestGrid->ReadOnly = true;
			this->requestGrid->Size = System::Drawing::Size(693, 57);
			this->requestGrid->TabIndex = 8;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Решение";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Тип";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Время начала";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Время конца";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Требуемый комфорт";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Требуемая вместимость";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(374, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Номера";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1433, 696);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->requestGrid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->timePicker);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->DayValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->timeValue);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RoomsGrid);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Гостиница";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->requestGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: void addHour() {
		DateTime now = timePicker->Value;
		timePicker->Value = now.AddHours(1);
		this->DayValue->Text = timePicker->Value.Day.ToString();
		this->timeValue->Text = timePicker->Value.TimeOfDay.Hours.ToString();
		hours++;
		for (int i = 0; i < nomera; i++) {
			if (rooms[i]->getLeaveDate() != nullptr)
				if (timePicker->Value.CompareTo(rooms[i]->getLeaveDate()) > 0) {
					rooms[i]->setAvaliable(true);
					this->RoomsGrid->Rows[i]->Cells[1]->Value = "Свободен";
					this->RoomsGrid->Rows[i]->Cells[1]->Style->ForeColor = Color::Green;
					this->RoomsGrid->Rows[i]->Cells[5]->Value = "-";
					this->RoomsGrid->Rows[i]->Cells[6]->Value = "-";
				}
		}
	}

		   private:void settleRoom(int i, DateTime^ end, DateTime^ start) {
			   rooms[i]->setAvaliable(false);
			   rooms[i]->setLeaveDate(end);
			   this->requestGrid->Rows[0]->Cells[0]->Value = "Заселено в " + (i + 1).ToString() + " номер";
			   this->requestGrid->Rows[0]->Cells[0]->Style->ForeColor = Color::Green;
			   this->RoomsGrid->Rows[i]->Cells[1]->Value = "Занято";
			   this->RoomsGrid->Rows[i]->Cells[1]->Style->ForeColor = Color::Red;
			   this->RoomsGrid->Rows[i]->Cells[5]->Value = "День: " + start->Day + "Время: " + start->Hour;
			   this->RoomsGrid->Rows[i]->Cells[6]->Value = "День: " + end->Day + "Время: " + end->Hour;
		   }

	private: void handleRequest(Request^ request) {
		this->requestGrid->Rows[0]->Cells[1]->Value = request->getTypeString();
		DateTime^ start = request->getStartTime();
		this->requestGrid->Rows[0]->Cells[2]->Value = "День: " + start->Day + "Время: " + start->Hour;
		DateTime^ end = request->getEndTime();
		this->requestGrid->Rows[0]->Cells[3]->Value = "День: " + end->Day + "Время: " + end->Hour;
		this->requestGrid->Rows[0]->Cells[4]->Value = request->getComfort()->getComfortString();
		this->requestGrid->Rows[0]->Cells[5]->Value = request->getCapacity()->getCapacityString();
		for (int i = 0; i < nomera; i++) {
			if (this->rooms[i]->isAvalibale() &&
				(int)this->rooms[i]->getCapacity()->getCode() == (int)request->getCapacity()->getCode() &&
				(int)this->rooms[i]->getComfort()->getCode() == (int)request->getComfort()->getCode())
			{
				settleRoom(i, end, start);
				return;
			}
			array<int>^ lost = gcnew array<int>(nomera);
			for (int i = 0; i < nomera; i++) {
				int roomCap = (int)this->rooms[i]->getCapacity()->getCode();
				int requestCap = (int)request->getCapacity()->getCode();
				int roomCom = (int)this->rooms[i]->getComfort()->getCode();
				int requestCom = (int)request->getComfort()->getCode();
				if (this->rooms[i]->isAvalibale()) {
					lost[i] = (requestCap - roomCap) * this->capacityPrice + (requestCom - roomCom) * this->comfortPrice;
				}
				else lost[i] = -1;
			}
			int min = capacityPrice * 4 + basePrice + comfortPrice * 3;
			int minIndex=-1;
			for (int i = 0; i < nomera; i++) {
				if (lost[i] !=-1 && lost[i] <= min) {
					min = lost[i];
					minIndex = i;
				}
			}
			if (minIndex != -1){
				settleRoom(minIndex, end, start);
				return;
			}
			this->requestGrid->Rows[0]->Cells[0]->Value = "Отклоненно";
			this->requestGrid->Rows[0]->Cells[0]->Style->ForeColor = Color::Red;

		}

		this->timer2->Stop();
		int delay = 3 + rand() % 8;
		timer2->Interval = 1000 * delay;
		timer2->Start();
	}

	private: void makeRequest() {
		DateTime now = timePicker->Value;
		int nowDay = now.Day;
		int nowHour = now.Hour;
		int startDay;
		if (dni - nowDay != 0)
			startDay = nowDay + rand() % (dni - nowDay);
		else startDay = nowDay;
		int startHour;
		if (startDay != nowDay) startHour = rand() % 24;
		else startHour = nowHour + (rand() % (24 - nowHour));
		int endDay;
		if (dni - startDay != 0) {
			endDay = startDay + rand() % (dni - startDay);
		}
		else endDay = startDay;
		int endHour;
		if (endDay != startDay) startHour = rand() % 24;
		else endHour = startHour + (rand() % (24 - startHour));

		DateTime^ start = gcnew DateTime(2000, 1, startDay, startHour, 0, 0);
		DateTime^ end = gcnew DateTime(2000, 1, endDay, endHour, 0, 0);
		Comfort^ comfort = this->comforts[rand() % 3];
		Capacity^ capacity = this->capacities[rand() % 4];
		RequestType type;
		int r = rand() % 2;
		switch (r) {
		case 0:type = Заселение; break;
		case 1:type = Бронирование; break;
		}
		Request^ request = gcnew Request(start, end, comfort, capacity, type);
		handleRequest(request);
	}
			   
#pragma endregion

		



	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}

	private:   System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (hours < dni * 24)
			addHour();
		else timer1->Stop();
	}

	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		requestGrid->Rows->Add(1);
		timer1->Start();
		int delay = 2 + rand() % 5;
		timer2->Interval = 1000 * delay;
		timer2->Start();
	}


private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {	
	if (hours < dni * 24)
		makeRequest();
	else timer1->Stop();
}
};
}
