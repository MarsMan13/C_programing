#include <stdio.h>

int main(void)
{
	char ary[6];
	float n1, n2;
	FILE *inp;
	FILE *outp;
	int x;
	int count= 0;
	float tot=0, avg;
	
	inp = fopen("student.txt", "r");
	
	while(1)
	{
		x = fscanf(inp, "%s %f %f", ary, &n1, &n2);
		if(x == EOF) break;
		tot += n1;
		tot += n2;
		count += 1;
	}
	avg = tot/(count*2);	
	fclose(inp);
	
	inp = fopen("student.txt", "r");
	outp = fopen("output33.txt", "w");
	
	fprintf(outp, "%-10s %-7s %-4s\n", "student", "average", "grade");
	while(1)
	{
		x = fscanf(inp, "%s %f %f", ary, &n1, &n2);
		if(x == EOF) break;
		if(((n1+n2)/2) >= avg)
			fprintf(outp,"%-10s %-7.2f %-4c\n", ary, (n1+n2)/2, 'p');
		else
			fprintf(outp,"%-10s %-7.2f %-4c\n", ary, (n1+n2)/2, 'f');
		
	}
	
	fclose(inp);
	fclose(outp);
	
	return 0;
}
