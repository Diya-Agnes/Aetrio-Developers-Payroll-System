void time()
{
 

//printing salary slip function
void salary_slip_generator()
{
 clrscr();
 
 int eno, S=0;
 Employee E;
 
 cout<<"We shall now display the salary slip requested for.";
 cout<<"Employee number:";
 
 cin>>eno;

 ifstream file("ademployee.dat", ios::binary|ios::in);
 while(!file.eof())
 {
  file.read((char*)&E, sizeof(E));
  if(E.employeeno==eno)
  {
       gotoxy(28.5,3);
       cout<<"SALARY SLIP";
   
       gotoxy(28.5,4);
       cout<<"--------------";
  
   gotoxy(7,7);
   cout<<"PERSONAL";
   
   gotoxy(6,8);
   cout<<"-----------";
   
    cout<<"\nName:"<<E.name;
    cout<<"\nAge:"<<E.age;
    cout<<"\nDate Of Birth:"<<E.dd<<" | "<<E.mm<<" | "<<E.yy;
    cout<<"\nTelephone Number:"<<E.telephoneno;
  
   gotoxy(60,7);
   cout<<"OFFICIAL";
   
   gotoxy(6,8);
   cout<<"-----------"; 
  
   gotoxy(55,9);
   cout<<"Basic Salary:"<<E.basic;
   gotoxy(55,10);
   cout<<"\nHouse Rent Allowance:"<<E.hra;
   gotoxy(55,11);
   cout<<"\nDearness Allowance:"<<E.da;
   gotoxy(55,12);
   cout<<"\nTransport Allowance:"<<E.transport_a;
   gotoxy(55,13);
   cout<<"\nOvertime Allowance:"<<E.overtime_a;
   gotoxy(55,14);
   cout<<"\nDeductions:"<<E.deductions<<endl;
   
   cout<<'\n';
   for(i=0;i<80;i++)
   {
    cout<<'_';
   } 
   
   gotoxy(21.5,18);
   cout<<"\nSalary(Gross):"<<E.salary;
 
   found=1;
   break;
  }
  
 }
 
 if(found==0)
 cout<<"This employee's does not exist";
 file.close();
    
 cout<<"ENTER key to continue. ";
 getch();
}
