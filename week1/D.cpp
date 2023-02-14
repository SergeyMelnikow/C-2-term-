#include <iostream>
using namespace std;
int B = 0;
int M = 0;
void func(int x, int y){
if (x>y){
    B+=1;
} else if (y>x){
    M+=1;
}
}
int main(){
    int N;
    std::cin>>N;
    int a1;
    int a2;
    for (int i = 1;i<=N;i+=1){
        std::cin>>a2;
        if (i>1){
            func(a2,a1);
        }
        a1=a2;
    }
    if (B>M){
        std::cout<<"MAX";
    } else if (B<M) {
        std::cout<<"MIN";
    }
}