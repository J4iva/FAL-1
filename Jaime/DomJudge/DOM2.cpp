#include <iostream>
#include <cassert>
using namespace std;

bool casoDePrueba() {

    int anosCompeticion;
    string nacionalidadDest;
    cin >> anosCompeticion;
    //assert(anosCompeticion < 100000 || anosCompeticion <= 0);

   if (anosCompeticion == 0){
        return false;
   }else {

        cin >> nacionalidadDest;
        string nacionalidad;
        int lastSeen = 0;
        
        for (int i = 0; i < anosCompeticion; i++){

            cin >> nacionalidad;

            if (nacionalidad == nacionalidadDest){

                lastSeen = i+1;
    
            }
        }

        if (lastSeen == 0){

            cout << "NUNCA" << endl;

        }else{

            cout << anosCompeticion - lastSeen + 1 << endl;

        }
        //anosCompeticion - (i+1) + 1 
        

        return true;
     }
    
} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}