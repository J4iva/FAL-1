// Nombre y apellidos: 

#include <iostream>
#include <string>

using namespace std;

/*
	Algoritmo para resolver un caso
		En FAL escribimos una función aparte (debajo de este comentario)
*/
int polaco(string const& s, int& pos){

while(pos < s.size() && s[pos] == ' ') pos++;

char c = s[pos];

if (c == '+' || c == '-' || c == '*' || c == '/'){
        
    pos++;
    int left = polaco(s, pos);
    int right = polaco(s, pos);

        if (c == '+') return left + right;
        if (c == '-') return left - right;
        if (c == '*') return left * right;
    return left / right;
    }else{
        int val = s[pos] - '0';
        pos++;
        return val;
    }
}

// Resolución de un caso de prueba
void casoDePrueba() {
    string line;
    string operacion;
    cin.ignore();
    getline(cin, line);
   
    //for (int i = 0; i < line.length(); i++){

      //  if (line[i] != ' ') operacion += line[i];

    //}

    int pos = 0;
    
    cout << polaco(line, pos) << endl;
}

int main() {

    // Lectura del número de casos
    int numCasos;
    cin >> numCasos;

    //Resolución de todos los casos
    for (int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
    return 0;
}