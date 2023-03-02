#include <iostream>
#include <chrono>

int const N = 1000;
int permutations = 0;

void forward_step(int a[N],
                   int begin_idx,
                   int end_idx,int step){
                    int box;
                    for (int j=begin_idx;j<=end_idx-step;j+=step){
                      if(a[j]>a[j+1]){
                        box = a[j];
                        a[j] =  a[j+1];
                        a[j+1] = box;
                        permutations+=1;
                      }
                    }}

void print_array(int a[N]){
  for (int i=0;i!=N;i+=1){
    std::cout<<a[i]<<" ";
  }
}

void bubble_sort(int a[N],
                   int begin_idx,
                   int end_idx,int STEP){
                    forward_step(a,begin_idx,end_idx,STEP);
                    int i = 1;
                    while (i!=0){
                      i = 0;
                      forward_step(a,begin_idx,end_idx,1);
                      for (int k=0;k!=N-1;k+=1){
                        if (a[k]>a[k+1]){
                            i=1;
                            break;
                        }
                      }
                      }
                   }

int main(){
    int A[N];
    for (int i=0;i!=N-1;i+=1){
        A[i]=N-i;
    }
    for (int STEP=1;STEP!=200;STEP+=1){
        auto begin = std::chrono::steady_clock::now( );
        bubble_sort(A,0,N,STEP);
        auto end = std::chrono::steady_clock::now( );
        auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin );
        std::cout<<STEP<<","<<permutations<<","(time_span.count()/100)<<"\n";
        for (int i=0;i!=N-1;i+=1){
        A[i]=N-i;
    }
    permutations = 0;

    }
}