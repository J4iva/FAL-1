// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int segmento(int n, int v[]){
    int acum = 1;
    int acumM = 0;
    for (int i = 0; i < n-1; i++){
        
        if ((v[i]+1 == v[i+1]) || (v[i]-1 == v[i+1])) ++acum;
        else {
            if (acumM < acum) acumM = acum;
            acum = 1;
        }

    }
    if (acumM < acum) acumM = acum;
    return acumM;
}



// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) cin >> v[i];

    if (n == 0) cout << 0 << '\n';
    else{

        cout << segmento(n, v) << '\n';

    }
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 

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
