#include <stdio.h>

int main(void)
{
	FILE *inp;
	FILE *oup;
	int x;
	float n1, n2, n3;
	char c1, c2;
	char ary1[]= "correct", ary2[]="incorrect";
	
	inp = fopen("input32.txt", "r");
	oup = fopen("output32.txt", "w");
	
    while(1)
    {
        x = fscanf(inp, "%f %c %f %c %f", &n1, &c1, &n2, &c2, &n3);
        if(x==EOF) break;

	    if(c1 == '+')
	    {
		    if((n1+n2)==n3)
			    fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary1);
		    else
			    fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary2);		
		
	    }
	
	    else if(c1 =='-')
	    {
		    if((n1-n2)==n3)
			    fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary1);
	    	else
		    	fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary2);			
	    }
	
	    else if(c1 == '*')
	    {
		    if((n1*n2)==n3)
			    fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary1);
	    	else
		    	fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary2);				
	    }      
	
	    else if(c1 == '/')
	    {
		    if((n1/n2)==n3)
			    fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary1);
	    	else
		    	fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary2);			
	    }   
	
	    else if(c1 == '%')
	    {
		    if(((int)n1%(int)n2)==n3)
			    fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary1);
	    	else
		    	fprintf(oup, "%.2f %c %.2f %c %.2f %s\n", n1, c1, n2, c2, n3, ary2);			
    	}
		
    }	
	return 0;
}
