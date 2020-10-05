// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    using namespace std ;
   
int a,srn,cl;
char sn[20],sn1[20],sec;
// Taking imformation about Student 

cout<<"\n ********************************************************************************************";
cout<<"\n ********************************************************************************************";

cout<<"\n ENTER STUDENT'S FIRST NAME : " ;
cin>>sn;

cout<<"\n ENTER STUDENT'S LAST NAME : " ;
cin>>sn1;

cout<<"\n ENTER STUDENT ROLL NO: ";
cin>>srn;

cout<<"\n ENTER STUDENTS AGE: ";
cin>> a;

cout<<"\n ENTER STUDENT CLASS: ";
cin>>cl;
if ((cl<0)||(cl>12))
cout<<"invalid input";
else
cout<<"\n ENTER STUDENT SECTION: ";
cin>>sec;

// Taking marks of student in various subjects

cout<<"\n ********************************************************************************************";
cout<<"\n ********************************************************************************************";
cout<<"\n ENTER STUDENTS MARKS OUT OF 100 : ";

int e,p,c,m,cp;

cout<<"\n ENTER MARKS IN ENGLISH: ";
cin>>e;
if ((e<0)||(e>100))
cout<<"invalid input";
else
cout<<"\n ENTER MARKS IN PHYSICS: ";
cin>>p;
if ((p<0)||(p>100))
cout<<"invalid input";
else
cout<<"\n ENTER MARKS IN CHEMISTRY: ";
cin>>c;
if ((c<0)||(c>100))
cout<<"invalid input";
else
cout<<"\n ENTER MARKS IN MATHS: ";
cin>>m;
if ((m<0)||(m>100))
cout<<"invalid input";
else
cout<<"\n ENTER MARKS IN COMP/PHY.EDU: ";
cin>>cp;
if ((cp<0)||(cp>100))
cout<<"invalid input";
else
cout<<"\n ********************************************************************************************";
cout<<"\n ********************************************************************************************";
// Displaying Result
cout<<"\n STUDENT'S NAME: ";
cout<<sn;
cout<<"\n STUDENT ROLL NO: ";
cout<<srn;
cout<<"\n STUDENTS AGE: ";
cout<<a;
cout<<"\n STUDENT CLASS: ";
cout<<cl;
cout<<"\n ENTER STUDENT SECTION: ";
cout<<sec;

int t=0;
cout<<"\n ********************************************************************************************";
cout<<"\n ********************************************************************************************";


cout<<"\n MARKS IN ENGLISH: ";
cout<<e;
cout<<"\n MARKS IN PHYSICS: ";
cout<<p;
cout<<"\n MARKS IN CHEMISTRY: ";
cout<<c;
cout<<"\n MARKS IN MATHS: ";
cout<<m;
cout<<"\n MARKS IN COMP/PHY.EDU: ";
cout<<cp;

t=e+p+c+m+cp;

cout<<"\n ********************************************************************************************";
cout<<"\n ********************************************************************************************";

cout<<"\n TOTAL MARKS Obtained: "<<t;
cout<<"\n PERCENTAGE: "<<(t)/5<<"%";

cout<<"\n ********************************************************************************************";
cout<<"\n ********************************************************************************************";
//declaring result

if (p>=33)

{
cout<<"\n\n\n ********************************************************************************************";
cout<<"\n\t\t PASS";
cout<<"\n ********************************************************************************************";
}
else
{
cout<<"\n\n\n ********************************************************************************************";
cout<<"\n\t\t Fail";
cout<<"\n ********************************************************************************************";
}
return(0);
}
