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
		MainForm(int nomera, int dni, int basePrice, int capacityPrice, int comfortPrice, int minRequest, int maxRequest, int speed) {

			InitializeComponent();
			hours = 0;
			RoomsGrid->Rows->Add(nomera);
			this->dni = dni;
			this->nomera = nomera;
			this->capacityPrice = capacityPrice;
			this->comfortPrice = comfortPrice;
			this->basePrice = basePrice;
			this->minRequest = minRequest;
			this->maxRequest = maxRequest;
			this->speed = speed;
			this->active = false;
			money = 0;
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
				switch (capacity) {
				case 0: capacity0Count++; break;
				case 1: capacity1Count++; break;
				case 2: capacity2Count++; break;
				case 3: capacity3Count++; break;
				}
				switch (comfort) {
				case 0: comfort0Count++; break;
				case 1: comfort1Count++; break;
				case 2: comfort2Count++; break;
				}
				Room^ room = gcnew Room(capacities[capacity], comforts[comfort], basePrice);
				rooms[i] = room;
				this->RoomsGrid->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->RoomsGrid->Rows[i]->Cells[1]->Value = "Cвободен";
				this->RoomsGrid->Rows[i]->Cells[1]->Style->ForeColor = Color::Green;
				this->RoomsGrid->Rows[i]->Cells[2]->Value = rooms[i]->getCapacity()->getCapacityString();
				this->RoomsGrid->Rows[i]->Cells[3]->Value = rooms[i]->getComfort()->getComfortString();
				this->RoomsGrid->Rows[i]->Cells[4]->Value = rooms[i]->getPrice().ToString();
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
	private: int minRequest;
	private: int maxRequest;
	private: int speed;
	private: float money;
	private: bool active;
	private: int capacity0Count=0;
	private: int capacity1Count=0;
	private: int capacity2Count=0;
	private: int capacity3Count=0;
	private: int comfort0Count=0;
	private: int comfort1Count=0;
	private: int comfort2Count=0;
	private: int capacity0Reserved=0;
	private: int capacity1Reserved=0;
	private: int capacity2Reserved=0;
	private: int capacity3Reserved=0;
	private: int comfort0Reserved=0;
	private: int comfort1Reserved=0;
	private: int comfort2Reserved=0;
	private: array<Room^>^ rooms;
	private: array<Capacity^>^ capacities;
	private: array<Comfort^>^ comforts;
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::DateTimePicker^ timePicker;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ requestGrid;







	private: System::Windows::Forms::Label^ label4;






private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ moneyLabel;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ numberColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ StatusColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CapacityColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComfortColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::Label^ comf0Val;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ comf1Val;
private: System::Windows::Forms::Label^ comf2Val;


private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ cap0Val;

private: System::Windows::Forms::Label^ xzc;
private: System::Windows::Forms::Label^ cap1Val;




private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ cap2Val;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ cap3Val;

private: System::Windows::Forms::Label^ label19;






















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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->moneyLabel = (gcnew System::Windows::Forms::Label());
			this->comf0Val = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comf1Val = (gcnew System::Windows::Forms::Label());
			this->comf2Val = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cap0Val = (gcnew System::Windows::Forms::Label());
			this->xzc = (gcnew System::Windows::Forms::Label());
			this->cap1Val = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->cap2Val = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->cap3Val = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
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
			this->RoomsGrid->Location = System::Drawing::Point(156, 43);
			this->RoomsGrid->Name = L"RoomsGrid";
			this->RoomsGrid->Size = System::Drawing::Size(645, 710);
			this->RoomsGrid->TabIndex = 0;
			// 
			// numberColumn
			// 
			this->numberColumn->HeaderText = L"№";
			this->numberColumn->Name = L"numberColumn";
			this->numberColumn->ReadOnly = true;
			this->numberColumn->Width = 30;
			// 
			// StatusColumn
			// 
			this->StatusColumn->HeaderText = L"Статус";
			this->StatusColumn->Name = L"StatusColumn";
			this->StatusColumn->ReadOnly = true;
			// 
			// CapacityColumn
			// 
			this->CapacityColumn->HeaderText = L"Вместимость";
			this->CapacityColumn->Name = L"CapacityColumn";
			this->CapacityColumn->ReadOnly = true;
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
			this->label1->Location = System::Drawing::Point(12, 75);
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
			this->timeValue->Location = System::Drawing::Point(89, 75);
			this->timeValue->Name = L"timeValue";
			this->timeValue->Size = System::Drawing::Size(20, 25);
			this->timeValue->TabIndex = 2;
			this->timeValue->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 37);
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
			this->DayValue->Location = System::Drawing::Point(78, 37);
			this->DayValue->Name = L"DayValue";
			this->DayValue->Size = System::Drawing::Size(20, 25);
			this->DayValue->TabIndex = 4;
			this->DayValue->Text = L"-";
			// 
			// startButton
			// 
			this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->Location = System::Drawing::Point(1402, 677);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(169, 76);
			this->startButton->TabIndex = 5;
			this->startButton->Text = L"Начать моделирование";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MainForm::startButton_Click);
			// 
			// timePicker
			// 
			this->timePicker->Location = System::Drawing::Point(12, 733);
			this->timePicker->Name = L"timePicker";
			this->timePicker->Size = System::Drawing::Size(10, 20);
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
			this->label2->Location = System::Drawing::Point(1179, 12);
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
			this->requestGrid->Location = System::Drawing::Point(908, 43);
			this->requestGrid->Name = L"requestGrid";
			this->requestGrid->ReadOnly = true;
			this->requestGrid->Size = System::Drawing::Size(654, 57);
			this->requestGrid->TabIndex = 8;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Решение";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 130;
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
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Время конца";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
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
			this->label4->Location = System::Drawing::Point(421, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Номера";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(903, 723);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Общий заработок:";
			// 
			// moneyLabel
			// 
			this->moneyLabel->AutoSize = true;
			this->moneyLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moneyLabel->Location = System::Drawing::Point(1071, 723);
			this->moneyLabel->Name = L"moneyLabel";
			this->moneyLabel->Size = System::Drawing::Size(22, 25);
			this->moneyLabel->TabIndex = 11;
			this->moneyLabel->Text = L"0";
			// 
			// comf0Val
			// 
			this->comf0Val->AutoSize = true;
			this->comf0Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comf0Val->Location = System::Drawing::Point(1173, 137);
			this->comf0Val->Name = L"comf0Val";
			this->comf0Val->Size = System::Drawing::Size(22, 25);
			this->comf0Val->TabIndex = 13;
			this->comf0Val->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(902, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(265, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"% занятых простых номеров:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(902, 196);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(277, 25);
			this->label9->TabIndex = 14;
			this->label9->Text = L"% занятых полулюкс номеров:";
			// 
			// comf1Val
			// 
			this->comf1Val->AutoSize = true;
			this->comf1Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comf1Val->Location = System::Drawing::Point(1185, 196);
			this->comf1Val->Name = L"comf1Val";
			this->comf1Val->Size = System::Drawing::Size(22, 25);
			this->comf1Val->TabIndex = 15;
			this->comf1Val->Text = L"0";
			// 
			// comf2Val
			// 
			this->comf2Val->AutoSize = true;
			this->comf2Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comf2Val->Location = System::Drawing::Point(1149, 262);
			this->comf2Val->Name = L"comf2Val";
			this->comf2Val->Size = System::Drawing::Size(22, 25);
			this->comf2Val->TabIndex = 17;
			this->comf2Val->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(902, 262);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(241, 25);
			this->label11->TabIndex = 16;
			this->label11->Text = L"% занятых  люкс номеров:";
			// 
			// cap0Val
			// 
			this->cap0Val->AutoSize = true;
			this->cap0Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cap0Val->Location = System::Drawing::Point(1178, 327);
			this->cap0Val->Name = L"cap0Val";
			this->cap0Val->Size = System::Drawing::Size(22, 25);
			this->cap0Val->TabIndex = 19;
			this->cap0Val->Text = L"0";
			// 
			// xzc
			// 
			this->xzc->AutoSize = true;
			this->xzc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xzc->Location = System::Drawing::Point(902, 327);
			this->xzc->Name = L"xzc";
			this->xzc->Size = System::Drawing::Size(276, 25);
			this->xzc->TabIndex = 18;
			this->xzc->Text = L"% занятых 1местных номеров:";
			// 
			// cap1Val
			// 
			this->cap1Val->AutoSize = true;
			this->cap1Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cap1Val->Location = System::Drawing::Point(1179, 392);
			this->cap1Val->Name = L"cap1Val";
			this->cap1Val->Size = System::Drawing::Size(22, 25);
			this->cap1Val->TabIndex = 21;
			this->cap1Val->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(903, 392);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(281, 25);
			this->label15->TabIndex = 20;
			this->label15->Text = L"% занятых  2местных номеров:";
			// 
			// cap2Val
			// 
			this->cap2Val->AutoSize = true;
			this->cap2Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cap2Val->Location = System::Drawing::Point(1178, 459);
			this->cap2Val->Name = L"cap2Val";
			this->cap2Val->Size = System::Drawing::Size(22, 25);
			this->cap2Val->TabIndex = 23;
			this->cap2Val->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(902, 459);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(276, 25);
			this->label17->TabIndex = 22;
			this->label17->Text = L"% занятых 3местных номеров:";
			// 
			// cap3Val
			// 
			this->cap3Val->AutoSize = true;
			this->cap3Val->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cap3Val->Location = System::Drawing::Point(1179, 531);
			this->cap3Val->Name = L"cap3Val";
			this->cap3Val->Size = System::Drawing::Size(22, 25);
			this->cap3Val->TabIndex = 25;
			this->cap3Val->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(903, 531);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(281, 25);
			this->label19->TabIndex = 24;
			this->label19->Text = L"% занятых  4местных номеров:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1583, 763);
			this->Controls->Add(this->cap3Val);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->cap2Val);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->cap1Val);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->cap0Val);
			this->Controls->Add(this->xzc);
			this->Controls->Add(this->comf2Val);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comf1Val);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comf0Val);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->moneyLabel);
			this->Controls->Add(this->label5);
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
		this->moneyLabel->Text = ((int)money).ToString();
		hours++;
		for (int i = 0; i < nomera; i++) {
			if (rooms[i]->getLeaveDate() != nullptr)
				if (timePicker->Value.CompareTo(rooms[i]->getLeaveDate()) > 0) {
					rooms[i]->setAvaliable(true);
					switch (rooms[i]->getCapacity()->getCode()) {
					case Одноместный: capacity0Reserved--; break;
					case Двуместный:  capacity1Reserved--; break;
					case Трёхместный:  capacity2Reserved--; break;
					case Четырёхместный:  capacity3Reserved--; break;
					}
					switch (rooms[i]->getComfort()->getCode()) {
					case Простой: comfort0Reserved--; break;
					case полулюкс: comfort1Reserved--; break;
					case люкс: comfort2Reserved--; break;
					}
					this->RoomsGrid->Rows[i]->Cells[1]->Value = "Свободен";
					this->RoomsGrid->Rows[i]->Cells[1]->Style->ForeColor = Color::Green;
					this->RoomsGrid->Rows[i]->Cells[5]->Value = "-";
					this->RoomsGrid->Rows[i]->Cells[6]->Value = "-";
				}
			if (timePicker->Value.CompareTo(rooms[i]->getInDate()) == 0) {
				switch (rooms[i]->getCapacity()->getCode()) {
				case Одноместный: capacity0Reserved++; break;
				case Двуместный:  capacity1Reserved++; break;
				case Трёхместный:  capacity2Reserved++; break;
				case Четырёхместный:  capacity3Reserved++; break;
				}
				switch (rooms[i]->getComfort()->getCode()) {
				case Простой: comfort0Reserved++; break;
				case полулюкс: comfort1Reserved++; break;
				case люкс: comfort2Reserved++; break;
				}
				this->RoomsGrid->Rows[i]->Cells[1]->Value = "Заселенно";
			}
		}
		if (capacity0Count == 0)
			cap0Val->Text == "Номеров такого типа нет";
		else if (capacity0Reserved == 0)
			cap0Val->Text = "0";
		else cap0Val->Text = ((int)((float)capacity0Reserved / (float)(capacity0Count) * 100.0)).ToString();

		if (capacity1Count == 0)
			cap1Val->Text == "Номеров такого типа нет";
		if (capacity1Reserved == 0)
			cap1Val->Text = "0";
		else cap1Val->Text = ((int)((float)capacity1Reserved / (float)(capacity1Count) * 100.0)).ToString();

		if (capacity2Count == 0)
			cap2Val->Text == "Номеров такого типа нет";
		if (capacity2Reserved == 0)
			cap2Val->Text = "0";
		else cap2Val->Text = ((int)((float)capacity2Reserved / (float)(capacity2Count) * 100.0)).ToString();

		if (capacity3Count == 0)
			cap3Val->Text == "Номеров такого типа нет";
		if (capacity3Reserved == 0)
			cap3Val->Text = "0";
		else cap3Val->Text = ((int)((float)capacity3Reserved / (float)(capacity3Count) * 100.0)).ToString();

		if (comfort0Count == 0)
			comf0Val->Text == "Номеров такого типа нет";
		if (comfort0Reserved == 0)
			comf0Val->Text = "0";
		else comf0Val->Text = ((int)((float)comfort0Reserved / (float)(comfort0Count) * 100.0)).ToString();

		if (comfort1Count == 0)
			comf1Val->Text == "Номеров такого типа нет";
		if (comfort1Reserved == 0)
			comf1Val->Text = "0";
		else comf1Val->Text = ((int)((float)comfort1Reserved / (float)(comfort1Count) * 100.0)).ToString();

		if (comfort2Count == 0)
			comf2Val->Text == "Номеров такого типа нет";
		if (comfort2Reserved == 0)
			comf2Val->Text = "0";
		else comf2Val->Text = ((int)((float)comfort2Reserved / (float)(comfort2Count) * 100.0)).ToString();
	}

	private:void settleRoom(int i, DateTime^ end, DateTime^ start, RequestType type) {
		rooms[i]->setAvaliable(false);
		rooms[i]->setLeaveDate(end);
		rooms[i]->setInDate(start);
		if (type == Заселение)
			this->requestGrid->Rows[0]->Cells[0]->Value = "Заселено в " + (i + 1).ToString() + " номер";
		else  this->requestGrid->Rows[0]->Cells[0]->Value = "номер " + (i + 1).ToString() + " забронирован";
		this->requestGrid->Rows[0]->Cells[0]->Style->ForeColor = Color::Green;
		if (type == Заселение)
			this->RoomsGrid->Rows[i]->Cells[1]->Value = "Заcеленно";
		else    this->RoomsGrid->Rows[i]->Cells[1]->Value = "Забронированно";
		this->RoomsGrid->Rows[i]->Cells[1]->Style->ForeColor = Color::Red;
		this->RoomsGrid->Rows[i]->Cells[5]->Value = "День: " + start->Day + " Время: " + start->Hour;
		this->RoomsGrid->Rows[i]->Cells[6]->Value = "День: " + end->Day + " Время: " + end->Hour;
		if (type == Заселение) {
			money += rooms[i]->getPrice();
			switch (rooms[i]->getCapacity()->getCode()) {
			case Одноместный: capacity0Reserved++; break;
			case Двуместный:  capacity1Reserved++; break;
			case Трёхместный:  capacity2Reserved++; break;
			case Четырёхместный:  capacity3Reserved++; break;
			}
			switch (rooms[i]->getComfort()->getCode()) {
			case Простой: comfort0Reserved++; break;
			case полулюкс: comfort1Reserved++; break;
			case люкс: comfort2Reserved++; break;
			}
		}
		else money += float(rooms[i]->getPrice()) * 0.7;
	}

	private: void handleRequest(Request^ request) {
		this->requestGrid->Rows[0]->Cells[1]->Value = request->getTypeString();
		DateTime^ start = request->getStartTime();
		this->requestGrid->Rows[0]->Cells[2]->Value = "День: " + start->Day + " Время: " + start->Hour;
		DateTime^ end = request->getEndTime();
		this->requestGrid->Rows[0]->Cells[3]->Value = "День: " + end->Day + " Время: " + end->Hour;
		this->requestGrid->Rows[0]->Cells[4]->Value = request->getComfort()->getComfortString();
		this->requestGrid->Rows[0]->Cells[5]->Value = request->getCapacity()->getCapacityString();
		for (int i = 0; i < nomera; i++) {
			if (this->rooms[i]->isAvalibale() &&
				(int)this->rooms[i]->getCapacity()->getCode() == (int)request->getCapacity()->getCode() &&
				(int)this->rooms[i]->getComfort()->getCode() == (int)request->getComfort()->getCode())
			{
				settleRoom(i, end, start,request->getType());
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
				settleRoom(minIndex, end, start, request->getType());
				return;
			}
			this->requestGrid->Rows[0]->Cells[0]->Value = "Отклоненно";
			this->requestGrid->Rows[0]->Cells[0]->Style->ForeColor = Color::Red;

		}

		this->timer2->Stop();
		int delay = minRequest + rand() % (maxRequest-minRequest+1);
		timer2->Interval = 1000 * delay;
		timer2->Start();
	}

	private: void makeRequest() {
		DateTime now = timePicker->Value;
		int nowDay = now.Day;
		int nowHour = now.Hour;
		RequestType type;
		int r = rand() % 2;
		switch (r) {
		case 0:type = Заселение; break;
		case 1:type = Бронирование; break;
		}
		int startDay;
		int startHour;
		if (type == Бронирование) {			
			if (dni - nowDay != 0)
				startDay = nowDay + rand() % (dni - nowDay);
			else startDay = nowDay;			
			if (startDay != nowDay) startHour = rand() % 24;
			else startHour = nowHour + (rand() % (24 - nowHour));
		}
		else {
			startDay = nowDay;
			startHour = nowHour;
		}
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
		if (!active) {
			active = true;
			requestGrid->Rows->Add(1);
			timer1->Interval = 1000 * speed;
			timer1->Start();
			int delay = minRequest + rand() % (maxRequest - minRequest + 1);	
			timer2->Interval = 1000 * delay;
			timer2->Start();
		}
	}


private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {	
	if (hours < dni * 24)
		makeRequest();
	else timer1->Stop();
}
};
}
