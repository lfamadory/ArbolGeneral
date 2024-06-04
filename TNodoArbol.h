#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
ref class TNodoArbol {
public:
    String^ info;
    List<TNodoArbol^>^ hijos;

    TNodoArbol(String^ info) {
        this->info = info;
        hijos = gcnew List<TNodoArbol^>();
    }
};