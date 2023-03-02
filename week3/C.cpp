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

void pancakeSort(int (&a)[N]){
    int box;
    for(int i=N-1;i!=-1;i-=1){
        for(int j=0;j!=i+1;j+=1){
            int max=1;
            for(int k=0;k!=i+1;k+=1){
                if (a[j]<a[k]){
                    max=0;
                }
            }
        if (max==1){
            for (int c=0;c!=(i-j)/2+1;c+=1){
                box = a[j+c];
                a[j+c]=a[i-c];
                a[i-c]=box;
            }
            break;
        }
        }
    }
}

int main(){
int a[N];
readArray(a);
pancakeSort(a);
printArray(a);
}