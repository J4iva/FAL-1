// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

long long int jan(){
	char next;
	cin >> next;
	if(next >= '0' && next <= '9'){
		return (long long int) next - '0';
	}
	else{
		switch(next){
			case '+':
				return jan() + jan();
				break;
			case '-':
				return jan() - jan();
				break;
			case '*':
				return jan() * jan();
				break;
			case '/':
				return jan() / jan();
				break;
		}
	}
}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
	// Resolución del caso 
	// Llamamos a la función que aplica el algoritmo 
    long long int solucion = jan();
	// Escritura de la salida
	cout << solucion << endl;
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