// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
    En FAL escribimos una función aparte (debajo de este comentario)
    
    short int elevame(int x, int n){
        
    if (n == 1) return x%31543;
    else return ((x%31543)*(elevame(x, n-1)%31543))%31543;
    
}
*/
/*    
*/
    short int elevameFinal(int x, int n, long long int aux){

		if (n == 1) return x;
		else {

			if (n%2 == 1){return (elevameFinal(x%31543, n/2, aux)%31543 * elevameFinal(x%31543, n/2, aux)%31543 * x)%31543; }
			else return (elevameFinal(x%31543, n/2, aux)%31543 * elevameFinal(x%31543, n/2, aux)%31543)%31543;
		}
		
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int x, n;
    cin >> x >> n; 
	if (x == 0 || n == 0){
        
        if (x != 0){ cout << '1' << '\n'; return true;
        }else if (n != 0){ cout << '0' << '\n'; return true;
        }else return false;
	}else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo
		int aux = 1;
        
        cout << elevameFinal(x%31543, n, aux) << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
