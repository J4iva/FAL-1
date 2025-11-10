// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

//Pre:{0<=n<100.000, acum = sum(v)}
bool contabilidad(int n, int const v[], int acum){


    for (int i = 0; i < n; i++){
        acum -= v[i];
        
        if (acum == v[i]) return true;

    }
    

    return false;

}
//{Post: sol = v[i] <=> acum - sum(v[i]) = v[i],
// donde sum(v[i]) = \sum_{n=0}^{i} v[n]}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
	if (n == 0)	// es la marca del final de la entrada
		return false;
	else {
    
        int v[n];
        int acum = 0;
        for (int i = 0; i < n; i++){ 
            cin >> v[i];
            acum += v[i];
        }
            // Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        
        if (contabilidad(n, v, acum)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
