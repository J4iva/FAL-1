// Nombre y apellidos: 

#include <iostream>

using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int luckyIzq(int nSospechosos, int alturaSospechoso, int const altura[], int a, int b){

    if (altura[((b-a)/2)+a] == alturaSospechoso)
    if (altura[b] < alturaSospechoso) return b+1;
    else return luckyIzq(nSospechosos, alturaSospechoso, altura, a, b);
}

int luckyDer(int nSospechosos, int alturaSospechoso, int const altura[], int a, int b){

    if (altura[a] > alturaSospechoso) return a-1;
    else return luckyDer(nSospechosos, alturaSospechoso, altura, )



}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
		// Si están compuestos por más de un valor, leemos solamente el primero aquí

    int nSospechosos;
    cin >> nSospechosos;
    
	if (!cin)	// no hay ningún dato (final de la entrada)
		return false;
	else {
		// Lectura del resto de los datos de entrada
			// Si quedó algo por leer, se continúa aquí la lectura
    int alturaSospechoso;
    cin >> alturaSospechoso;
    int altura[nSospechosos];

    for (int i = 0; i < nSospechosos; i++){

        cin >> altura[i];

    }
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
    lucky(nSospechosos, alturaSospechoso, altura);
		// Escritura de la salida

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}