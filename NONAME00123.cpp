#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
float a,b,c,d,e;
cout <<" Masukan Absen:";cin>>a;
cout <<" Masukan Tugas:";cin>>b;
cout <<" Masukan UTS:";cin>>c;
cout <<" Masukan UAS:";cin>>d;
a=a*0.2;
b=b*0.25;
c=c*0.25;
d=d*0.3;
cout <<"Nilai Absen:"<<a<<endl;
cout <<"Nilai Tugas:"<<b<<endl;
cout <<"Nilai UTS:"<<c<<endl;
cout <<"Nilai UAS:"<<d<<endl;

e=a+b+c+d;

cout <<"============================\n";
cout <<"     Hasil Akhir            \n";
cout <<"============================\n";
cout <<"\n Hasil Akhir					:"<<e<<ends;
getch();
}
