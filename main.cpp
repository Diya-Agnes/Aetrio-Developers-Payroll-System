#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<math.h>
#include<iomanip.h>

//Global Variable
int i;

void menu();
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------User class - Login-------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/


 class USER
  {

	   char usname[25];
	   char otpnumber[10];

  public:

	    USER()                                             //User constructor
	    {
	       strcpy(usname,"aetrio");
	    }


	    char* return_username()
	    {
	       return usname;
	    }


	int generate_otp();
	void waitotp(long int x);
	void eraseotp();
	void login();

 }U;

/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------Employee class ----------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
 
    class Employee
    {

	      char name[20];                            //Personal details------------
	      int age;
	      int dd,mm,yy;
	      long telephone_no;

									   //Work details---------------
	      long employeeno;
	      char designation[30];
	      char dept[30];
	      float basic,hra,da,transport_a,overtime_a,deductions;
	      float salary;
	      int date[3];

      public:

	    long get_empno()
	    {
	      return employeeno;
	    }


	    char* get_name()
	    {
	      return name;
	    }


	    char* get_dept()
	    {
	      return dept;
	    }

	    void changed_sal(float sal)
	    {
	      basic=sal;
	    }
	    void calcsalary()
	    {
	      salary=basic+hra+da+transport_a+overtime_a-deductions;
	    }
	    float retsalary()
	    {
	      return salary;
	    }

	void get_details();
	void put_details();
	void reports_on_screen();
	void salary_slip_generator();
	
    }E;
****************************************************************************************************************************************
//Function to print first page----------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************


    void payroll_cover()
    {

     gotoxy(24,6);
     cout<<"--_*_--Aetrio Developers--_*_--";

         cout<<'\n';
         for(i=0;i<160;i++)
         {
         cout<<'_';
         }

gotoxy(0,11);

cout<<"         |||||      /|\\    \\      / ||||||       |||||      |     |         "<<'\n';
cout<<"         |    |    /   \\    \\    /  |     |    |       |    |     |         "<<'\n';
cout<<"	 |     |  /     \\    \\  /   |      |  |         |   |     |         "<<'\n';
cout<<"	 |    |  /       \\    \\/    |     |  |           |  |     |         "<<'\n';
cout<<"	 |||||  /---------\\   /     ||||||   |           |  |     |         "<<'\n';
cout<<"	 |     /           \\ /      | \\       |         |   |     |         "<<'\n';
cout<<"	 |    /             \\       |  \\       |       |    |     |         "<<'\n';
cout<<"	 |   /               \\      |   \\        |||||      |____ |______ "<<'\n';
cout<<"                                                                       "<<'\n';

         cout<<'\n';
         for(i=0;i<160;i++)
         {
         cout<<'_';
         }
    }

	
****************************************************************************************************************************************
//Function to print horizontal line-----------------------------------------------------------------------------------------------------
****************************************************************************************************************************************

   void line()
   {
     cout<<'\n';
     for(i=0;i<80;i++)
     {
       cout<<'_';
     }
   }

****************************************************************************************************************************************
//Function to align to center-----------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************


   void align_cntr(char* str)
   {
	  int y=11;
	  gotoxy(40-strlen(str)/2,y);
	  cout<<str;
   }

****************************************************************************************************************************************
//Functions to login--------------------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************
   

	
    void USER::waitotp(long int x)
    {
        for(long int i=0;i<x;i++);
    }

   
    void USER::eraseotp()
    {
     int i;
  
       gotoxy(40,17);
       for(i=0;i<=20;i++)
          cout<<" ";
     }


****************************************************************************************************************************************
//Login function------------------------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************
  
    void USER::login()
    {
      char username[25];
      int value;

      gotoxy(0,8);
      line();

      gotoxy(30,10);
      cout<<"Username:";
	  
      gotoxy(40,10);
      gets(username);
 
      cout<<'\n';
      line();
  

    again:  gotoxy(40,17);
            cout<<"OTP:";

            value=generate_otp();

         if(strcmp(username,return_username())==0 && value)
           {
             clrscr();

             align_cntr("ACCESS GRANTED.");
		     getch();
        
		     list_of_operations();
		  }

        else
          {
            clrscr();

            align_cntr("ACCESS DENIED.");
            gotoxy(50,20);
	        cout<<"ENTER to try again";
            getch();
        
		   goto again;
	      }
    }

  // Function Prototypes
 
   void list_of_operations();
   void add_ademp();
   void searchbyempno();
   void searchbyname();
   void searchbydept();
   void search();
   void delete_emprec();
   void modify();
   void reports_of_emp();
   void smiley_face();
   




