#include"a.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	float H;
	float W;
	float value;
	string S;
	count_BMI B;
	while(inFile>>H>>W){
		if(H==0&&W==0)
			return 0;
		B.setweight(W);
		B.setheight(H);
		value=B.count();
		S=B.category();
		outFile<<value<<"\t"<<S<<endl;
	}
	return 0;
}
