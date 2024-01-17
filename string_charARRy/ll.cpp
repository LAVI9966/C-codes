#include<iostream>
using namespace std;
string reverseWords(string S) 
    { 
        int s=0;
        int e=S.size()-1;
    while(s<=e){
        swap(S[s++],S[e--]);
    }
    cout<<S;
    }
int main(){
    string str;
    str="abbaca";
    reverseWords(str);
    cout<<str.length();

} 