#include <bitset>
#include <iostream>
#include <iterator>
#include <type_traits>
#include <vector>
#include <cmath>

using namespace std;



int main (int argc, char *argv[]) {
  string cod1;
  string cod2;
  int n1 = 0;
  int n2 = 0;
  vector<int> sum1;
  vector<int> sum2;
  
  cin >> cod1;
  cin >> cod2;


  for(int i = cod1.size()-1 ; i >= 0 ; i--){
    if(cod1[i] == '*'){
      sum1.push_back(1 << (cod1.size()-i-1));
      int size_now = sum1.size();
      
      for(int j = 0 ; j < size_now-1 ; j++){
        sum1.push_back(sum1[size_now-1] + sum1[j]);
      }
    }


    if(cod1[i] == '1'){
      n1 += 1 << (cod1.size() - i - 1);
    }
  }

  for(int i = cod2.size()-1 ; i >= 0 ; i--){
    if(cod2[i] == '*'){
      sum2.push_back(1 << (cod2.size()-i-1));
      int size_now = sum2.size();
      
      for(int j = 0 ; j < size_now-1 ; j++){
        sum2.push_back(sum2[size_now-1] + sum2[j]);
      }
    }


    if(cod2[i] == '1'){
      n2 += 1 << (cod2.size() - i - 1);
    }
  }

  sum1.insert(sum1.begin(),0);
  sum2.insert(sum2.begin(),0);

  /*
  cout << "Valor Minimo de n1: "<< n1 << endl << "Possíveis somas: ";
  for(int i = 0 ; i < sum1.size() ; i++){
    cout << sum1[i] << " ";
  }

  cout << endl << endl<< "Valor Minimo de n2: " << n2 << endl << "Possíveis somas: ";

  for(int i = 0 ; i < sum2.size() ; i++){
    cout << sum2[i] << " ";
  }
  cout << endl;
  */

  int result = 0;
  for(int i = 0 ; i < sum1.size() ; i++){
    for(int j = 0 ; j < sum2.size() ; j++){
      if((n2 + sum2[j]) != 0 && (n1 + sum1[i])%(n2 + sum2[j]) == 0){
        if((n1 + sum1[i]) >= (1 << (cod1.size()-1)) && (n2 + sum2[j]) >= (1 << (cod2.size()-1))) 
          result = n1 + sum1[i];
      }
      if(result > 0) break;
    }
    if(result > 0) break;
  }
  
  if(result > 0){
    int n = (int)(log2(result));
    string bits = bitset<128>(result).to_string();
    bits = bits.substr(bits.find("1"));
    cout << bits << endl;
  }
  

  return 0;
}
