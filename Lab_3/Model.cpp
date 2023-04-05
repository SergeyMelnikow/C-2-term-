#include <iostream>
#include <chrono>
#include <random>

const int N = 30;
const int k_size_x = 50;
const int k_size_y = 50;

unsigned seed = 10001;
std::default_random_engine rng ( seed );
std::uniform_int_distribution <unsigned> dstrx ( 0 , k_size_x-1 );
std::uniform_int_distribution <unsigned> dstry ( 0 , k_size_y-1 );
std::uniform_int_distribution <unsigned> dstr2 ( -1 , 1 );

struct dislocation{
bool move = 1;
int x = dstrx(rng);
int y = dstry(rng);
};

void update_model(bool (&k) [k_size_x][k_size_y], dislocation* a){
    int step_x;
    int step_y;
    for (int i=0;i!=N-1;i+=1){
        step_x = dstr2(rng);
        step_y = dstr2(rng);
        if (k[a[i].x+step_x][a[i].y+step_y]!=1){
            a[i].x += step_x*a[i].move;
            a[i].y += step_y*a[i].move;
            k[a[i].x+step_x][a[i].y+step_y]=1;
        }
    }
    for (int i=0;i!=N-1;i+=1){
        if (a[i].move==0){
            break;
        }
        if ((a[i].x==0)or(a[i].x==k_size_x-1)or(a[i].y==0)or(a[i].y==k_size_y-1)){
            a[i].move = 0;
        } else if (k[a[i].x+1][a[i].y+1]+k[a[i].x-1][a[i].y+1]+k[a[i].x-1][a[i].y-1]+k[a[i].x+1][a[i].y-1]>=1){
            a[i].move = 0;
        }
    }
}

int main(){
bool kristal[k_size_x][k_size_y] = {0};
dislocation* dislocations = new dislocation[N];
for (int i=0;i<=N-1;i+=1){
    kristal[dislocations[i].x][dislocations[i].y]=1;
}
update_model(kristal,dislocations);
}