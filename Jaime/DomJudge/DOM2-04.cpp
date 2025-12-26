// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool indice(int n, int v[], int& p){
    int acum = 0;

    for (int i = n-1; i >= 0; i--){

        if (acum == v[i]){

            p = i;
            return true;
        }

        acum += v[i];

    }

    return false;

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++) cin >> v[i];


	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int index;
    if (indice(n, v, index)) cout << "Si " << index << '\n';
    else cout << "No" << '\n';
	// Escritura de la salida
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
