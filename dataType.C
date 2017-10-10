/*Tyler Allen
CS111
Lab4-1
2-10-15

This program will output the age, GPA, gender, and name*/

#include <iostream>
using namespace std;

int main(){//main function
  int age;
  double gpa;
  char gender;//declare variables
 string name;
  
  cout<<"Please enter your age: ";//ask for age input
  cin>> age;//assign input to age

  cout<<"Please enter your GPA: ";//ask for gpa input
  cin>> gpa;//assign input to gpa

  cout<<"Please enter your gender. m if you are male and f if you are female: ";//ask for gender input 
  cin>> gender;//assign input to gender

  cout<<"Please enter your name: ";//ask for name input
  cin>> name;//assign input to name

  cout<<"Hello, "<<name<<endl;//output name
  cout<<"Your age is " << age<<endl;//output age
  cout<<"Your gpa is " <<gpa<<endl;//output gpa
    cout<<"Your gender is " << gender<<endl;//output gender
  return 0;
}
