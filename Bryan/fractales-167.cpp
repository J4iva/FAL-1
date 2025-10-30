// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int l){
    if(l == 1)
        return 4;
    else{
        return algoritmo(l / 2) * 4 + l * 4; 
    }
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int l;
    cin >> l; 
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int solucion = algoritmo(l);

		
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