// Nombre y apellidos: 

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(unordered_map<int, int> &apariciones, int n, int maxIndex){
	int moda = 0, nModa = 0;
	for(const auto& par : apariciones){
		if(par.second > nModa){
			moda = par.first, nModa = par.second;
		}

	}
	return moda;
}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
	if (n == 0)	// es la marca del final de la entrada
		return false;
	else {
		unordered_map<int, int> apariciones;
		int maxIndex = 0;
		int aux;
		for(int i = 0; i < n; i++){
			cin >> aux;
			if(aux > maxIndex){
				maxIndex = aux;
			}
			apariciones[aux] += 1;
		}
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
		int solucion = algoritmo(apariciones, n, maxIndex);
		// Escritura de la salida
		cout << solucion << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}