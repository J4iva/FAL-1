// Nombre y apellidos: 

#include <iostream>

using namespace std;

// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int nMediciones, k;
    cin >> nMediciones >> k;


	if (nMediciones == 0 && k == 0)	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        bool v[nMediciones];

        for (int i = 0; i < nMediciones; i++){
            cin >> v[i];
        }

        int acumulador = 0;
        int acumuladorMax = 0;
        int pseudoK = k;
        bool comenzado = false;
        int ceros = 0;
        
        for (int i = 0; i < nMediciones; i++){

            if (v[i] == 1){
                ceros = 0;
                comenzado = true;
                acumulador++;
                pseudoK = k;

            }else if (v[i] == 0 && comenzado == true){

                if (pseudoK == 0 || i == nMediciones-1){

                    acumulador -= ceros;
                    
                    if (acumulador > acumuladorMax){
                        acumuladorMax = acumulador;

                    }

                    comenzado = false;
                    acumulador = 0;

                }else {
                    ceros++;
                    acumulador++;
                    pseudoK--;
                    }
                
              
                }

            }


         if (acumulador > acumuladorMax){
                acumuladorMax = acumulador;
         }

		// Escritura de la salida

        cout << acumuladorMax << endl;

		return true;
	}
}


int main(){

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
