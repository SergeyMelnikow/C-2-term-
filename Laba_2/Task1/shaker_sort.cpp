#include <iostream>

int const N = 10;

void forward_step(int a[N],
                   int begin_idx,
                   int end_idx){
                    int box;
                    for (int j=begin_idx;j!=end_idx;j+=1){
                      if(a[j]>a[j+1]){
                        box = a[j];
                        a[j] =  a[j+1];
                        a[j+1] = box;
                      }
                    }}

void backward_step(int a[N],
                   int begin_idx,
                   int end_idx){
                    int box;
                    for (int j=end_idx;j!=begin_idx;j-=1){
                      if(a[j-1]>a[j]){
                        box = a[j-1];
                        a[j-1] =  a[j];
                        a[j] = box;
                      }
                    }}

void print_array(int a[N]){
  for (int i=0;i!=N;i+=1){
    std::cout<<a[i]<<" ";
  }
}

void shaker_sort(int a[N],
                   int begin_idx,
                   int end_idx){
                    int i = 1;
                    while (i!=0){
                      i = 0;
                      forward_step(a,begin_idx,end_idx);
                      backward_step(a,begin_idx,end_idx);
                      for (int k=0;k!=N-1;k+=1){
                        if (a[k]>a[k+1]){
                            i=1;
                            break;
                        }
                      }
                      }
                   }

int main(){
    int A[N]={10,9,8,7,6,5,4,3,2,1};
    shaker_sort(A,0,9);
    print_array(A);
}