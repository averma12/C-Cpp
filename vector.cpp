#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<float> myFloat = {3.0,2.7,1.3,0.5,6.0};
     
    for(int i=0;i<myFloat.size();i++){
        cout<<"element"<<myFloat[i]<<endl;
    }
}