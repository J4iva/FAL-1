// Nombre y apellidos: 

#include <iostream>
#include <ostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int v[], int n, int& primerIndice, int& ultimoIndice){
    int ret = 0, esteSegmento = 0;
	primerIndice = ultimoIndice = 0;
	int i = 1, j = 0;

	while(i < n){
		i++; 	
		if(v[i - 1] != 0){
			esteSegmento++;
			if(esteSegmento > ret){
				ret = esteSegmento;
				ultimoIndice = i;
				primerIndice = j;
			}
		}
		else{
			esteSegmento = 0;
			j = i;
		}
	}
	ultimoIndice--;


	return ret;
}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	if(n > 0){
    int  v[n];
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
    int primerIndice, ultimoIndice;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int solucion = algoritmo(v, n, primerIndice, ultimoIndice);
	// Escritura de la salida
	if (solucion != 0){
		cout << solucion << " -> [" << primerIndice << "," << ultimoIndice << "]\n";
	}
	else{
		cout << "SIGUE BUSCANDO" << endl;
	}
	}
	else{
		cout << "SIGUE BUSCANDO" << endl;
	}
}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) {
		casoDePrueba();

	}

	return 0;
}