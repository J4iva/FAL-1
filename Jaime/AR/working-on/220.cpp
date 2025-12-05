// Nombre y apellidos: 

#include <iostream>

using namespace std;

struct FuncArray{

    int arr[3][3] ={{1, 2, 3}, {4, 5 , 6}, {7, 8, 9}};
};

/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool posibleGanar(int p, int i, int k);
FuncArray modMatriz(int j);

bool juegoCal(int n, int j, FuncArray v){


    if (n >= 30){
        if (n == 31) return true;
        else return false;
    }else{
        bool gana = 0;

        for (int i = 0; i < 3; i++){
            for (int p = 0; p < 3; p++){
                if (v.arr[i][p] && (v.arr[i][p] + n) < 31 && !gana) gana = !(juegoCal(v.arr[i][p] + n, v.arr[i][p], modMatriz(v.arr[i][p])));
            }
        }

        return gana;


    }

    
}



FuncArray modMatriz(int j){

    FuncArray v;
    int fila = 0, columna = 0;

    columna = (j-1)%3;
    fila = (j-1)/3;
    
    for (int i = 0; i < 3; i++){
        for (int p = 0; p < 3; p++){
            if ((i == columna && p == fila) || !(i == columna || p == fila)) v.arr[p][i] = 0;
        }
    }

    return v;

}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n, j;
    cin >> n >> j;
	// Resolución del caso 
    FuncArray v;
    int p;
    // Llamamos a la función que aplica el algoritmo 
    
    v = modMatriz(j);
    
    if (juegoCal(n, j, v)) cout << "GANA" << '\n';
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
