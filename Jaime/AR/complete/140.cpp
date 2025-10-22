// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int totalDigitos(int n){

    if (n < 10){ 
        cout << n;
        return n;
    }else{
        int ret = totalDigitos(n/10);
        cout << " + " << n%10;

        return ret + (n%10);

    }


}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
	if (n < 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int sum = totalDigitos(n);
		// Escritura de la salida

        cout << " = " << sum << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
