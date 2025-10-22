// Nombre y apellidos: Jaime García Ruiz

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void aprendiendo(int n, int const v[], int& sol0, int& sol1){
    int dif0 = 0, dif1 = 0;

    for (int i = 0; i < n; i++){
        if (v[i] == 0){
            dif0 = i+1;
            dif1 = dif0;

        }else{
            dif1++;

        }

        if (dif1 - dif0 > sol1 - sol0){
            sol0 = dif0;
            sol1 = dif1;
        }

    }


}


// Resolución de un caso de prueba
void casoDePrueba(int i, int numCasos) {

	// Lectura de los datos de entrada
    int n;
    cin >> n; 
    int v[n+1];
    int sol0 = 0, sol1 = 0;

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }


    // Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    aprendiendo(n, v, sol0, sol1);
	// Escritura de la salida
    if (sol1 == 0){
        cout << "SIGUE BUSCANDO" << endl;
    }else{
        cout << sol1-sol0 << " -> [" << sol0 << "," << sol1-1 << "]" << endl;
    }
}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) 
		casoDePrueba(i, numCasos);

	return 0;
}