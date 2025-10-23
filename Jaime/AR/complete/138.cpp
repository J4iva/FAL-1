#include <iostream>
#include <cmath>
using namespace std;

void casoDePrueba() {

    unsigned int numFact;
    int result;

    cin >> numFact;

    int n = 1;

    while (pow(5, n) < numFact){
        n++;
    }

    
    result = 0;
    for (int i = 1; i <= n; i++){

        result = result + (numFact/(pow(5, i)));


    }


    cout << result << endl;
    

} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
  
    return 0;
}