#pragma once
#using "Iswenzz.UI.dll"

namespace Iswenzz 
{
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		static property String ^XMLPath;
		static property int MinRange;
		static property int MaxRange;

		GUI();

		void RangeResult(array<String^>^ const %arg);

	protected:
		~GUI();

	private:
		void CheckButtonClick(Object ^sender, EventArgs ^e);
		void FileButtonClick(Object ^sender, EventArgs ^e);
		void TextChange(Object ^sender, EventArgs ^e);

	#pragma region Windows Form Designer generated code
	private: Iswenzz::UI::Controls::Containers::SeparatorPanel^  separatorPanel1;
	public: Iswenzz::UI::Controls::Buttons::FlatButton^  FileButton;
	public: Iswenzz::UI::Controls::Buttons::FlatButton^  CheckButton;
	public: System::Windows::Forms::TextBox^  MinBox;
	public: System::Windows::Forms::TextBox^  MaxBox;
	private: Iswenzz::UI::Controls::SpecialLabel^  specialLabel1;
	private: Iswenzz::UI::Controls::SpecialLabel^  specialLabel2;
	private: System::Windows::Forms::RadioButton^  ElementRadio;

	private: System::Windows::Forms::RadioButton^  AttributeRadio;

	public: System::Windows::Forms::TextBox^  ElementName;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  InfoLabel;
	private: System::Windows::Forms::Label^  label1;

	public:
	private:

	private:

	private:
		System::ComponentModel::Container ^components;

