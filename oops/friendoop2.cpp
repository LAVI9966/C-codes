#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int firstsub;
    int secondsub;
    int thirdsub;
    public:
    friend void mark_avg(student);
    void getdata(){
        cout<<"Enter Name : "<<endl;
        cin>>name;
        cout<<"Enter marks of first subject \n";
        cin>>firstsub;
        cout<<"Enter marks of second subject \n";
        cin>>secondsub;
        cout<<"Enter marks of third sub \n";
        cin>>thirdsub;
    } 
    void display(student obj){
        cout<<"The name is "<<name<<endl;
        mark_avg(obj);
    }
};
void mark_avg(student obj){
    int aver;
    aver=(obj.firstsub+obj.secondsub+obj.thirdsub)/3;
    cout<<"Average of marks is "<<aver<<endl;
}
int main(){
    student s1;
    s1.getdata();
    s1.display(s1);

}