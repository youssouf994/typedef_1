#include <iostream>

using namespace std;

typedef struct
{
    string modello;
    int cilindrata;
}automobili;

int main()
{
    automobili civili[10];
    automobili militari[10];
    int i, x, dado;
    string m0 = "Alfa Romeo";
    string m1 = "Fiat";
    string m2 = "Opel";
    string m3 = "BMW";
    string m4 = "Mercedes";

    srand(time(0));

    i = 0;
    while (i < 10)
    {
        dado = rand() % 5;

        switch (dado)
        {
        case 0:
            civili[i].modello = m0;
            break;

        case 1:
            civili[i].modello = m1;
            break;

        case 2:
            civili[i].modello = m2;
            break;

        case 3:
            civili[i].modello = m3;
            break;

        case 4:
            civili[i].modello = m4;
            break;

        default:
            cout << "c";
            break;
        }

        dado = rand() % 5;

        switch (dado)
        {
        case 0:
            militari[i].modello = m0;
            break;

        case 1:
            militari[i].modello = m1;
            break;

        case 2:
            militari[i].modello = m2;
            break;

        case 3:
            militari[i].modello = m3;
            break;

        case 4:
            militari[i].modello = m4;
            break;

        default:
            cout << "c";
            break;
        }

        civili[i].cilindrata = rand() % 1700 + 2600;
        militari[i].cilindrata = rand() % 1700 + 2600;

        i++;
    }

    cout << "AUTO CIVILI" << endl;
    for (x = 0; x < 10; x++)
    {
        cout << civili[x].modello << '\t' << civili[x].cilindrata << endl;
    }

    cout <<endl<< "AUTO MILITARI" << endl;
    for (x = 0; x < 10; x++)
    {
        cout << militari[x].modello << '\t' << militari[x].cilindrata << endl;
    }

    return 0;
}