		void InitializeComponent(void)
		{
			this->separatorPanel1 = (gcnew Iswenzz::UI::Controls::Containers::SeparatorPanel());
			this->ElementName = (gcnew System::Windows::Forms::TextBox());
			this->ElementRadio = (gcnew System::Windows::Forms::RadioButton());
			this->AttributeRadio = (gcnew System::Windows::Forms::RadioButton());
			this->CheckButton = (gcnew Iswenzz::UI::Controls::Buttons::FlatButton());
			this->FileButton = (gcnew Iswenzz::UI::Controls::Buttons::FlatButton());
			this->MinBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxBox = (gcnew System::Windows::Forms::TextBox());
			this->specialLabel1 = (gcnew Iswenzz::UI::Controls::SpecialLabel());
			this->specialLabel2 = (gcnew Iswenzz::UI::Controls::SpecialLabel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->separatorPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// separatorPanel1
			// 
			this->separatorPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->separatorPanel1->BorderColor = System::Drawing::Color::DimGray;
			this->separatorPanel1->Controls->Add(this->ElementName);
			this->separatorPanel1->Controls->Add(this->ElementRadio);
			this->separatorPanel1->Controls->Add(this->AttributeRadio);
			this->separatorPanel1->Controls->Add(this->CheckButton);
			this->separatorPanel1->Controls->Add(this->FileButton);
			this->separatorPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->separatorPanel1->Location = System::Drawing::Point(0, 0);
			this->separatorPanel1->Name = L"separatorPanel1";
			this->separatorPanel1->Size = System::Drawing::Size(233, 262);
			this->separatorPanel1->TabIndex = 2;
			this->separatorPanel1->Thickness = 0;
			// 
			// ElementName
			// 
			this->ElementName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ElementName->Location = System::Drawing::Point(38, 108);
			this->ElementName->Name = L"ElementName";
			this->ElementName->Size = System::Drawing::Size(163, 22);
			this->ElementName->TabIndex = 7;
			this->ElementName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ElementRadio
			// 
			this->ElementRadio->AutoSize = true;
			this->ElementRadio->Font = (gcnew System::Drawing::Font(L"Corbel", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ElementRadio->ForeColor = System::Drawing::Color::Silver;
			this->ElementRadio->Location = System::Drawing::Point(123, 71);
			this->ElementRadio->Name = L"ElementRadio";
			this->ElementRadio->Size = System::Drawing::Size(78, 21);
			this->ElementRadio->TabIndex = 8;
			this->ElementRadio->Text = L"Element";
			this->ElementRadio->UseVisualStyleBackColor = true;
			// 
			// AttributeRadio
			// 
			this->AttributeRadio->AutoSize = true;
			this->AttributeRadio->Checked = true;
			this->AttributeRadio->Font = (gcnew System::Drawing::Font(L"Corbel", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AttributeRadio->ForeColor = System::Drawing::Color::Silver;
			this->AttributeRadio->Location = System::Drawing::Point(34, 71);
			this->AttributeRadio->Name = L"AttributeRadio";
			this->AttributeRadio->Size = System::Drawing::Size(83, 21);
			this->AttributeRadio->TabIndex = 7;
			this->AttributeRadio->TabStop = true;
			this->AttributeRadio->Text = L"Attribute";
			this->AttributeRadio->UseVisualStyleBackColor = true;
			// 
			// CheckButton
			// 
			this->CheckButton->Angles = 0;
			this->CheckButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->CheckButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->CheckButton->FlatAppearance->BorderSize = 0;
			this->CheckButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->CheckButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->CheckButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CheckButton->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->CheckButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->CheckButton->HoverColorLeave = System::Drawing::Color::Empty;
			this->CheckButton->HoverColorText = System::Drawing::Color::DarkOrange;
			this->CheckButton->HoverColorTextLeave = System::Drawing::Color::Empty;
			this->CheckButton->Icon = nullptr;
			this->CheckButton->IconAutoPlacement = false;
			this->CheckButton->IconSize = 0;
			this->CheckButton->Location = System::Drawing::Point(0, 200);
			this->CheckButton->Name = L"CheckButton";
			this->CheckButton->RoundedCorner = 0;
			this->CheckButton->Size = System::Drawing::Size(233, 62);
			this->CheckButton->TabIndex = 1;
			this->CheckButton->Text = L"Check ID";
			this->CheckButton->UseVisualStyleBackColor = false;
			// 
			// FileButton
			// 
			this->FileButton->Angles = 0;
			this->FileButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->FileButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->FileButton->FlatAppearance->BorderSize = 0;
			this->FileButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->FileButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->FileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FileButton->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FileButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->FileButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->FileButton->HoverColorLeave = System::Drawing::Color::Empty;
			this->FileButton->HoverColorText = System::Drawing::Color::DarkOrange;
			this->FileButton->HoverColorTextLeave = System::Drawing::Color::Empty;
			this->FileButton->Icon = nullptr;
			this->FileButton->IconAutoPlacement = false;
			this->FileButton->IconSize = 0;
			this->FileButton->Location = System::Drawing::Point(0, 0);
			this->FileButton->Name = L"FileButton";
			this->FileButton->RoundedCorner = 0;
			this->FileButton->Size = System::Drawing::Size(233, 65);
			this->FileButton->TabIndex = 0;
			this->FileButton->Text = L"XML Template File";
			this->FileButton->UseVisualStyleBackColor = false;
			// 
			// MinBox
			// 
			this->MinBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->MinBox->Location = System::Drawing::Point(322, 124);
			this->MinBox->Name = L"MinBox";
			this->MinBox->Size = System::Drawing::Size(163, 22);
			this->MinBox->TabIndex = 3;
			this->MinBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MaxBox
			// 
			this->MaxBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->MaxBox->Location = System::Drawing::Point(564, 124);
			this->MaxBox->Name = L"MaxBox";
			this->MaxBox->Size = System::Drawing::Size(163, 22);
			this->MaxBox->TabIndex = 4;
			this->MaxBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// specialLabel1
			// 
			this->specialLabel1->Angles = 0;
			this->specialLabel1->BackColor = System::Drawing::Color::Transparent;
			this->specialLabel1->Font = (gcnew System::Drawing::Font(L"Corbel", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->specialLabel1->ForeColor = System::Drawing::Color::Gainsboro;
			this->specialLabel1->Location = System::Drawing::Point(322, 82);
			this->specialLabel1->Name = L"specialLabel1";
			this->specialLabel1->RoundedCorner = 0;
			this->specialLabel1->Size = System::Drawing::Size(163, 36);
			this->specialLabel1->TabIndex = 5;
			this->specialLabel1->Text = L"Min";
			// 
			// specialLabel2
			// 
			this->specialLabel2->Angles = 0;
			this->specialLabel2->BackColor = System::Drawing::Color::Transparent;
			this->specialLabel2->Font = (gcnew System::Drawing::Font(L"Corbel", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->specialLabel2->ForeColor = System::Drawing::Color::Gainsboro;
			this->specialLabel2->Location = System::Drawing::Point(564, 82);
			this->specialLabel2->Name = L"specialLabel2";
			this->specialLabel2->RoundedCorner = 0;
			this->specialLabel2->Size = System::Drawing::Size(163, 36);
			this->specialLabel2->TabIndex = 6;
			this->specialLabel2->Text = L"Max";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Corbel", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::Silver;
			this->radioButton2->Location = System::Drawing::Point(123, 71);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(78, 21);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->Text = L"Element";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// InfoLabel
			// 
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoLabel->ForeColor = System::Drawing::Color::LightGray;
			this->InfoLabel->Location = System::Drawing::Point(414, 158);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(228, 47);
			this->InfoLabel->TabIndex = 7;
			this->InfoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(706, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"© Iswenzz.com";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->ClientSize = System::Drawing::Size(815, 262);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->InfoLabel);
			this->Controls->Add(this->specialLabel2);
			this->Controls->Add(this->specialLabel1);
			this->Controls->Add(this->MaxBox);
			this->Controls->Add(this->MinBox);
			this->Controls->Add(this->separatorPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"GUI";
			this->ShowIcon = false;
			this->Text = L"XML ID Checker";
			this->separatorPanel1->ResumeLayout(false);
			this->separatorPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	};
}
