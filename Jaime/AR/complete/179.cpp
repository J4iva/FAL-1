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
    int molino[nMolinos];
    int max = 0;
    int nConsultas;
    int consulta1, consulta2;
    int sum = 0;

	if (nMolinos == 0)	// es la marca del final de la entrada
		return false;
	else {


        for (int i = 0; i < nMolinos; i++){
            cin >> molino[i];
            max += molino[i];
        }

        cin >> nConsultas;
        for (int i = 0; i < nConsultas; i++){
            cin >> consulta1 >> consulta2;

            if (consulta1 == consulta2){

                sum = molino[consulta2-1];

            }else if(consulta1+1 == consulta2){

                sum = molino[consulta1-1] + molino[consulta1];

            }else if(consulta1 == 1){

                for (int j = consulta2; j < nMolinos; j++){

                    max = max - molino[j];

                }

                sum = max;

            }else{

                for (int j = 0; j < consulta1-1; j++){

                    max = max - molino[j];

                }

                for (int j = consulta2; j < nMolinos; j++){

                    max = max - molino[j];

                }
                sum = max;
            }

            cout << sum << endl;
            sum = 0;
        }

        
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}