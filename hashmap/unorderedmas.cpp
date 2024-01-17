#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    //creatinon
    unordered_map<string,int> m;
    //insert 1
    pair<string,int> p = make_pair("lavish" , 2);
    m.insert(p);
    //inser 2
    pair<string,int> p2("loveisn" , 2);
    m.insert(p2);
    //insert3 
    //m["lovs"]= 3;

    cout<<m["lavish"]<<endl;
    cout<<m.at("lovs")<<endl;   
    //searching 
    cout<<m.count("lovs")<<endl;

    //to get an  iterator 
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first << " "<< it->second<< " "<<endl;    
    }

}