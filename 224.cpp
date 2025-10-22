// Nombre y apellidos: Jaiva

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void bocata_lomo_ya(int const v[], int n, bool& SI, int& k){

    int acumulador = v[n-1];


    for (int i = n-2; i >= 0; i--){

        if (v[i] == acumulador){

            SI = true; 
            k = i;

        }else if (v[i] < acumulador){


        }

        acumulador += v[i];
        

    }

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
    int n;
    cin >> n;
    int v[n-1];
    bool SI = false;
    int k = -1;
	
	if (n == 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
            for (int i = 0; i < n; i++){

                cin >> v[i];

            }

        bocata_lomo_ya(v, n, SI, k);

		// Escritura de la salida

            if (SI == true){
                cout << "SI " << k+1 << endl;
            }else {

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