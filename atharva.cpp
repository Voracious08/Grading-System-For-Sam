#include<iostream>
using namespace std;
int main()
{

    

  int grade ,i;
  int array[] = {40,45,50,55,60,65,70,75,80,85,90,95,100};
  cout<< "enter your grade ";
  cin>>grade;



  for (i=0;i<13;i++)
    {



         if (grade<40)
       {
         
          cout<<"Your grade is "<<grade<<"No Rounding ";  
          break;
        
       }


      if(grade==array[i])
      {
          cout<<"Your grade is "<<grade<<"no Rounding";
          break;
      }


      if (grade- array[i]< 3 && grade - array[i]> -3 )
      {
          /* code */ cout<< "your grade is rounded to"<<array[i];
          break;
      }



    }
    return(0);


    
      
 



}