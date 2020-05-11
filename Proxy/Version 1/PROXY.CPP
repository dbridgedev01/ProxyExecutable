#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
void Dp()
{
int i;
clrscr();
int x,y;
randomize();
for(i=0;i<500;++i)
{
x=random(75);
y=random(25);
gotoxy(x,y);
delay(1);
cout<<".";
}
clrscr();
gotoxy(34,13);
cout<<"PROCESSING";
gotoxy(32,14);
for(i=0;i<14;++i) {
delay(50);
cout<<"*";
}
gotoxy(32,15);
cout<<"|";
gotoxy(45,15);
cout<<"|";
gotoxy(32,16);
for(i=0;i<14;++i) {
delay(50);
cout<<"*";
}
gotoxy(33,15);
for(i=0;i<12;++i) {
delay(100);
cout<<"-";
}
delay(500);
char yu[40];
gotoxy(27,13);
strcpy(yu,"PRESS ANY KEY TO CONTINUE : ");
for(i=0;i<28;++i)
{
delay(100);
cout<<yu[i];
}
getch();
clrscr();
}
class Tdata
{
char Tname[25];
char Tsubject[15];
int Tno;
public:
void Enter()
{
cout<<"Enter STAFF ID : ";
cin>>Tno;
cout<<"Enter STAFF Name : ";
gets(Tname);
cout<<"Enter Designation/Subject : ";
gets(Tsubject);
}
void Display()
{
cout<<"STAFF ID : "<<Tno<<"\tSTAFF NAME : "<<Tname<<"\tSUBJECT : "<<Tsubject<<endl;
}
}T1;
void main()
{
clrscr();
textmode(C80);
textbackground(WHITE);
textcolor(BLUE);
clrscr();
Dp();
int AK[5][9]={1,1,1,1,0,1,1,1,0,1,1,0,1,0,0,1,1,0,1,1,1,0,1,0,1,1,0,1,1,1,1,1,0,0,0,0,0,1,0,1,1,1,0,0,1},
SH[5][9]={0,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,0,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,0,0,1,0,1,1,1,1,0,0},
MI[5][9]={1,1,1,1,0,1,1,0,0,1,1,1,1,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,0,1,1},
UJ[5][9]={0,1,0,1,1,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,0,0,1,1,1,1,1,0,1},
SU[5][9]={1,0,1,1,1,0,1,1,0,1,1,1,0,1,0,1,0,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,0},
SA[5][9]={1,1,1,0,1,0,1,1,0,1,0,0,1,1,1,1,0,0,0,0,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1,1},
MIN[5][9]={1,1,1,0,1,0,1,0,0,1,1,1,1,0,1,0,1,0,1,0,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,0,1,0,1,1,0,1,1,1,0},
BI[5][9]={1,0,1,1,1,0,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1,0,1,0,1,0,1,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,1,0},
SHA[5][9]={1,1,0,1,1,1,0,1,0,1,1,1,1,0,0,1,0,0,1,1,1,0,1,1,0,1,0,1,1,1,0,1,0,1,0,0,1,1,0,1,0,1,1,1,1},
AMB[5][9]={1,0,1,1,0,1,0,1,0,1,0,0,1,1,0,1,1,0,1,0,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1},
AN[5][9]={1,0,1,0,1,1,0,1,0,0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,0,0,1,0,1,0,1,1,0,1,0,1,0,1,1,0,0,1,1,1},
MR[5][9]={1,1,0,1,1,0,0,1,0,0,0,1,1,0,1,1,0,0,1,1,1,0,0,1,1,0,0,1,1,0,1,0,1,1,1,0,1,1,1,0,1,0,0,1,1},
SAV[5][9]={0,1,1,1,1,1,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,1,1,0,1,1,0,0,1,0,1,1,0,1,0,0,1,1,1,0,1,1},
SAR[5][9]={1,1,1,0,1,0,0,0,0,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,1,1},
BH[5][9]={1,1,0,1,1,1,1,0,0,1,1,1,1,0,0,1,1,0,1,0,1,1,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,1,0},
SR[5][9]={1,1,0,1,1,0,1,1,0,1,1,1,1,0,1,1,1,0,1,1,0,1,0,0,0,1,0,1,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1},
JA[5][9]={1,1,1,0,1,1,1,0,0,1,1,0,1,1,1,0,1,0,1,1,0,1,1,0,0,1,0,1,1,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1},
LI[5][9]={1,0,1,1,0,0,1,0,0,1,1,1,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,1,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,1,1},
GE[5][9]={1,1,1,1,0,1,1,0,0,1,1,1,1,0,1,1,0,0,1,0,1,1,1,0,1,1,0,1,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1},
KO[5][9]={0,1,1,1,1,1,0,1,0,1,1,0,0,1,1,0,1,0,0,1,1,1,0,1,0,1,0,1,1,0,1,0,1,1,0,0,1,1,1,1,0,1,1,0,1},
AJ[5][9]={1,1,1,0,1,1,1,0,0,0,1,1,1,1,1,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,1,1,1,0,0,1,1,1,1,0,1,0,1,0},
JO[5][9]={0,0,1,1,1,0,1,1,0,0,0,0,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,0,0,1,1,1,0,1,1,0,0,1,1,1,1,0,1,1,1};
int Scode,i,j,dayn;
char day[9],Sname[20];
char che='y';
while(che=='y'||che=='Y')
{
cout<<"\t\t\t\tMAIN MENU\n\t";
cout<<"\t\t      *************";
cout<<"\n\t\t\t     1.STAFF RECORD\n\t\t\t     2.SET PROXY\n\t\t\t     3.VIEW TIMETABLE\n\t\t\t     4.EXIT";
cout<<"\nEnter Your Choice : ";
int och;
cin>>och;
switch(och)
{
case 2 : clrscr();
		cout<<"ENTER STAFF NAME FOLLOWED BY \n(MAT,PHY,CHE,BIO,ENG,COM/IP,ACC,BUS,ECO,STA,MAL,PE)  : ";
gets(Sname);
if(strcmpi("AMBILIPHY",Sname)==0)
Scode=1;
if(strcmpi("SHREYAPHY",Sname)==0)
Scode=2;
if(strcmpi("MILIPHY",Sname)==0)
Scode=3;
if(strcmpi("UJITHRACHE",Sname)==0)
Scode=4;
if(strcmpi("SUNITHACHE",Sname)==0)
Scode=5;
if(strcmpi("SAVITHACHE",Sname)==0)
Scode=6;
if(strcmpi("MINIMAT",Sname)==0)
Scode=7;
if(strcmpi("BINDUMAT",Sname)==0)
Scode=8;
if(strcmpi("SHALYMAT",Sname)==0)
Scode=9;
if(strcmpi("AMBILIENG",Sname)==0)
Scode=10;
if(strcmpi("ANJUENG",Sname)==0)
Scode=11;
if(strcmpi("MRUDULABIO",Sname)==0)
Scode=12;
if(strcmpi("SAVITHABIO",Sname)==0)
Scode=13;
if((strcmpi("SARITHACOM",Sname)==0)||(strcmpi("SARITHAIP",Sname)==0))
Scode=14;
if(strcmpi("BHAGYALAKSHMICOM",Sname)==0)
Scode=15;
if(strcmpi("SREEJACOM",Sname)==0)
Scode=16;
if(strcmpi("JAYANTHIACC",Sname)==0)
Scode=17;
if(strcmpi("LIJIBUS",Sname)==0)
Scode=18;
if(strcmpi("GEETHAECO",Sname)==0)
Scode=19;
if(strcmpi("KOMALAVALLYSTA",Sname)==0)
Scode=20;
if(strcmpi("AJITHAMAL",Sname)==0)
Scode=21;
if(strcmpi("JOYPE",Sname)==0)
Scode=22;
cout<<"Enter Day : ";
gets(day);
if(strcmpi("Monday",day)==0)
dayn=0;
if(strcmpi("Tuesday",day)==0)
dayn=1;
if(strcmpi("Wednesday",day)==0)
dayn=2;
if(strcmpi("Thursday",day)==0)
dayn=3;
if(strcmpi("Friday",day)==0)
dayn=4;
switch(Scode)
	{
	case 1:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(AK[i][j]==1)
					{
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 2:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SH[i][j]==1)
					{
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 3:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(MI[i][j]==1)
					{
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 4:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(UJ[i][j]==1)
					{
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 5:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SU[i][j]==1)
					{
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 6:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SA[i][j]==1)
					{
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 7:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(MIN[i][j]==1)
					{
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 8:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(BI[i][j]==1)
					{
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A. : PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 9:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SHA[i][j]==1)
					{	
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 10:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(AMB[i][j]==1)
					{	
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 11:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(AN[i][j]==1)
					{
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 12:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(MR[i][j]==1)
					{
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;	
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 13:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SAV[i][j]==1)
					{
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 14:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SAR[i][j]==1)
					{	
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 15:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(BH[i][j]==1)
					{	
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 16:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(SR[i][j]==1)
					{	
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 17:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(JA[i][j]==1)
					{	
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 18:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(LI[i][j]==1)
					{	
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 19:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(GE[i][j]==1)
					{	
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 20:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(KO[i][j]==1)
					{	
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 21:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(AJ[i][j]==1)
					{	
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						if(JO[i][j]==0)
						cout<<"STAFF AVAILABLE : JOY P.A. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
	case 22:	for(i=dayn;i<dayn+1;++i)
			{
				for(j=0;j<9;++j)
				{
				if(JO[i][j]==1)
					{
						if(AN[i][j]==0)
						cout<<"STAFF AVAILABLE : ANJU P. : PERIOD : "<<j+1<<endl;
						if(BI[i][j]==0)
						cout<<"STAFF AVAILABLE : BINDU P.V. : PERIOD : "<<j+1<<endl;
						if(SHA[i][j]==0)
						cout<<"STAFF AVAILABLE : SHALY K.A.  PERIOD : "<<j+1<<endl;
						if(MIN[i][j]==0)
						cout<<"STAFF AVAILABLE : MINI K.V. : PERIOD : "<<j+1<<endl;
						if(SA[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA V.NAIR : PERIOD : "<<j+1<<endl;
						if(UJ[i][j]==0)
						cout<<"STAFF AVAILABLE : UJITHRA SREEKANTH : PERIOD : "<<j+1<<endl;
						if(SU[i][j]==0)
						cout<<"STAFF AVAILABLE : SUNITHA D. : PERIOD : "<<j+1<<endl;
						if(AK[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI KRISHNAN : PERIOD : "<<j+1<<endl;
						if(SH[i][j]==0)
						cout<<"STAFF AVAILABLE : SHREYA M.S. : PERIOD : "<<j+1<<endl;
						if(MI[i][j]==0)
						cout<<"STAFF AVAILABLE : MILI SREENIVASAN : PERIOD : "<<j+1<<endl;
						if(MR[i][j]==0)
						cout<<"STAFF AVAILABLE : MRUDULA P.V. : PERIOD : "<<j+1<<endl;
						if(SAV[i][j]==0)
						cout<<"STAFF AVAILABLE : SAVITHA M. : PERIOD : "<<j+1<<endl;
						if(SAR[i][j]==0)
						cout<<"STAFF AVAILABLE : SARITHA HARIDAS : PERIOD : "<<j+1<<endl;
						if(BH[i][j]==0)
						cout<<"STAFF AVAILABLE : BHAGYALAKSHMI M. : PERIOD : "<<j+1<<endl;
						if(SR[i][j]==0)
						cout<<"STAFF AVAILABLE : SREEJA C.D. : PERIOD : "<<j+1<<endl;
						if(JA[i][j]==0)
						cout<<"STAFF AVAILABLE : JAYANTHI M. : PERIOD : "<<j+1<<endl;
						if(LI[i][j]==0)
						cout<<"STAFF AVAILABLE : LIJI K.S. : PERIOD : "<<j+1<<endl;
						if(GE[i][j]==0)
						cout<<"STAFF AVAILABLE : GEETHA A.S. : PERIOD : "<<j+1<<endl;
						if(KO[i][j]==0)
						cout<<"STAFF AVAILABLE : KOMALAVALLY K.R. : PERIOD : "<<j+1<<endl;
						if(AJ[i][j]==0)
						cout<<"STAFF AVAILABLE : AJITHA K.S. : PERIOD : "<<j+1<<endl;
						if(AMB[i][j]==0)
						cout<<"STAFF AVAILABLE : AMBILI N.G. : PERIOD : "<<j+1<<endl;
						cout<<"PRESS ANY KEY FOR NEXT PERIOD : ";
						getch();
						clrscr();
						}}}
						break;
						}
						break;
		case 1: clrscr();
fstream fil;
fil.open("DATA.dat",ios::in|ios::app|ios::binary);
int op; char ch='y';
/*clrscr();design stuff
gotoxy(12,12);
*/
while(ch=='y'||ch=='Y')
{
cout<<"1.Record STAFF Details\n2.Display STAFF Details\n3.Exit From Menu"<<endl;
cout<<"Enter Your Choice : ";
cin>>op;
clrscr();
switch(op)
{
	case 1: T1.Enter();
		fil.write((char*)&T1,sizeof(T1));
		cout<<"Record Entered"<<endl;
		break;
	case 2: clrscr();
		cout<<"STAFF DETAILS : \n\n\n";
		   /*	if(!fil)
		{
		cout<<"File Not Found : ";*/
		fil.seekg(0);
		while(fil.read((char*)&T1,sizeof(T1)))
		{
		 T1.Display();
		}
		cout<<"\n\nPRESS ANY KEY TO CONTINUE";
		getch();
		clrscr();
		break;
	case 3: cout<<"Exit";
		//delay();
		ch='n';
		break;
	//default :
	}
	if(ch=='y'||ch=='Y')
	{
	cout<<"MENU?(y/n) : ";
	cin>>ch;
	}
	}
	 break;
	case 3 : break;
	case 4 : exit(0);
	//default
	}
clrscr();
cout<<"CONTINUE(y/n) : ";
cin>>che;
}
getch();
}





