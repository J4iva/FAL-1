// Nombre y apellidos: 

#include <iostream>
#include <string>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

string algoritmo(int n, int p, int& nActualizado){
    if(n < 6 * p){
        nActualizado = n % p;
        int i =  n/p;
        return "" + to_string(i);
    }
    else{
        return algoritmo(n, p * 6, nActualizado) + to_string(nActualizado % p);
    }
}

string algoritmo(int n){
    int nActualizado;
    return algoritmo(n, 1, nActualizado);
}

// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    string solucion = algoritmo(n);
    cout << solucion << endl;
	// Escritura de la salida
}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) {
		casoDePrueba();

	}

	return 0;
}