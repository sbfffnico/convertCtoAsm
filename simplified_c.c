// Nico Edrich
// simplified C assignment

#include <stdio.h>

int main()
{
	int i = 150, j = 100;
	
	top_for1:
	if (i < 0) goto end_for1;
		if (i <= 50) goto end_if1;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
			j++;
		end_if1:
		if (i != 10) goto end_if2;
			j--;
			j--;
			j--;
			goto endswitch;
		end_if2:
		if (i != 20) goto end_if3;
			j--;
			j--;
			j--;
			j--;
			j--;
			j--;
			goto endswitch;
		end_if3:
		j++;
		endswitch:
		i--;
		goto top_for1;
	end_for1:
	
	//printf("i=%d j=%d\n", i, j);
	
	top_while1:
	if (j <= 0) goto end_while1;
		//printf("i=%d j=%d\n", i, j);
		if (j >= 99) goto end_if4;
			j--;
		end_if4:
		//printf("i=%d j=%d\n", i, j);
		j--;
		j--;
		j--;
		j--;
		j--;
		j--;
		j--;
		j--;
		j--;
		j--;
		i = 0;
		top_for2:
		if (i >= 5) goto end_for2;
			j++;
			i++;
			goto top_for2;
		end_for2:
		goto top_while1;
	end_while1:
	
	printf("i=%d j=%d\n", i, j);
	
	return 0;
}