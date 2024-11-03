#include <iostream>
#include "INIReader.h"
//INIReader rdi();
//INIReader consumed();
//std::string printhelp();
///std::string macronutrients[3];
// std::string minerals[5];
//void compareMacro();
//void compareMinerals();
INIReader rdi("rdi.ini");
INIReader consumed("consumed.ini");             
std::string macronutrients[3] = {"protien" ,"fat", "carb"};
std::string minerals[5]= {"iron", "sodium", "pottasium"};

void compareMacro(){
for (const std::string& nutrient : macronutrients) {
	                auto rdiValue = rdi.Get("Macronutrients", nutrient, 0);
			auto consumedValue = consumed.Get("Macronutrients", nutrient, 0);
			std::cout << nutrient << " RDI Value: " << rdiValue  << "consumed value:" << consumedValue << std::endl;

}
}

void compareMinerals(){

	for (const std::string& nutrient : minerals) {                                                          
		auto rdiValue = rdi.Get("Minerals", nutrient, 0);     
		auto consumedValue = consumed.Get("Minerals", nutrient, 0);                                                           std::cout << nutrient << " RDI Value: " << rdiValue  << "consumed value:"   << consumedValue << std::endl;
}
}