****************************************************************************************************************************************
//Function to input details
****************************************************************************************************************************************

 void Employee::get_details()
 {
       clrscr();
	   
    cout<<"\n\t\tDetails of the Employee-Personal";
    for(i=0;i<77;i++)
     {
       cout<<'_';
     }
	 
  cout<<"\n\nName:";
  gets(name);

  cout<<"\nAge:";
  cin>>age;
  
  cout<<"\nDate Of Birth:";
  cin>>dd;
  cin>>mm;
  cin>>yy;
  
  cout<<"\nTelephone Number:";
  cin>>telephone_no;
  
  
cout<<"\n\n\t\tDetails of the Employee -Work";                         //Entering work details

  cout<<"\nEmployee Number:";
  cin>>employeeno;

  cout<<"\n\nDesignation:";
  gets(designation);

  cout<<"\nDepartment:";
  gets(dept);

  cout<<"\nBasic salary:";
  cin>>basic;
  
  cout<<"\nHouse Rent Allowance:";
  cin>>hra;
  
  cout<<"\nDearness Allowance:";
  cin>>da;
  
  cout<<"\nTransport Allowance:";
  cin>>transport_a;
  
  cout<<"\nOvertime Allowance:";
  cin>>overtime_a;

  cout<<"\nDeductions:";
  cin>>deductions;
  calcsalary();
}



****************************************************************************************************************************************
//Function to output details------------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************


void Employee::put_details()
{
           clrscr();
  
  cout<<"\n\t\tDetails of the Employee-Personal";

      line();

    cout<<"\n\nName:"<<name;
    cout<<"\nAge:"<<age;
    cout<<"\nDate Of Birth:"<<dd<<" | "<<mm<<" | "<<yy;
    cout<<"\nTelephone Number:"<<telephone_no;

  cout<<"\n\n\t\tDetails of the Employee-Work";

      line();

    cout<<"\n\nEmployee Number:"<<employeeno;
    cout<<"\nDesignation:"<<designation;
    cout<<"\nDepartment:"<<dept;
    cout<<"\nBasic salary:"<<basic;
    cout<<"\nHRA:"<<hra;
    cout<<"\nDA:"<<da;
    cout<<"\nTransport Allowance:"<<transport_a;
    cout<<"\nOvertime allowance:"<<overtime_a;
    cout<<"\nDeductions:"<<deductions;

    cout<<"\n\nSalary(Gross):"<<salary<<'\n';
}


****************************************************************************************************************************************
//Report Printing Function--------------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************


void Employee::reports_on_screen()
{

            clrscr();
 
            line();
  
    cout<<"\n\t\t\t\tPersonal Details";

         line();

    gotoxy(28,7);
    cout<<"Name: "<<name;
    gotoxy(28,8);
    cout<<"Age: "<<age;
    gotoxy(28,9);
    cout<<"Date Of Birth: "<<dd<<" | "<<mm<<" | "<<yy;
    gotoxy(28,10);
    cout<<"Telephone Number: "<<telephone_no;

         cout<<'\n';
         line();

    cout<<"\n\t\t\t\tWork Details";

          line();

    gotoxy(28,18);
    cout<<"Employee Number: "<<employeeno;
    gotoxy(28,19);
    cout<<"Designation: "<<designation;
    gotoxy(28,20);
    cout<<"Department: "<<dept;

         cout<<'\n';
        line();

    }


****************************************************************************************************************************************
//Menu Function-------------------------------------------------------------------------------------------------------------------------
****************************************************************************************************************************************

