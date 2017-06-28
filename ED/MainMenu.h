#pragma once
#include <sstream>
#include <string>
namespace Project {

	extern "C" {
#include "Pilha.h"
#include "Lista.h"
#include "Fila.h"
#include "Tree.h"
#include <string.h>
#include <stdlib.h>

		int _countPile = 1;
		int _countList = 1;
		int _countFila = 1;
		int  _countTree = 1;
		int _submit;
		Pilha * firstPile;
		Lista * firstList;
		Fila * firstFila;
		Tree * firstTree;
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
			button4->BackgroundImage = Image::FromFile("..\\img\\arvore.png");
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
	private: System::Windows::Forms::ToolStripMenuItem^  adicionarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  verStatusToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  excluirFilaToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  TreeBox;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ContextMenuStrip^  cmsTree;
	private: System::Windows::Forms::ToolStripMenuItem^  AddNode;
	private: System::Windows::Forms::ToolStripMenuItem^  RemoveNode;
	private: System::Windows::Forms::ToolStripMenuItem^  printTree;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteTree;




	private: System::Windows::Forms::ToolStripMenuItem^  alterarNÛToolStripMenuItem;


































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
				 this->verStatusToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->excluirListaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->cmsFila = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
				 this->adicionarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->removerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->verStatusToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->excluirFilaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->getInfo = (gcnew System::Windows::Forms::TextBox());
				 this->Request = (gcnew System::Windows::Forms::Label());
				 this->btnSubmit = (gcnew System::Windows::Forms::Button());
				 this->labelStatus = (gcnew System::Windows::Forms::Label());
				 this->tblPrint = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->TreeBox = (gcnew System::Windows::Forms::RichTextBox());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->cmsTree = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
				 this->AddNode = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->alterarNÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->RemoveNode = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->printTree = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->deleteTree = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->cmsPilha->SuspendLayout();
				 this->cmsLista->SuspendLayout();
				 this->cmsFila->SuspendLayout();
				 this->cmsTree->SuspendLayout();
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
				 this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->panel1->BackColor = System::Drawing::SystemColors::WindowFrame;
				 this->panel1->Location = System::Drawing::Point(3, 53);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(693, 520);
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
				 this->cmsPilha->ImageScalingSize = System::Drawing::Size(20, 20);
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
				 this->cmsLista->ImageScalingSize = System::Drawing::Size(20, 20);
				 this->cmsLista->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					 this->adicionarElementoToolStripMenuItem,
						 this->removerElementoToolStripMenuItem, this->alterarElementoToolStripMenuItem, this->verStatusToolStripMenuItem1, this->excluirListaToolStripMenuItem
				 });
				 this->cmsLista->Name = L"contextMenuStrip1";
				 this->cmsLista->Size = System::Drawing::Size(179, 114);
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
				 this->alterarElementoToolStripMenuItem->Text = L"Alterar PosiÁıes";
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
				 this->excluirListaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeList_Click);
				 // 
				 // cmsFila
				 // 
				 this->cmsFila->ImageScalingSize = System::Drawing::Size(20, 20);
				 this->cmsFila->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->adicionarToolStripMenuItem,
						 this->removerToolStripMenuItem, this->verStatusToolStripMenuItem2, this->excluirFilaToolStripMenuItem
				 });
				 this->cmsFila->Name = L"contextMenuStrip1";
				 this->cmsFila->Size = System::Drawing::Size(179, 92);
				 this->cmsFila->Opened += gcnew System::EventHandler(this, &MyForm::cmsFila_Opened);
				 // 
				 // adicionarToolStripMenuItem
				 // 
				 this->adicionarToolStripMenuItem->Name = L"adicionarToolStripMenuItem";
				 this->adicionarToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->adicionarToolStripMenuItem->Text = L"Adicionar Elemento";
				 this->adicionarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pushFila_Click);
				 // 
				 // removerToolStripMenuItem
				 // 
				 this->removerToolStripMenuItem->Name = L"removerToolStripMenuItem";
				 this->removerToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->removerToolStripMenuItem->Text = L"Remover Elemento";
				 this->removerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::popFila_Click);
				 // 
				 // verStatusToolStripMenuItem2
				 // 
				 this->verStatusToolStripMenuItem2->Name = L"verStatusToolStripMenuItem2";
				 this->verStatusToolStripMenuItem2->Size = System::Drawing::Size(178, 22);
				 this->verStatusToolStripMenuItem2->Text = L"Ver Status";
				 this->verStatusToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::printfila_Click);
				 // 
				 // excluirFilaToolStripMenuItem
				 // 
				 this->excluirFilaToolStripMenuItem->Name = L"excluirFilaToolStripMenuItem";
				 this->excluirFilaToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->excluirFilaToolStripMenuItem->Text = L"Excluir Fila";
				 this->excluirFilaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::excluirFila_Click);
				 // 
				 // getInfo
				 // 
				 this->getInfo->Location = System::Drawing::Point(339, 6);
				 this->getInfo->Name = L"getInfo";
				 this->getInfo->Size = System::Drawing::Size(40, 20);
				 this->getInfo->TabIndex = 6;
				 this->getInfo->Visible = false;
				 // 
				 // Request
				 // 
				 this->Request->AutoSize = true;
				 this->Request->Location = System::Drawing::Point(251, 9);
				 this->Request->Name = L"Request";
				 this->Request->Size = System::Drawing::Size(35, 13);
				 this->Request->TabIndex = 7;
				 this->Request->Text = L"label2";
				 this->Request->Visible = false;
				 // 
				 // btnSubmit
				 // 
				 this->btnSubmit->Location = System::Drawing::Point(385, 3);
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
				 this->labelStatus->Location = System::Drawing::Point(249, 9);
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
				 this->tblPrint->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 772)));
				 this->tblPrint->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::AddColumns;
				 this->tblPrint->Location = System::Drawing::Point(242, 29);
				 this->tblPrint->Name = L"tblPrint";
				 this->tblPrint->RowCount = 1;
				 this->tblPrint->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				 this->tblPrint->Size = System::Drawing::Size(757, 21);
				 this->tblPrint->TabIndex = 10;
				 this->tblPrint->Visible = false;
				 // 
				 // TreeBox
				 // 
				 this->TreeBox->AcceptsTab = true;
				 this->TreeBox->BackColor = System::Drawing::SystemColors::ControlLight;
				 this->TreeBox->DetectUrls = false;
				 this->TreeBox->Location = System::Drawing::Point(696, 53);
				 this->TreeBox->Name = L"TreeBox";
				 this->TreeBox->ReadOnly = true;
				 this->TreeBox->Size = System::Drawing::Size(318, 519);
				 this->TreeBox->TabIndex = 11;
				 this->TreeBox->TabStop = false;
				 this->TreeBox->Text = L"";
				 // 
				 // button4
				 // 
				 this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button4->Location = System::Drawing::Point(174, 3);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(51, 47);
				 this->button4->TabIndex = 12;
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &MyForm::btnTree_Click);
				 // 
				 // cmsTree
				 // 
				 this->cmsTree->ImageScalingSize = System::Drawing::Size(20, 20);
				 this->cmsTree->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					 this->AddNode, this->alterarNÛToolStripMenuItem,
						 this->RemoveNode, this->printTree, this->deleteTree
				 });
				 this->cmsTree->Name = L"contextMenuStrip1";
				 this->cmsTree->Size = System::Drawing::Size(153, 136);
				 this->cmsTree->Opened += gcnew System::EventHandler(this, &MyForm::cmsTree_Opened);
				 // 
				 // AddNode
				 // 
				 this->AddNode->Name = L"AddNode";
				 this->AddNode->Size = System::Drawing::Size(152, 22);
				 this->AddNode->Text = L"Adicionar NÛ";
				 this->AddNode->Click += gcnew System::EventHandler(this, &MyForm::AddNode_Click);
				 // 
				 // alterarNÛToolStripMenuItem
				 // 
				 this->alterarNÛToolStripMenuItem->Name = L"alterarNÛToolStripMenuItem";
				 this->alterarNÛToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->alterarNÛToolStripMenuItem->Text = L"Alterar NÛ";
				 // 
				 // RemoveNode
				 // 
				 this->RemoveNode->Name = L"RemoveNode";
				 this->RemoveNode->Size = System::Drawing::Size(152, 22);
				 this->RemoveNode->Text = L"Remover NÛ";
				 this->RemoveNode->Click += gcnew System::EventHandler(this, &MyForm::RemoveNode_Click);
				 // 
				 // printTree
				 // 
				 this->printTree->Name = L"printTree";
				 this->printTree->Size = System::Drawing::Size(152, 22);
				 this->printTree->Text = L"Ver Status";
				 this->printTree->Click += gcnew System::EventHandler(this, &MyForm::printTree_Click);
				 // 
				 // deleteTree
				 // 
				 this->deleteTree->Name = L"deleteTree";
				 this->deleteTree->Size = System::Drawing::Size(152, 22);
				 this->deleteTree->Text = L"Excluir ¡rvore";
				 this->deleteTree->Click += gcnew System::EventHandler(this, &MyForm::deleteTree_Click);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1011, 585);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->TreeBox);
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
				 this->cmsFila->ResumeLayout(false);
				 this->cmsTree->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void btnPilha_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ newButton = gcnew System::Windows::Forms::Button();
		newButton->Location = searchValidLocation();
		this->panel1->Controls->Add(newButton);

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
		newButton->Location = searchValidLocation();
		this->panel1->Controls->Add(newButton);

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
		newButton->Location = searchValidLocation();
		this->panel1->Controls->Add(newButton);

		newButton->Name = "F" + _countFila;
		_countFila++;
		newButton->Visible = true;
		newButton->Tag = "NULL";
		newButton->Text = "0";
		newButton->ForeColor = System::Drawing::Color::White;
		newButton->Size = System::Drawing::Size(50, 50);
		newButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		newButton->BackgroundImage = Image::FromFile("..\\img\\fila.png");
		newButton->ContextMenuStrip = cmsFila;
		newButton->Parent = panel1;
		newButton->BringToFront();
	}

	private: System::Void btnTree_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ newButton = gcnew System::Windows::Forms::Button();
		newButton->Location = searchValidLocation();
		this->panel1->Controls->Add(newButton);
		newButton->Name = "T" + _countTree;
		_countPile++;
		newButton->Visible = true;
		newButton->Tag = "NULL";
		newButton->Text = "0";
		newButton->ForeColor = System::Drawing::Color::White;
		newButton->Size = System::Drawing::Size(50, 50);
		newButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		newButton->BackgroundImage = Image::FromFile("..\\img\\arvore.png");
		newButton->ContextMenuStrip = cmsTree;
		newButton->Parent = panel1;
		newButton->BringToFront();
	}

	private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Pilha* p;
		Fila* f;
		Lista* l;
		Lista* currentList;
		Tree * t;

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
					firstList = l->first;
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

			currentList = searchList(ID, firstList);

			if (currentList == NULL)
			{
				thisButton->Tag = "NULL";
				return;
			}

			if (countListElements(currentList) != 1)
				currentList = searchList(ID, firstList)->first;

			currentList->first = removeElementAt(currentList->first, value);

			count = countListElements(currentList->first);

			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(4);

			break;

		case 5: //Fila Add			
			if (thisButton->Tag->Equals("NULL"))
			{
				f = criarFila(f);
				thisButton->Tag = "";
				f = add(ID, value, f);

				if (firstFila == NULL) {
					firstFila = f;
					firstFila->top = f;
					firstFila->nextfila = NULL;
				}

				else
				{
					Fila * aux = firstFila;

					while (aux->nextfila != NULL)
						aux = aux->nextfila;

					aux->nextfila = f->top;
					aux->nextfila->nextfila = NULL;
				}
				count = 1;
			}

			else {
				f = searchfila(ID, firstFila);
				f->top = add(ID, value, f->top);
				count = countfilaElements(f->top);
			}

			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(0);
			break;
		case 6: //Tree Add			
			if (thisButton->Tag->Equals("NULL"))
			{
				t = createTree();

				insertTree(ID, value, &t, NULL);

				if (firstTree == NULL) {
					firstTree = t;
					firstTree->root = t;
					firstTree->nextTree = NULL;
				}

				else
				{
					Tree * aux = firstTree;

					while (aux->nextTree != NULL)
						aux = aux->nextTree;

					aux->nextTree = t->root;
					aux->nextTree->nextTree = NULL;
				}
				count = 1;
			}

			else {
				t = searchTree(ID, firstTree);
				insertTree(ID, value, &t->root, t->root);
				count = countTreeElements(t->root);
			}

			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(0);
			break;
		case 7: //Remover NÛ

			if (thisButton->Tag->Equals("NULL")) return;
			firstTree = reorderTree(firstTree);
			t = searchTree(ID, firstTree)->root;
			int index = searchTreeIndex(ID, firstTree->root);

			if (countTreeElements(t) == 1)
			{
				firstTree = removeTree(ID, firstTree);
				t = NULL;
				thisButton->Tag = "NULL";
			}

			else
				removeNode(&t, value);

			firstTree = changeIndex(firstTree, index, t);

			if (firstTree != NULL)
				t = searchTree(ID, firstTree);
			else
				t = NULL;

			Int32 count = countTreeElements(t);
			thisButton->Text = gcnew String(std::to_string(count).c_str());
			statusLabel(1);
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
			labelStatus->Text = "Õndice removido com sucesso!";
			labelStatus->ForeColor = Color::DarkGreen;
			labelStatus->Visible = true;
			Request->Visible = false;
			getInfo->Visible = false;
			btnSubmit->Visible = false;
			break;
		case 5: //Structure Removed
			labelStatus->Text = "Estrutura removida com sucesso!";
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

	private: System::Void cmsTree_Opened(System::Object^  sender, System::EventArgs^  e) {

		_newCms = safe_cast<System::Windows::Forms::ContextMenuStrip^>(sender);
		//Control^ thisControl = panel1->GetChildAtPoint(_newCms->Location);
		Control^ thisControl = panel1->GetChildAtPoint(panel1->PointToClient(cmsTree->Location));
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


			 //-----------------------------------Eventos Pilha-----------------------------------
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
		_newButton = thisButton;
		printPile_Click(gcnew Object(), gcnew EventArgs());
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
		statusLabel(5);
	}

			 //---------------------------------------------------------------------------------------------------------

			 //-----------------------------------Eventos Lista-----------------------------------
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
		Request->Text = "Õndice:";
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

		currentList = searchList(ID, firstList);

		if (currentList == NULL)
			thisButton->Tag = "NULL";

		if (thisButton->Tag->Equals("NULL"))
		{
			tblPrint->Visible = false;
			tblPrint->Controls->Clear();
			return;
		}

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
	private: System::Void removeList_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Lista* l;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		firstList = removeList(ID, firstList);
		panel1->Controls->Remove(thisButton);
		statusLabel(5);
	}

			 //------------------------------------------------------------------------------------------------------------------------
			 //-----------------------------------Eventos Fila-----------------------------------
	private: System::Void cmsFila_Opened(System::Object^  sender, System::EventArgs^  e) {

		_newCms = safe_cast<System::Windows::Forms::ContextMenuStrip^>(sender);
		//Control^ thisControl = panel1->GetChildAtPoint(_newCms->Location);
		Control^ thisControl = panel1->GetChildAtPoint(panel1->PointToClient(cmsFila->Location));
		_newButton = safe_cast<Button^>(thisControl);
	}

	private: System::Void pushFila_Click(System::Object^  sender, System::EventArgs^  e) {
		Request->Text = "Insira o valor:";
		Request->Visible = true;
		getInfo->Visible = true;
		btnSubmit->Visible = true;
		_submit = 5;
		labelStatus->Visible = false;
	} // Push

	private: System::Void popFila_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Fila* f, *x, *teste;

		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		if (thisButton->Tag->Equals("NULL")) return;
		firstFila = reorder(firstFila);
		f = searchfila(ID, firstFila)->top;

		if (countfilaElements(f) == 1)
		{
			firstFila = removeFila(ID, firstFila);
			f = NULL;
			thisButton->Tag = "NULL";
		}

		else
			f = retirar(ID, firstFila);

		Int32 count = countfilaElements(f);
		thisButton->Text = gcnew String(std::to_string(count).c_str());
		statusLabel(1);
	} // Pop

	private: System::Void printfila_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Fila* f;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());
		Label^ element = gcnew System::Windows::Forms::Label();
		element->ForeColor = Color::AntiqueWhite;
		tblPrint->Controls->Clear();
		tblPrint->Visible = true;
		tblPrint->Controls->Add(element);


		if (thisButton->Tag->Equals("NULL"))
		{
			element->Text = "Topo -> ";
			return;
		}

		f = searchfila(ID, firstFila)->top;
		Int32 count = countfilaElements(f);


		for (int i = 0; i < count; i++)
		{
			element->Text += gcnew String(std::to_string(filaElement(i, f)).c_str()) + " |";
		}

		element->Text = "Topo -> " + element->Text;
	}

	private: System::Void excluirFila_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Fila* p;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		firstFila = removeFila(ID, firstFila);
		panel1->Controls->Remove(thisButton);
		statusLabel(5);

	}

	private: System::Drawing::Point searchValidLocation() {
		bool found = false;
		Point p = Point(0, 0);

		while (!found)
		{
			Control^ thisControl = panel1->GetChildAtPoint(p);

			if (thisControl != nullptr)
			{
				if (p.X < 690)
					p.X += 50;
				else
				{
					p.X = 0;
					p.Y += 50;
				}

			}
			else
				found = true;
		}

		return p;
	};
	private: System::Void AddNode_Click(System::Object^  sender, System::EventArgs^  e) {
		Request->Text = "Insira o valor:";
		Request->Visible = true;
		getInfo->Visible = true;
		btnSubmit->Visible = true;
		_submit = 6;
		labelStatus->Visible = false;
	}
	private: System::Void RemoveNode_Click(System::Object^  sender, System::EventArgs^  e) {
		Request->Text = "Valor:";
		Request->Visible = true;
		getInfo->Visible = true;
		btnSubmit->Visible = true;
		_submit = 7;
		labelStatus->Visible = false;
	}
	private: System::Void deleteTree_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Tree* t;
		std::string str = toStandardString(thisButton->Name);
		char *ID = strdup(str.c_str());

		if (firstTree != NULL)
		{
			firstTree = removeTree(ID, firstTree);
		}
		panel1->Controls->Remove(thisButton);
		statusLabel(5);
	}
	private: System::Void printTree_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ thisButton = _newButton;
		Tree* t;
		std::string str = toStandardString(thisButton->Name);
		String^ text = "¡rvore Vazia!";
		char *ID = strdup(str.c_str());
		char * printResult;

		if (firstTree != NULL)
		{
			t = searchTree(ID, firstTree);
			t->printStatus[0] = '\0';
			int height = treeHeight(t);

			printTreeStatus(t, 0, height);

			std::string stdtext = std::string(t->printStatus);
			text = gcnew String(stdtext.c_str());

		}

		TreeBox->Text = text;
	}

	};
}
;
