#include <iostream>
#include <chrono>
#include <random>

int const N = 200000;

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
    if (a[i]+a[k]==destination){
            return(i);}}
    return 0;
}

int main(){
    int A[N];
    for (int i=1;i!=N-1;i+=1){
        A[i]=i;}

    for (int j=100;j<=N;j+=N/(200)){
        //тут будет 20 экспериментов для фиксированного j
        auto begin = std::chrono::steady_clock::now( );
        for (int i=0;i!=19;i+=1){    
        linear_sum_finder(A,j,-1);
    }

        auto end = std::chrono::steady_clock::now( );

        auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(end - begin );
        std::cout<<j<<","<<(time_span.count()/20)<<"\n";
        }
}