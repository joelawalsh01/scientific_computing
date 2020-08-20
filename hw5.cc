#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std:: endl;
//Rewrite the exercise that found a predetermined number of primes, putting the
// number_of_primes_found and last_number_tested variables in a structure.

// create structure
struct primesequence {int number_of_primes_found; int last_number_tested;};

//test if prime function with boolean output
bool  test_if_prime(int number){
  bool flag= true;
  int i = 0;
  for( i = 2; i<= number/2; i++){
    if ( number %i ==0)
      flag = false;
  }
  // function returns boolean
  return flag;

}

//Next prime function with struct argument
//sequence as reference
int nextprime( struct primesequence &sequence){
  int n,i,l;
  bool isprime;

  n = sequence.number_of_primes_found;
  l = sequence.last_number_tested;
  // l+1 to start iterating. sequence.last_number_tested = i to help kick start the iteration again

  for( i = l+1;  ; i++){
    isprime = test_if_prime(i);
    if (isprime){
      sequence.number_of_primes_found++;
      sequence.last_number_tested = i;
      return i;
    }
  }


}



int main(){
  int nprimes;
  cout<<"Enter the number of primes : ";

  cin >> nprimes;
  struct primesequence sequence;
  sequence.number_of_primes_found=0; // set initial values
  sequence.last_number_tested=1; // for last test
  //Continue loop until the number of primes found in the struct sequence hits the input nprimes
  while (sequence.number_of_primes_found<nprimes) {

    int number = nextprime(sequence);

    cout << "Number " << number << " is prime" << endl;


  }
  return 0;

}
