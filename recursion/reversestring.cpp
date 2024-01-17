#include<bits/stdc++.h>
using namespace std;
void reverse(string &str , int i , int e){
    cout<<"IN RECURSSION "<<str<<endl;
    if(i > e){
        return ;
    }
    swap(str[i] , str[e]);
    i++;
    e--;
    reverse(str,i,e);
}
int main()
{
    string str = "boobs";;
    int i = 0;
    int e = str.size()-1;
    cout<<endl;
    cout<<str<<endl;
    reverse(str , i , e);
    cout<<endl;
    cout<<str<<endl;
    return 0;
}