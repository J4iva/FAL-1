// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

bool algoritmo(long long int n, long long int& nDigitos){
    if(n < 10){
        nDigitos = 1;
        return true;
    }
    else{
        bool polidivisible = algoritmo(n / 10, nDigitos);    
        nDigitos++;
        return ((n % nDigitos == 0) && polidivisible) ;
    }
}

bool algoritmo(long long int n){
    long long int dummy;
    return algoritmo(n, dummy);
}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    long long int n;
    cin >> n;
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        bool solucion = algoritmo(n);
		// Escritura de la salida
        cout << (solucion ? "POLIDIVISIBLE" : "NO POLIDIVISIBLE") << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}