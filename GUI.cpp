#include "GUI.hpp"
#include "Main.hpp"

namespace Iswenzz
{
	GUI::GUI()
	{
		InitializeComponent();

		CheckButton->Click += gcnew EventHandler(this, &GUI::CheckButtonClick);
		FileButton->Click += gcnew EventHandler(this, &GUI::FileButtonClick);
		MinBox->TextChanged += gcnew EventHandler(this, &GUI::TextChange);
		MaxBox->TextChanged += gcnew EventHandler(this, &GUI::TextChange);
	}

	GUI::~GUI()
	{
		if (components)
			delete components;
	}

	void GUI::RangeResult(array<String^>^ const %arg)
	{
		if (IsRangeAvailable(arg))
		{
			InfoLabel->ForeColor = Color::Green;
			InfoLabel->Text = "Range is available!";
		}
		else
		{
			InfoLabel->ForeColor = Color::Red;
			InfoLabel->Text = "Range is already used.";
		}
	}

	void GUI::CheckButtonClick(Object ^sender, EventArgs ^e)
	{
		if (MinRange >= MaxRange)
		{
			InfoLabel->ForeColor = Color::Red;
			InfoLabel->Text = "Wrong Range!";
			return;
		}
		else if (String::IsNullOrEmpty(XMLPath) || !File::Exists(XMLPath))
		{
			InfoLabel->ForeColor = Color::Red;
			InfoLabel->Text = "Invalid XML Path!";
			return;
		}
		else if (String::IsNullOrEmpty(ElementName->Text))
		{
			InfoLabel->ForeColor = Color::Red;
			InfoLabel->Text = "Empty Attribute/Element Name!";
			return;
		}

		array<String^>^ args = gcnew array<String^>
		{
			XMLPath,
			(AttributeRadio->Checked ? "attr" : "element") + ":" + ElementName->Text,
			MinRange + ":" + MaxRange
		};
		RangeResult(args);
	}

	void GUI::FileButtonClick(Object ^sender, EventArgs ^e)
	{
		OpenFileDialog ^dialog = gcnew OpenFileDialog();
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			XMLPath = dialog->FileName;
	}

	void GUI::TextChange(Object ^sender, EventArgs ^e)
	{
		InfoLabel->Text = "";
		InfoLabel->ForeColor = Color::Gainsboro;

		int minrange, maxrange;
		int::TryParse(MinBox->Text, minrange);
		int::TryParse(MaxBox->Text, maxrange);
		MinRange = minrange;
		MaxRange = maxrange;
	}
}
