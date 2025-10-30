// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

bool loSabe(int& init, int& fin, int n, int guess){
    if(guess == n)
        return true;
    else{
        if (n > guess && guess > init)
            init = guess;
        else if(n < guess && guess < fin)
            fin = guess;
        if (fin - init == 2) return true;
        return false;
    }
}




// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int init, fin, n;
    cin >> init >> fin >> n;
	if (init == 0 && fin == 0 && n == 0)	// es la marca del final de la entrada
		return false;
	else {
 
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int initPropio = init, finPropio = fin;
        
        int k;
        cin >> k;
        int guess;
        cin >> guess;
        bool solucion = loSabe(initPropio, finPropio, n, guess);
        int i = 1;
        while(!solucion && i < k){
            cin >> guess;
            solucion = loSabe(initPropio, finPropio, n, guess);
            i++;
            cout << i << endl;
            cout << (!solucion && i < k) << endl;
        }
		// Escritura de la salida
        cout << (solucion ? "LO SABE" : "NO LO SABE") << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
