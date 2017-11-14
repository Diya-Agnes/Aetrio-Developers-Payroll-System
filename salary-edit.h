void edit_salary()
{
 clrscr();
 Employee E;
 int changed_sal=0,eno,cur_ptr;

 cout<<"Employee Number to be provided to edit salary:";
 cin>>eno;
 
 ifstream file;
 file.open("ademployee.dat", ios::binary|ios::in);
 
     while(!file.eof())
     {
       ofstream file1;
       file1.open("ademployee.dat", ios::binary|ios::out|ios::app);
      
       file.read((char*)&E,sizeof(E));
     
       if(E.employeeno==eno)
       {
       cout<<"Revised value of salary)";
       cur_ptr=file.tellg();
       file1.seekp(cur_ptr-sizeof(E),ios::beg);
       file1.write((char*)&E,sizeof(E));
        
       changed_sal=1;
       break;
       }
      
    }
 
 if(changed_sal==0)
 {
 clrscr();
 align_cntr("The Employee's record does not exist.");
 }
 
 file.close();
 file1.close();
 
 cout<<"ENTER key to continue the program.";
 getch();
}
