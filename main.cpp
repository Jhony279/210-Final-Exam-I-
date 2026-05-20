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
    
    ifstream file(TXTFILE);  // Open the file for reading
    string line;
    if (!file.is_open()) {  // Check if the file was opened successfully
        cout << "Error opening file: " << TXTFILE << endl;
        return 1;
    }

    return 0;
}
