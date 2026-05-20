// COMSC-210 | Final 1 | Johnathan Perez Baltazar

#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

const string TXTFILE = "210-final-1-SP26.txt";

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

    for (const auto& pair : flightMap) {
        cout << pair.first << ": " << pair.second << " flights" << endl;
    }

    return 0;
}
