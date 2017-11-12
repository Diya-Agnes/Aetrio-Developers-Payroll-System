/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------User class - Login-------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------*/
class USER
{

  char usname[25];
  long otpnumber[10];
  
  public:
  
  char* return_otp()
  {
    return otp;
  }
  

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
  
  generate_otp();
  waitotp(5);
  
  gotoxy(50,17);
  for(i=0;i<=20;i++)
  cout<<" ";
  
  gotoxy(40,13);
  cin>>otpnumber;
  
  if(strcmp(otpnumber,return_otp())==0)
  {
   clrscr();
  
   align_cntr("ACCESS GRANTED.");
  }
  
   
  void generate_otp( char* otp[])
  {
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
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
