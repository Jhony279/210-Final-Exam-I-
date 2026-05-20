// COMSC-210 | Final 1 | Johnathan Perez Baltazar

#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

const string TXTFILE = "210-final-1-SP26.txt";
const int LOW = 0, HIGH = 15;

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    
    string origin, destination;
    map<string, int> flightMap;
    
    ifstream file(TXTFILE);
    string line;
    if (!file.is_open()) {
        cout << "Error opening file: " << TXTFILE << endl;
        return 1;
    }

    while (file >> origin >> destination) {
        flightMap[origin]++;
        flightMap[destination]++;
    }
    file.close();

    cout << "All airport traffic counts:" << endl;
    for (const auto& pair : flightMap) {
        cout << pair.first << ": " << pair.second << " flights" << endl;
    }
    cout << endl;

    int maxFlights = 0;

    for (const auto& entry : flightMap) {
        if (entry.second > maxFlights) {
            maxFlights = entry.second;
        }
    }

    cout << "Busiest airport(s) with count " << maxFlights << ": " << endl;
    for (const auto& entry : flightMap) {
        if (entry.second == maxFlights) {
            cout << entry.first << " " << maxFlights;
        }
    }

    bool found = false;
    for (const auto& entry : flightMap) {
        if (entry.second >= LOW && entry.second <= HIGH) {
            found = true;
            break;
        }
    }

    return 0;
}
