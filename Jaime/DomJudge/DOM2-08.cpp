// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void rescate(int n, int t, int v[], int& ini, int& fin){
    int iniM = -1, finM = -1;
    int iniActual = -1, finActual = -1;
    
    for(int i = 0; i < n; i++){
        if (v[i] > t){
            if (iniActual == -1){
                iniActual = i;
                finActual = i;
            } else {
                finActual = i;
            }
        } else {
            if (iniActual != -1){
                if (iniM == -1 || (finActual - iniActual) > (finM - iniM)){
                    iniM = iniActual;
                    finM = finActual;
                }
                iniActual = -1;
            }
        }
    }

    if (iniActual != -1){
        if (iniM == -1 || (finActual - iniActual) > (finM - iniM)){
            iniM = iniActual;
            finM = finActual;
        }
    }
    
    ini = iniM;
    fin = finM;
}


// Resolución de un caso de prueba
void casoDePrueba() {
    int n, t;
    cin >> n >> t;
    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
	// Lectura de los datos de entrada
    
	// Resolución del caso 
    // Llamamos a la función que aplica el algoritmo 
    int ini = -1, fin;
    rescate(n, t, v, ini, fin);

    cout << ini << " " << fin << '\n';
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
