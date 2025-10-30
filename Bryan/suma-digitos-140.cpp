// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int n){
    if(n < 10){
        cout << n;
        return n;
    }
    else{
        int suma = algoritmo(n / 10) + (n % 10);
        cout << " + " << n % 10;
        return suma;
    }
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
	if (n < 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int solucion = algoritmo(n);
        cout << " = " << solucion << endl;
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
