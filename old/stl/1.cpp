#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
      vector<int> int_vector;
      vector<double> double_vector;
      int_vector.push_back(99);
      int_vector.push_back(9999);
      double_vector.push_back(99.99);
      double_vector.push_back(9999.9999);
      int size;
      size = int_vector.size();
      for (int i = 0; i < size; i ++){
      cout << int_vector[i] << endl;
      }
      size = double_vector.size();
      for (int j = 0; j < size; j ++){
      cout << double_vector[j] << endl;
      }
}