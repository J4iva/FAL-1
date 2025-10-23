// Nombre y apellidos: 

#include <iostream>
#include <cmath>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/




// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {


    int x;
    int n;
    cin >> x >> n;
    int sum = 1;
    int pot = 1;

	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
	
        for (int i = 0; i < n; i++){

            pot = (x *pot)%1000007;

            sum = (pot + sum)% 1000007;

        }       

        cout << sum << endl;
		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}