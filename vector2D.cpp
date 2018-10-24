#include <iostream>
#include<vector>
using namespace std;

int main() {
    // insert code here...
    vector < vector <int> > twodvector;
    vector<int> onedvector (3,2);
    for (int i = 0; i < 5; i++) {
        twodvector.push_back(onedvector);
    }
    
    for (int row = 0; row < twodvector.size(); row++) {
        for (int column = 0; column < twodvector[0].size(); column++) {
            cout << twodvector[row][column] << " ";
        }
    
        cout << endl;
    }
   
    cout << "Hello, World!\n";
    return 0;
}
