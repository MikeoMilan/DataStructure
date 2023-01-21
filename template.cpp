#include<iostream>
using namespace std;

// template  Swap number
template <class A, class B>

void Swap(A& a, B& b){ 
        B c = b;
        b = a;
        a = c;
    }

void Swap_num(){
    float a=10.2, b= 20.123;
    cout<<  a << " " << b << endl;
    Swap(a,b);
    cout<<  a << " " << b << endl;
}

// template Class
template <class Height, class Age>

class People{
public:
    Height height;
    Age age; 
};

void p_print(){
    People<double, int> p;
    p.height = 176.82;
    p.age = 20;
    cout << p.height << " " << p.age << endl;
}



// Run main
int main(){
    Swap_num();   

    p_print();
}