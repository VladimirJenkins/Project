#include <iostream>	
int main(){
	int ml ,solan,mlcon,mlconn;
	std::cout<< "the tich can do la"<<std::endl;
	std::cin>>ml;
	if(ml > 1){
		if( ml % 5 == 1){
			solan = (ml / 5) - 1;
		}
		else{
			solan = ml / 5;
		}
		if(solan>0){
			std::cout<<"So lan do nuoc 5ml "<<solan<<std::endl;
		}
		mlcon = ml - ( 5 * solan );
	if( mlcon == 0 ){
		return 0;
	}
	if( mlcon % 3 == -1 || mlcon % 3 == 1 || mlcon % 3 == 2){
		mlconn = mlcon/2;
		std::cout<<"so lan do 2 "<< mlconn<<std::endl;
	}
	else{
		mlconn = mlcon / 3;
		std::cout<<"So lan do voi 3 "<< mlconn <<std::endl;
	}
	}
	else{
		std::cout<<"K dc";
	}
	return 0;
}
