#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<math.h>



class USER
{

  char usname[25];
  long otpnumber[10];
  
  public:
  
  returnotp()
  {
  

  void login()
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
  
  for(n=0;n<6;n++)
  {
  otp[n]=random(10);
  cout<<otp[n];
  }
  waitotp(5);
  
  gotoxy(50,17);
  for(i=0;i<=20;i++)
  cout<<" ";
  
  gotoxy(40,13);
  cin>>otpnumber;
  
  if(
  


  void waitotp(int x)
  {
  for(int i=0;i<x;i++)
  cout<<" ";
  }

