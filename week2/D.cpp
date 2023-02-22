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
void moveNegativeToEnd(int (&a)[N]){
    int b[N];
    int k=0;
    for (int i=0;i<=N-1;i+=1){
        if(a[i]>0){
            b[k]=a[i];
            k+=1;
        }
    }
    for (int i=0;i<=N-1;i+=1){
        if(a[i]<0){
            b[k]=a[i];
            k+=1;
        }
    }
    for (int i=0;i<=N-1;i+=1){
        a[i] = b[i];
    }
}

int main(){
    int a[N];
    readArray(a);
    moveNegativeToEnd(a);
    printArray(a);
}