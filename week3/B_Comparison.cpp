#include <iostream>
#include <chrono>

int const N = 100000;

void selectSort(int (&a)[N],int end){
    int b[N];
    int box;
    int c1=0;
    int c2=0;
    while (c1+c2<=end){
    for (int i=c2;i<=end-c1;i+=1){
        int max=1;
        int min=1;
        for (int j=c2;j<=end-c1;j+=1){
            if (a[i]<a[j]){
                max = 0;
            } else if (a[i]>a[j]){
                min = 0;
            }}
        if (min==1){
            b[c2]=a[i];
            box=a[c2];
            a[c2]=a[i];
            a[i]=box;
            c2+=1;
        }
        if (max==1){
            b[end-c1]=a[i];
            box=a[end-c1];
            a[end-c1]=a[i];
            a[i]=box;
            c1+=1;
        }
        }}
    for (int i=0;i!=end+1;i+=1){
        a[i]=b[i];
    }
}

int main(){
    int A[N];
    for (int i=0;i!=N;i+=1){
        A[i]=N-i;
    }

    for (int j=10;j<=N;j+=N/200){
        int step=j/2;
        auto begin = std::chrono::steady_clock::now( );
        selectSort(A,j-1);
        auto end = std::chrono::steady_clock::now( );
        auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(end - begin );
        std::cout<<j<<","<<(time_span.count())<<"\n";
        for (int i=0;i!=N;i+=1){
        A[i]=N-i;
    }
    }
}