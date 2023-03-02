#include <iostream>
#include <chrono>

int const N = 100000;

void selectSort(int (&a)[N],int end){
    int b[end+1];
    int box;
    for (int c=0;c!=end+1;c+=1){
    for (int i=0;i<=end-c;i+=1){
        int max=1;
        for (int j=0;j<=end-c;j+=1){
            if (a[i]<a[j]){
                max = 0;
            }
        if (max==1){
            b[end-c]=a[i];
            box=a[end-1];
            a[end-c]=a[i];
            a[i]=box;
        }
        }
    }}
    for (int i=0;i!= end+1;i+=1){
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