// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int v[], int acumulaciones[], int n){
    int ret = -1;
    int i = 0, maxTamanyo = 0;

    while(i < n){
        if(v[i] == acumulaciones[i] - v[i]){
            if(v[i] > maxTamanyo){
                ret = i;
                maxTamanyo = v[i];
            }
        }
        i++;
    }


    return ret;
}

// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n;
    cin >> n;
	if (n == 0)	// es la marca del final de la entrada
    return false;
	else {
        int v[n];
        int acumulaciones[n + 1];
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        acumulaciones[n] = 0;
        for(int i = n - 1; 0 <= i; i--){
            acumulaciones[i] = acumulaciones[i + 1] + v[i]; 
        }
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int solucion = algoritmo(v, acumulaciones, n);
		// Escritura de la salida
        if(solucion != -1){
            cout << "SI " << solucion + 1 << endl;
        }
        else{
            cout << "NO" << endl;
        }
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
