#pragma once
#include <iostream>
namespace FunFrom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_RGB;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox_pic;
	private: System::Windows::Forms::TextBox^  textBoxPicFile;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;
		float xReally;
	private: System::Windows::Forms::PictureBox^  pictureBox_color;
			 float yReally;
		void MyForm::txt_LostFocus(System::Object^  sender, System::EventArgs^  e);
		void MyForm::txt_GotFocus(System::Object^  sender, System::EventArgs^  e);
		Void MyForm::textBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e);
		Void MyForm::textBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e);
		Void MyForm::button1_MouseEnter(System::Object^  sender, System::EventArgs^  e);
		Void pictureBox_pic_Click(System::Object^  sender, System::EventArgs^  e);
		Void button2_Click(System::Object^  sender, System::EventArgs^  e);
		Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox_RGB = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox_pic = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxPicFile = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox_color = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_color))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox_RGB->Location = System::Drawing::Point(223, 96);
			this->textBox_RGB->Name = L"textBox1";
			this->textBox_RGB->Size = System::Drawing::Size(394, 25);
			this->textBox_RGB->TabIndex = 0;
			this->textBox_RGB->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBox1_MouseEnter);
			this->textBox_RGB->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBox1_MouseLeave);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(655, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"点到我算我输";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			// 
			// pictureBox1
			// 
			this->pictureBox_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox_pic->Location = System::Drawing::Point(99, 137);
			this->pictureBox_pic->Name = L"pictureBox1";
			this->pictureBox_pic->Size = System::Drawing::Size(702, 449);
			this->pictureBox_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_pic->TabIndex = 2;
			this->pictureBox_pic->TabStop = false;
			this->pictureBox_pic->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_pic_Click);
			this->pictureBox_pic->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			// 
			// textBox2
			// 
			this->textBoxPicFile->Location = System::Drawing::Point(223, 62);
			this->textBoxPicFile->Name = L"textBox2";
			this->textBoxPicFile->Size = System::Drawing::Size(394, 25);
			this->textBoxPicFile->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(655, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"参照";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox_color->Location = System::Drawing::Point(98, 50);
			this->pictureBox_color->Name = L"pictureBox2";
			this->pictureBox_color->Size = System::Drawing::Size(119, 71);
			this->pictureBox_color->TabIndex = 5;
			this->pictureBox_color->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 647);
			this->Controls->Add(this->pictureBox_color);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxPicFile);
			this->Controls->Add(this->pictureBox_pic);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_RGB);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_color))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
};
}
