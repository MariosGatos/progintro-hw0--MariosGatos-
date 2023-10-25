#include<stdio.h>


main()
{	
	int num1,num2,i,max_length,max_number,numbers,length,new;
	
	printf("Enter 2 positive integers as the endpoints of an interval ");
	scanf("%d%d",&num1,&num2);
	if (num1<=0 || num2<=0)		//Check if number of input is invalid 
	{
		printf("\nI asked for positive integers ");
		printf("\nProgramm terminates here ");
		return 0;				//returns 0	
	}	
	
	numbers=0;					//total crowd of numbers the programm has checked  
	for(i=num1; i<=num2; i++)	//for each number of the interval  
	{
		numbers++;				//Increace numbers the programm has checked
		length=1; 				//sequence lenght for each number is checked.Each number has length at least 1
		printf("\nStep %d \t-> %d",length,i);
		
		new=i;					//Keep the number in a new variable
		while(new>1)				//While the number is not equal to 1 the sequence continue
		{
			if(new%2==1)			//If the number is odd 
			{
				new=new*3+1;
			}
			else				//If the number is even
			{
				new=new/2;
			}
			length++;			//increase the lenght of tthe sequence 
			printf("\nStep %d \t-> %d",length,new);
		}
			
		if (numbers==1)			//if only one number has been checked 
		{
			max_length=length;	//its length is the maximum
			max_number=i;		
		}
		else					//if more than one number has been checked 
		{
			if(length>max_length) // check if the current number has larger lenght than the
								 //  previous number  	
			{
				max_length=length;
				max_number=i;
			}	
		}	
	}
	printf("\nThe maximum length is %d of the number %d",max_length,max_number);	
}
