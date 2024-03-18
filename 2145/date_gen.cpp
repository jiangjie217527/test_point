#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
#include<random>
#include<ctime>
#define ll long long
using namespace std;

default_random_engine e;

int main(int argc,char *argv[]){
    freopen(argv[1],"w",stdout);
    e.seed(time(0));
    const int n = atoi(argv[2]);
    const int Cmax = atoi(argv[3]);
    const int Cmin = atoi(argv[4]);
    const int Tmax = atoi(argv[5]);
    const int Tmin = atoi(argv[6]);
    uniform_int_distribution<int> C(Cmin,Cmax);
    uniform_int_distribution<int> t(Tmin,Tmax);
    cout<<n<<" "<<C(e)<<endl;
    for(int i=0;i<n;i++){
        cout<<t(e)<<endl;
    }
    return 0;
}