#include <iostream>

using namespace std;


int Syracuse(int data, int nu) {

    while (data != 1) {
        nu = nu + 1;

        if (data % 2 == 0) {
            data = data / 2;
            cout << data << " ";

        }else{
            data = 3*data+1;
            cout << data << " ";
        }
    }

    return nu;
}




int main() {
    int data;
    int nu;

    cout << "Entrez un nombre entier positif: ";
    cin >> data;

    while (data <= 0) {
        cout << "Nombre négatif ou égal à 0, veuillez en entrer un positif";
        cin >> data;
    }
    nu = Syracuse(data, nu);

    cout << '\n' << "Nombre iteration: " << nu;

    return 0;
}
