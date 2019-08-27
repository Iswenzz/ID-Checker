#include "Main.hpp"
#include "GUI.hpp"

[STAThread]
int main(array<String^> ^args)
{
	Console::ForegroundColor = ConsoleColor::Gray;
	if (args->Length != 3)
	{
		Console::WriteLine(
			"\nUsage: XML ID Checker.exe <path> <method:name> <min range:max range>\n"
			+ "I.E: XML ID Checker.exe \"C:\\file.xml\" attr:npc_id 100:200\n");
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew Iswenzz::GUI());
		return 0;
	}

	if (IsRangeAvailable(args))
	{
		Console::ForegroundColor = ConsoleColor::Green;
		Console::WriteLine("\nSUCCESS: Range is available!");
		Console::ForegroundColor = ConsoleColor::Gray;
	}
	else
	{
		Console::ForegroundColor = ConsoleColor::Red;
		Console::WriteLine("\nFAILED: Range already used.");
		Console::ForegroundColor = ConsoleColor::Gray;
	}
    return 0;
}

bool IsRangeAvailable(array<String^>^ const %args)
{
	String ^filepath = args[0];
	String ^method = args[1]->Split(':')[0];
	String ^name = args[1]->Split(':')[1];

	int min, max;
	if (!int::TryParse(args[2]->Split(':')[0], min)
		|| !int::TryParse(args[2]->Split(':')[1], max)
		|| min >= max)
	{
		Console::WriteLine("Wrong Range!");
		Environment::Exit(-1);
	}
	else if (!File::Exists(filepath))
	{
		Console::WriteLine("Invalid XML Path!");
		Environment::Exit(-1);
	}
	else if (String::IsNullOrEmpty(method) || String::IsNullOrEmpty(name))
	{
		Console::WriteLine("Empty Attribute/Element Name!");
		Environment::Exit(-1);
	}

	XDocument ^xml = XDocument::Load(filepath);
	for each (XElement^ const %elem in xml->Descendants())
	{
		if (method == "attr" && elem->Attribute(name) != nullptr)
		{
			int val;
			if (!int::TryParse(elem->Attribute(name)->Value, val))
				continue;

			if (val >= min && val <= max)
				return false;
		}
		else if (method == "element" && elem->Value != nullptr)
		{
			int val;
			if (!int::TryParse(elem->Value, val))
				continue;

			if (val >= min && val <= max)
				return false;
		}
	}
	return true;
}
