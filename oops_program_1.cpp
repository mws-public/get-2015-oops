#include<iostream>
using namespace std;

//Base class

class Student
{
   protected:
       int roll_number;
   public:
       void get_number(int);
       void put_number(void);
 }
void student::get_number(int number)
{
    roll_number=number;
}
void student::put_number()
{
     cout <<"Roll Number" <<roll_number<< "\n";
}

//First level Derivation

class mark:public student        
{
       protected:
             float subject1;
             float subject2;
public:
     void get_marks(float,float);
     void put_marks(void);
};

void mark::get_marks(float number1,float number2)
{
  subject1=number1;
  subject2=number2;
}
void mark::put_marks(float number1,float number2)
{
  cout<< "Marks in subject1=" <<subject1<< "\n";
  cout<< "Marks in subject2=" <<subject2<< "\n";
}

//Second Level Derivation

class result:public mark  
{
    float total;
Public:
   void display(void);
};

void result::display(void)
{
  total=sub1+sub2;
Put_number();
Put_marks();
cout<<"Total=" <<total "\n";
}

int main()
{
  result Student1;
Student1.get_number(11);
Student1.get_marks(75.0,85.5);
Student1.display();
}
