#include <iostream>
#include <list>
#include <typeinfo>
using namespace std;

int main() {
    int numOfPizzaSlices;
    int restOfPizzaSlices;
    int guests;
    int hostSlices;
    int slicesPerHost;

cout << "Podaj ilość kawałków pizzy:";
cin >> numOfPizzaSlices;

cout << "Podaj liczbę gości:";
cin >> guests;

restOfPizzaSlices =  numOfPizzaSlices%guests;

slicesPerHost  = numOfPizzaSlices/guests;

hostSlices -= restOfPizzaSlices;

cout << "Dla gospodarza pozostało " << restOfPizzaSlices << " kawałków pizzy." << endl;
cout << "Na gościa przypada: " << slicesPerHost << " kawałków pizzy." << endl;


return 0;

}

