#include <iostream>
using namespace std;
int main(){
	int n_cases, aux;
	cin >> n_cases;
	for (int i = 0; i < n_cases; i++){
		cin >> aux;
		if (aux > 0)
			cout << aux - 1<< endl;
		else 
			cout << aux << endl;
	}
}