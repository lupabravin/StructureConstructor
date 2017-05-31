#pragma once
#include <sstream>
#include <string>
namespace Project {

	extern "C" {
#include "Pilha.h"
#include "Lista.h"
#include <string.h>
#include <stdlib.h>
		int _countPile = 1;
		int _countList = 1;
		int _countQueue = 1;
		int _submit;
		Pilha * firstPile;
		Lista * firstList;
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Pilha * firstPile = NULL;
			button1->BackgroundImage = Image::FromFile("..\\img\\pilha.png");
			button2->BackgroundImage = Image::FromFile("..\\img\\lista.png");
			button3->BackgroundImage = Image::FromFile("..\\img\\fila.png");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: int _currentX = 0;
	private: int _currentY = 0;
	private: System::Windows::Forms::Button^ currentControl;
	private: System::Windows::Forms::ContextMenuStrip^  cmsPilha;
	private: System::Windows::Forms::ContextMenuStrip^  cmsLista;
	private: System::Windows::Forms::ContextMenuStrip^  cmsFila;
	private: System::Windows::Forms::ToolStripMenuItem^  pushPilha;

	private: System::Windows::Forms::ToolStripMenuItem^  removerElementoPopToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  verStatusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adicionarElementoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removerElementoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alterarElementoToolStripMenuItem;

	private: System::Windows::Forms::TextBox^  getInfo;
	private: System::Windows::Forms::Label^  Request;
	private: System::Windows::Forms::Button^  btnSubmit;

	private: System::Windows::Forms::Label^  labelStatus;

	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		Button^ _newButton;
	private: System::Windows::Forms::TableLayoutPanel^  tblPrint;
	private: System::Windows::Forms::ToolStripMenuItem^  excluirEstruturaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  verStatusToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  excluirListaToolStripMenuItem;



			 System::Windows::Forms::ContextMenuStrip^ _newCms;
			 /// Required designer variable.
			 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->cmsPilha = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
				 this->pushPilha = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->removerElementoPopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->verStatusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->excluirEstruturaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->cmsLista = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
				 this->adicionarElementoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->removerElementoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->alterarElementoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->cmsFila = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
				 this->getInfo = (gcnew System::Windows::Forms::TextBox());
				 this->Request = (gcnew System::Windows::Forms::Label());
				 this->btnSubmit = (gcnew System::Windows::Forms::Button());
				 this->labelStatus = (gcnew System::Windows::Forms::Label());
				 this->tblPrint = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->verStatusToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->excluirListaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->cmsPilha->SuspendLayout();
				 this->cmsLista->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button1->Location = System::Drawing::Point(3, 3);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(51, 47);
				 this->button1->TabIndex = 2;
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnPilha_Click);
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::SystemColors::WindowFrame;
				 this->panel1->Location = System::Drawing::Point(3, 53);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(1055, 347);
				 this->panel1->TabIndex = 3;
				 // 
				 // button2
				 // 
				 this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button2->Location = System::Drawing::Point(60, 3);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(51, 47);
				 this->button2->TabIndex = 4;
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnLista_Click);
				 // 
				 // button3
				 // 
				 this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button3->Location = System::Drawing::Point(117, 3);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(51, 47);
				 this->button3->TabIndex = 5;
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnFila_Click);
				 // 
				 // cmsPilha
				 // 
				 this->cmsPilha->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->pushPilha, this->removerElementoPopToolStripMenuItem,
						 this->verStatusToolStripMenuItem, this->excluirEstruturaToolStripMenuItem
				 });
				 this->cmsPilha->Name = L"cmsPilha";
				 this->cmsPilha->Size = System::Drawing::Size(216, 92);
				 this->cmsPilha->Opened += gcnew System::EventHandler(this, &MyForm::cmsPilha_Opened);
				 // 
				 // pushPilha
				 // 
				 this->pushPilha->Name = L"pushPilha";
				 this->pushPilha->Size = System::Drawing::Size(215, 22);
				 this->pushPilha->Text = L"Adicionar Elemento (Push)";
				 this->pushPilha->Click += gcnew System::EventHandler(this, &MyForm::pushPilha_Click);
				 // 
				 // removerElementoPopToolStripMenuItem
				 // 
				 this->removerElementoPopToolStripMenuItem->Name = L"removerElementoPopToolStripMenuItem";
				 this->removerElementoPopToolStripMenuItem->Size = System::Drawing::Size(215, 22);
				 this->removerElementoPopToolStripMenuItem->Text = L"Remover Elemento (Pop)";
				 this->removerElementoPopToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::popPilha_Click);
				 // 
				 // verStatusToolStripMenuItem
				 // 
				 this->verStatusToolStripMenuItem->Name = L"verStatusToolStripMenuItem";
				 this->verStatusToolStripMenuItem->Size = System::Drawing::Size(215, 22);
				 this->verStatusToolStripMenuItem->Text = L"Ver Status";
				 this->verStatusToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printPile_Click);
				 // 
				 // excluirEstruturaToolStripMenuItem
				 // 
				 this->excluirEstruturaToolStripMenuItem->Name = L"excluirEstruturaToolStripMenuItem";
				 this->excluirEstruturaToolStripMenuItem->Size = System::Drawing::Size(215, 22);
				 this->excluirEstruturaToolStripMenuItem->Text = L"Excluir Pilha";
				 this->excluirEstruturaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::excluirPilha_Click);
				 // 
				 // cmsLista
				 // 
				 this->cmsLista->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					 this->adicionarElementoToolStripMenuItem,
						 this->removerElementoToolStripMenuItem, this->alterarElementoToolStripMenuItem, this->verStatusToolStripMenuItem1, this->excluirListaToolStripMenuItem
				 });
				 this->cmsLista->Name = L"contextMenuStrip1";
				 this->cmsLista->Size = System::Drawing::Size(179, 136);
				 this->cmsLista->Opened += gcnew System::EventHandler(this, &MyForm::cmsLista_Opened);
				 // 
				 // adicionarElementoToolStripMenuItem
				 // 
				 this->adicionarElementoToolStripMenuItem->Name = L"adicionarElementoToolStripMenuItem";
				 this->adicionarElementoToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->adicionarElementoToolStripMenuItem->Text = L"Adicionar Elemento";
				 this->adicionarElementoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addListElement_Click);
				 // 
				 // removerElementoToolStripMenuItem
				 // 
				 this->removerElementoToolStripMenuItem->Name = L"removerElementoToolStripMenuItem";
				 this->removerElementoToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->removerElementoToolStripMenuItem->Text = L"Remover Elemento";
				 this->removerElementoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeListElement_Click);
				 // 
				 // alterarElementoToolStripMenuItem
				 // 
				 this->alterarElementoToolStripMenuItem->Name = L"alterarElementoToolStripMenuItem";
				 this->alterarElementoToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->alterarElementoToolStripMenuItem->Text = L"Alterar Posi��es";
				 // 
				 // cmsFila
				 // 
				 this->cmsFila->Name = L"contextMenuStrip1";
				 this->cmsFila->Size = System::Drawing::Size(61, 4);
				 // 
				 // getInfo
				 // 
				 this->getInfo->Location = System::Drawing::Point(244, 15);
				 this->getInfo->Name = L"getInfo";
				 this->getInfo->Size = System::Drawing::Size(40, 20);
				 this->getInfo->TabIndex = 6;
				 this->getInfo->Visible = false;
				 // 
				 // Request
				 // 
				 this->Request->AutoSize = true;
				 this->Request->Location = System::Drawing::Point(174, 20);
				 this->Request->Name = L"Request";
				 this->Request->Size = System::Drawing::Size(35, 13);
				 this->Request->TabIndex = 7;
				 this->Request->Text = L"label2";
				 this->Request->Visible = false;
				 // 
				 // btnSubmit
				 // 
				 this->btnSubmit->Location = System::Drawing::Point(290, 15);
				 this->btnSubmit->Name = L"btnSubmit";
				 this->btnSubmit->Size = System::Drawing::Size(34, 23);
				 this->btnSubmit->TabIndex = 8;
				 this->btnSubmit->Text = L"OK";
				 this->btnSubmit->UseVisualStyleBackColor = true;
				 this->btnSubmit->Visible = false;
				 this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnSubmit_Click);
				 // 
				 // labelStatus
				 // 
				 this->labelStatus->AutoSize = true;
				 this->labelStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->labelStatus->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->labelStatus->Location = System::Drawing::Point(174, 20);
				 this->labelStatus->Name = L"labelStatus";
				 this->labelStatus->Size = System::Drawing::Size(41, 13);
				 this->labelStatus->TabIndex = 9;
				 this->labelStatus->Text = L"label1";
				 this->labelStatus->Visible = false;
				 // 
				 // tblPrint
				 // 
				 this->tblPrint->BackColor = System::Drawing::SystemColors::Desktop;
				 this->tblPrint->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
				 this->tblPrint->ColumnCount = 1;
				 this->tblPrint->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 599)));
				 this->tblPrint->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::AddColumns;
				 this->tblPrint->Location = System::Drawing::Point(362, 14);
				 this->tblPrint->Name = L"tblPrint";
				 this->tblPrint->RowCount = 1;
				 this->tblPrint->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				 this->tblPrint->Size = System::Drawing::Size(578, 21);
				 this->tblPrint->TabIndex = 10;
				 this->tblPrint->Visible = false;
				 // 
				 // verStatusToolStripMenuItem1
				 // 
				 this->verStatusToolStripMenuItem1->Name = L"verStatusToolStripMenuItem1";
				 this->verStatusToolStripMenuItem1->Size = System::Drawing::Size(178, 22);
				 this->verStatusToolStripMenuItem1->Text = L"Ver Status";
				 this->verStatusToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::printList_Click);
				 // 
				 // excluirListaToolStripMenuItem
				 // 
				 this->excluirListaToolStripMenuItem->Name = L"excluirListaToolStripMenuItem";
				 this->excluirListaToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->excluirListaToolStripMenuItem->Text = L"Excluir Lista";
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1063, 412);
				 this->Controls->Add(this->tblPrint);
				 this->Controls->Add(this->panel1);
				 this->Controls->Add(this->labelStatus);
				 this->Controls->Add(this->btnSubmit);
				 this->Controls->Add(this->Request);
				 this->Controls->Add(this->getInfo);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button1);
				 this->Name = L"MyForm";
				 this->Text = L"Criador de Estruturas";
				 this->cmsPilha->ResumeLayout(false);
				 this->cmsLista->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void btnPilha_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ newButton = gcnew System::Windows::Forms::Button();
		this->panel1->Controls->Add(newButton);
		newButton->Location = System::Drawing::Point(_currentX, _currentY);

		if (_currentX < 1000)
			_currentX += 50;
		else
		{
			_currentX = 0;
			_currentY += 50;
		}

		newButton->Name = "P" + _countPile;
		_countPile++;
		newButton->Visible = true;
		newButton->Tag = "NULL";
		newButton->Text = "0";
		newButton->ForeColor = System::Drawing::Color::White;
		newButton->Size = System::Drawing::Size(50, 50);
		newButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		newButton->BackgroundImage = Image::FromFile("..\\img\\pilha.png");
		newButton->ContextMenuStrip = cmsPilha;
		newButton->Parent = panel1;
		newButton->BringToFront();
	}

	private: System::Void btnLista_Click(System::Object^ sender, System::EventArgs^  e) {

		Button^ newButton = gcnew System::Windows::Forms::Button();
		this->panel1->Controls->Add(newButton);
		newButton->Location = System::Drawing::Point(_currentX, _currentY);

		if (_currentX < 1000)
			_currentX += 50;
		else
		{
			_currentX = 0;
			_currentY += 50;
		}

		newButton->Name = "L" + _countList;
		_countList++;
		newButton->Visible = true;
		newButton->Tag = "NULL";
		newButton->Text = "0";
		newButton->ForeColor = System::Drawing::Color::White;
		newButton->Size = System::Drawing::Size(50, 50);
		newButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		newButton->BackgroundImage = Image::FromFile("..\\img\\lista.png");
		newButton->ContextMenuStrip = cmsLista;
		newButton->Parent = panel1;
		newButton->BringToFront();
	}

	private: System::Void btnFila_Click(System::Object^  sender, System::EventArgs^  e) {

		Button^ newButton = gcnew System::Windows::Forms::Button();
		//then we have to add it to our Form
		this->panel1->Controls->Add(newButton);
		//then optionally assign various properties to your button, e.g. Location, Size, Text, Tag, event handlers etc...
		newButton->Location = System::Drawing::Point(_currentX, _currentY);

		if (_currentX < 1000)
			_currentX += 50;
		else
		{
			_currentX = 0;
			_currentY += 50;
		}

		newButton->Visible = true;
		newButton->Text = "0";
		newButton->ForeColor = System::Drawing::Color::White;
		newButton->Size = System::Drawing::Size(50, 50);
		newButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		newButton->BackgroundImage = Image::FromFile("..\\img\\fila.png");
		newButton->ContextMenuStrip = cmsFila;
	}

	private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Pilha* p;
		Lista* l;
		Lista* currentList;

		Int32 count;
		std::string myString = toStandardString(getInfo->Text);
		int value = atoi(myString.c_str());
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		switch (_submit)
		{
		case 0: //Pilha Push
			if (thisButton->Tag->Equals("NULL"))
			{
				p = criarPilha(p);
				thisButton->Tag = "";
				p = push(ID, value, p);

				if (firstPile == NULL) {
					firstPile = p;
					firstPile->top = p;
					firstPile->nextPile = NULL;
				}

				else
				{
					Pilha * aux = firstPile;

					while (aux->nextPile != NULL)
						aux = aux->nextPile;

					aux->nextPile = p;
					aux->nextPile->nextPile = NULL;
				}
				count = 1;
			}

			else {
				p = searchPile(ID, firstPile);
				p->top = push(ID, value, p->top);
				count = countPileElements(p->top);
			}


			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(0);
			break;

		case 1: //Lista Add
			if (thisButton->Tag->Equals("NULL"))
			{
				l = criarLista(l);
				thisButton->Tag = "";
				l = addElement(ID, value, l);

				if (firstList == NULL) {
					firstList = l;
					firstList->nextList = NULL;
				}

				else
				{
					Lista * aux = firstList;

					while (aux->nextList != NULL)
						aux = aux->nextList;

					aux->nextList = l;
					aux->nextList->nextList = NULL;
				}
				count = 1;
			}

			else {
				currentList = searchList(ID, firstList);
				l = addElement(ID, value, currentList);
				count = countListElements(l);
			}

			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(0);
			break;

		case 2: //Lista Remove
			if (thisButton->Tag->Equals("NULL")) return;
			Lista* currentList;

			currentList = searchList(ID, firstList)->first;
			currentList->first = removeElementAt(currentList->first, value);

			count = countListElements(currentList->first);

			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(4);

			break;
		}

	}

	private: void statusLabel(int value)
	{
		switch (value)
		{
		case 0: // Added
			labelStatus->Text = "Valor adicionado com sucesso!";
			labelStatus->ForeColor = Color::DarkGreen;
			labelStatus->Visible = true;
			Request->Visible = false;
			getInfo->Visible = false;
			btnSubmit->Visible = false;
			break;
		case 1: // Value Removed
			labelStatus->Text = "Valor removido com sucesso!";
			labelStatus->ForeColor = Color::DarkGreen;
			labelStatus->Visible = true;
			Request->Visible = false;
			getInfo->Visible = false;
			btnSubmit->Visible = false;
			break;
		case 2: // Edited
			labelStatus->Text = "Valor editado com sucesso!";
			labelStatus->ForeColor = Color::DarkGreen;
			labelStatus->Visible = true;
			Request->Visible = false;
			getInfo->Visible = false;
			btnSubmit->Visible = false;
			break;
		case 4: // Index Removed
			labelStatus->Text = "�ndice removido com sucesso!";
			labelStatus->ForeColor = Color::DarkGreen;
			labelStatus->Visible = true;
			Request->Visible = false;
			getInfo->Visible = false;
			btnSubmit->Visible = false;
			break;
		}

	}

	private: System::Void cmsPilha_Opened(System::Object^  sender, System::EventArgs^  e) {

		_newCms = safe_cast<System::Windows::Forms::ContextMenuStrip^>(sender);
		//Control^ thisControl = panel1->GetChildAtPoint(_newCms->Location);
		Control^ thisControl = panel1->GetChildAtPoint(panel1->PointToClient(cmsPilha->Location));
		_newButton = safe_cast<Button^>(thisControl);
	}

			 static std::string toStandardString(System::String^ string)
			 {
				 using System::Runtime::InteropServices::Marshal;
				 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
				 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
				 std::string returnString(charPointer, string->Length);
				 Marshal::FreeHGlobal(pointer);
				 return returnString;
			 }


			 //-----------------------------------Eventos Pilha
	private: System::Void pushPilha_Click(System::Object^  sender, System::EventArgs^  e) {
		Request->Text = "Insira o valor:";
		Request->Visible = true;
		getInfo->Visible = true;
		btnSubmit->Visible = true;
		_submit = 0;
		labelStatus->Visible = false;
	} // Push

	private: System::Void popPilha_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Pilha* p;

		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		if (thisButton->Tag->Equals("NULL")) return;

		p = searchPile(ID, firstPile);
		p = pop(p);

		Int32 count = countPileElements(p);
		thisButton->Text = gcnew String(std::to_string(count).c_str());
		statusLabel(1);
	} // Pop

	private: System::Void printPile_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Pilha* p;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		if (thisButton->Tag->Equals("NULL")) return;

		p = searchPile(ID, firstPile)->top;
		Int32 count = countPileElements(p);
		tblPrint->Controls->Clear();
		tblPrint->Visible = true;
		Label^ element = gcnew System::Windows::Forms::Label();
		tblPrint->Controls->Add(element);
		element->ForeColor = Color::AntiqueWhite;

		for (int i = 0; i < count; i++)
		{
			element->Text += gcnew String(std::to_string(pileElement(i, p)).c_str()) + " |";
		}

		element->Text = "Topo -> " + element->Text;
	}
	private: System::Void excluirPilha_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Pilha* p;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		firstPile = removePile(ID, firstPile);
		panel1->Controls->Remove(thisButton);

	}

			 //

	private: System::Void cmsLista_Opened(System::Object^  sender, System::EventArgs^  e) {
		_newCms = safe_cast<System::Windows::Forms::ContextMenuStrip^>(sender);
		//Control^ thisControl = panel1->GetChildAtPoint(_newCms->Location);
		Control^ thisControl = panel1->GetChildAtPoint(panel1->PointToClient(cmsLista->Location));
		_newButton = safe_cast<Button^>(thisControl);
	}
	private: System::Void addListElement_Click(System::Object^  sender, System::EventArgs^  e) {
		Request->Text = "Insira o valor:";
		Request->Visible = true;
		getInfo->Visible = true;
		btnSubmit->Visible = true;
		_submit = 1;
		labelStatus->Visible = false;
	}
	private: System::Void removeListElement_Click(System::Object^  sender, System::EventArgs^  e) {
		Request->Text = "�ndice:";
		Request->Visible = true;
		getInfo->Visible = true;
		btnSubmit->Visible = true;
		_submit = 2;
		labelStatus->Visible = false;
	}
	private: System::Void printList_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Lista* l;
		Lista* currentList;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		if (thisButton->Tag->Equals("NULL")) return;

		currentList = searchList(ID, firstList);

		l = currentList;

		Int32 count = countListElements(l);
		tblPrint->Controls->Clear();
		tblPrint->Visible = true;
		Label^ element = gcnew System::Windows::Forms::Label();
		tblPrint->Controls->Add(element);
		element->ForeColor = Color::AntiqueWhite;

		for (int i = 0; i < count; i++)
		{
			element->Text += gcnew String(std::to_string(listElement(i, l)).c_str()) + " | ";
		}

	}
	};
	//--------------------------------------------------
}
