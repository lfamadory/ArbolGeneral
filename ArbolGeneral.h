#pragma once
#include "TNodoArbol.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class ArbolGeneral {
public:
    TNodoArbol^ raiz;

    ArbolGeneral() {
        raiz = nullptr;
    }

    bool vacio() {
        return raiz == nullptr;
    }

    void InsertarRaiz(TNodoArbol^ a) {
        if (vacio()) {
            raiz = a;
        }
    }

    void Insertar(TNodoArbol^ a, TNodoArbol^ padre) {
        padre->hijos->Add(a);
    }

    void Eliminar(TNodoArbol^ padre, String^ info) {
        for (int i = 0; i < padre->hijos->Count; ++i) {
            if (padre->hijos[i]->info == info) {
                padre->hijos->RemoveAt(i);
                MessageBox::Show("El elemento eliminado es = " + info);
                return;
            }
        }
    }

    String^ PreOrden(TNodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            result += r->info + "  ";
            for each (TNodoArbol ^ hijo in r->hijos) {
                result += PreOrden(hijo);
            }
        }
        return result;
    }

    String^ EntreOrden(TNodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            if (r->hijos->Count > 0) {
                result += EntreOrden(r->hijos[0]);
            }
            result += r->info + "  ";
            for (int i = 1; i < r->hijos->Count; ++i) {
                result += EntreOrden(r->hijos[i]);
            }
        }
        return result;
    }

    String^ PosOrden(TNodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            for each (TNodoArbol ^ hijo in r->hijos) {
                result += PosOrden(hijo);
            }
            result += r->info + "  ";
        }
        return result;
    }

    TNodoArbol^ buscar(TNodoArbol^ r, String^ nombre) {
        if (r != nullptr) {
            if (r->info == nombre) {
                return r;
            }
            for each (TNodoArbol ^ hijo in r->hijos) {
                TNodoArbol^ aux = buscar(hijo, nombre);
                if (aux != nullptr) {
                    return aux;
                }
            }
        }
        return nullptr;
    }

    TNodoArbol^ buscar(String^ nombre) {
        return buscar(raiz, nombre);
    }
};