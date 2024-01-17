#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int s,int e){
    if(s > e){
        return ;
    }
    swap(str[s],str[e]);
    reverse(str,s+1,e-1);
}
int main(){
    string str = "lavish";
    reverse(str,0,str.size()-1);
    cout<<str;
}