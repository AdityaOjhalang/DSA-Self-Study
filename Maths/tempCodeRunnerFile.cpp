	while(isDivisible) {
		if(fact % 10 == 0){
			counter++;	
			fact = fact/10;
			

		}
		else {
		isDivisible = false;
		cout<< counter;
		}
		
	}