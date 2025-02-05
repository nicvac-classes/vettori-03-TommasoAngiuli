#include <iostream>
using namespace std;
int main() 
{
    int n, i;
    double max;
    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n <= 0);
    string nomi[n];
    double voti[n];
    for (i = 0; i <= n - 1; i++) {
        cout << "inserisci il " << i + 1 << "° nome" << endl;
        cin >> nomi[i];
        cout << "inserisci il voto" << endl;
        cin >> voti[i];
    }
    max = voti[0];
    for (i = 0; i <= n - 1; i++) {
        cout << "lo studente " << nomi[i] << " ha voto " << voti[i] << endl;
        if (voti[i] > max) {
            max = voti[i];
        }
    }
    cout << "il voto massimo è " << max << endl;
}