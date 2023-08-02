#include <iostream>
#include "Fila.h"

using namespace std;

int main(){

	Fila<int, 10> F;
	
	for(int i = 0; i<10; i++)
		F.enfileirar(i);

	while(!F.vazia()){
		cout << F.verInicio() << endl;
		F.desenfileirar();	
	}

	return 0;
}
