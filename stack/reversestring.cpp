#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "lavish";
    stack<char> ans;
    for(int i=0;i<str.size();i++){
        ans.push(str[i]);
    }
    string p = "";
    while(!ans.empty()){
        char ch = ans.top();
        p = p+ch;
        ans.pop();
    }
    cout<<p;
}