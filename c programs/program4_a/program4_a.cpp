#include<iostream> 
#include<conio.h> 
#include<process.h> 
using namespace std; 
struct node
{
char start; char alp; node *nstate;
}
*p,*p1,*p2,*p3,*p4,*p5,*p6,*p7,*p8;
char e='e';
void disp();
void re1()
{
p1=new(node); p2=new(node); p1->start='0'; p1->alp='e';
p1->nstate=p2; p2->start='1'; p2->alp='a';
p2->nstate=NULL; disp();
getch();
}
void re2()
{
p1=new(node); p2=new(node); p3=new(node); p4=new(node); p5=new(node); p6=new(node);
 
p7=new(node); p8=new(node); p1->start='0'; p1->alp='e';
p1->nstate=p2; p2->start='1'; p2->alp='a';
p2->nstate=p3; p3->start='2'; p3->alp='e';
p3->nstate=p4; p4->start='5'; p4->alp=' ';
p4->nstate=p5; p5->start='0'; p5->alp='e';
p5->nstate=p6; p6->start='3'; p6->alp='b';
p6->nstate=p7; p7->start='4'; p7->alp='e';
p7->nstate=p8; p8->start='5'; p8->alp=' ';
p8->nstate=NULL; disp();
getch();
}
void re3()
{
p1=new(node); p2=new(node); p3=new(node); p1->start='0'; p1->alp='a';
p1->nstate=p2; p2->start='1'; p2->alp='b';
p2->nstate=p3; p3->start='2'; p3->alp=' ';
p3->nstate=NULL; disp();
getch();
}
void re4()
{
 
p1=new(node); p2=new(node); p3=new(node); p4=new(node); p5=new(node); p6=new(node); p7=new(node); p8=new(node); p1->start='0'; p1->alp='e';
p1->nstate=p2; p2->start='1'; p2->alp='a';
p2->nstate=p3; p3->start='2'; p3->alp='e';
p3->nstate=p4; p4->start='3'; p4->alp=' ';
p4->nstate=p5; p5->start='0'; p5->alp='e';
p5->nstate=p6; p6->start='3'; p6->alp=' ';
p6->nstate=p7; p7->start='2'; p7->alp='e';
p7->nstate=p8; p8->start='1'; p8->alp=' ';
p8->nstate=NULL; disp();
getch();
}
void disp()
{
p=p1; while(p!=NULL)
{
cout<<"\t"<<p->start<<"\t"<<p->alp; p=p->nstate;
}
}
int main()
{
p=new(node); int ch=1;
 
while(ch!=0)
{
cout<<"\nMenu"<<"\n1.a"<<"\n2.a/b"<<"\n3.ab"<<"\n4.a*"; cout<<"\n Enter the choice:";
cin>>ch; switch(ch)
{
case 1:
{
re1(); break;
}
case 2:
{
re2(); break;
}
case 3:
{
re3(); break;
}
case 4:
{
re4(); break;
}
default:
{
exit(0);
}
}
//clrscr();
}
}
