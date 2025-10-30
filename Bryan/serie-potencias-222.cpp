// Nombre y apellidos: 

#include <iostream>
#include <cmath>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int x, int n){
    int ret = 1;
	int pot = 1;
    for(int i = 0; i < n; i++){
		pot = (x * pot) % 1000007;
		ret = (pot + ret) % 1000007;
    }

    return ret ;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int x;
    cin >> x;
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura
        int n;
        cin >> n;
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int result = algoritmo(x, n);
		// Escritura de la salida
        cout << result << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}