void list_of_operations()
{

  int opt;
 
 do{

          clrscr();

     gotoxy(0,4);
     for(i=0;i<80;i++)
     {
       cout<<'_';
     }

    gotoxy(27,6);
    cout<<"Aetrio Developers Payroll:";

     cout<<'\n';
     for(i=0;i<80;i++)
     {
       cout<<'_';
     }
       cout<<'\n';

             gotoxy(26,9);
             cout<<"1.Add an Employee";

             gotoxy(26,11);
             cout<<"2.Search and get details of an Employee";

             gotoxy(26,13);
             cout<<"3.Salary Slip Generator";

             gotoxy(26,15);
             cout<<"4.Modify the records";

             gotoxy(26,17);
             cout<<"5.Print Reports of each Employee";

             gotoxy(26,19);
             cout<<"6.Exit the program";

       cout<<'\n';
       for(i=0;i<80;i++)
       cout<<'_';


             gotoxy(24,25);
             cout<<"Enter your choice here:";
             cin>>opt;
    
            switch(opt)
            {
       
             case 1:add_ademp(); 
                    break;
      
             case 2:search(); 
                    break;
        
             case 3:E.salary_slip_generator();
                    break;
      
             case 4:modify();
                    break;
      
             case 5:reports_of_emp();    
                    break;

             case 6:exit();
	                break;
      
             default:clrscr();
	                 align_cntr("Your choice is invalid.");
                     break;

            }

        if(opt!=6)
        {
           clrscr();
           align_cntr("ENTER key to continue");
           getch();
        }
 
    } while(opt!=6);



}

  
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------Function to add employees---------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/

void add_ademp()
{

    clrscr();
    int N,i;

       E.get_details();

    ofstream file;                                                                                        ;
    file.open("ademployee.dat",ios::app|ios::binary);

	     file.write((char*)&E,sizeof(E));

    file.close();
}


/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------Function to search for employees--------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/


****************************************************************************************************************************************
//Search an employee by employee number-------------------------------------------------------------------------------------------------
****************************************************************************************************************************************

void searchbyempno()
{

   ifstream file;
   file.open("ademployee.dat",ios::binary|ios::in);

	         if(!file)
	         {
	           clrscr();
               
			   gotoxy(0,9);
               for(i=0;i<80;i++)
               {
                 cout<<'_';
               }
	        
			align_cntr("There exists no such file. Create a file and proceed");

               line();
	           getch();
	           list_of_operations();
             }

        long emp_no;
        cout<<"Enter the Employee number:";
        cin>>emp_no;

             while(file.read((char*)&E,sizeof(E)))
             {
               if(emp_no==E.get_empno())
               {
                 file.seekg(sizeof(E)-1,ios::cur);
                 E.put_details();
                 break;
               }
             }
  
    file.close();
}

****************************************************************************************************************************************
//Search for an employee by employee's name---------------------------------------------------------------------------------------------
****************************************************************************************************************************************

void searchbyname()
{   

    ifstream file;
    file.open("ademployee.dat",ios::binary|ios::in);
      
	    
      		if(!file)
            {
             clrscr();

             gotoxy(0,9);
             for(i=0;i<80;i++)
             {
               cout<<'_';
             }
	        align_cntr("There exists no such file. Create a file and proceed");

              line();

	          getch();
	          list_of_operations();
	        }
		  
        char emp_name[20];
        cout<<"Enter the Employee name:";
        gets(emp_name);

  
            while(file.read((char*)&E,sizeof(E)))
            {
               if(strcmpi(emp_name,E.get_name())==0)
               {
                file.seekg(sizeof(E)-1,ios::cur);
                E.put_details();
                break;
               }
            }
  
    file.close();
  
}

****************************************************************************************************************************************
//Search for an employee by employee's department---------------------------------------------------------------------------------------
****************************************************************************************************************************************

void searchbydept()
{
    ifstream file;
    file.open("ademployee.dat",ios::binary|ios::in);

             if(!file)
             {
               clrscr();
               gotoxy(0,9);
               
			   for(i=0;i<80;i++)
               {
                  cout<<'_';
               }
	        
			align_cntr("There exists no such file. Create a file and proceed");
                  
		       line();
	           
			   getch();
	           list_of_operations();
	         }

        char emp_dept[20];
        cout<<"Enter the Employee department:";
        gets(emp_dept);
 
             while(file.read((char*)&E,sizeof(E))) 
             {
              if(strcmpi(emp_dept,E.get_dept())==0)
              {
                file.seekg(sizeof(E)-1,ios::cur);
                E.put_details();
                break;
              }
             }
     file.close();
}


