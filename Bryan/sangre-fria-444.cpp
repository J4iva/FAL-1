// Nombre y apellidos: 

#include <iostream>
#include <vector>
using namespace std;
	
/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int algoritmo(const vector<int>& v, int n, int k){
    int ret = 0;
    int i = 0, j = 0; 
    int ceros = 0; 
    
    while(i < n && v[i] != 1){
        i++;
    }

    j = i;
    if(i < n)
        ret = 1;

    while(j < n){
        
        if(v[j] == 0){
            ceros++;
        }
        else{ // v[j] == 1
            
            if(ceros > k){
                i = j; 
            }
            ret = max(ret, j - i + 1);
            
            ceros = 0;
        }
        
        j++; 
    }
    
    return ret;
}



// Resolución de un caso de prueba, salvo ni no quedan más
bool casoDePrueba() {
	// Lectura de los datos de entrada
	int n, k;
    cin >> n >> k;
	if (n == 0 && k == 0)	// es la marca del final de la entrada
		return false;
	else {
		// Resolución del caso 
			// Llamamos a la función que aplica el algoritmo 
        vector<int> v;
        int aux;
        for(int i = 0; i < n; i++){
            cin >> aux;
            v.push_back(aux);
        }
        int solucion = algoritmo(v, n, k);
		// Escritura de la salida
        cout << solucion << endl;

		return true;
	}
}

int main() {

	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}
