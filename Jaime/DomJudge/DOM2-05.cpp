// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int parejas(int n, int v[]){

    int acum = 0;
    int npar = 0;
    for (int i = 0; i < n; i++){

        if (v[i]%2 == 1) npar += 1;
        else acum += npar;

    }

    return acum;
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
    cout << parejas(n, v) << '\n';
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
