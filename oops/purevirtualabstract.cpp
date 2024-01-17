#include<bits/stdc++.h>
using namespace std;
class Dimension{
    public:
    float height;
    float lenght;
    float base;
    Dimension(){

    }
    Dimension(float a,float b,float c){
        this->height=a;
        this->lenght=b;
        this->base=c;
    }
    virtual void area()=0;
};
class rectangle:public Dimension{
    public:
    rectangle(float a,float b){
        this ->height=a;
        this ->lenght=b;
    }
    void area(){
        cout<<"Area of rectangle is => "<<height*lenght<<endl;
    }
};
class square:public Dimension{
    public:
    square(float a){
        this->height=a;
    }
    void area(){
        cout<<"Area of square is => "<<height*height<<endl;
    }

};
class triangle:public Dimension{
    public:
    triangle(float a,float b){
        this->height=a;
        this->base=b;
    }
    void area(){
        cout<<"Area of triangle is => "<<.5*height*base<<endl;
    }
};
int main(){
    rectangle r1(10,2);
    square s1(5);
    triangle t1(6,3);
    r1.area();
    t1.area();
    s1.area();
    
}