#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip.h>



void main(){
char nama[99],pddkn[10],sn,yes;
int tsn,gol,lk,th,hr;
long thr,jml;
float tpddkn,tlk,tt,tgol;
const gj_pkk=950000;

atas:
cout<<" Program Hitung Gaji Karyawan"<<endl<<endl;
cout<<" PT. Code Correct"<<endl;
cout<<"----------------------------------"<<endl<<endl;
cout<<"Nama Karyawan                : "<<setw(5);gets(nama);
cout<<"Status Nikah (Y/T)           : "<<setw(5);cin>>sn;
cout<<"Golongan (1/2/3)             : "<<setw(5);cin>>gol;
cout<<"Pendidikan (D3/S1/S2/S3)     : "<<setw(5);cin>>pddkn;
cout<<"Lama Kerja                   : "<<setw(5);cin>>lk;
cout<<"Jumlah Hari Masuk kerja      : "<<setw(5);cin>>hr;
//--------------------------------klrga--------------------------------------
if(sn=='y'|| sn=='Y'){
tsn=150000;
}
else if(sn=='t'|| sn=='T'){
tsn=0;
}
else{
clrscr();
cout<<" Maaf Kode Status Nikah Anda Salah!!!"<<endl<<endl;
goto bawah;
}
//--------------------------------jabatan------------------------------------
if(gol==1){
tgol=0.05*gj_pkk;
tt=10000*hr;
}
else if(gol==2){
tgol=0.1*gj_pkk;
tt=20000*hr;
}
else if(gol==3){
tgol=0.15*gj_pkk;
tt=25000*hr;
}
else{
clrscr();
cout<<" Maaf Kode Jabatan Anda Salah!!!"<<endl<<endl;
goto bawah;
}
//--------------------------------pddkn----------------------------------------
if(strcmp(pddkn,"d3")==0||strcmp(pddkn,"D3")==0){
tpddkn=0.05*gj_pkk;
}
else if(strcmp(pddkn,"s1")==0||strcmp(pddkn,"S1")==0){
tpddkn=0.075*gj_pkk;
}
else if(strcmp(pddkn,"s2")==0||strcmp(pddkn,"S2")==0){
tpddkn=0.1*gj_pkk;
}
else if(strcmp(pddkn,"s3")==0||strcmp(pddkn,"S3")==0){
tpddkn=0.125*gj_pkk;
}
else{
clrscr();
cout<<" Maaf Kode Pendidikan Anda Salah!!!"<<endl<<endl;
goto bawah;
}
//----------------------------------bonus------------------------------------
if(lk==0){
tlk=0;
}
else if(lk==1){
tlk=0.025*gj_pkk;
}
else if(lk==2){
tlk=0.05*gj_pkk;
}
else if(lk==3){
tlk=0.075*gj_pkk;
}
else if(lk>=4){
tlk=0.1*gj_pkk;
}
else {
clrscr();
cout<<" Maaf Kode Lama Kerja Anda Salah!!!"<<endl<<endl;
goto bawah;
}
//-------------------------------jmlhr----------------------------------------
if(hr>20){
thr = hr / 20 * gj_pkk + gj_pkk;
}
else if(hr<=20){
thr= gj_pkk;
}
else {
clrscr();
cout<<" Maaf Kode Lama Kerja Anda Salah!!!"<<endl<<endl;
goto bawah;
}
jml= thr+tgol+tpddkn+tt+tsn+tlk;
//------------------------------------------------------------------------------
cout<<endl<<endl;
cout<<"Karyawan yang bernama        : "<<setw(5)<<nama<<endl<<endl;
cout<<"Gaji Yang Diterima"<<endl<<endl;
cout<<"Gaji Pokok + Lembur          :Rp."<<setw(5)<<thr<<endl;
cout<<"Tunjangan Jabatan            :Rp."<<setw(5)<<tgol<<endl;
cout<<"Tunjangan Pendidikan         :Rp."<<setw(5)<<tpddkn<<endl;
cout<<"Tunjangan Transportasi       :Rp."<<setw(5)<<tt<<endl;
cout<<"Tunjangan Keluarga           :Rp."<<setw(5)<<tsn<<endl;
cout<<"Bonus                        :Rp."<<setw(5)<<tlk<<endl;
cout<<"-------------------------------------------- +"<<endl<<endl;
cout<<"Gaji Yang Diterima           :Rp."<<setw(5)<<jml<<endl<<endl;
bawah:
cout<<"Entry Data lagi (Y/T) ?";cin>>yes;
if(yes=='Y'||yes=='y'){
clrscr();
goto atas;
}
else if(yes=='N'||yes=='n'){
clrscr();
cout<<"\n THANK YOU";
}
else{
clrscr();
cout<<"\n THANK YOU";
}
getch();
}