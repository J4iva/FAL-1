// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int acumulador(int n){
    if (n < 10) return  n;
    else {

        return n%10 + acumulador(n/10);

    }


}


bool interesante(int n, int acumuladorI, int acumuladorD){

    if (n < 10){

        acumuladorI -= n ;
        if (n !=0 && acumuladorI%n == 0 && acumuladorD%n == 0) return true;
        else return false; 
        
    }else {
    
    if (n%10 != 0 && acumuladorI%(n%10) == 0 && acumuladorD%(n%10) == 0) {//
        acumuladorD += n%10; //al final;
        return interesante(n/10, acumuladorI, acumuladorD) && true;

    }else return false;

    }

}




// Resolución de un caso de prueba
void casoDePrueba() {

	// Lectura de los datos de entrada
    int n;
    cin >> n;
	// Resolución del caso 
		// Llamamos a la función que aplica el algoritmo 
         int acumuladorI = acumulador(n), dummy2 = 0;
        
    
	// Escritura de la salida
    if (interesante(n, acumuladorI, dummy2)) cout << "SI" << '\n';
    else cout << "NO" << '\n';
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
