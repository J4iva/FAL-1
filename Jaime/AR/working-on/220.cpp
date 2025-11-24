// Nombre y apellidos: 

#include <iostream>

using namespace std;

int fila(int d) {
    return (d - 1) / 3;
}

int col(int d) {
    return (d - 1) % 3;
}

bool gana(int suma, int ultimo, bool usados[]) {
    int f = fila(ultimo);
    int c = col(ultimo);
    bool hayMovimiento = false;

    for (int d = 1; d <= 9; d++) {
        if (!usados[d]) {
            int fd = fila(d);
            int cd = col(d);

            if (fd == f || cd == c) {
                if (d == 0) {
                    continue;
                }

                hayMovimiento = true;
                int nuevaSuma = suma + d;

                if (nuevaSuma >= 31) {
                    continue;
                } else {
                    usados[d] = true;
                    bool ganaRival = gana(nuevaSuma, d, usados);
                    usados[d] = false;

                    if (!ganaRival) {
                        return true;
                    }
                }
            }
        }
    }

    if (!hayMovimiento) {
        return false;
    }

    return false;
}


// Resolución de un caso de prueba
void casoDePrueba() {

    int n, a;
    cin >> n >> a;
    
    bool usados[10];
    for (int i = 0; i < 10; i++) {
        usados[i] = false;
    }
    usados[a] = true;

    if (gana(n, a, usados)) {
        cout << "GANA" << '\n';
    } else {
        cout << "PIERDE" << '\n';
    }
}

int main() {

    int numCasos;
    cin >> numCasos;
	
    for (int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }

    return 0;
}