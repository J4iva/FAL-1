#include <iostream>

using namespace std;

int main(){

    int n_puentes;
    int n_carriles;
    int altura_maxima_puente[100];
    int altura_maxima_trayecto;
    int altura[5];

    cin >> n_puentes;

    while (n_puentes != 0){

        for (int i = 0; i < n_puentes; i++){
             
             altura_maxima_puente[i] = 800;
             altura_maxima_trayecto = 800;
             cin >> n_carriles;
             
             for (int j = 0; j < n_carriles; j++){
                
                cin >> altura[j];

                if (altura[j] < altura_maxima_puente[i]){
                    altura_maxima_puente[i] = altura[j];
                }

            
                

            }

            if (altura_maxima_puente[i] < altura_maxima_trayecto){
                altura_maxima_trayecto = altura_maxima_puente[i];
            }


        }

        cout << altura_maxima_trayecto << endl;
        cin >> n_puentes;
    }

return 0;

}