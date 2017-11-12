void SalaryEdit()
{
 clrscr();
 int S=0, Eno;
 Employee E;
 cout<<"Enter the employee number for whom the salary is to be edited:";
 cin>>Eno;
 fstream file1;
 file1.open("Payroll.dat", ios::binary|ios::in|ios::app);
 while(!file1.eof())
 {
  file1.read((char*)&E, sizeof(E));
  if(E.eno==Eno)
  {
   cout<<"Enter the new salary details:";
   E. Salary();
   file1.write((char*)&E, sizeof(E));
   S=1;
   break;
  }
 }
 if(S==0)
  cout<<"Employee not found!";
 file1.close();
 cout<<"Press any key to continue. ";
 getch();
}
