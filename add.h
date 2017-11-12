void add()
{
Employee E;

ofstream n;                                                                                        ;
n.open("Emp.txt",ios::app|ios::binary);

E.input();
n.write((char*)&E,sizeof(E));
n.close();

}
