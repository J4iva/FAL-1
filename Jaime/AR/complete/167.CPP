// Nombre y apellidos: jAIME GARCÍA

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int fractal(int caso){
    
    if (caso == 1){
        return 4;
    }else {
        
        return 4*caso + 4*fractal(caso/2);
        
    }

}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí

    int caso;
    cin >> caso;

	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        //J: Caso base => Lado = 1
        int acumulador = 0;
		// Escritura de la salida
        cout << fractal(caso) << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}