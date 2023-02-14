#include <iostream>
int main(){
    int n;
    int p = 1;
    int i = 2;
    std::cin>>n;
    while (i*i<=n){
        if (n%i==0){
            p=0;
        }
        i+=1;
    }
    if (p == 0){
        std::cout<<"NO";
    } else {std::cout<<"YES";}
}