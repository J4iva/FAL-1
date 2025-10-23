// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
   


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
    int nMolinos;
    cin >> nMolinos;
    short molino[nMolinos];
    int sumMolino[nMolinos];
    int nConsultas;
    int consulta1, consulta2;


	if (nMolinos == 0)	// es la marca del final de la entrada
		return false;
	else {

        cin >> molino[0];
        sumMolino[0] = molino[0];
        
        for (int i = 1; i < nMolinos; i++){
            
            cin >> molino[i];
 
            sumMolino[i] = sumMolino[i-1] + molino[i]; 
                 
        }

        cin >> nConsultas;

        for (int i = 0; i < nConsultas; i++){
            cin >> consulta1 >> consulta2;

            if (consulta1 == consulta2){

                cout << molino[consulta2-1] << '\n';

            }else if (consulta1 == 1){

                cout << sumMolino[consulta2-1] << '\n';

            }else {

                cout << sumMolino[consulta2-1] - sumMolino[consulta1-2] << '\n';
            }

        }

        
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}