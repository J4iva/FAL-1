// Nombre y apellidos: 

#include <iostream>
#include <cmath>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int paseos(int n, int i){
    
	i = 0;
	while (pow(2,i)-1 < n){
		i++;
	}

	return i;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int n;
    cin >> n;

	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 7
		int dummy;
       cout << paseos(n, dummy) << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}