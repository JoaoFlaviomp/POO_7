#ifndef FILA_H
#define FILA_H

#include <iostream>
using namespace std;

template <class T, int N>
class Fila{
	public:
		Fila();
		Fila(const Fila<T, N>&);
		~Fila();

		void enfileirar(T x);
		void desenfileirar();
		T & verInicio();
		T & verFinal();
		bool vazia();
		
	private:
		T elementos[N];
		int inicio;
		int final;
};

template <class T,int N>
Fila<T,N>::Fila(){
	inicio = 0;
	final = 0;
}

template <class T,int N>
Fila<T,N>::Fila(const Fila<T,N> &f){
	inicio = f.inicio;
	final = f.final;
	for(int i = 0; i < 100; i++)
		elementos[i] = f.elementos[i];
}

template <class T,int N>
Fila<T,N>::~Fila(){

}

template <class T,int N>
void Fila<T,N>::enfileirar(T x){
	elementos[final] = x;
	final++;
}

template <class T,int N>
void Fila<T,N>::desenfileirar(){
	if(!vazia()) 
		inicio++;
	else
		cout << "Fila Vazia\n";
}

template <class T,int N>
T& Fila<T,N>::verInicio(){
	if(!vazia()) 
		return elementos[inicio];
	else
		cout << "Fila Vazia\n";
}

template <class T,int N>
T& Fila<T,N>::verFinal(){
	if(!vazia()) 
		return elementos[final];
	else
		cout << "Fila Vazia\n";
}

template <class T,int N>
bool Fila<T,N>::vazia(){
	if(inicio == final) return true;
	return false;
}

#endif
