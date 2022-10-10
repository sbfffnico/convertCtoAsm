#include <stdio.h>

int main() {
	int i = 150, j = 100;
	
	for( ; i>=0; i--) 
	{
		if(i > 50) 
		{
			j += 20;
		}
		switch(i) 
		{
			case 10:
				j -= 3;
				break;
			case 20:
				j -= 6;
				break;
			default:
				j++;
		}
	}
	
	//printf("i=%d j=%d\n", i, j);

	while(j > 0) 
	{
		//printf("i=%d j=%d\n", i, j);
		if(j < 99) 
		{
			j--;
		}
		//printf("i=%d j=%d\n", i, j);
		j -= 10;
		for(i=0; i<5; i++) 
		{
			j++;
		}
	}
	
	printf("i=%d j=%d\n", i, j);
	
	return 0;
}