#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool sabe(int ini, int fin, int n, int nK){

    int primero = ini;
    int alto = fin;
    int k;

    for (int i = 0; i < nK; i++){
        cin >> k;

        if (n >= k){
            if (k > primero) primero = k;
        }else{
            if (k-1 < alto) alto = k-1;
        }

    }
    
    return (primero == alto);
}





// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int ini, fin, n;
    cin >> ini >> fin >> n;
	if (!ini && !fin && !n)	// es la marca del final de la entrada
		return false;
	else {
        int nK;
        int counter = 0;
        cin >> nK;
        int k;

        

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        //nK = sizeof(k)/sizeof(k[0]);
        //sort(k, k+nK);
        bool ok = sabe(ini, fin, n, nK);

        if (ok) cout << "LO SABE" << '\n';
        else cout << "NO LO SABE" << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
