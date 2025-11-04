// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
string transforma(int n, string bin){

    if(n/2 == 0) {
        if (n == 1) return "1";
        else return "0";
    } 
    else{

        if (n%2 == 1) return transforma(n/2, bin) + "1";
        else return transforma(n/2, bin) + "0";

    }

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    
    string dummy2;
    cout << transforma(n, dummy2) << '\n';
    
	// Escritura de la salida
}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) 
		casoDePrueba();

	return 0;
}
