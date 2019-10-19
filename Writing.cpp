#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main() {
    stringstream ss; 
    cout << "ENTER FOLDER NAME : " << endl; 
    string fileName; cin >> fileName; 
    ofstream fout; 
    fout.open("./GeneratedFiles/" + fileName);
    for (int i = 1; i < 11; i++) {
        fout << "12 * " << i << " = " << 12*i << "\n"; 
    }
    fout.close(); 
    cout << "FILE CREATED !! " << endl;
}