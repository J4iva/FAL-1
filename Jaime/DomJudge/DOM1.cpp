#include <iostream>
#include <algorithm>
using namespace std;


void casoDePrueba() {

    int nPalabras;
    cin >> nPalabras;
    string palabra[nPalabras];

    for (int i = 0; i < nPalabras; i++){

        cin >> palabra[i];

    }

// { Pre: 1 < n <= sizeof(palabra)}
    if (nPalabras > 1){
    sort(palabra, palabra + nPalabras);
    }
// {Post: Min (palabra): a = 0 : palabra[a]}

    cout << palabra[0] << endl;


} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
  
    return 0;
}