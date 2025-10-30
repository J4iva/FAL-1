// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int trocear(int fuerzaHobbit, int pesoCadena){
    if(pesoCadena <= fuerzaHobbit * 2){
        return 0;
    }
    else{
        return (1 + trocear(fuerzaHobbit,  pesoCadena / 3) + trocear(fuerzaHobbit, pesoCadena - pesoCadena / 3));
    }
}




// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int fuerzaHobbit, pesoCadena;
    cin >> fuerzaHobbit >> pesoCadena;
	if (fuerzaHobbit == 0 && pesoCadena == 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int solucion = trocear(fuerzaHobbit, pesoCadena);

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