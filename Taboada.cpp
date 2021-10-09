#include <iostream>

using namespace std;

int taboada;

void calculo()
{
    int i;
    cout << "Entrou no loop" << endl;
    for (i = 0; i <= 10; i++)
    {
        cout << "|" << taboada << "|";
        cout << "x";
        cout << "|" << i << "|";
        cout << "=";
        cout << "|" << taboada * i << "|" << endl;
        cout << "-----------------------" << endl;
    };
}

int main()
{
    cout << "--------------------------------------" << endl;
    cout << "|          Taboada ate o 10          |" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Digite qual a taboada: ";
    cin >> taboada;
    calculo();
    return 0;
}