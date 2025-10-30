// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int nViajes(int nCajas){
    if(nCajas == 0)
        return 0;
    else{
        return(1 + nViajes(nCajas / 2));
    }
}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int nCajas;
    cin >> nCajas;

	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int solucion = nViajes(nCajas);
		// Escritura de la salida
        cout << solucion << endl;

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}