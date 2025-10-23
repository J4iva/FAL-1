// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/



// Resolución de un caso de prueba
void casoDePrueba() {

int nDecimos;
cin >> nDecimos;
int decimo[nDecimos];
int counter = 0;

for (int i = 0; i < nDecimos; i++){

    cin >> decimo[i];

if (decimo[i]%2 == 0){

    counter++;

}

}

cout << counter << endl;

}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) 
		casoDePrueba();

	return 0;
}