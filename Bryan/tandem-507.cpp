// Nombre y apellidos: 

#include <vector>
#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

long long int algoritmo(vector<int> v, int integrantes, int pesoMaximo){
    int ret = 0;
    int i = 0, j = 0, k = 0;
    int maxPesoOtro = 0;

    while(j < integrantes){
        maxPesoOtro = pesoMaximo - v[j];
        while(v[i] < maxPesoOtro)
            i++;
        ret += i + 1;
        i = 0;
        j++;
    }



    return ret / 2;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int integrantes;
    int pesoMaximo;
    cin >> integrantes >> pesoMaximo;
	if (integrantes == 0 && pesoMaximo == 0)	// es la marca del final de la entrada
		return false;
	else {
        vector<int> v;
		for(int i = 0; i < integrantes; i++){
            int aux;
            cin >> aux;
            v.push_back(aux);
        }
        // Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        long long int solucion = algoritmo(v, integrantes, pesoMaximo);
        cout << solucion << endl;   
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
