#include<iostream>
using namespace std;
int main()
{
  int totalInputs;
  cin>>totalInputs;

  while(totalInputs--)
    {
      cout << "Enter a number" << endl;
      int num; //  to accept number
      cin>>num;
      int arr[num]; 
     
      int max_num = -1;
      for(int i = 1 ; i <= num ; i++)
	{
	  int counter = 1;
	  int temp = i;
	  while(temp != 1)
	    {
	      if(temp < i)
		{
		  // using already counted values for smaller number 
		  //here I am improving time complexity
		  counter += (arr[temp]-1);
		  break;
		}
	      if((temp%2) == 0)
		temp = temp/2;
	      else
		temp = (temp*3)+1;
	      counter++;
	    }
	  arr[i] = counter;
	  if(counter > max_num)
	    max_num = counter;
	}
      cout<<max_num<<endl;
    }
}
