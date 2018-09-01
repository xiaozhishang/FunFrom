#include "MyForm.h"
using namespace FunFrom;
[STAThread]

int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());
	//textBox5.LostFocus += new EventHandler(txt_LostFocus);
}

void MyForm::txt_LostFocus(System::Object^  sender, System::EventArgs^  e)
{
	//txtInput(textBox5);
	this->textBox1->Enabled = true;
}

void MyForm::txt_GotFocus(System::Object^  sender, System::EventArgs^  e)
{
	//txtInput(textBox5);
	this->textBox1->Enabled = false;
}

Void MyForm::textBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox1->Enabled = false;
}

Void MyForm::textBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox1->Enabled = true;
}

Void MyForm::button1_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
	Random^ strRandom = gcnew Random();
	int demo1 = strRandom->Next(500);
	int demo2 = strRandom->Next(500);

	//std::cout << "strRandom" << demo1 << "," << demo2 << std::endl;
	this->button1->Location = System::Drawing::Point(demo1, demo2);
}