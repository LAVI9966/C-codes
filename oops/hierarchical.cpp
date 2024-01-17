#include<bits/stdc++.h>
using namespace std;
class vehical{
    public:
    string category;
    int regno;
};
class fourwheeler : public vehical
{
    private:
    int modelno;
    string color;
    string company;
    public:
    void setdata(){
        category = "fourwheeler";
        regno = 123;
        modelno = 1;
        color = "white";
        company = "toyota ";
    }
    void getdata(){
        cout<<"Name of vehical is fortuner "<<endl;
        cout<<category<<endl;
        cout<<regno<<endl;
        cout<<color<<endl;
        cout<<company<<endl;
    }
};
class twowheeler :public  vehical{
    private:
    int modelno;
    string color;
    string company;
    public:
    void setdata(){
        category = "Twowheeler";
        regno = 321;
        modelno = 2;
        color = "black";
        company = "hero";
    }
    void getdata(){
        cout<<"Name of vehical is splender "<<endl;
        cout<<category<<endl;
        cout<<regno<<endl;
        cout<<modelno<<endl;
        cout<<color<<endl;
        cout<<company<<endl;
    }
};
int main()
{   fourwheeler fortuner;
    fortuner.setdata();
    fortuner.getdata();
    twowheeler splender;
    splender.setdata();
    splender.getdata();

    return 0;
}