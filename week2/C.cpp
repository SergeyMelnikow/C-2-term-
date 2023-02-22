#include <iostream>

#ifndef N
#define N 10 // actual size of the array
#endif

void readArray(int(&a)[N]){
    for (int i=0;i<=N-1;i+=1){
        std::cin>>a[i];
    }
}

void printArray(int(&a)[N]){
    for (int i=0;i<=N-1;i+=1){
        std::cout<<a[i];
    }
}
void shiftRight(int (&a)[N], unsigned int k){
    int b[N];
    for (int i=0;i<=N-1;i+=1){
        b[i]=a[(i-k+N*k)%(N)];
    }
    for (int i=0;i<=N-1;i+=1){
        a[i]=b[i];
    }
}

int main(){
    int k;
    std::cin>>k;
    int a[N];
    readArray(a);
    shiftRight(a,k);
    printArray(a);
}