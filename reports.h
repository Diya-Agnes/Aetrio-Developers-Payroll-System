
//Report Printing function
void reports_of_emp()
{
clrscr();
Employee E;

 ifstream file;
 file.open("ademployee.dat",ios::in|ios::binary);

  
          if(!file)
          {
          clrscr();
          align_cntr("There exists no such file. Create a file and proceed");
          }

cout<<"Empno\t"<<"Name\t"<<"Designation\t"<<"Department\t"<<"Age\t"<<"DOB\t"<<"Telephone\t"<<"Salary\t\n";

 while(file.read((char*)&E,sizeof(E)))
 {
 E.showreports();
 }
  
file.close();

}
