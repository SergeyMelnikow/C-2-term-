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

void reverseArray(int (&a)[N]){
    int b[N];
    for (int i=0;i<=N-1;i+=1){
        b[i]=a[N-1-i];
    }
    for (int i=0;i<=N-1;i+=1){
        a[i]=b[i];}
}

int main(){
int a[N];
readArray(a);
reverseArray(a);
printArray(a);
}