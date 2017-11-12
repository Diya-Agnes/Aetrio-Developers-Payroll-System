void reports()
{
clrscr();
Employee E;

ifstream n;
n.open("Emp.txt",ios::in|ios::binary);
if(!n)
{

cout<<"File doesn't exit";
return;

}
cout<<"Empno\t"<<"Name\t"<<"Designation\t"<<"Department\t"<<"Age\t"<<"DOB\t"<<"Telephone\t"<<"Salary\t\n";
while(n.read((char*)&E,sizeof(E)))

{
E.showreports();
}
}
