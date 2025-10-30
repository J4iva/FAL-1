#include <iostream>
using namespace std;
int main(){
	int puentes, maxP = 0, maxT = 1000, n_carriles;
	int arr[5];
	cin >> puentes;
	while (puentes != 0){
		for (int i = 0; i < puentes; i++) {
			cin >> n_carriles;
			for (int j = 0; j < n_carriles; j++) {
				cin >> arr[j];
			}
			for (int j = 0; j < n_carriles; j++) {
				if (arr[j] > maxP)
					maxP = arr[j];
			}
			if (maxP < maxT)
				maxT = maxP;
			maxP = 0;
		}
		cout << maxT <<endl;
		maxT = 1000;
		cin >> puentes;

	
	}

	
	
}