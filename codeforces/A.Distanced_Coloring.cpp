#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//INCOMPLETE

struct coord{
  int x = 1000000;
  int y = 1000000;
};

bool check(vector<coord> &colors, coord point, int size, int k){
  for(int i = 0 ; i < size ; i++){
    int distance = max(abs(point.x - colors[i].x), abs(point.y - colors[i].y));
    if(distance < k) return false;

  }

  return true;

}



int main (int argc, char *argv[]) {
  int N;

  cin >> N;

  while(N--){
    int n, m, k;

    cin >> n >> m >> k;


    vector<vector<int>> table(n,vector<int>(m));
  
    vector<coord> colors(n*m);
    int color = 1;

    while (true){
      bool put = false;
      int size = 0;

      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
          if(table[i][j] == 0 ){
            coord point;
            point.x = i;
            point.y = j;
            if(check(colors,point , size, k)){
              put = true;
              table[i][j] = color;
              colors[size++] = point;
            }
          }
        }
      }
      
      
      if(!put) break;
      color++;
    }
    

    cout << --color << endl;
  }

  
  return 0;
}
