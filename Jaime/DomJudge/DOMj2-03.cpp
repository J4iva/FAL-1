// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool bienDividido(int n, int p, int const v[]){
    
    if (p == n-1) return true;
    int max = v[0];
    int min = v[p+1];



    for (int i = 1; i <= p; i++){
        if (v[i] > max) max=v[i];
    }

    for (int i = p+1; i < n; i++){
        if (v[i] < min) min = v[i];
    }

    if (min > max) return true;
    else return false;
}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
    int v[n], p;
    cin >> p;

    for (int i = 0; i < n; i++) cin >> v[i];
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    if (bienDividido(n, p, v)) cout << "SI" << '\n';
    else cout << "NO" << '\n';
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
