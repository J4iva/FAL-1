// Nombre y apellidos: 

#include <iostream>
#include <string>

using namespace std;
	

// Resolución de un caso de prueba
void casoDePrueba() {

    int sumaClave;
    string cotizacion;
    cin >> sumaClave;
    cin >> cotizacion;
    

	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
    int n = (int)cotizacion.size();
    int l = 0;
    int counter = 0;
    int suma = 0;

    for (int r = 0; r < n; ++r) {
        suma += (cotizacion[r] - '0');

        while (suma > sumaClave && l <= r) {
            suma -= (cotizacion[l] - '0');
            l++;
        }

        if (suma == sumaClave) {
            counter++;
        
        }
    }


    cout << counter << endl;
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
