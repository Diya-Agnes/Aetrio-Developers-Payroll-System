void reports()
{
clrscr();
Employee E;

ifstream file;
file.open("ademployee.dat",ios::in|ios::binary);

  if(!file)
  {

   cout<<"There is no such required file.";
   return 0;

   }

cout<<"Empno\t"<<"Name\t"<<"Designation\t"<<"Department\t"<<"Age\t"<<"DOB\t"<<"Telephone\t"<<"Salary\t\n";

  while(n.read((char*)&E,sizeof(E)))

{
E.showreports();
}
}
