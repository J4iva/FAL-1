#include <iostream>

using namespace std;

int main(){
    int i;
    int max = 6000;
    int age[max];

    cin >> i;

    for (int index = 0; i != index; index++){
        cin >> age[index];
        
        if (age[index]>0){
            age[index]--;    
        }
       
    }

    for (int index = 0; i != index; index++){
        cout << age[index] << endl;
    }

    return 0;
}