#include <iostream>
using namespace std;

bool casoDePrueba() {

   short int cuadroTamArrow, cuadroTamCol; 
    cin >> cuadroTamArrow >> cuadroTamCol;
    char cuadro[cuadroTamArrow*cuadroTamCol];
    int copistas;
    char remplazo[256];

    for(int i = 0; i < sizeof(remplazo); i++){
        remplazo[i] = (char) i;
    }
    



   if (cuadroTamArrow == 0 && cuadroTamCol == 0)
        return false;
    else {
    int index = 0;    
    for (int i = 0; i < (cuadroTamArrow*cuadroTamCol); i++){

        cin >> cuadro[i];

    }

    cin >> copistas;
    
    char colorOut[copistas], colorIn[copistas];
   
    
    for (int i = 0; i < copistas; i++){

        cin >> colorOut[i] >> colorIn[i];

        //remplazo[colorOut[i]] = colorIn[i];
        
        //remplazo[remplazo[colorOut[i]]] = remplazo[colorIn[i]];

        

    }

    for (int i = copistas-1; i >= 0; i--){

        remplazo[colorOut[i]] = remplazo[colorIn[i]];

    }
    
    
    /*for (int i = 0; i < copistas; i++){

        for (int j = 0; j < copistas; j++){

            if (colorIn[i] == colorOut[j]){
                
                colorIn[i] = colorIn[j];

            }

        }

        remplazo[colorOut[i]] = colorIn[i];
    }*/

    for (int i = 0; i < cuadroTamArrow*cuadroTamCol; i++){

        cuadro[i] = remplazo[cuadro[i]];

    }


    unsigned int index1 = 0;

    for (int i = 0; i < cuadroTamArrow; i++){

        for (int j = 0; j < cuadroTamCol; j++){

            cout << cuadro[j + index1];
            
        }

        cout << endl;
        index1 += cuadroTamCol;
        
    }



        return true;
     }
    
} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}