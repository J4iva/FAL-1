// Nombre y apellidos: 

#include <cctype>
#include <iostream>
#include <string>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
bool palindromo(string const& n, int a, int b){

    if (a >= b) return true;
    else{
        if(n[a] == n[b]) return palindromo(n, a+1, b-1);
        else return false;
    }

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
    char tmp;
    string line;
    string n;
    int p= 0;
    getline(cin, line);

	
	if (line == "XXX")	// es la marca del final de la entrada
		return false;
	else {
        
        while(p < line.size()){

            if(line[p] != ' ') n += tolower(line[p]);

            p++;
        }

		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
            int a = 0;
            int b = n.size()-1;
        
        if (palindromo(n, a, b)) cout << "SI" << '\n';
        else cout << "NO" << '\n';
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
