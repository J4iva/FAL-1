// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int v[], int kg, int n){
    int ret = 0;
    int i = 0, j = 0, nPalmeras = 0;

    while(i < n){
        if(nPalmeras <= 5){
            if
        }
    }


    return ret;
}

// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    
    int kg, n;
    cin >> kg >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int solucion = algoritmo(v, kg, n);
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