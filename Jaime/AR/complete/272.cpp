
#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void base6(int n){
	
	if (n < 6){
		cout << n;
		return;
	}else{
		
		base6(n/6);
		cout << n%6;
		
	}

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
	int n;
	cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
	base6(n); 
	cout << '\n';
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