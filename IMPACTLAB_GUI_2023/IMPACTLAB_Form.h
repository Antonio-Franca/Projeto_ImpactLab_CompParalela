#pragma once

namespace IMPACTLABGUI2023 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Diagnostics;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for IMPACTLAB_Form
	/// </summary>
	/// 
	public ref class IMPACTLAB_Form : public System::Windows::Forms::Form
	{
	private: System::Diagnostics::Stopwatch^ stopwatch;
	public:
		IMPACTLAB_Form(void)
		{
			InitializeComponent();
			stopwatch = gcnew System::Diagnostics::Stopwatch();
			//
			//TODO: Add the constructor code here
			//
			streamout = nullptr;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IMPACTLAB_Form()
		{
			if (components)
			{
				delete components;
				delete streamout;
			}
		}
	public: Stream^ streamout;
	
	private: System::Windows::Forms::Button^ btopen;
	private: System::Windows::Forms::Button^ btapply;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ filter1;

	private: System::Windows::Forms::CheckBox^ filter3;
	private: System::Windows::Forms::CheckBox^ filter2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;


	
     
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btopen = (gcnew System::Windows::Forms::Button());
			this->btapply = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->filter1 = (gcnew System::Windows::Forms::CheckBox());
			this->filter3 = (gcnew System::Windows::Forms::CheckBox());
			this->filter2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btopen
			// 
			this->btopen->Location = System::Drawing::Point(206, 643);
			this->btopen->Name = L"btopen";
			this->btopen->Size = System::Drawing::Size(131, 49);
			this->btopen->TabIndex = 0;
			this->btopen->Text = L"Open Image";
			this->btopen->UseVisualStyleBackColor = true;
			this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
			// 
			// btapply
			// 
			this->btapply->Location = System::Drawing::Point(661, 643);
			this->btapply->Name = L"btapply";
			this->btapply->Size = System::Drawing::Size(131, 49);
			this->btapply->TabIndex = 1;
			this->btapply->Text = L"Apply Filter";
			this->btapply->UseVisualStyleBackColor = true;
			this->btapply->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btapply_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(44, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(461, 612);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::pictureBox1_Click);
			// 
			// filter1
			// 
			this->filter1->AutoSize = true;
			this->filter1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter1->Location = System::Drawing::Point(990, 48);
			this->filter1->Name = L"filter1";
			this->filter1->Size = System::Drawing::Size(121, 21);
			this->filter1->TabIndex = 3;
			this->filter1->Text = L"Aplicar sépia";
			this->filter1->UseVisualStyleBackColor = true;
			this->filter1->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter1_CheckedChanged);
			// 
			// filter3
			// 
			this->filter3->AutoSize = true;
			this->filter3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter3->Location = System::Drawing::Point(990, 170);
			this->filter3->Name = L"filter3";
			this->filter3->Size = System::Drawing::Size(125, 21);
			this->filter3->TabIndex = 4;
			this->filter3->Text = L"Aplicar Mirror";
			this->filter3->UseVisualStyleBackColor = true;
			this->filter3->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter3_CheckedChanged);
			// 
			// filter2
			// 
			this->filter2->AutoSize = true;
			this->filter2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter2->Location = System::Drawing::Point(990, 107);
			this->filter2->Name = L"filter2";
			this->filter2->Size = System::Drawing::Size(146, 21);
			this->filter2->TabIndex = 5;
			this->filter2->Text = L"Aplicar Negativo";
			this->filter2->UseVisualStyleBackColor = true;
			this->filter2->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter2_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(511, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(458, 612);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(987, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Tempo  de Processamento:";
			this->label1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1063, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"00:00:00.000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1021, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"CPU:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1143, 667);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 25);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::button1_Click);
			// 
			// IMPACTLAB_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1214, 733);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->filter2);
			this->Controls->Add(this->filter3);
			this->Controls->Add(this->filter1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btapply);
			this->Controls->Add(this->btopen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"IMPACTLAB_Form";
			this->Text = L"IMPACTLAB PROJECT 2023";
			this->Load += gcnew System::EventHandler(this, &IMPACTLAB_Form::IMPACTLAB_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btopen_Click(System::Object^ sender, System::EventArgs^ e) {

			// open file dialog   
			OpenFileDialog^ ofd = gcnew OpenFileDialog();

			ofd->InitialDirectory = "c:\\";
			ofd->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
			ofd->RestoreDirectory = true;
			
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{

				//pictureBox1->BackgroundImage = stream->
				try {
					//Setting image to pictureBox1
					pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
					pictureBox1->BackgroundImage = gcnew Bitmap(ofd->FileName, true);
				}
				catch (ArgumentException^)
				{
					MessageBox::Show("There was an error."
						"Check the path to the image file.");
				}

			}

		}
		
		private: System::Void IMPACTLAB_Form_Load(System::Object^ sender, System::EventArgs^ e) 
		{

		}
 
	
		bool negative(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//find negative value
					r = 255 - r;
					g = 255 - g;
					b = 255 - b;
					//Set new pixel
					Color gray = Color::FromArgb(a, r, g, b);
					img->SetPixel(i, j, gray);
				}
			}

			return true;
		}

		bool img_2_sepia(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;
			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//Calculate values:
					int tr = (int)(0.393 * r + 0.769 * g + 0.189 * b);
					int tg = (int)(0.349 * r + 0.686 * g + 0.168 * b);
					int tb = (int)(0.272 * r + 0.534 * g + 0.131 * b);

					//set new RGB value
					if (tr > 255)
					{
						r = 255;
					}
					else
					{
						r = tr;
					}

					if (tg > 255)
					{
						g = 255;
					}
					else
					{
						g = tg;
					}

					if (tb > 255)
					{
						b = 255;
					}
					else
					{
						b = tb;
					}

					//set the new RGB value in image pixel
					img->SetPixel(i, j, Color::FromArgb(a, r, g, b));
				}
			}
			return true;
		}


		bool mirrorImage(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height ; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					Color mirror = img->GetPixel(width - i - 1,j);
					img->SetPixel(i, j, mirror);
				}
			}

			return true;

		}

		bool grayscale(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//Average
					int avg = (r + g + b) / 3;
					//Set new pixel
					Color gray = Color::FromArgb(a, avg, avg, avg);
					img->SetPixel(i, j, gray);					
				}
			}

			return true;
		
		}


		private: System::Void filter1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private: System::Void filter2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			Image^ image = pictureBox1->BackgroundImage;

			if (filter2->Checked)
			{
				
			}
			else {

			}
		}
		private: System::Void filter3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			Image^ image = pictureBox1->BackgroundImage;

			if (filter3->Checked)
			{
			}
			else {
			}
		}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btapply_Click(System::Object^ sender, System::EventArgs^ e) {

	if (filter1->Checked)
	{
	   stopwatch->Start();
	   Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
	   img_2_sepia(image);
	   pictureBox2->BackgroundImage = image;
	   stopwatch->Stop();
	   label2->Text = String::Format("{0:hh\\:mm\\:ss\\:fff}", stopwatch->Elapsed);
	   stopwatch->Reset();

	}
	if (filter2->Checked)
	{
		stopwatch->Start();
		Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		negative(image);
		pictureBox2->BackgroundImage = image;
		stopwatch->Stop();
		label2->Text = String::Format("{0:hh\\:mm\\:ss\\:fff}", stopwatch->Elapsed);
		stopwatch->Reset();

	}
	if (filter3->Checked)
	{
		stopwatch->Start();
		Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		mirrorImage(image);
		pictureBox2->BackgroundImage = image;
		stopwatch->Stop();
		label2->Text = String::Format("{0:hh\\:mm\\:ss\\:fff}", stopwatch->Elapsed);
		stopwatch->Reset();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// The user wants to exit the application. 
	// Close everything down.
	Application::Exit();
}
};

}

