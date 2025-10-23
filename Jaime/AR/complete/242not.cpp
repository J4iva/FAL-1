#include <iostream>
#include <cmath>
using namespace std;

bool casoDePrueba() {

    //  leer caso de prueba
    const int N = 100000;
    int paisesTot;
    cin >> paisesTot;
    int personas[N];
    int sol = 0;


    if (paisesTot == 0){
        return false;
    }else {
        // CÓDIGO PRINCIPAL AQUÍ

        for (int i = 0; i < paisesTot; i++){

            cin >> personas[i];

            

        }

        for (int i = 0; i < paisesTot; i++){

            for (int j = 1; j < paisesTot && j != i; j++){

                sol = sol + (personas[i]*personas[j]);


            }

        }

            // sumatorio^n_i=1(sumatorio^n_j,j!=i(p_i * p_j))

        cout << sol << endl;
        return true;
     }
    
} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}