void search_empno()
{
ifstream n;
n.open("Emp.txt",ios::binary|ios::in);
Employee E;
int emp_no;
cout<<"Enter the Employee number:";
cin>>emp_no;
while(n.read((char*)&E,sizeof(E)))
{if(emp_no==E.retempno())
