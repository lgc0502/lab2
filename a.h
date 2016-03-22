#include<iostream>
#include<fstream>
using namespace std;

class count_BMI{
	private:
		float weight;
		float height;
		float result;
	public:
		void setweight(float weight);
		float getweight();
		void setheight(float height);
		float getheight();
		float count();
		string category();
};
