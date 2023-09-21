/*
funcion para insertar un char a la pila y hacer una funcion para mostrar todos los elementos de la pila
*/ 

#include <iostream>

using namespace std;

struct Nodo{
    char elemento;
    Nodo *siguiente;
};
void agregarPila(Nodo *&pila, char elemento){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->elemento = elemento;
    nuevo_nodo-> siguiente=pila;
    pila=nuevo_nodo;
}
void mostraPila(Nodo *&pila){
    Nodo *aux = nullptr;
    aux = pila;
    while (aux != nullptr){
        cout << "Elemento: "<<aux->elemento<<endl;
        aux = aux ->siguiente;

    }
}

int main(){
    char nuevo;
    Nodo *pila = nullptr;
    cout<<"Agregar pila: ";
    cin>>nuevo;
    agregarPila(pila, nuevo);
    mostraPila(pila);
    

return 0;
}