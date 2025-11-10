// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
//{Pre: 0=<d<=1.000.000, 0<n<200.000, 0<=j<n, 0<=v[j]<=1.000.000}
bool caminandoVoy(int d, int n, int const v[]){

    int acum = 0;

    for (int i = 1; i < n; i++){

        if (v[i] > v[i-1]) acum += (v[i]-v[i-1]);
        else acum = 0;

        if (acum > d) return false;

    }
    return true;


}
// {Post: sol = p | p = 1 <=> P.t 0<=i<n t.q. acum_i <= d; p = 0 <=> E. i, 0<=i<n t.q. acum_i > d
//donde: acum_i = \sum_{n=0}^{i} v[i]-v[i-1]}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int d;
    cin >> d;
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++){

            cin >> v[i];

        }
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        if (caminandoVoy(d, n, v)) cout << "APTA" << '\n';
        else cout << "NO APTA" << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}