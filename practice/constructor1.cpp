#include<bits/stdc++.h>
using namespace std;
class power{
    int n = 9;
    int p = 3;
    
    public:

    power(int a , int b){
        n = a;
        p = b;
    }
    int print (){
        int ans = 1;
        while( p-- ){
            ans = ans * n;
        }
        return ans;
    }
};
int main(){
    power lavish( 9 , 3 );
    int t = lavish.print();
    cout << "n power p is " << t << " where n is 9 and p is 3 \n";
    return 0;
 }
