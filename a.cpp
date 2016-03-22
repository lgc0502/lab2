#include"a.h"
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

void count_BMI::setweight(float w){
	weight=w;
}
void count_BMI::setheight(float h){
	height=h;
}
float count_BMI::getweight(){
	return weight;

}
float count_BMI::getheight(){
	
	return height;
}
float count_BMI::count(){
	count_BMI::getheight();
	count_BMI::getweight();
	result=(10000*weight)/(height*height);
	return result;
} 
string count_BMI::category(){
	string X;
      if(count_BMI::count() < 15)
          X = "Very severely underweight";
      if(15 <= count_BMI::count() && count_BMI::count() < 16)
          X = "Severely underweight";
      if(16 <= count_BMI::count() && count_BMI::count() < 18.5)
          X = "Underweight";
      if(18.5 <= count_BMI::count() && count_BMI::count() < 25)
          X = "Normal";
      if(25 <= count_BMI::count() && count_BMI::count() < 30)
          X = "Overweight";
      if(30 <= count_BMI::count() && count_BMI::count() < 35)
          X = "Obese Class I (Moderately obese)";
      if(35 <= count_BMI::count() && count_BMI::count() < 40)
          X = "Obese Class II (Severely obese)";
      if(40 <= count_BMI::count())
          X = "Obese Class III (Very severely obese)";
      return X;
 }

