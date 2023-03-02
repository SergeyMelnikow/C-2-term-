#include <iostream>
#include <chrono>
#include <random>

int const N = 200000;

int linearfinder(int(&a)[N],int j,int destination){
    for (int i=0;i!=j;i+=1){
        for (int k=0;k!=j;k+=1){
            if (a[k]+a[i]==destination){
                return(k,i);
            }
        }
    }
    return (0);
}

int main(){
    int A[N];
    for (int i=1;i!=N-1;i+=1){
        A[i]=i;}

    for (int j=100;j<=N;j+=N/(200)){
        //тут будет 20 экспериментов для фиксированного j
        auto begin = std::chrono::steady_clock::now( );
        for (int i=0;i!=19;i+=1){
        
        linearfinder(A,j,-1);
    }

        auto end = std::chrono::steady_clock::now( );

        auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(end - begin );
        std::cout<<j<<"  "<<(time_span.count()/20)<<"\n";
        }
}