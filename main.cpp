#include <iostream>
#include "List.h"
 int main(){
		List listok;
		listok += 10;
		listok +=5;
		listok +=6;
		listok +=7;
		listok +=7;
		List listok1;
		listok1+=4;
		listok1+=1;
		listok & listok1;
		std::cout<<listok1<<std::endl;
		return 0;
	 }
