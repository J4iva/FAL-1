// Nombre y apellidos: Bryan Isac Sandrea Perez

#include <iostream>

using namespace std;

/*
	Algoritmo para resolver un caso
		En FAL escribimos una funci�n aparte (debajo de este comentario)
*/

void algoritmo(const int temps[], int nTemperaturas, int respuestas[]) {
	if (nTemperaturas < 3) {
		respuestas[0] = 0; // Numero Picos
		respuestas[1] = 0; // Numero Valles
	}
	else {
		int i = 1;
		while (i < nTemperaturas - 1) {
			if (temps[i - 1] < temps[i] && temps[i + 1] < temps[i])
				respuestas[0]++;
			else if (temps[i - 1] > temps[i] && temps[i + 1] > temps[i])
				respuestas[1]++;
			i++;
		}
	}
}


// Resoluci�n de un caso de prueba
void casoDePrueba() {
	int nTemperaturas;
	int respuestas[2] = { 0 };
	// Lectura de los datos de entrada
	cin >> nTemperaturas;
	int temps[nTemperaturas];
	for (int i = 0; i < nTemperaturas; i++) {
		cin >> temps[i];
	}

	// Resoluci�n del caso 
		// Llamamos a la funci�n que aplica el algoritmo 
	algoritmo(temps, nTemperaturas, respuestas);

	// Escritura de la salida
	cout << respuestas[0] << " " << respuestas[1];

}

int main() {

	// Lectura del n�mero de casos
	int numCasos;
	cin >> numCasos;

	// Resoluci�n de todos los casos
	for (int i = 0; i < numCasos; ++i) {
		casoDePrueba();
		cout << endl;
	}

	return 0;
}