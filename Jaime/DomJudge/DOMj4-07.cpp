// Nombre y apellidos: Jaime García Ruiz

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int noFinal(short int n){

    if (n < 10) return n*10+n;
    else return ((noFinal(n/10)*10 + (n%10))*10+ n%10);

}

int final(short int n, int aux, int dig){

    if (n < 10){ aux = (n*10+n)*dig + aux; return aux;}
    else{aux = ((n%10)*10 + n%10)*dig + aux; return final(n/10, aux, dig*100);}

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    short int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int dummy = 0;
    cout << noFinal(n) << ' ' << final(n, dummy, 1) << '\n';
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
