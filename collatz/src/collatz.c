# include<stdio.h>
# include<stdlib.h>

int main(int argc, char **argv)
{	
    long long int num1, num2, i, new;
	int max_length, length;

    if (argc != 3)				
    {
        printf("Wrong Inputs: Correct is ./collatz [num1] [num2]\n");
        return 1;
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("0\n");
        return 1;				
    }

    if (num1 <= -100000000 || num2 > 100000000)
    {
        printf("Out Of Bounds\n");
        return 1;	
    }
					
    max_length = 0;  // Initialize max_length to 0 before the loop
    for(i = num1; i <= num2; i++)	
    {				
        length = 1; 

        new = i;	
        while(new > 1)				
        {
            if(new % 2 != 0)
            {
                new = new * 3 + 1;
            }
            else
            {
                new = new / 2;
            }
            length++;			
        }

        if (length > max_length) 
        {
            max_length = length;
        }
    }
    printf("%d\n", max_length);
}
