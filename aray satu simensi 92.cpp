#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
main()
{

int i;
char nama[5][20];
float nilai1[5];
float nilai2[5];
float hasil[5];
clrscr();

   for(i=1;i<=2;i++)
   {
     cout<<"data ke- "<<i<<endl;
     cout<<"Nama siswa   :";gets(nama[i]);
     cout<<"Nilai MidTes :";cin>>nilai1[i];
     cout<<"Nilai Final  :";cin>>nilai2[i];
     hasil[i]=(nilai1[i]*0.40)+(nilai2[i]*0.60);
     cout<<endl;
   }

   cout<<"-----------------------------------------"<<endl;
   cout<<"\tMid Tes Final"<<endl;
   cout<<"No Nama siswa Nilai1 Nilai2";
   cout<<" Hasil";
   cout<<" Ujian"<<endl;
   cout<<"-----------------------------------------"<<endl;

   for(i=1;i<=2;i++)
   {
   cout<<setiosflags(ios::left)<<setw(4)<<i;
   cout<<setiosflags(ios::left)<<setw(12)<<nama[i];
   cout<<setiosflags(ios::left)<<setw(8)<<nilai1[i];
   cout<<setiosflags(ios::left)<<setw(9)<<nilai2[i];
   cout<<setiosflags(ios::left)<<setw(10)<<hasil[i]<<endl;
   }
   cout<<"-----------------------------------------"<<endl;
    getch();
    }
