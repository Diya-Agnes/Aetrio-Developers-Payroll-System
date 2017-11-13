void searchbyno()
{
ifstream file;
file.open("ademloyee.dat",ios::binary|ios::in);
Employee E;
int emp_no;
cout<<"Enter the Employee number:";
cin>>emp_no;
while(file.read((char*)&E,sizeof(E)))
{
  if(emp_no==E.get_empno())
    {
    E.output();
    break;
    }
}
  
 file.close();
}

void searchbyname()
{   
  ifstream n;
  n.open("Emp.txt",ios::binary|ios::in);
  Employee E;
  char emp_name[20];
  cout<<"Enter the Employee name:";
  gets(emp_name);

  while(n.read((char*)&E,sizeof(E)))
 
 {
    if(strcmpi(emp_name,E.retname())==0)
    
    {
      s.output();
      break;
    }
  }n.close();
}
void searchbydept()
{ 
ifstream file;
file.open("ademloyee.dat",ios::binary|ios::in);
    
 Employee E;
    
 char emp_dept[20];
 cout<<"Enter the Employee department:";
 gets(emp_dept);
 while(file.read((char*)&Esizeof(E)))
 
 {
   if(strcmpi(emp_dept,E.retdept())==0)
 {
  s.output();
  break;}}
  file.close();
  }
  void search()
  {
    clrscr();
    int opt;
    do {
      cout<<"Search for an employee.";
      cout<<"1.Employee number";
      cout<<"2.Employee's name";
      cout<<"3.Department";
      cout<<"Kindly provide your option.(...The option must be the number!...):";
      cin>>opt;
      
      
              switch(opt)
              {
              case 1:searchbyempno();      
                     break;
        
              case 2:searchbyname();      
                     break;
        
              case 3:searchbydept();   
                     break;
         
              default:cout<<"Your choice is invalid.";
                      break;
          
               }
      
      cout<<"Press any key to continue......\n";
      getch();
      clrscr();
    
      }while(opt!=4);
  }
