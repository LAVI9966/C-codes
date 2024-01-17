#include<iostream>
using namespace std;
int main(){
    char ch[100]={'m','y',' ','n','a','m','e',' ','i','s',' ','l','a','v','i'};
    string s;
    for(int i=0;i<100;i++){
    if(ch[i]==(' '||'\0')){
        s[i]=ch[i];
    }else{
        s.reserve(s[0],s[i-1]);
    }
    }
    }
}