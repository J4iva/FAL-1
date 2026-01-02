// Nombre y apellidos: 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
long long elefantes(long long v1, long long v2, long long acum[], long long i){

    if (v1 > 0) return acum[v2]-acum[v1-1];
    else return acum[v2];

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    
    long long ini, fin;
    cin >> ini;
    cin >> fin;
	if (!ini && !fin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura

        long long v[fin-ini+1];
        long long acum[fin-ini+1];

        for(long long i = 0; i < fin-ini+1; i++){
             cin >> v[i];
             if (i == 0) acum[i] = v[i];
             else acum[i] = acum [i-1] + v[i];
        }

        long long n;
        cin >> n;
        long long v1[n], v2[n];
        for (long long i = 0; i < n; i++){
            cin >> v1[i] >> v2[i];
            v1[i] = v1[i] - ini;
            v2[i] = v2[i] - ini;
            cout << elefantes(v1[i], v2[i], acum, i) << '\n';
            
        }

        cout << "---" << '\n';
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 

		// Escritura de la salida

		return true;
	}
}

int main() {
	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}