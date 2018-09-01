#include "MyForm.h"
using namespace FunFrom;
[STAThread]

int main()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());
	//textBox5.LostFocus += new EventHandler(txt_LostFocus);
}

void MyForm::txt_LostFocus(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox1->Enabled = true;
}

void MyForm::txt_GotFocus(System::Object^  sender, System::EventArgs^  e)
{
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

Void MyForm::pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
{

	// Create a Bitmap object from an image file.
	Bitmap^ myBitmap = gcnew Bitmap(this->pictureBox1->Image);

	// Get the color of a pixel within myBitmap.
	Color pixelColor = myBitmap->GetPixel((int)xReally, (int)yReally);

	MessageBox::Show(pixelColor.ToString());
}

Void MyForm::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		this->textBox2->Text = openFileDialog1->FileName;
		this->pictureBox1->Image = Image::FromFile(this->textBox2->Text);
	}
}

Void MyForm::pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
		float imgWidth = (float)this->pictureBox1->Image->Width;
		float imgHeight = (float)this->pictureBox1->Image->Height;
		float pictureBoxWidth = (float)this->pictureBox1->Width;
		float pictureBoxHeight = (float)this->pictureBox1->Height;

		xReally = (float)e->X * imgWidth / pictureBoxWidth;
		yReally = (float)e->Y * imgHeight / pictureBoxHeight;

		std::cout << "xReally " << xReally << std::endl;
		std::cout << "yReally " << yReally << std::endl;
}