#include<bits/stdc++.h>
using namespace std;
string remove(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());

    }
    return s;

}
int main(){
    cout<<"enter string \0";
    string s;
    cin>>s;
    cout<<"enter part to remove \0";
    string part;
    cin>>part;
    string sf;
    sf =remove(s,part);
    cout<<sf;
}