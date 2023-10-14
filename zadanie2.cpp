#include <iostream>
#include <list>
#include <typeinfo>
using namespace std;

int main() {
    int numOfPizzaSlices;
    int restOfPizzaSlices;
    int guests;
    int hostSlices;

cout << "Podaj ilość kawałków pizzy:";
cin >> numOfPizzaSlices;

cout << "Podaj liczbę gości:";
cin >> guests;

restOfPizzaSlices =  numOfPizzaSlices%guests;

hostSlices -= restOfPizzaSlices;

cout << "Dla gospodarza pozostało " << restOfPizzaSlices << " kawałków pizzy.";

}

