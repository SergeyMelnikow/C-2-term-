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
void shiftRight(int (&a)[N]){
    int b[N];
    b[0]=a[N-1];
    for (int i=1;i<=N-1;i+=1){
        b[i]=a[i-1];
    }
    for (int i=0;i<=N-1;i+=1){
        a[i]=b[i];
    }
}

int main(){
    int a[N];
    readArray(a);
    shiftRight(a);
    printArray(a);
}