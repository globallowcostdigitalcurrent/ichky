#include <iostream>
#include <cstdio>
#include <conio.h>
#include <stdio.h>

using namespace std;


int main()
{
	
	int numbers;
	char names[20][20];
	char x[20];
	printf("Nhap so hoc sinh: ");
	scanf("%d", &numbers);
	cout<<numbers;
	for(int i=0; i<2; i++)
	{
		cout<<"Ten: "<<endl;
//		getline(cin,names[i]);
		scanf("%s", &names[i][20]);
	}
	printf("Ten hoc sinh theo thu tu lan luot: ");
	for(int i=0;i<2;i++)
	{
		cout<<"Xuat ten: "<<names[i][20]<<endl;
	}
}