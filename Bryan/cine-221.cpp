// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

// { Pre: nPersonas >= 0}
bool algoritmo(int personas[], int nPersonas, int& genteEnPuerta){
    int i = 0;

    while(i < nPersonas && personas[i] % 2 == 0)
        i++;
    genteEnPuerta = i;
    while(i < nPersonas && personas[i] % 2 == 1)
        i++;
  
    return i == nPersonas;
}
// { Post: Ex. a : 0 <= a < nPersonas : (P.t. b : 0 <= b < a : mod(b, 2) = 0) ^ (P.t c : a < c < nPersonas : mod(c, 2) = 1) }


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int nPersonas;
    cin >> nPersonas;
    int personas[nPersonas];
    for(int i = 0; i < nPersonas; i++){
        cin >> personas[i];
    }
    int genteEnPuerta;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    bool puedenAbrir = algoritmo(personas, nPersonas, genteEnPuerta);
	// Escritura de la salida
    if(puedenAbrir)
        cout << "SI " << genteEnPuerta;
    else
        cout << "NO";
}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) {
		casoDePrueba();
        cout << endl;
    }

	return 0;
}