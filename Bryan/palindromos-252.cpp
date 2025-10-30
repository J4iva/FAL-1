// Nombre y apellidos: 

#include <cctype>
#include <iostream>
#include <string>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/

bool algoritmo(string frase, int a, int b){
    if(a >= b){
        return true;
    }
    else if(frase.at(a) == ' '){
        return algoritmo(frase, a + 1, b);
    }
    else if(frase.at(b) == ' '){
        return algoritmo(frase, a, b - 1);
    }
    else{
        return frase.at(a) == frase.at(b) && algoritmo(frase, a + 1, b - 1);
    }
}


bool algoritmo(string frase){
    return algoritmo(frase, 0, frase.length() - 1);
}


// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	string frase;
    getline(cin, frase);

	if (frase == "XXX")	// es la marca del final de la entrada
		return false;
	else {

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        for(char& c: frase)
            c = tolower(c);
        bool solucion = algoritmo(frase);
		// Escritura de la salida
        cout << (solucion ? "SI" : "NO") << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
