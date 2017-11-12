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
  int empno;
  char name[20];
  char designation[30];
  char dept[30];
  int age;
  int dd,mm,yy;
  long telno;
  int basic,hra,da,transport;
  int salary;
  
  public:
  void input();
  void output();
  char retname()
  
  {return name;}
  
  char retdept()
  {
    return dept;
  }
  
  int retempno()
  {
    return empno;
  }
  
void calsalary()
{
  salary=basic+hra+da+transport;
  return salary;
}

void showreports()
{
  cout<<empno<<"\t">>name<<"\t"<<designation<<"\t">>dept<<"\t"<<age<<"\t"<<dd<<"-"<<mm<<"-"<<yy<<"\t"<<telno<<"\t"<<salary<<"\t\n";
}
};

void Employee::input()
{
  clrscr();
  cout<<"Enter Employee Details";
  cout<<"Enter Employee Number:";
  cin>>empno;
  cout<<"Enter Employee Name:";
  gets(name);
  cout<<"Enter Employee Designation:";
  gets(designation);
  cout<<"Enter Employee Department:";
  gets(dept);
  cout<<"Enter Employee Age:";
  cin>>age;
  cout<<"Enter Employee Date Of Birth:";
  cin>>dd>>"-">>mm>>"-">>yy;
  cout<<"Enter Employee Telephone Number:";
  cin>>telno;
  cout<<"Enter Basic:";
  cin>>basic;
  cout<<"Enter HRA:";
  cin>>hra;
  cout<<"Enter DA:";
  cin>>da;
  cout<<"Enter Transport Allowance:";
  cin>>transport;
  
  
  salary=calsalary();
  }

void Employee::output()
{
  clrscr();
  cout<<" Employee Details ";
  cout<<"Employee Number:"<<empno;
  cout<<"Employee Name:"<<name;
  cout<<"Employee Designation:"<<designation;
  cout<<"Employee Department:"<<dept;
  cout<<"Employee Age:"<<age;
  cout<<"Employee Date Of Birth:"<<dd<<"-"<<mm<<"-"<<yy;
  cout<<"Employee Telephone Number:"<<telno;
  cout<<"Basic:"<<basic;
  cout<<"HRA:"<<hra;
  cout<<"DA:"<<da;
  cout<<"Transport Allowance:"<<transport;
  cout<<"Employee Salary:"<<salary;
}


void mainmenu()
{
  clrscr();
  int option;
  do{
    gotoxy(36,6);
    cout<<"MAIN MENU";
    gotoxy(32,8);
    cout<<"1.Add New Employee";
    gotoxy(32,10);
    cout<<"2.Search";
    gotoxy(32,12);
    cout<<"3.Salary";
    gotoxy(32,14);
    cout<<"4.Edit/Modify";
    gotoxy(32,16);
    cout<<"5.Reports";
    gotoxy(32,18);
    cout<<"6.Exit";
    gotoxy(32,20);
    cout<<"Please enter your choice:";
    cin>>option;
    
    switch(option)
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
      
       default:cout<<"Invalid option !!";
               break;
    
     }
    
    cout<<"Press any key to continue.....\n";
    
     getch();
     clrscr();
     }while(option!=6)}

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
 
     
        
        
        
        
        
        
        
        
        
        
