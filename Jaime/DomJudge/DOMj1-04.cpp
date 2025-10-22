#include <iostream>

using namespace std;

const int MAXN = 100000;

bool esDalton(const int a[], int n) {
	
	if (a[0] == a[1]) return false;

    int trend;

    if (a[1] > a[0]){
        trend = 1;
    }else if (a[1] < a[0]){
        trend = -1;
    }

	int i = 2;

	while (i < n) {
		if (trend == 1) {
			if (a[i - 1] >= a[i]){

                 return false;
            
            }
		} else { // trend == -1
			if (a[i - 1] <= a[i]){
                
                return false;
                
                }
            }
		++i;
	}
	return true;
}



bool casoDePrueba() {
	
	int N;
    cin >> N;
	if (N == 0)	{
		return false;
    }else {
		int h[MAXN];
		for (int i = 0; i < N; ++i) cin >> h[i];

		
		bool dalton = esDalton(h, N);

		// Escritura de la salida
        if (dalton == true){
            cout <<"DALTON"<< endl;
        }else if (dalton == false){
            cout << "DESCONOCIDOS" << endl;
        }
		

		return true;
	}
}

int main() {
	// Resolución de todos los casos
	while (casoDePrueba());

	return 0;	
}