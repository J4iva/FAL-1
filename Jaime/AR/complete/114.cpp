#include <iostream>
using namespace std;

void casoDePrueba() {
    unsigned int xFact;
    unsigned int tmp = 1;
    unsigned int lastDigit;
    cin >> xFact;

    if (xFact >= 5){
        lastDigit = 0;
    } else for (int j = 1; j <= xFact; j++){
        tmp = (tmp * j) % 10;
        lastDigit = tmp;
    }

    if (xFact == 0){
        lastDigit = 1;
    }
    
    cout << lastDigit << endl;

} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
  
    return 0;
}