****************************************************************************************************************************************
//Search for an employee main function--------------------------------------------------------------------------------------------------
****************************************************************************************************************************************
 

 void search()
 {

    int opt;
    do {

          clrscr();
          gotoxy(26,8);
          cout<<"Search for an employee by:";

          cout<<'\n';
          for(i=0;i<80;i++)
          {
            cout<<'_';
          }
		  cout<<'\n';
     

	          gotoxy(28,10);
              cout<<"1.Employee's number";

              gotoxy(28,12);
              cout<<"2.Employee's name";

              gotoxy(28,14);
              cout<<"3.Department";


               cout<<"\n\n\n\n\n\tKindly provide your option.(...Your option must be a number!...):";
               cin>>opt;


	                switch(opt)
	                {
	                 case 1:searchbyempno();
		                    break;

	                 case 2:searchbyname();
		                    break;
 
	                 case 3:searchbydept();
		                    break;

	                 default:clrscr();
		                     align_cntr("Your choice is invalid.");
		                     break;

	                }


              cout<<"\n\t\t\t\tENTER key to continue.";
               getch();

        }while(opt==1||opt==2||opt==3);
}

  
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------Function to generate salary slip-----------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/ 
 

void Employee::salary_slip_generator()
{
     clrscr();
     long eno,i,found=0;
     Employee E;

    align_cntr("Display the salary slip requested for.");
    
	cout<<"\n\n\t\t\tEmployee number:";
    cin>>eno;


    ifstream file;
    file.open("ademployee.dat",ios::binary|ios::in);

	  if(!file)
	  {
	    clrscr();
        align_cntr("There exists no such file. Create a file and proceed");
	    list_of_operations();
	  }


      while(file.read((char*)&E,sizeof(E)))
      {
       if(eno==E.get_empno())
      {
        clrscr();

       gotoxy(35,3);
       cout<<"SALARY SLIP";

       gotoxy(33,4);
       cout<<"--------------";
 
       gotoxy(34,6);
	   timetelling();
       
          cout<<'\n'<<'\n';
          line();


      gotoxy(7,9);
      cout<<"PERSONAL";

      gotoxy(6,10);
      cout<<"-----------";

       cout<<"\nName:"<<E.name;
       cout<<"\nAge:"<<E.age;
       cout<<"\nDate Of Birth:"<<E.dd<<" | "<<E.mm<<" | "<<E.yy;
       cout<<"\nTelephone Number:"<<E.telephone_no;
       cout<<"\nDesignation: "<<E.designation;

      gotoxy(60,9);
      cout<<"OFFICIAL";

      gotoxy(59,10);
      cout<<"-------------";

      gotoxy(55,11);
      cout<<"Basic Salary:"<<E.basic;
      gotoxy(55,12);
      cout<<"House Rent Allowance:"<<E.hra;
      gotoxy(55,13);
      cout<<"Dearness Allowance:"<<E.da;
      gotoxy(55,14);
      cout<<"Transport Allowance:"<<E.transport_a;
      gotoxy(55,15);
      cout<<"Overtime Allowance:"<<E.overtime_a;
      gotoxy(55,16);
      cout<<"Deductions:"<<E.deductions<<endl;

      cout<<"\n\n";
      line();

     cout<<'\n';
     gotoxy(28,22);
     cout<<"Salary(Gross): "<<"$ "<<salary;

     line();

     found=1;
     break;
    }
}

       if(found==0)
         cout<<"This employee's record does not exist";

   file.close();

   getch();
}

	
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------Function to edit salary-----------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/


void edit_salary()
{
      clrscr();
    int changedsal=0,eno,cur_ptr,new_sal,i,N;

     gotoxy(20,8);
     cout<<"Employee Number to be provided to edit salary:";
     cin>>eno;

    fstream file;
    file.open("ademployee.dat",ios::binary|ios::in|ios::out);

      while(file.read((char*)&E,sizeof(E)))
	 if(eno==E.get_empno())
	 {
	  changedsal=1;
	    cout<<"\n\n\t\tRevised value of basic salary";
	      cin>>new_sal;

	       E.changed_sal(new_sal);
	      E.calcsalary();
	    cur_ptr=file.tellg();
	   file.seekp(cur_ptr-sizeof(E),ios::beg);
	 file.write((char*)&E,sizeof(E));

     cout<<"ENTER key to continue the program.";
     getch();

     E.salary_slip_generator();

	 }


 if(changedsal==0)
 {
 clrscr();
 align_cntr("The Employee's record does not exist.");
 }


    file.close();

     cout<<"ENTER key to continue the program.";
     getch();

     list_of_operations();
}





