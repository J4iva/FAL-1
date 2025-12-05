// Nombre y apellidos: 

#include <iostream>
#include <algorithm>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
struct FuncArray{

    int arr[3][3] ={{1, 2, 3}, {4, 5 , 6}, {7, 8, 9}};
};

void fixMat(int d, int v[]){
    FuncArray fixV;
    int fila = 0, columna = 0;

    columna = (d-1)%3;
    fila = (d-1)/3;

    int j = 0;
      for (int i = 0; i < 3; i++){
        for (int p = 0; p < 3; p++){
            if ((i == columna || p == fila) && !(i == columna && p == columna)){v[j] = fixV.arr[p][i]; j++;}
        }
    }

    sort(v, v+4);


}


bool ganare(int n, int d, int v[], int solPar, bool jugador){
    fixMat(d, v);

    if (v[0]+solPar > 31){

        return jugador;

    }else{

        for (int i = 3; i >= 0; i--){
            if (v[i]+solPar < 31){
                solPar += v[i];
                return ganare(n, v[i], v, solPar, !jugador);
            }

        }

        return jugador;

    }   
}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n, d;
    cin >> n >> d;
    int v[3];
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    if (ganare(n, d, v, 0, 0)) cout << "GANA" << '\n';
    else cout << "PIERDE" << '\n'; 

    


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
