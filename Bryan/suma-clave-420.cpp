// Nombre y apellidos: 

#include <iostream>
#include <vector>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(const std::string& v, int sumaClave) {
    int ret = 0;
    long long sumaActual = 0; 
    int i = 0; 
    int j = 0; 
    int n = v.length();

   
    while (j < n) {
        sumaActual += (v.at(j) - '0');
        while (sumaActual > sumaClave) {
            sumaActual -= (v.at(i) - '0');
            i++;
        }
        if (sumaActual == sumaClave) {
            ret++;
            sumaActual -= (v.at(i) - '0');
            i++;
        }
        
        j++;
    }

    return ret;
}

// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int sumaClave;
    cin >> sumaClave;
    string sequencia;
    cin >> sequencia;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int solucion = algoritmo(sequencia, sumaClave);
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