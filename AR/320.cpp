// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int palmeras(int peso, int nPalmeras, int const v[]){

    
    int i = 0;                   
    int enPie = 0;               
    
    int max = 0;               

    for (int j = 0; j < nPalmeras; ++j) {   
        if (v[j] >= peso) {
            enPie++;
        }

        while (enPie > 5) {
            if (v[i] >= peso){
                 enPie--;
            }

            ++i;
        }

        int len = j - i + 1;
        if (len > max) {
            max = len;
        }
    }

    return max;

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int peso;
    cin >> peso;
    int nPalmeras;
    cin >> nPalmeras;
    int v[nPalmeras-1];
    int sol;

    for (int i = 0; i < nPalmeras; i++){

        cin >> v[i];

    }

	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    sol = palmeras(peso, nPalmeras, v);
	// Escritura de la salida
    cout << sol << endl;
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