#include <iostream>
#include <math.h>
using namespace std;

class Solver{
public:
    Solver();
    double arg;
    void solve();
};

Solver::Solver(){
    cout <<"A constructor was started" << endl;
    arg = 0;
}

void Solver::solve(){
    double x = 0;
    for(int i = 0; i < 1000; i++){
        x = 2 - exp(arg*x);
    }

    cout << "x = " << x << endl;
  
}

int main(){
    Solver ex;
    double y;
    cin >> y;
    ex.arg = y;
    ex.solve();
    return 0;
}

//solve: 2 - x = exp(arg*x)