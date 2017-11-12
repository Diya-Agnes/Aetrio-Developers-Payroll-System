void search_empno()
{
ifstream n;
n.open("Emp.txt",ios::binary|ios::in);
Employee E;
int emp_no;
cout<<"Enter the Employee number:";
cin>>emp_no;
while(n.read((char*)&E,sizeof(E)))
{
  if(emp_no==E.retempno())
    {
    s.output();
    break;}}
  
 n.close();
}

void search_name()
{    
ifstream n;
 n.open("Emp.txt",ios::binary|ios::in);
    
 Employee E;
    
 char emp_dept[20];
 cout<<"Enter the Employee department:";
 gets(emp_dept);
 while(n.read((char*)&Esizeof(E)))
 
 {
   if(strcmpi(emp_dept,E.retdept())==0)
 {
  s.output();
  break;}}
  n.close();
  }
  void search()
  {
    clrscr();
    int choice;
    do{
      cout<<"\n\n\n\tSearch\n";
      cout<<"\t\t1.By Empno\n";
      cout<<"\t\t2.By Name\n";
      cout<<"\t\t3.By Department\n";
      cout<<"\tEnter your choice\n";
      cin>>choice;
      
      switch(choice)
      {
        case 1:search_empno();      
               break;
        
        case 2:search_name();      
               break;
        
        case 3:search_dept();   
               break;
         
        default:cout<<"Sorry !!Invalid choice\n";
                break;
      
      }
      cout<<"Press any key to continue......\n";
      getch();
      clrscr();
    
      }while(choice!=4);}
