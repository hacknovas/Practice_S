#include<iostream>
using namespace std;

namespace A{
    int A=100;
};

int main(){
    cout<<"Hello, World!"<<endl;
    int A=100;

    cout<<A<<endl;        // Local variable A
    cout<<A::A<<endl;  // Namespace A's variable A



    return 0;
}