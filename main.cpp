#include <iostream>

#include "src/monopoly.hpp"
using namespace std;

int main() {
    srand(time(nullptr));
    CircularLinkedList<string> monopolyBoard;
    monopolyBoard.append("Go");
    monopolyBoard.append("Mediterranean Avenue");
    monopolyBoard.append("Community Chest");
    monopolyBoard.append("Baltic Avenue");
    monopolyBoard.append("Income Tax");
    monopolyBoard.append("Reading Railroad");
    monopolyBoard.append("Oriental Avenue");
    monopolyBoard.append("Chance");
    monopolyBoard.append("Vermont Avenue");
    monopolyBoard.append("Connecticut Avenue");
    monopolyBoard.append("Jail");
    monopolyBoard.append("St. Charles Place");
    monopolyBoard.append("Electric Company");
    monopolyBoard.append("States Avenue");
    monopolyBoard.append("Virginia Avenue");
    monopolyBoard.append("Pennsylvania Railroad");
    monopolyBoard.append("St. James Place");
    monopolyBoard.append("Community Chest");
    monopolyBoard.append("Tennessee Avenue");
    monopolyBoard.append("New York Avenue");
    monopolyBoard.append("Free Parking");
    monopolyBoard.append("Kentucky Avenue");
    monopolyBoard.append("Chance");
    monopolyBoard.append("Indiana Avenue");
    monopolyBoard.append("Illinois Avenue");
    monopolyBoard.append("B&O Railroad");
    monopolyBoard.append("Atlantic Avenue");
    monopolyBoard.append("Ventnor Avenue");
    monopolyBoard.append("Water Works");
    monopolyBoard.append("Marvin Gardens");
    monopolyBoard.append("Go To Jail");
    monopolyBoard.append("Pacific Avenue");
    monopolyBoard.append("North Carolina Avenue");
    monopolyBoard.append("Community Chest");
    monopolyBoard.append("Pennsylvania Avenue");
    monopolyBoard.append("Short Line");
    monopolyBoard.append("Chance");
    monopolyBoard.append("Park Place");
    monopolyBoard.append("Luxury Tax");
    monopolyBoard.append("Boardwalk");

    cout << monopolyBoard.getCurrent() << endl;

    // monopolyBoard.step();
    // cout << monopolyBoard.getCurrent() << endl;

    // monopolyBoard.step();
    // monopolyBoard.step();
    // monopolyBoard.step();

    // cout << monopolyBoard.getCurrent() << endl;
    // for(int i = 0; i < 37; i++) {
    //     monopolyBoard.step();
    // }
 
    // cout << monopolyBoard.getCurrent() << endl;
    cout << "You rolled a " << monopolyBoard.roll() << endl;
    cout << monopolyBoard.getCurrent() << endl;

    return 0;
}
