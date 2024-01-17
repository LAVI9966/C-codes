#include<bits/stdc++.h>
using namespace std;
class concatenate{
    string s;
    public:
    void setdata(){
        cout<<"Enter the string \n";
        getline(cin,s);
    }
    concatenate operator +(concatenate obj){
        concatenate temp;
        temp.s = s + obj.s;
        return temp;
    }
    void print(){
        cout<<"concatenate string is "<<s<<endl;
    }
};
int main(){
    concatenate str,str1,str2;
    str.setdata();
    str1.setdata();
    str2=str+str1;
    str2.print();
    return 0;
}