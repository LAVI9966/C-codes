#include<iostream>
using namespace std;
float calculator(int a,int b,char ch){
    switch (ch)
    {
    case '+':
    return a+b;
    case '-':
    return a-b;   
    case '*':
    return a*b;
    case '/':
    return a/b;    
    }
}
int main(){
    cout<<"Enter a and b \0";
    int a,b;
    cin>>a>>b;
    cout<<"Enter operations \0";
    char ch;
    cin>>ch;
    float ans;
    ans=calculator(a,b,ch);
    cout<<ans;
}