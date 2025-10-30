// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

int algoritmo(int potencias[], int primera, int ultima){
    int ret;
    ret = potencias[ultima] - potencias[primera - 1];
    return ret;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int nMolinos;
    cin >> nMolinos;
	if (nMolinos == 0)	// es la marca del final de la entrada
		return false;
	else {
        int potenciasAcumuladas[nMolinos + 1];
        potenciasAcumuladas[0] = 0;
        for(int i = 1; i <= nMolinos; i++){
            cin >> potenciasAcumuladas[i];
            potenciasAcumuladas[i] += potenciasAcumuladas[i - 1];
        }
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        int nConsultas;
        cin >> nConsultas;
        int primera, ultima;
        for(int i = 0; i < nConsultas; i++){
            cin >> primera >> ultima;
            cout << algoritmo(potenciasAcumuladas, primera, ultima) << endl;
        }

		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}