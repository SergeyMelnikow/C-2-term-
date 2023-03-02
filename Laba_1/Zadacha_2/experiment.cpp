#include <iostream>
#include <chrono>
#include <random>

int const N = 9;

int linear_sum_finder(int(&a)[N],int j,int destination){
    int k = 0;
    int i = j-1;
    while (i>=k+1){
    while ((a[i]+a[k]<destination)and(i>=k+1)){
            k+=1;
        }
    while ((a[i]+a[k]>destination)and(i>=k+1)){
            i-=1;
        }
    if ((a[i]+a[k]==destination)and(i>=k+1)){
            return(i-k);}}
    return 0;
}

int main(){
    int a[N] = {1,2,3,4,5,6,7,7,9};
    std::cout<<linear_sum_finder(a,N,9);
}