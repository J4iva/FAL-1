// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/



// Resolución de un caso de prueba
void casoDePrueba() {

	int nVecinos;
    cin >> nVecinos;
    int nButaca[nVecinos];
    int nImparesSeguidos = 0;
    bool marca = false;

    for (int i = 0; i < nVecinos; i++){

        cin >> nButaca[i];
    }


    int i = nVecinos - 1;
    while (i >= 0 && nButaca[i]%2 == 1){

        nImparesSeguidos++;
        i--;

    }


    for (int j = 0; j <= i; j++){

        if (nButaca[j]%2 == 1){
            marca = true;
            break;
        }

    }

    if (nImparesSeguidos > 0 && !marca){
        
        cout << "SI " << nImparesSeguidos << endl;
    }else{
        cout << "NO" << endl;
    }

    

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