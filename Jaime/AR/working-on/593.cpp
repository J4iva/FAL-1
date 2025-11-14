// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void prueba(int n, const char p[], int aux, int& acum, int a, int b){
    
    for (int i = a; i < b; i++){
        if (p[i] != '0') aux++;
    }
    if (aux != 0){
        acum++;

        if (((b-a)/2)%2 == 0){
            prueba(n, p, 0, acum, a, (b-a)/2+a);
            prueba(n, p, 0, acum, (b-a)/2+a, b);
        }else{
            prueba(n, p, 0, acum, a, (b-a)/2+a+1);
            prueba(n, p, 0, acum, (b-a)/2+a+1, b);
        }

    }else {
        acum = 1;
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
            prueba(n, p, 0, acum, 0, n);
            cout << acum << '\n';


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
