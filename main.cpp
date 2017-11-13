#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<math.h>


class Employee
{ 
  
  char name[20];
  int employeeno;
  int age;
  int dd,mm,yy;
  char designation[30];
  char dept[30];
  long telephone_no;
  int basic,hra,da,transport_a,overtime_a;
  int salary;
  
  public:
   
   int get_empno()
   {
    return employeeno;
   }
  
   char get_name()
   {
     return name;
   }
   
   char get_dept()
   {
    return dept;
   }
  
   void get_details();
   void put_details();
  
  void calcsalary()
   {
   salary=basic+hra+da+transport;
   return salary;
   }

  void showreports()
  {
  cout<<empno<<"\t">>name<<"\t"<<designation<<"\t">>dept<<"\t"<<age<<"\t"<<dd<<"-"<<mm<<"-"<<yy<<"\t"<<telno<<"\t"<<salary<<"\t\n";
  }
}E;

void Employee::get_details()
{
  clrscr();
  cout<<"Details of the Employee.";
  cout<<"Employee Number:";
  cin>>employeeno;
  cout<<"Name:";
  gets(name);
  cout<<"Designation:";
  gets(designation);
  cout<<"Department:";
  gets(dept);
  cout<<"Age:";
  cin>>age;
  cout<<"Date Of Birth:";
  cin>>dd>>" | ">>mm>>" | ">>yy;
  cout<<"Telephone Number:";
  cin>>telephoneno;
  cout<<"Basic salary:";
  cin>>basic;
  cout<<"House Rent Allowance:";
  cin>>hra;
  cout<<"Dearness Allowance:";
  cin>>da;
  cout<<"Transport Allowance:";
  cin>>transport_a;
  cout<<"Overtime Allowance:";
  cin>>overtime_a;
 
 
}

void Employee::put_details()
{
  clrscr();
  cout<<"Details of the Employee.";
  cout<<"Employee Number:"<<empno;
  cout<<"Name:"<<name;
  cout<<"Designation:"<<designation;
  cout<<"Department:"<<dept;
  cout<<"Age:"<<age;
  cout<<"Date Of Birth:"<<dd<<" | "<<mm<<" | "<<yy;
  cout<<"Telephone Number:"<<telephoneno;
  cout<<"Basic salary:"<<basic;
  cout<<"HRA:"<<hra;
  cout<<"DA:"<<da;
  cout<<"Transport Allowance:"<<transport_a;
  cout<<"Overtime allowance:"<<overtime_a;
  cout<<"Net Salary:"<<calcsalary();
}


void mainmenu()
{
  clrscr();
  int opt;
  do{
    gotoxy(36,6);
    cout<<"Aetrio Developers Payroll:";
   
    gotoxy(32,8);
    cout<<"1.Add an Employee";
   
    gotoxy(32,10);
    cout<<"2.Search for an Employee";
  
    gotoxy(32,12);
    cout<<"3.Salary ";
    
    gotoxy(32,14);
    cout<<"4.Edit/Modify";
    
    gotoxy(32,16);
    cout<<"5.Reports";
    
    gotoxy(32,18);
    cout<<"6.Exit";
    
    gotoxy(32,20);
    cout<<"Enter your choice here:";
    cin>>opt;
    
    switch(opt)
    {
       
       case 1:add(); 
              break;
      
       case 2:search(); 
              break;
        
       case 3:salary();   
              break;
      
       case 4:edit();   
              break;
      
       case 5:reports();    
              break;
      
       case 6:exit(0);
      
       default:cout<<"Your choice is invalid.";
               break;
    
     }
    
    cout<<"Press any key to continue.....\n";
    
     getch();
     clrscr();
     }while(opt!=6)}

 void main()
 {
   getch();
   clrscr();
   gotoxy(32,12);
   cout<<"Loading,please wait.....";
   clrscr();
   login();
   clrscr;
   mainmenu();
 }
 
     
        
        
        
        
        
        
        
        
        
        
