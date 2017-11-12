void add_ademp()
{
Employee E;

ofstream file;                                                                                        ;
file.open("ademployee.dat",ios::app|ios::binary);

  E.input();
  file.write((char*)&E,sizeof(E));

file.close();

}
