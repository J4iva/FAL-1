// Nombre y apellidos: Jaime García Ruiz

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int jugando(int n,int nAnterior, int numDigitos){

    if(numDigitos == 1 || n < 10){
        if (n%2 == 0) return (n%10)+1;
        else return (n%10)-1;
    }else{
    nAnterior = n/(numDigitos*10);
    if ((n/numDigitos)%2 == 0) return (((n/numDigitos)-(nAnterior*10)+1)*numDigitos) + jugando(n,nAnterior, numDigitos/10); 
    else return (((n/numDigitos)-(nAnterior*10)-1)*numDigitos) + jugando(n,nAnterior, numDigitos/10);
    
}

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
        
        int numDigitos=1;
    if (n == 0) cout << 1 << '\n';
    else{
        while (numDigitos < n){
            numDigitos *= 10;
        }
        numDigitos /=10;
        int dummy = 0; 
    cout << jugando(n,dummy, numDigitos)  << '\n';
	// Escritura de la salida
    }
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
