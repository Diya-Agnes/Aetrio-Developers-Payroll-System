void SalarySlip()
{
 clrscr();
 int Eno, S=0;
 Employee E;
 cout<<"Enter the employee number of the employee whose salary slip is to be displayed:";
 cin>>Eno;
 ifstream infile("Payroll.dat", ios::binary|ios::in);
 while(!infile.eof())
 {
  infile.read((char*)&E, sizeof(E));
  if(E.eno==Eno)
  {
   cout<<"\nSALARY SLIP\n";
   cout<<"\nBasic Allowance:"<<E.basic;
   cout<<"\nHuman Resource Allowance:"<<E.hra;
   cout<<"\nDaily Allowance:"<<E.da;
   cout<<"\nTransport Allowance:"<<E.transport;
   cout<<"\nTax:"<<E.tax;
   cout<<"\nNet Salary:"<<E.Total();
   S=1;
   break;
  }
 }
 if(S==0)
  cout<<"Employee not found!";
 infile.close();
 cout<<"Press any key to continue. ";
 getch();
}
