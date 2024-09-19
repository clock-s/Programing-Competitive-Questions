#include <iostream>

using namespace std;


int main (int argc, char *argv[]) {
  int repeat;

  cin >> repeat;

  while(repeat--){
    int t, n, p;

    cin >> t >> n >> p;
    
    //Repeat colors sequence
    int period;

    period = t/n;
    
    //How many many parts with a diffent sequence colors will have
    int paint;

    paint = period * (n-1);

    //If had a incomplet sequence we need add this part
    int extra = 0;

    if (t % n > 1) extra = (t%n) - 1;

    ((paint+extra) > p ) ? cout << "YES" : cout << "NO";
    cout << endl;

  }

  return 0;
}
