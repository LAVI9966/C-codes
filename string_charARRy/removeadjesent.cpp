#include<iostream>
#include<vector>
using namespace std;
string removea(string str){
    vector<char> s;
    int l=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]){
            s.push_back(str[i]);
            l++;
        }else{
            i++;
        }
    }
     for(int i=0;i<s.size();i++){
        cout<<s[i];
     }
}
int main(){
    string str="azxxzy";
    string r=removea(str);
}