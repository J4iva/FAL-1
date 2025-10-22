// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool poli(long long int n, int& numDigitos){

    if (n < 10){
        numDigitos = 1;
        return true;
    }else {
        
        bool extraParametro = poli(n/10, numDigitos);
        numDigitos++;
        return extraParametro && (n%numDigitos == 0);

    }

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
        int numDigitos;
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int dummy;
        if (poli(n, dummy)) cout << "POLIDIVISIBLE" << '\n'; else cout << "NO POLIDIVISIBLE" << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}