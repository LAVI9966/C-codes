#include<bits/stdc++.h>
using namespace std;
class person{
    private:
    string name;
    int age;
    float height;
    public:
    //its defaul constructer yaha par koi value nahi lete he to defaault constructer hota he 
    //we can leave it blank or give ssome vakue to class data memmberrs
    person(){
        name="lavish";
        age=19;
        height=5.7;
    }
    //now we are creating the parametrize constructor
    //parametrize constructer means it takes value as a parameter 
    person(string name_o,int age_o,float height_o){
        name=name_o;
        age=age_o;
        height=height_o;
    }
    //copy constructeer
    person(person &per2){
        name=per2.name;
        age=per2.age;
        height=per2.height;
        
    }
    //get functions for printing data members
    void getdatd(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<height<<endl;
    }
};
int main(){
   /*
   parametrize constructer
   here we see that if we are just creating the object then the default constructer works 
    but when we create object and then pasing value to it then parametrize constructer call 
    hota he and we have to give value as a parameter
    */
//----------------------------------------------------------------------------------------------
    /*
    copy constructer
    copy constructeer is nothing but is make copy from another object lets see how
    */
    person per1,per2("lagan",19,5.6),per3(per2);
    per1.getdatd();
    per2.getdatd();
    per3.getdatd();
}