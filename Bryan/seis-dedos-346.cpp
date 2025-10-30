// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int const anyos[], int n, int a){
    int maxAnyos = 0, i = 0, j = 0;
	
	while(j < n){
		if(anyos[j] - anyos[i] < a)
			j++;
		else
		 	i++;
		if (j - i > maxAnyos)
			maxAnyos = j - i;
	}


    return maxAnyos;
}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n, a;
    cin >> n >> a;
	if (n == 0)	// es la marca del final de la entrada
		return false;
	else {
        int anyos[n];
		for(int i = 0; i < n; i++){
			cin >> anyos[i];
		}
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int solucion = algoritmo(anyos, n, a);
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