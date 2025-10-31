// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int jugando(int n, int aux){

    if (n < 10){
        if(n%2==0) return (++n)*aux;
        else return (--n)*aux;
    }else{

        if (n%2==0) return ((n%10)+1)*aux + jugando(n/10, aux*10);
        else return ((n%10)-1)*aux + jugando(n/10, aux*10);


    }


}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int dummy = 1;
    cout << jugando(n, dummy) << '\n';
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
