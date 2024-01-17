#include<iostream>
using namespace std;
class student{
    string Name;
    int roll_no;
    public:
        void getdata(){
            cout<<"Enter name "<<endl;
            cin>>Name;
            cout<<"Enter roll no "<<endl;
            cin>>roll_no;
        }
        void display(){
            cout<<"Name of student is : "<<Name<<endl;
            cout<<"Roll no of student is : "<<roll_no<<endl;
        }
};
int size = 5;
int main(){
    student *p = new student[size];
    student *q = p;
    cout<<"Enter the list "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Record "<<i+1<<endl;
        q->getdata();
        q++;
    }
    cout<<"List of item we have ";
    for(int i=0;i<size;i++){
        cout<<"Record "<<i+1<<endl;
        p->display();
        p++;
    }
}