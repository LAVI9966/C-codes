#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string key;
    cout<<"ENTER "<<endl;
    cin>>str;
    cin>>key;
    char ch=key[0];
    if(key.size()!=1){
        cout<<str<<endl;
        return 0;
    }
    int size = str.size();
    cout<<"OLD "<<str<<endl;
    for(int i=0;i<size;i++){
        if(str[i]==ch){
            for(int j=i;j<size;j++){
                str[j]=str[j+1];
            }
            size--;
        }
    }
    cout<<"NEW "<<str<<endl;
}