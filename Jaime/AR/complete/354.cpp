// Nombre y apellidos: 

#include <iostream>
using namespace std;

int minimoNinos(int n, long long const a[]) {
    long long minsuf[n];
    
    minsuf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < minsuf[i + 1]) {
            minsuf[i] = a[i];
        } else {
            minsuf[i] = minsuf[i + 1];
        }
    }
    
    long long pref = a[0];
    for (int s = 1; s < n; s++) {
        if (pref < minsuf[s]) {
            return s;
        }
        if (a[s] > pref) {
            pref = a[s];
        }
    }
    
    return n;
}

bool casoDePrueba() {
    int n;
    if (!(cin >> n)) {
        return false;
    }
    if (n == 0) {
        return false;
    } else {
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int res = minimoNinos(n, a);
        cout << res << endl;
        return true;
    }
}

int main() {
    while (casoDePrueba());
    return 0;
}