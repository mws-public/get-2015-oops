#include<iostream>
Class student
{
   Protected:
       int roll_number;
   public:
       void get_number(int);
       void put_number(void);
 }
Void student::get_number(int a)
{
    Roll_number=a;
}
Void student::put_number()
{
     Cout<<”Roll Number:”<<roll_number<<”\n”;
}
Class test:public student        // derivation//
{
       protected:
             float sub1;
             float sub 2;
public:
     void get_marks(float,float);
void put_marks(void);
};
Void test::get_marks(float x,float y)
{
  Sub1=x;
  Sub2=y;
}
Void test::put_marks(float x,float y)
{
  Cout<<”Marks in sub1=”<<sub1<<”\n;
  Cout<<”marks in sub 2=”<<sub2<<”\n”;
}

Class result:public test   //derivation//
{
    Float total;
Public:
   Void display(void);
};
Void result::display(void)
{
  Total=sub1+sub2;
Put_number();
Put_marks();
Cout<<”Total=”<<total”\n;
}
int main()
{
  result student1;
student1.get_number(11);
student1.get_marks(75.0,85.5);
student1.display();
getch();
}
