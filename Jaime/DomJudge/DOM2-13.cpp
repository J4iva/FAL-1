// Nombre y apellidos: 

#include <iostream>
#include <algorithm>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
void repes(int& n, int v[], int& counter){ 

    for(int i = 0; i < n; i++){

        while (v[i] == -1)i++;
    
        for (int j = i+1; j < n; j++){
            if (v[i] == v[j]){
                v[j] = -1;
                counter++;
            }
        }
    }

    sort(v, v+n);
   

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí
    int n;
    cin >> n;
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura
        int v[n+1];
        for (int i = 0; i < n; i++) cin >> v[i];
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int counter = 0;
        repes(n, v, counter);
        for (int i = counter; i < n; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}