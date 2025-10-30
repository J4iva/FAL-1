// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

void algoritmo(int anchura, int altura, int& total){
    if (anchura >= altura){
        if(altura >= 10) {
            total += 2;
            algoritmo(anchura - 2 * altura, altura,total);
            }
    }
    else {
        if(anchura >= 10) {
            total += 2;
            algoritmo(anchura, altura - 2 * anchura, total);
        }
    }
}

void algoritmoInit(int anchura, int altura, int& total){
    if (anchura >= altura){
        if(altura >= 10) {
            total += 1;
            algoritmo(anchura - altura, altura,total);
        }
    }
    else {
        if(anchura >= 10) {
            total += 1;
            algoritmo(anchura, altura - anchura, total);
        }
    }
}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int anchura, altura;
    cin >> anchura >> altura;
	if (anchura == 0 && altura == 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int total = 0;
        algoritmoInit(anchura, altura, total);
		// Escritura de la salida
        cout << total << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}