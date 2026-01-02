// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int kemparejados(int n, int k, int v[]){

    int acum = 0;
    int p = 0;
    int j = 0;
 
    if (k == 0) return n;
    for (int i = 0; i < n; i++){
        
        while(j < n && v[j]-v[i] < k) ++j;

        if (j < n && v[j] - v[i] == k){

            ++j;
            ++acum;
        }
      
    }

    return acum;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
    int n;
    cin >> n;

	if (n == -1)	// es la marca del final de la entrada
		return false;
	else {

        int k;
        cin >> k;
        int v[n];
        for (int i = 0; i < n; i++) cin >> v[i];
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        cout << kemparejados(n, k, v) << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