*****************************************************************************************************************************************************************
//Delete records-------------------------------------------------------------------------------------------------------------------------------------------------
*****************************************************************************************************************************************************************


void delete_emprec()
{

   int eno,cur_ptr;

   cout<<"Employee Number to be provided to delete record:";
   cin>>eno;

   ifstream file;
   file.open("ademployee.dat",ios::binary|ios::in);

   ofstream newfile;
   newfile.open("2minutes.dat",ios::binary|ios::out);


         while(file.read((char*)&E,sizeof(E)))
         {

           if(eno!=E.get_empno())
           {
             cur_ptr=file.tellg();
             newfile.seekp(cur_ptr-sizeof(E),ios::beg);
             newfile.write((char*)&E,sizeof(E));
 	 	   }
        
   		 }



    file.close();
    newfile.close();

 remove("ademployee.dat");
 rename("2minutes.dat","ademployee.dat");

    cout<<"\nENTER key to continue the program.";
    getch();
}

*****************************************************************************************************************************************************************
//Modify records-------------------------------------------------------------------------------------------------------------------------------------------------
*****************************************************************************************************************************************************************


void modify()
{

        clrscr();
    int opt;

do{
         gotoxy(27,8);
         cout<<"Modify an employee's record:";

	        line();
            cout<<'\n';

              gotoxy(26,11);
              cout<<"1.Edit an existing record.";

              gotoxy(26,13);
              cout<<"2.Delete an existing record.";


            cout<<"\n\n\n\n\n\tKindly provide your option.(...Your option must be a number!...):";
            cin>>opt;


		             switch(opt)
                     {
 
		             case 1: edit_salary();
			                 break;

		             case 2: delete_emprec();
			                 break;

		             default:clrscr();
			                 align_cntr("\nYour choice is invalid");
			                  break;

		             }

            cout<<"\n\t\t\t\tENTER key to continue";
            getch();

            list_of_operations();

    } while(opt!=3);
   
}


		
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------Function to print reports------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/


void reports_of_emp()
{
           clrscr();

    ifstream file;
    file.open("ademployee.dat",ios::in|ios::binary);

           if(!file)
	       {
	          clrscr();

	       int j;
           gotoxy(0,9);
           for(i=0;i<80;i++)
           {
             cout<<'_';
           }
	     
		 align_cntr("There exists no such file. Create a file and proceed");
	   
    	   line();
	  
        	  getch();
	          list_of_operations();
	       }



            while(file.read((char*)&E,sizeof(E)))
            {

              E.reports_on_screen();
               getch();
            
			}


    file.close();
}


/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------Smiley Face-----------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/


void exit()
{

          clrscr();

    cout<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n';


cout<<"                   000000000000000000000                       "<<'\n';
cout<<"                 0000000000000000000000000                     "<<'\n';
cout<<"               0000000   0000000000   00000                    "<<'\n';
cout<<"             00000000     00000000     00000                   "<<'\n';
cout<<"            0000000000   0000000000   0000000                  "<<'\n';
cout<<"            000000000000000000000000000000000             "<<'\n';
cout<<"            000000000000000000000000000000000           "<<'\n';
cout<<"             00000000000000000000000000000000             "<<'\n';
cout<<"              0000000000          0000000000             "<<'\n';
cout<<"	       00000000000      00000000000                "<<'\n';
cout<<"                 0000000000000000000000000		   "<<'\n';
cout<<"		   0000000000000000000000                     "<<'\n';


     gotoxy(37,20);
     cout<<"THE END.";

     gotoxy(39,21);
     cout<<"...Click on the 'X' button to exit...(^_^)";


}


/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------Execution of the program----------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/


void main()
{

    payroll_cover();
    getch();
    clrscr();

       U.login();
}
        
        
        
        
        
        
        
        
        
