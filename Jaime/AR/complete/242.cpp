#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool casoDePrueba() {

    //  leer caso de prueba
    int paisesTot;
    cin >> paisesTot;
    unsigned int personas[paisesTot];
    unsigned long long sol = 0;
    unsigned long long sol1 = 0;

    if (paisesTot == 0){
        return false;
    }else {
        // CÓDIGO PRINCIPAL AQUÍ

        for (int i = 0; i < paisesTot; i++){

            cin >> personas[i];

            sol = sol + personas[i];
            sol1 = sol1 + pow(personas[i], 2);

        }
        
        //sort();

        sol = (pow(sol, 2) - sol1)/2;


        

            // ((sum^n_i=1(p_i) * sum^n_j(p_j) ) - sum^n_i=1(p²_i) )/2

        cout << sol << endl;
        return true;
     }
    
} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}