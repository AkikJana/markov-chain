//making a markov chain
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class state{
private:
	char name[20];
	char p[20];
	int  num[20];
public:
	void set_name(char i){
		name=i;
	}
	void set_transition(char i,int j){
		p[j]=i;
		++num[j];
	}
};


class markov
{
private:
	char filename[20];

public:
	void read_input(){
		cout<<"enter the file name";
		cin.getline(filename,20);
	}
	
	
};
int main()
{
	//create objects of the state class
	state a[100];
	/* this is the main */
	fstream file;
	file.open("filename",ios::out);
	file<<"this is a sample text";
	file.close();
	file.open("filename",ios::in);
	int flag=0;
	int pos;
	int pos2;
	char n[20];
	char temp[20];
	while(file.eof()==0){
		file>>n;
		a[flag].name=n;
		pos=file.tellp();
		while(file.eof()==0)
		{
			/* select the next word after the selected word */
			file>>temp;
			pos2=file.tellp();
			if (temp==n)
			{
				
			}
			cout<<" "<<temp;

		}
		file.seekg(pos,ios::beg);
		cout<<"\n";

	}
	file.close();
	return 0;

}