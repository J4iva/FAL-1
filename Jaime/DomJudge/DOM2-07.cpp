// Nombre y apellidos: 

#include <iostream>

using namespace std;




	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int pistas(int n, int v[]){
    int preacum = 0;
    int acum = 1;
    bool marca = 0;

    if (n == 0) return 0;

    for (int i = 1; i < n; i++){

        if (v[i] <= v[i-1]){

            acum += 1;

        }else{

            if(preacum < acum) preacum = acum;
            acum = 1;

        }

    }

    if(preacum < acum) preacum = acum;


    return preacum;
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
    cout << pistas(n, v) << '\n';
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
