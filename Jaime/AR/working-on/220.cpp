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

bool juegoCal(int n, int j, FuncArray const v, int p, int i, int k){



    while (i < 3){
        while (p < 3){
            if (v.arr[i][p]>0 && n+v.arr[i][p] < 31) return posibleGanar(p, i, k);//posible Ganar
            else return juegoCal(n, j, v, p+1, i, 31);
            
        }
        p=0;
        i++;
    }
    


    return false;
   }



FuncArray modMatriz(FuncArray v, int j){
    
    int fila = 0, columna = 0;

    if (j%3==0) columna = 2;
    else if (j == 8 || 5 || 2) columna = 1;
    else columna = 0;
    
    if (j>6) fila = 2;
    else if (j>3) fila =1;
    else fila = 0;
    
    for (int i = 0; i < 3; i++){
        for (int p = 0; p < 3; p++){
            if (i == columna && p == fila || !(i == columna || p == fila)) v.arr[i][p] = 0;
        }
    }

    return v;

}

bool posibleGanar(int p, int i, int k){
    int d;
    FuncArray newv;
    int j = newv.arr[i][p];
    newv = modMatriz(newv, j);
    return !(juegoCal(k, j, newv, p, i, 31));



}


// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n, j;
    cin >> n >> j;
	// Resolución del caso 
    FuncArray v;
    // Llamamos a la función que aplica el algoritmo 
    
    modMatriz(v, j);
    
    if (juegoCal(n, j, v, 0, 0, 31)) cout << "GANA" << '\n';
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
