#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<math.h>

/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------Employee class -------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
 
 
class Employee
{ 
  //Personal details------------
   char name[20];
   int age;
   int dd,mm,yy;
  
  //Work details---------------
   long telephone_no;
   long employeeno;
   char designation[30];
   char dept[30];
   float basic,hra,da,transport_a,overtime_a,deductions;
   float salary;
  
  
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
   salary=basic+hra+da+transport-deductions;
   return salary;
   }

}E;

//Function to input details
void Employee::get_details()
{
  clrscr();
  gotoxy(10,
cout<<"Details of the Employee -Personal";
  
  cout<<"Name:";
  gets(name);

  cout<<"Age:";
  cin>>age;
  
  cout<<"Date Of Birth:";
  cin>>dd>>" | ">>mm>>" | ">>yy;
  
  cout<<"Telephone Number:";
  cin>>telephoneno;
  
cout<<"Details of the Employee -Work";  
         
  cout<<"Designation:";
  gets(designation);
  
  cout<<"Department:";
  gets(dept);
         
  cout<<"Employee Number:";
  cin>>employeeno;
  
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
  
  cout<<"Deductions:";
  cin>>deductions;
 
}

//Function to output details------------------------------------------------------------------------------------------------------------
void Employee::put_details()
{
  clrscr();
  cout<<"Details of the Employee-Personal";
   
    
    cout<<"Name:"<<name;
    cout<<"Age:"<<age;
    cout<<"Date Of Birth:"<<dd<<" | "<<mm<<" | "<<yy;
    cout<<"Telephone Number:"<<telephoneno;
  
  cout<<"Details of the Employee-Work";
  
    cout<<"Employee Number:"<<empno;
    cout<<"Designation:"<<designation;
    cout<<"Department:"<<dept;
    cout<<"Basic salary:"<<basic;
    cout<<"HRA:"<<hra;
    cout<<"DA:"<<da;
    cout<<"Transport Allowance:"<<transport_a;
    cout<<"Overtime allowance:"<<overtime_a;
    cout<<"Deductions:"<<deductions;
  
    cout<<"Salary(Gross):"<<calcsalary();
}

//Menu Function-------------------------------------------------------------------------------------------------------------------------
void list_of_operations()
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
    cout<<"3.Salary Slip Generator";
    
    gotoxy(32,14);
    cout<<"4.Modify the records";
    
    gotoxy(32,16);
    cout<<"5.Print Reports of each Employee";
    
    gotoxy(32,18);
    cout<<"6.Exit the program";
    
    gotoxy(32,20);
    cout<<"Enter your choice here:";
    cin>>opt;
    
    switch(opt)
    {
       
       case 1:add(); 
              break;
      
       case 2:search(); 
              break;
        
       case 3:salary_slip_generator();   
              break;
      
       case 4:edit_salary();   
              break;
      
       case 5:reports_of_emp();    
              break;
      
       case 6:exit(0);
      
       default:cout<<"Your choice is invalid.";
               break;
    
     }
    
    gotoxy(55,21);
    cout<<"ENTER key to continue";
    getch();
     
    clrscr();
     
  }while(opt!=6)}


 
     
        
        
        
        
        
        
        
        
        
        
