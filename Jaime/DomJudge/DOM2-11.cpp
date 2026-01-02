// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
long long tramo12(int n, int v[]){
    bool uno = false;
    bool dos = false;
    long long acum = 0;
    long long acumM = 0;
    for (int i = 0; i < n; i++){

        if (v[i] == 1){
            if (!uno){
                uno = 1;
                acum = 1;
            }else if (dos) ++acum;
            else acum = 1;
            
            dos = 0;
        }
        else if (v[i] == 2 && uno && !dos){ 
            ++acum;
            dos = 1;
        }else{

            uno = 0;
            dos = 0;
        }

            if (uno && dos){
                if (acum > acumM ) acumM = acum;
            }        

    }

    if (uno && dos){
        if (acum > acumM ) acumM = acum;
    }


    return acumM;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
    long long n;
    cin >> n;
	if (n == 0)	// es la marca del final de la entrada
		return false;
	else {
         int v[n];

         for (int i = 0; i < n; i++) cin >> v[i];


		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        cout << tramo12(n, v) << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
