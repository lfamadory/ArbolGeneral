#pragma once
#include "ArbolGeneral.h";

namespace ArbolGeneral_D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		ArbolGeneral^ Arbol = gcnew ArbolGeneral();
	private: System::Windows::Forms::TextBox^ TextinsertR;
	private: System::Windows::Forms::Button^ InsertRaiz;
	private: System::Windows::Forms::TextBox^ TextPadre;
	private: System::Windows::Forms::TextBox^ TextHijo;
	private: System::Windows::Forms::Button^ InsertHijo;
	private: System::Windows::Forms::Button^ EliminarHijo;
	private: System::Windows::Forms::Button^ Pre_Orden;
	private: System::Windows::Forms::Button^ Entre_Orden;
	private: System::Windows::Forms::Button^ Post_Orden;
	private: System::Windows::Forms::TextBox^ TextOrden;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TextinsertR = (gcnew System::Windows::Forms::TextBox());
			this->InsertRaiz = (gcnew System::Windows::Forms::Button());
			this->TextPadre = (gcnew System::Windows::Forms::TextBox());
			this->TextHijo = (gcnew System::Windows::Forms::TextBox());
			this->InsertHijo = (gcnew System::Windows::Forms::Button());
			this->EliminarHijo = (gcnew System::Windows::Forms::Button());
			this->Pre_Orden = (gcnew System::Windows::Forms::Button());
			this->Entre_Orden = (gcnew System::Windows::Forms::Button());
			this->Post_Orden = (gcnew System::Windows::Forms::Button());
			this->TextOrden = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TextinsertR
			// 
			this->TextinsertR->Location = System::Drawing::Point(596, 51);
			this->TextinsertR->Name = L"TextinsertR";
			this->TextinsertR->Size = System::Drawing::Size(158, 22);
			this->TextinsertR->TabIndex = 0;
			// 
			// InsertRaiz
			// 
			this->InsertRaiz->Location = System::Drawing::Point(596, 90);
			this->InsertRaiz->Name = L"InsertRaiz";
			this->InsertRaiz->Size = System::Drawing::Size(158, 30);
			this->InsertRaiz->TabIndex = 1;
			this->InsertRaiz->Text = L"Insert Raíz";
			this->InsertRaiz->UseVisualStyleBackColor = true;
			this->InsertRaiz->Click += gcnew System::EventHandler(this, &Form1::InsertRaiz_Click);
			// 
			// TextPadre
			// 
			this->TextPadre->Location = System::Drawing::Point(490, 180);
			this->TextPadre->Name = L"TextPadre";
			this->TextPadre->Size = System::Drawing::Size(100, 22);
			this->TextPadre->TabIndex = 2;
			// 
			// TextHijo
			// 
			this->TextHijo->Location = System::Drawing::Point(747, 186);
			this->TextHijo->Name = L"TextHijo";
			this->TextHijo->Size = System::Drawing::Size(100, 22);
			this->TextHijo->TabIndex = 3;
			// 
			// InsertHijo
			// 
			this->InsertHijo->Location = System::Drawing::Point(510, 251);
			this->InsertHijo->Name = L"InsertHijo";
			this->InsertHijo->Size = System::Drawing::Size(137, 41);
			this->InsertHijo->TabIndex = 4;
			this->InsertHijo->Text = L"Insert Hijo";
			this->InsertHijo->UseVisualStyleBackColor = true;
			this->InsertHijo->Click += gcnew System::EventHandler(this, &Form1::InsertHijo_Click);
			// 
			// EliminarHijo
			// 
			this->EliminarHijo->Location = System::Drawing::Point(728, 251);
			this->EliminarHijo->Name = L"EliminarHijo";
			this->EliminarHijo->Size = System::Drawing::Size(119, 41);
			this->EliminarHijo->TabIndex = 5;
			this->EliminarHijo->Text = L"Eliminar Hijo";
			this->EliminarHijo->UseVisualStyleBackColor = true;
			this->EliminarHijo->Click += gcnew System::EventHandler(this, &Form1::EliminarHijo_Click);
			// 
			// Pre_Orden
			// 
			this->Pre_Orden->Location = System::Drawing::Point(414, 343);
			this->Pre_Orden->Name = L"Pre_Orden";
			this->Pre_Orden->Size = System::Drawing::Size(98, 35);
			this->Pre_Orden->TabIndex = 6;
			this->Pre_Orden->Text = L"Pre-Orden";
			this->Pre_Orden->UseVisualStyleBackColor = true;
			this->Pre_Orden->Click += gcnew System::EventHandler(this, &Form1::Pre_Orden_Click);
			// 
			// Entre_Orden
			// 
			this->Entre_Orden->Location = System::Drawing::Point(414, 406);
			this->Entre_Orden->Name = L"Entre_Orden";
			this->Entre_Orden->Size = System::Drawing::Size(98, 35);
			this->Entre_Orden->TabIndex = 7;
			this->Entre_Orden->Text = L"Entre-Orden";
			this->Entre_Orden->UseVisualStyleBackColor = true;
			this->Entre_Orden->Click += gcnew System::EventHandler(this, &Form1::Entre_Orden_Click);
			// 
			// Post_Orden
			// 
			this->Post_Orden->Location = System::Drawing::Point(414, 479);
			this->Post_Orden->Name = L"Post_Orden";
			this->Post_Orden->Size = System::Drawing::Size(98, 35);
			this->Post_Orden->TabIndex = 8;
			this->Post_Orden->Text = L"Post-Orden";
			this->Post_Orden->UseVisualStyleBackColor = true;
			this->Post_Orden->Click += gcnew System::EventHandler(this, &Form1::Post_Orden_Click);
			// 
			// TextOrden
			// 
			this->TextOrden->Location = System::Drawing::Point(625, 419);
			this->TextOrden->Name = L"TextOrden";
			this->TextOrden->Size = System::Drawing::Size(359, 22);
			this->TextOrden->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(520, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Padre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(764, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Hijo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(656, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Raíz";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 611);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TextOrden);
			this->Controls->Add(this->Post_Orden);
			this->Controls->Add(this->Entre_Orden);
			this->Controls->Add(this->Pre_Orden);
			this->Controls->Add(this->EliminarHijo);
			this->Controls->Add(this->InsertHijo);
			this->Controls->Add(this->TextHijo);
			this->Controls->Add(this->TextPadre);
			this->Controls->Add(this->InsertRaiz);
			this->Controls->Add(this->TextinsertR);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InsertRaiz_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ info = TextinsertR->Text;
		if (!String::IsNullOrEmpty(info)) {
			TNodoArbol^ nodo = gcnew TNodoArbol(info);
			Arbol->InsertarRaiz(nodo);
			MessageBox::Show("Raíz insertada: " + info);
		}
	}
private: System::Void InsertHijo_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ padreInfo = TextPadre->Text;
	String^ hijoInfo = TextHijo->Text;
	if (!String::IsNullOrEmpty(padreInfo) && !String::IsNullOrEmpty(hijoInfo)) {
		TNodoArbol^ padre = Arbol->buscar(padreInfo);
		if (padre != nullptr) {
			TNodoArbol^ hijo = gcnew TNodoArbol(hijoInfo);
			Arbol->Insertar(hijo, padre);
			MessageBox::Show("Hijo insertado: " + hijoInfo);
		}
		else {
			MessageBox::Show("Padre no encontrado: " + padreInfo);
		}
	}
}
private: System::Void EliminarHijo_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ padreInfo = TextPadre->Text;
	String^ hijoInfo = TextHijo->Text;
	if (!String::IsNullOrEmpty(padreInfo) && !String::IsNullOrEmpty(hijoInfo)) {
		TNodoArbol^ padre = Arbol->buscar(padreInfo);
		if (padre != nullptr) {
			Arbol->Eliminar(padre, hijoInfo);
		}
		else {
			MessageBox::Show("Padre no encontrado: " + padreInfo);
		}
	}
}
private: System::Void Pre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	TextOrden->Text = Arbol->PreOrden(Arbol->raiz);
}
private: System::Void Entre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	TextOrden->Text = Arbol->EntreOrden(Arbol->raiz);
}
private: System::Void Post_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	TextOrden->Text = Arbol->PosOrden(Arbol->raiz);
}
};
}
