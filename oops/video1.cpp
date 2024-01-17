#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int health;
    mutable int age;
    public:
    void sethealth(int health){
        this->health=health;
    }
    void gethealth(){
        cout<<"health is "<<health<<endl;
    }
    hero() {
        cout<<"this is default constructor "<<endl;
    }
    hero(int a):age{a}{
        cout<<"this is parametrize constructer "<<endl;
        cout<<"the age is "<<age<<endl;
    }
    hero(hero &lavish){
        this->age=lavish.age;
        this->health=lavish.health;
    }
    static int kyahua;
    static void yes(int d){
 //       age=d;
    }
    void print(){
        cout<<endl;
        cout<<"THIS IS PRINT FUNCTION "<<endl;
        cout<<health<<endl;
        cout<<age<<endl;
        cout<<endl;
    }
};
int hero :: kyahua=10;
int main()
{
    hero lavish(19);
    lavish.sethealth(9999);
    lavish.gethealth();
    hero dipesh(lavish);
    dipesh.gethealth();
    cout<<endl<<endl;
    lavish.print();
    dipesh.print();
    cout<<endl;
    cout<<lavish.kyahua<<endl<<endl<<endl;
    return 0;
    const int a =10;
    cout<<a<<endl;
}