#include<bits/stdc++.h>
using namespace std;
bool pali(string str){
    int s=0;
    int e=str.size()-1;
    while(s<=e){
        if(str[s]!=str[e]){
         return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
char tolowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return ch;
    }else{
        ch=(ch-'A')+'a';
        return ch;
    }
}
bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
            }
        return 0;
    
}
int main(){
    string str,str1="";
    cout<<"enter \0"<<endl;
    cin>>str;
    for(int i=0;i<str.size()-1;i++){
        str[i]=tolowercase(str[i]);
    }
    for(int i=0;i<str.size()-1;i++){
        if(valid(str[i])){
            str1.push_back(str[i]);
        }
    }
    if(pali(str1)){
        cout<<"PALINDROM\0";
    }else{
        cout<<"NOT PALINDROM\0";
    }
    return 0;

}