#include<stdio.h>
int main()
{
	int password;
	int select,amount;
	int withdraw,receipt;
	int deposit;
	int balance=50000;
	
	printf("welcome to REPCO bank\n");
	while(1)
	{
    printf("enter your 4 digit password");
	scanf("%d",&password);
	
	if(password>=1000 && password<=9999)
	{
		printf(" correct password\n");
		break;	
	}
	else
	{
		printf("invalid password\n Re-enter \n");
	}
    }
    while(1)
    {
    printf("1.Withdraw\n2.Balance Enquiry\n3.Deposit\n4.Exit\n");
    printf("enter your choice");
    scanf("%d",&select);
    
    if(select==1)
    {
    while(1)	
    {
	
    	printf("enter your withdraw amount :");
    	scanf("%d",&withdraw);
    	if(withdraw>= 500 && withdraw<=10000)
    	{
    	if (withdraw > balance)
    	{
    		printf("insufficient balance.re-enter amount\n");
    		continue;
		}
    	
    		balance=balance-withdraw;
    		
    		printf("please collect your cash\n");
    		printf("remaining balance is%d\n",balance);
    		break;
    	}	
    	else 
    	{
    		printf("invalid amount.enter between 500 and 10000\n");
		}
    		
    		printf("do you want to collect your receipt?\n");
    		printf("1.yes\n2.no\n");
    		printf("enter your choice");
    		scanf("%d",&receipt);
    		
    		if(receipt==1)
    		{
    			printf("collect your receipt.thank you\n");
			}
			else
			{
				printf("thank you\n");
			}
    		break;
      }
   }
	else if (select==2)
	{
		printf("your updated balance is:%d\n",balance);
		printf("collect your receipt\n");
	}
	else if (select==3)
	{
			printf("enter your deposit amount");
         	scanf("%d",&deposit);
    		balance=balance+deposit;
    		printf("amount deposit successfully\n");
    		printf("your current balance is%d\n",balance);
	}
	
	else if (select==4)
	{
		printf("thank you\n");
		
	}
	
   }
    return 0;
}

   
