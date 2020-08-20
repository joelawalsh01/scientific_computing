#include<iostream>
using namespace std;
//Main method definition                                                                                                   
using std::cout;
using std::cin;
using std:: endl;


int main()
{
  //Variables for row counter i, column counter j,  and number N;                                                          
  int i, j, k, number;
  int count = 0; 
  int lowestsum = 0;
  int count2 = 0;

  cout << "\n Enter a number: ";
  cin >> number;
  //Iterate K   
  for ( k = 0; k < 20; k++ ){
    //Iterate I                                                                                                   
    for(i = 0; i < 10; i++)
      {
        //Iterate K                                                                                                  
        for(j = 0; j < 10; j++)
          {
            //Checks if i * j is greater than number then display the pair with separated by comma 
	    if ( (i *j > number)&& count==0) {
	      cout << i << "," << j  << endl;
	      count ++;
	    }

            if((i+j == k ) && (i*j >number))
              { 
		if((lowestsum == 0)){
		  lowestsum = k;
		}
		if ((k ==lowestsum)&& (count2 ==0)){
		  
		  cout << i << "," << j << endl;
		  count2++;
		}
                //break loop                                                                                                 
                break;
              }//End of if                                                                                                   
          }//End of inner for loop                                                                                           
      }//End of middle for loop
      
  } //End of outermost for loop                                                                                             
       
  return 0;
}//End main
