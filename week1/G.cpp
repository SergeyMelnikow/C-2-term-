#include <iostream>
using namespace std;
int MAX = 0;
int MIN = 0;
void func(int x, int y,int z){
if (x>=y and z>=y){
    MIN+=1;
};
if (y>=x and y>=z){
    MAX+=1;
}
}
int main(){
    int N;
    std::cin>>N;
    int a1;
    int a2;
    int a0;
    for (int i = 1;i<=N;i+=1){
        std::cin>>a2;
        if (i>2){
            func(a0,a1,a2);
        }
        a0=a1;
        a1=a2;
    }
    if (MAX>MIN){
        std::cout<<"MAX";
    } else if (MAX<MIN) {
        std::cout<<"MIN";
    } else {std::cout<<"EQUAL";}
}