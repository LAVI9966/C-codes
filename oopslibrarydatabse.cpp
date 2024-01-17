#include<bits/stdc++.h>
using namespace std;
class library_database{
    string list_of_book[99999];
    public:
    static int n;
    int p=0;
    void add(string str){
        list_of_book[p]=str;
        p++;
    }
    void update(string newstr,string toupdate){
        for(int i=0;i<n;i++){
            if(list_of_book[i]==toupdate){
                list_of_book[i]=newstr;
                return;
            }
        }
    }
    void display(){
        for(int i=0;i<p;i++){
            cout<<"Book number "<<i+1<<" is "<<list_of_book[i]<<endl;
        }
    }
    void search(string str){
        for(int i=0;i<n;i++){
            if(list_of_book[i]==str){
                cout<<"Book "<<str<<" is in the database\n";
                return;
            }
        }
        cout<<"Book "<<str<<" is not in the database\n";
    }
    void delet(string str){
        for(int i=0;i<n;i++){
            if(str==list_of_book[i]){
                for(int j=i;j<n;j++){
                    list_of_book[j]=list_of_book[j+1];
                }
                p--;
                n=n-1;
            }
        }
    }
    
    
};
int library_database::n=9999;
int main(){
    cout<<" PICK ANY ONE CHOISE AT A TIME \n";
    library_database obj;
    string str,str1;
    int u=4;
    while(u--){
        cout<<"enter str \n";
        cin>>str;
        obj.add(str);
    }
    obj.display();
    cout<<"for delet \n";
    cin>>str;
    obj.delet(str);
    obj.display();
    cout<<"enter new str \n";
    cin>>str1;
    cout<<"string to update \n";
    cin>>str;
    obj.update(str1,str);
    obj.display();
    cout<<"enter str for search \n";
    cin>>str;
    obj.search(str);
}