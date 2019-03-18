//
//  main.cpp
//  loopin
//
//  Created by Abhinav Verma on 18/03/19.
//  Copyright © 2019 com.abhinav. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    // Whale, whale, whale. What have we got here?
    string input = "turpentine and turtles";
    vector<char> vowels = {'a','e','i','o','u'};
    vector<char> result;
    for(int i = 0; i < input.size(); i++){
        for (int j = 0; j < vowels.size(); j++) {
            
            // Code goes here:
            if (input[i] == vowels[j]) {
                
                result.push_back(input[i]);
                
            }
            if (input[i] == 'u' || input[i] == 'e') {
                
                result.push_back(input[i]);
                
            }
            
            
        }
    }
    for (int k = 0; k < result.size(); k++) {
        
        cout << result[k];
        
    }
    
    return 0;
}
