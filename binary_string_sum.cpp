#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

int main(){
    string A = "10";
    string B = "100";
    int a = stoi(A,nullptr, 2);
    int b = stoi(B,nullptr, 2);
    string c = bitset<8>(a+b).to_string();
    cout<<to_string(stoi(c, nullptr, 10))<<endl<<c;
}
