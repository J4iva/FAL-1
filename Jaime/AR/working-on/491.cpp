// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void cuantasUvas(int const v[], int pesoMax, int nUvas, int n, int k, int acum, int &sol, int posibleSol){

    if (n > nUvas){
        if (posibleSol/12 == 1)sol++;

    }else{

        if (v[k]+acum < pesoMax){

            cuantasUvas(v, pesoMax, nUvas, n,k+1, v[k]+acum, sol, ++posibleSol);

        }else{
                
            
            cuantasUvas(v, pesoMax, nUvas, n+1, n+1, acum, sol, posibleSol);
            
        }
            
    }


}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int pesoMax, nUvas;
    cin >> pesoMax;
	if (!pesoMax)	// es la marca del final de la entrada
		return false;
	else {
        cin >> nUvas;
        int v[nUvas];
        for (int i = 0; i < nUvas; i++) cin >> v[i];

        int sol = 0;
        cuantasUvas(v, pesoMax, nUvas, 0, 0, 0, sol, 0);
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        cout << sol << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
