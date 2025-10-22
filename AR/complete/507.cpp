// Nombre y apellidos: 

#include <algorithm>
#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
unsigned long long int bocataChorizo(int nFamilia, int pesoMax){

long long int v[nFamilia];

for (int i = 0; i < nFamilia; i++){

    cin >> v[i];
}

sort(v, v + nFamilia);

int j = nFamilia-1;
int i = 0;
unsigned long long int acumulador = 0;

while(i < j){        
        if (v[i] + v[j] <= pesoMax){
        acumulador += (j - i);
        ++i;
        }else {
            --j;
        }

    }

return acumulador;

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int nFamilia;
    cin >> nFamilia;
    long long int pesoMax;
    cin >> pesoMax;

	if (nFamilia == 0 && pesoMax == 0)	// es la marca del final de la entrada
		return false;
	else {
        unsigned long long int sol;
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        sol = bocataChorizo(nFamilia, pesoMax);
		// Escritura de la salida
        cout << sol << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}