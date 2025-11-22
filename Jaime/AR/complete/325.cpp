// Nombre y apellidos: 

#include <iostream>

using namespace std;


void escribirSol(char solParcial[], int n, bool& primera){

    if (!primera) cout << ' ';

    for (int i = 0; i < n; i++) cout << solParcial[i];

    primera = 0;

}

/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void cucurucho(short int v, short int c, char solParcial[], int k, int n, short int& quedanV, short int& quedanC, bool& primera){

    if (k == n) escribirSol(solParcial, n,primera);
    else{

        solParcial[k] = 'C';
        if (quedanC > 0){
            quedanC--;
            cucurucho(v, c, solParcial, k+1, n, quedanV, quedanC, primera);
            quedanC++;
        }
        
        solParcial[k] = 'V';
        if (quedanV > 0){
            quedanV--;
            cucurucho(v, c, solParcial, k+1, n, quedanV, quedanC, primera);
            quedanV++;
        }

    }

}



/*int calcularFact (int v, int c){

    int sol = v+c;
    int aux = 1;

    for (int i = v+c-1; i > 0; i--) sol *= i;

    for (int i = v; i > 0; i--) aux *= i; 
    for (int i = c; i > 0; i--)aux *= i;

    return sol/aux;

}*/

// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    short int c, v;
    cin >> c >> v;
    char solParcial[v+c];
    //int numSolTotal = calcularFact(v, c);
    int n = v+c;
    bool primera = true;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    cucurucho(v, c, solParcial, 0,  n, v, c, primera);
    cout << '\n';
	// Escritura de la salida
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
