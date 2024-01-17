#include<bits/stdc++.h>
using namespace std;
class vehicle{
    public:
    string category;
    long long regno;
};
class twowheeler:public vehicle{
    private:
    string modelno;
    string colour;
    string companyname;

};
class fourwheeler:public vehicle{
    private:
    string modelno;
    string colour;
    string companyname;
    // fourwheeler(string c,long long rn,int m,string co,string cn){
    //     category=c;
    //     regno=rn;
    //     modelno=m;
    //     colour=co;
    //     companyname=cn;
    // }
void print(){
    cout<<category<<endl;    
    cout<<regno<<endl;
    cout<<modelno<<endl;
    cout<<colour<<endl;
    cout<<companyname<<endl;
    }

};
int main(){
    fourwheeler fortuner;
    fortuner.category="suv";
    fortuner.regno=1234;
    fortuner()


}