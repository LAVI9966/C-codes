#include<bits/stdc++.h>

using namespace std;
bool palindrome(string str , int i , int e){
    cout<<"IN THE RECURSION "<<str<<endl;
    if(i > e){
        return true;
    }
    if( str[i] != str[e]){
        return false;
    }else{
    i++;
    e--;
    return palindrome(str,i,e);
    }
}
int main()
{
    string str = "hihihihihihih";
    int i = 0;
    int e = str.size()-1;
    cout<<str<<endl;
    if(palindrome(str,i,e)){
        cout<<"YES IT IS "<<endl;
    }else{
        cout<<"NO IT'S NOT"<<endl;
    }
    return 0;
}