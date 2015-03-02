#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
Class polym
{
   Public:
Int a,b,c;
Char x[20],y[20];
Void perform(int a,int b,int c)
{
    Cout<<”\n The value of A*B*C:”<<a*b*c;
   Cout<<”\n The square root of A*B*C:”<<sqrt(a*b*c);
}
Void perform(char x[20],char y[20])
{
   Cout<<”\nThe concatenated string is:”<<strcat(x,y);
}
};
Void main()
{
   Polym p;
Clrscr();
Int a1,b1,c1;
Char x1[20],y1[20];
Cout<<”\n Enter A1,B1,C1”;
Cin>>a1>>b1>>c1;
Cout<<”\n Enter x1,y1”;
Cin>>x1>>y1;
p.perform (a1, b1, c1);
p.perform(x1, y1);
getch ();
}
