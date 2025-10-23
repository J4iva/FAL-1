// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int papelillo(int n, int n1){

        int tmp;
        if (n < n1){tmp = n; n = n1; n1 = tmp;}

        if (n1 < 10) return 0;

        int dummy = n / n1;
        tmp = n % n1;

        if(tmp==0) return dummy;

        return dummy + papelillo(n1, tmp);
    

}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n,n1;
    cin >> n >> n1;
	if (n == 0 && n1 == 0)	// es la marca del final de la entrada
		return false;
	else {

            cout << papelillo(n, n1) << '\n';
        
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
