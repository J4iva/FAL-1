// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int prueba(const char p[], int a, int b){
    int aux = 0;
    if (a == b-1)return 1;
    else{
        for (int i = a; i < b; i++){
        if (p[i] == '1') aux++;
        }

        if (aux == 0) return 1;
        else {
            
            if ((b-a)%2 == 0) return (prueba( p, a, ((b-a)/2)+a) + prueba(p, ((b-a)/2)+a, b))+1;
            else return (prueba(p, a, (((b-a)/2)+a)+1) + prueba(p, (((b-a)/2)+a)+1, b))+1;


        }

    }

}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
    char p[100000];
	if (n == 0)	// es la marca del final de la entrada
    return false;
	else {
       
        for (int i=0; i < n; i++) cin >> p[i];
        
        if (n == 1) cout << "1" << '\n';
        else {
            int acum = 0;
            
            cout << prueba( p, 0, n) << '\n';


        }
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 

		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
