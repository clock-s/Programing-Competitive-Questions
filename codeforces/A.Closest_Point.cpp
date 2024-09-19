#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int N;

  cin >> N;

  while(N--){
    int n, lower, high, heuristc;
    bool exist = true;
    cin >> n;

    int *array = new int[n];
    int *distance = new int[n-1];
    
    for(int i = 0 ; i < n ; i++){
      cin >> array[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
      distance[i] = array[i+1] - array[i];
    }
    
    lower = array[0];
    high = array[n-1];
    heuristc = (high - lower);
    if(heuristc == 1) exist = false;


    for(int i = 0 ; i < n-1 ; i++){
      if(heuristc > distance[i]) exist = false;
    }

    (exist) ? cout << "YES" : cout << "NO";

    cout << endl;

    

    delete[] array;
    array = nullptr;
    delete[] distance;
    distance = nullptr;

  }

  
  return 0;
}
