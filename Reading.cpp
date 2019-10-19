#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const double PI = 3.141592654 ;

/* THE OLD TRAVELLER NETWORK */

int main() {
    ifstream fin; 
    fin.open("./GeneratedFiles/intro.txt");       
    cout << "=====================================" << endl; 
    string line; 
    if (fin.is_open()) {
        try {
            while (getline(fin, line)) {
                cout << line << endl; 
            }
        } catch (exception e) {
            cout << e.what() << endl; 
            fin.close(); 
        }
        fin.close(); 
    }
    cout << "=====================================" << endl; 
    cout << "THE SIZE OF THE FILE IS : " << endl; 
    fin.open("./GeneratedFiles/intro.txt", ios :: binary); 
    streampos begin = fin.tellg(); 
    fin.seekg(0, ios :: end); 
    streampos end = fin.tellg(); 
    fin.close();
    cout << (end - begin) << " BYTES !" << endl;
}