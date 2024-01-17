#include<bits/stdc++.h>
using namespace std;
class vehical
{
    public:
    string category;
    int regno;
};
class fourwheeler : public vehical{
    public:
    int modelno;
    int year;
    string company;
};
class car : public fourwheeler{
    public:
    void setdata(){
        category = "fourwheeler ";
        regno = 123;
        modelno = 1;
        year = 2020;
        company = "toyota";
    }
    void getdata(){
        cout<<"Name of car is fourtuner "<<endl;
        cout<<category<<endl;
        cout<<regno<<endl;
        cout<<modelno<<endl;
        cout<<year<<endl;
        cout<<company<<endl;
    }
};
int main()
{   car fortuner;
    fortuner.setdata();
    fortuner.getdata();
    return 0;
}