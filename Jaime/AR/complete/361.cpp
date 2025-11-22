// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool objetivo( int n, short int const v[], int solParcial, int k){

    if (k == 5) return solParcial == n;
    else{

            if (objetivo(n, v, solParcial+v[k], k+1)) return true;
            if (objetivo(n, v, solParcial-v[k], k+1)) return true;
            if (objetivo(n, v, solParcial*v[k], k+1)) return true;
            if (v[k] != 0 && solParcial%v[k] == 0 && objetivo(n, v, solParcial/v[k], k+1)) return true;

        return false;

    }

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int n; 
    cin >> n;
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura
        short int v[5];
        for (int i = 0; i < 5; i++) cin >> v[i];
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        
        if(objetivo(n, v, v[0], 1)) cout << "SI" << '\n';
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