// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/



// Resolución de un caso de prueba
void casoDePrueba() {

    int nTemp;
    cin >> nTemp;
    int temp[nTemp];
    int pico = 0, valle = 0;

    for (int i = 0; i < nTemp; i++){

        cin >> temp[i];
    }

    for (int i = 1; i < nTemp-1; i++){

        if (temp[i-1] < temp[i] && temp[i] > temp[i+1]){

            pico++;

        }

        if (temp[i-1] > temp[i] && temp[i] < temp[i+1]){

            valle++;
        }
        
    }


    cout << pico << " " << valle << endl;
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