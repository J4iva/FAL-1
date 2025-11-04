// Nombre y apellidos: Jaime García Ruiz

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
long long int noPares(long long int n){

    if (n < 10){ 
        if (n % 2 == 1) return n;
        else return 0;
    }else{

        if ((n%10)%2 == 1) return noPares(n/10)*10 + n%10;
        else return noPares(n/10);


    }


}

long long int noParesFinal(long long int n, long long int aux, long long int dig){

     if (n < 10){ 
        if (n % 2 == 1) aux = n*dig + aux;
        return aux;
    }else{

        if ((n%10)%2 == 1){ aux = (n%10)*dig + aux; dig *=10;}
        
        return noParesFinal(n/10, aux, dig);

    }

}

// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
        long long int n;
        cin >> n;

	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {

		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura
        
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo
        long long int dummy = 0;
        cout << noParesFinal(n, dummy, 1) << ' ' << noPares(n) << '\n'; // 
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}