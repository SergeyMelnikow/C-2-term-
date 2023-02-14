#include <iostream>
int func(int x){
    int j;
    int n=0;
    for (int i=1;i<=x/5;i+=1){
    int k=i*5;
    int j=k;
     while (j%5==0){
        n+=1;
        j=j/5;
       }
     }
    return(n);}
int main(){
    int x;
    std::cin>>x;
    std::cout<<func(x);
}