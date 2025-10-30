// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/




// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
	if (n == 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        if(n == 1) cout << n;
        else if(n % 2 == 0) cout << n;
        else cout << n - 1;
        cout << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
