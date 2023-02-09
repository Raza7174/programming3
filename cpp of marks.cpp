#include<iostream>
using namespace std;
int main()
{
int  marks;
cin>>marks;
if(marks>80)
{
cout<<"it is A grade";//This is English marks
}
else if(marks>70)
{
cout<<"it is B grade";//This is ICT marks
}
else if(marks<50)
{
cout<<"it is C grade";//This is Math marks
}
else
{
cout<<"it is D grade";//This is physics marks 
}
return 0;
}