#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;
void countwords()
{
	ifstream fin;
	fin.open("out.txt");
	char word[30];
	int nr=0;
	while(!fin.eof())
	{
		fin>>word;
		nr++;
	}
	cout<<"Nr cuvinte : "<<nr;
	fin.close();
}


 int main(){
     countwords;
 }
