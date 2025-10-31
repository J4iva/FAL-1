// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void complementario(int n, int& sol, int& sol1, int aux){

if (n < 10){

    sol1 = sol1 *10 + (9-n);
    sol = sol + (9-n)*aux;
    

}else {

    sol= sol + (9-(n%10))*aux;
    sol1 = sol1*10 + (9-(n%10));
    

    complementario(n/10, sol, sol1, aux*10);
}


}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int sol = 0, sol1 = 0;
    int aux = 1;
    complementario (n, sol, sol1, aux);
	// Escritura de la salida
    cout << sol << " " << sol1 << '\n';
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
