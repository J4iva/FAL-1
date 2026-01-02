// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/  
    void ordenar(int n, int m, int v[], int x[], int sol[], int& nm){

        int ni = 0;
        int mi = 0;

        for (int i = 0; i < nm; i++){

            if (ni < n && mi < m){

                if(v[ni] == x[mi]){

                    sol[i] = v[ni];
                    nm--;
                    ni++;
                    mi++;


                }else if (v[ni] < x[mi]){
                    sol[i] = v[ni];
                    ni++;
                }else{
                    sol[i] = x[mi];
                    mi++;
                }

            }else if (ni < n){
                sol[i] = v[ni];
                ni++;
            }else if (mi < m){
                sol[i] = x[mi];
                mi++;
            }

        }


    }



// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n, m;
    cin >> n >> m;
    int v[n], x[m];
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < m; i++) cin >> x[i];
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int sol[n+m];
    int nm = n+m;
    ordenar(n, m, v, x, sol, nm);

    for (int i = 0; i < nm; i++) cout << sol[i] << ' ';
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
