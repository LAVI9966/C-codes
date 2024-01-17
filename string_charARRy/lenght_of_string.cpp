#include<iostream>
using namespace std;
int reversse(string arr){
     int s=0;
    int e=arr.length()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
}
}
int main(){
    string ch;
    cout<<"Enter the string \n";
    cin>>ch;
    cout<<endl<<ch<<endl;
    reversse(ch);
    cout<<ch<<endl;

}