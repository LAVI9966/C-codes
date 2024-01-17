#include<iostream>
using namespace std;
int main(){
    char s[23];
    string ch="";
    cout<<"enter \n";
    cin.getline(s,23);
    cout<<s<<endl;
    for(int i=0;i<23;i++){
        if(s[i]==' '){
            ch.push_back('@');
            ch.push_back('4');
            ch.push_back('0');
        }
        else
        {
            ch.push_back(s[i]);
        }
    }
    cout<<ch<<endl;

}