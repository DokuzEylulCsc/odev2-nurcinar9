#include <iostream>
#include <stdlib.h>
using namespace std;
   	int value(char roman)
{
	switch(roman)
	{
		case 'I':return 1;
		case 'V':return 5;
		case 'X':return 10;
		case 'L':return 50;
		case 'C':return 100;
		case 'D':return 500;
		case 'M':return 1000;	
	}
}
int main(){
 
 int sayi,secim;
 

  cout << endl << 
   "\t Onluk rakamdan roma rakamı karşılığı için => 1\n "
   "\t Roma rakamdan onluk karşılık için => 2\n "
   "\t Programı sonlandırmak için => 0\n";

     
  cout << "Islemi seciniz: ";
  cin >> secim;
  
   
   	switch(secim){
	
    while(secim!=0)
    {
    case 1: {
   	int sayi;
    cout<<"Sayiyi girin:";
    cin>>sayi;
    if(sayi>=3999 || sayi<1)
    {
    	cout<<"Yanlis sayi girdiniz";
	}
	else
	{
		while(sayi!=0)
	{
		while(sayi>999)
		{
			sayi=sayi-999;
			cout<<"M";
		}
	if(sayi>=900)
	{
		sayi=sayi-900;
		cout<<"CM";
	}	
	if(sayi>=500)
	{
		sayi=sayi-500;
		cout<<"D";
	}
	if(sayi>99)
	{
		sayi=sayi-100;
		cout<<"C";
	}
	if(sayi>=90)
	{
		sayi=sayi-90;
		cout<<"XC";
	}
	if(sayi>=50)/*Sayimiz 50den buyukse L kullanalim*/
	{
	sayi=sayi-50;
	cout<<"L";
	}
	if(sayi>=40)/*Yine ozel durum mantigi 40 = 50-10 XL*/
	{
	sayi=sayi-40;
	cout<<"XL";
	}
	while(sayi>9)
	{
	
	sayi=sayi-10;/*Sayi 10dan buyuk oldugu surece ekrana X yazariz*/
	
	cout<<"X";
	}
	if(sayi>=9)/*Yine 9 u IX seklinde yaziyoruz. 10-1*/
	{
	sayi=sayi-9;
	cout<<"IX";
	}
	if(sayi>=5)/*Sayi 5 den buyuk oldugu surece V yazariz*/
	{
	sayi=sayi-5;
	cout<<"V";
	}	
	if(sayi>=4)/*4=5-1 seklinde IV yazılır*/
	{
	sayi=sayi-4;
	cout<<"IV";
	}
	while(sayi>=0);/* Ve son olarak elimizde 1-2-3 gibi bir deger kalir ve bunlar icin de I kullanırız.*/
	{
	sayi=sayi-1;
	cout<<"I";
	}
	if(sayi==0)
	break;
	}	
	
	}
	
}


   case 2: {
   
	string roman;
	int i,j,n,ans=0,p=0;
    cout<<"Sayiyi girin:";
    cin>>roman;
    n=roman.length()-1;
    for(i=n;i>=0;i--)
    {
    	if(value(roman[i])>p)
    		ans=ans+value(roman[i]);
    	else
    		ans=ans-value(roman[i]);
    	p=value(roman[i]);
	}
   
    if(ans>=3999 || ans<1)
    {
    	cout<<"Yanlış sayi girdiniz";
	}
    else
    	cout<<ans;
    
    break;
    
}
default: {
    system("CLS");
    cout << "Yanlis bir secim yaptiniz!" ;
   }	
	}

}
 return(0);
}
