    #include<bits/stdc++.h>
    using namespace std;
    class coordinate{
        public:
        int x;
        int y;
        public:
        coordinate(int a,int b){
            this->x=a;
            this->y=b;
        }
        void show(){
            cout<<"X is "<<x<<" and y is "<<y<<endl;
        }
        friend void swap(coordinate&);
    };
    void swap(coordinate &obj){
        int temp = obj.x;
        obj.x = obj.y;
        obj.y = temp;

    }
    int main(){
        coordinate obj1(4,5);
        obj1.show();
        swap(obj1);
        obj1.show();


    }