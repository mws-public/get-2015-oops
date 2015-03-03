#include<iostream.h>
using namespace std;
class polym
{
   public:

//Method overiding

void perform(int number1,int number2,int number3)
{
    cout<< "\n The value of A*B*C:" <<a*b*c <<"\n";
}



Void perform(int number4, int number5)
{
   cout<< "\n The concatenated string is:" <<a+b<<"\n";
}
};

int main()
{
   polym p;

//method overloading//
p.perform(12,14,16)
p.perform(13,15)
    return 0;

}
