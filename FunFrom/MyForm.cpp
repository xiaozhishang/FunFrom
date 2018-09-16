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
	this->textBox_RGB->Enabled = true;
}

void MyForm::txt_GotFocus(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox_RGB->Enabled = false;
}

Void MyForm::textBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox_RGB->Enabled = false;
}

Void MyForm::textBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox_RGB->Enabled = true;
}

Void MyForm::funButton_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
	Random^ strRandom = gcnew Random();
	int demo1 = strRandom->Next(500);
	int demo2 = strRandom->Next(500);

	//std::cout << "strRandom" << demo1 << "," << demo2 << std::endl;
	this->funButton->Location = System::Drawing::Point(demo1, demo2);
}

Void MyForm::pictureBox_pic_Click(System::Object^  sender, System::EventArgs^  e)
{
	// Create a Bitmap object from an image file.
	Bitmap^ myBitmap = gcnew Bitmap(this->pictureBox_pic->Image);

	// Get the color of a pixel within myBitmap.
	Color pixelColor = myBitmap->GetPixel((int)xReally, (int)yReally);
	pictureBox_color->BackColor = pixelColor;
	textBox_RGB->Text = pixelColor.ToString();
	//MessageBox::Show(pixelColor.ToString());
}

Void MyForm::selectPicButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->Filter = "pic files (*.jpg)|*.jpg|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		this->textBoxPicFile->Text = openFileDialog1->FileName;
		this->pictureBox_pic->Image = Image::FromFile(this->textBoxPicFile->Text);
	}
}

Void MyForm::pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	float imgWidth = (float)this->pictureBox_pic->Image->Width;
	float imgHeight = (float)this->pictureBox_pic->Image->Height;
	float pictureBoxWidth = (float)this->pictureBox_pic->Width;
	float pictureBoxHeight = (float)this->pictureBox_pic->Height;

	xReally = (float)e->X * imgWidth / pictureBoxWidth;
	yReally = (float)e->Y * imgHeight / pictureBoxHeight;

	std::cout << "xReally " << xReally << std::endl;
	std::cout << "yReally " << yReally << std::endl;
}