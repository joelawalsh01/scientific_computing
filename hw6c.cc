#include <iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;



bool  isprime(int number) {
  int j = 0;
  bool flag = true;
  for (j = 1; j <= number/2; j++) {
    if ((number % j == 0) && j>1) {
      flag = false;
    }

  }
  return flag;
}


class primegenerator{
private:
  int last_number_tested{0};
  int upperbounds{0};


public:
  //constructor goes in private, no need for semicolon after brackets
  primegenerator (  int last_number_tested )
    : last_number_tested(last_number_tested)  {};


  int i =0;



  int nextprime() {

    for (i = last_number_tested+1 ; ; i++) {

      if (isprime(i)) {
	last_number_tested =i;

	return  i;
      }
    }
  };
};



// I have tried everything but the correct way to do this, unfortunately.


int main() {
  int number;
  int  e, p, q, i;

  cout << "Enter a number" << endl;
  cin >> number;
  primegenerator sequence(1);

  for (i = 1; i <= number; i++) {
    if (i % 2 == 0) {
      e = i;

      for (p = 1; p <= e; p++) {
	p =sequence.nextprime();
	q = e - p;
	if (isprime(q)){
	  cout << "The number " << e << " is " << p << "+" << q << endl;
	}

     
      }
    }
  }


}
