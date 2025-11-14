// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
struct tMatrix_2x2{
        long long int n1, n2, n3, n4;
    };

tMatrix_2x2 mult(tMatrix_2x2 a, tMatrix_2x2 b){
    return {(a.n1*b.n1+a.n2*b.n3)%46337, (a.n1*b.n2+a.n2*b.n4)%46337 , (a.n3*b.n1+a.n4*b.n3)%46337 ,(a.n3*b.n2+a.n4*b.n4)%46337};
}

tMatrix_2x2 fib(int n){

    
    if (n < 2){ return {0, 1,1,1};}
    else{
        
        tMatrix_2x2 aux = fib(n/2);
        if (n%2 == 0){return mult(aux, aux);}
        else {return mult(mult(aux, aux),{0, 1 ,1 , 1});}
        /*if (acum == n-3) fibMenos = fibMas;
        fibMas = fib(n-1, fibMenos, fibMas, acum); 
        return fibMas + fibMenos;
*/

    }


}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	unsigned int n;
    cin >> n;
    

	if (!n)	// es la marca del final de la entrada
		return false;
	else {
        
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        
        
        cout << fib(n-1).n4 << '\n';
       
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
