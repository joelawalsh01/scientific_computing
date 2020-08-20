#include <iostream>
#include<vector>
#include <random>
using std::rand;
using std::cout;
using std::cin;
using std::endl;
using std::vector;



class Matrix{
private:
  vector<vector<int>> elements; //member  "elements" - vectors that make up a matrix
public:
  Matrix(int m, int n){
    //vector of vectors size m with init value vector<int>(n):
    // [vector n]
    /* [vector n]
        [vector n]
        ... m amount of vector n's */
        elements =
	  vector<vector<int>>(m,  vector<int>(n));
  }
  //set (i,j) entry to v
  void set(int i, int j, int v){
    elements.at(i).at(j) = v;
  }; // get value at i,j
  double get(int i, int j){
    return elements.at(i).at(j);
  };
};



int get_coeff(int i, int j) {

  if (i == j) {
    return 1;
  }
  if (j == 1) {
    return 1;
  } else if (j > i) {
    return 0 ;
  } else {
    return get_coeff(i - 1, j - 1) + get_coeff(i - 1, j);
  }
}

//This works

void populate(int ndepth) {
  Matrix pasc_matrix(ndepth + 1, ndepth + 1);

  int i, j, x;
  for (i = 1; i <= ndepth; i++) {
    for (j = 1; j <= ndepth; j++) {
      x = get_coeff(i, j);
      pasc_matrix.set(i, j, x);
      cout << pasc_matrix.get(i, j);
    }
    cout<< endl;
  }
}
void modstar(int ndepth, int mod) {

  int i, j, x;
  for (i = 1; i <= ndepth; i++) {
    for (j = 1; j <= ndepth; j++) {
      x = get_coeff(i, j);
      if (x % mod == 0) {
	cout << " ";
      } else {
	cout << "*";
      }

    }
    cout<< endl;
  }
}



int main(){

  int ndepth,mod;
  cout << "Enter depth"<<endl;
  cin>> ndepth;
  cout << "Enter mod" << endl;
  cin >> mod;

  populate(ndepth);
  modstar(ndepth, mod);




}



//construct pascal's matrix

//conditional for stars or spaces using mod m

//cout with centering text




