#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<math.h>

/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------Function to align the strings at the center---------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void align_cntr(char* str)
{
	int y=11;
	gotoxy(40-strlen(str)/2,y);
	cout<<str;

}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------User class - Login-------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
class USER
{

  char usname[25];
  long otpnumber[10];
  
  public:
	
  USER
  {
     strcpy(usname,"AetrioD");
  }
	
  char* return_username()
  {
    return usname;
  }
	
  char* return_otp()
  {
    return otp;
  }
     
  char* generate_otp()
  {  
  char* otp[7];
  for(n=0;n<6;n++)
  {
  otp[n]=random(10);
  cout<<otp[n];
  }	  
  }

  void waitotp(int x)
  {	  
  for(int i=0;i<x;i++)
  cout<<" ";
  }	
  }
	
  void eraseotp()
  {
   gotoxy(50,17);
   for(i=0;i<=20;i++)
   cout<<" "; 	
  }

  void login();
}U;

//Login function------------------------------------------------------------------------------------------------------------------------
void USER::login()
{

  gotoxy(30,10);
  cout<<"\nUsername:";
  gotoxy(40,10);
  gets(usname);
  
  gotoxy(30,13);
  cout<<"\nPassword:";
  
  randomize();
  int n,i;
  char otp[7];
	  
  gotoxy(50,17);
  cout<<"\nYour OTP is:";
  gotoxy(63,17);
  
    generate_otp();
    waitotp(5);
    eraseotp();

  gotoxy(40,13);
  cin>>otpnumber;
  
    if(strcmp(usname,return_username())==0 && strcmp(otpnumber,return_otp())==0)
    {
     clrscr();
  
     align_cntr("ACCESS GRANTED.");
    }
	
}
