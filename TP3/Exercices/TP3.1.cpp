/*! \brief code
* \author Balatre Grégory
*/

#include <iostream>
#include <chrono>
#include <thread>
#define DEBUG cerr << "Fichier : " << __FILE__ << endl << "Ligne : " << __LINE__ << endl;
#define MAX(x,y) ((x)>(y)?(x):(y));

using namespace std;
using namespace this_thread;
using namespace chrono;

bool check(const string& l) {
    for (char i : l) {
        if (isdigit(i) == false) {
            return false;
        }
    }
    return true;
}

void Macro() {
    cout << "Macro DEBUG :" << endl << "------------------" << endl;
    sleep_for(seconds (1));
    DEBUG;
    cout << "------------------" << endl;
    sleep_for(milliseconds (500));
    string x = "x";
    string y = "y";
    cout << "| Macro qui rend le maximum de deux valeurs |" << endl;
    while (!check(x) || !check(y)) {
        cout << "Saisir un nombre x :" << endl;
        cin >> x;
        cout << "Saisir un nombre y :" << endl;
        cin >> y;
    }
    cout << "Le maximum entre " << x << " et " << y << " est : " << MAX(x,y);
}