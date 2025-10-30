// Nombre y apellidos: 

#include <iostream>
#include <vector>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int n, vector<int> v, int maxKg){
    int ret = 0;
    int buenos = 0, i = 0, j = 0;

    while(j < n){
        if(buenos + (v[j] >= maxKg) <= 5){
            ret = max(ret, j - i + 1);
            buenos += v[j] >= maxKg;
            j++;
        }
        else{
            buenos -= v[i] >= maxKg;
            i++;
        }
    }


    return ret;
}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n, maxKg;
    cin >> maxKg;
    cin >> n;
    int aux;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int solucion = algoritmo(n, v, maxKg);
	// Escritura de la salida
    cout << solucion << endl;
}

int main() {

	// Lectura del número de casos
	int numCasos;
	cin >> numCasos;
	
	// Resolución de todos los casos
	for (int i = 0; i < numCasos; ++i) {
		casoDePrueba();

	}

	return 0;
}