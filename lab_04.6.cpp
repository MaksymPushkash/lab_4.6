#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, P;
    int n, k;

    
    S = 0;
    n = 1;
    while (n <= 25) {
        P = 1;
        k = 1;
        while (k <= n) {
            P *= sqrt(cos(k + n) * cos(k + n));
            k++;
        }
        S += cos(n) + P;
        n++;
    }
    cout << "while: " << S << endl;

    
    S = 0;
    n = 1;
    do {
        P = 1;
        k = 1;
        do {
            P *= sqrt(cos(k + n) * cos(k + n));
            k++;
        } while (k <= n);
        S += cos(n) + P;
        n++;
    } while (n <= 25);
    cout << "do-while: " << S << endl;

    
    S = 0;
    for (n = 1; n <= 25; n++) {
        P = 1;
        for (k = 1; k <= n; k++) {
            P *= sqrt(cos(k + n) * cos(k + n));
        }
        S += cos(n) + P;
    }
    cout << "(n++): " << S << endl;

    
    S = 0;
    for (n = 25; n >= 1; n--) {
        P = 1;
        for (k = n; k >= 1; k--) {
            P *= sqrt(cos(k + n) * cos(k + n));
        }
        S += cos(n) + P;
    }
    cout << "(n--): " << S << endl;

    return 0;
}


