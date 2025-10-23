#include <iostream>
using namespace std;

bool casoDePrueba() {

    
    int numMontanas;
    cin >> numMontanas;
    int altura[numMontanas];
    int alturaA[numMontanas];
    alturaA[0] = 0;
    int index = 0;;
   

   if  (numMontanas == 0){
        return false;
   }else {
        
        for (int i = 0; i < numMontanas; i++){
            cin >> altura[i];
        }

        for (int i = 0; i < numMontanas; i++){

            if (altura[i] >= alturaA[0]){

                alturaA[0] = altura[i];
                index = 0;

            }else if(altura[i] < alturaA[index]){
                
                alturaA[index + 1] = altura[i];
                index++;
                
                
            }else{

                for(int j = 0; j <= index; j++){   


                    if (altura[i] >= alturaA[j]){

                    alturaA[j] = altura[i];
                    index = j;

                    }
                

                }
            }
        }

        cout << index + 1 << endl;

        return true;
     }
    
} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}
