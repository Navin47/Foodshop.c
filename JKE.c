#include <stdio.h>
int main (void)
{
 //declare variables
  int count = 1;
  int total = 0;
  int price = 0;
  int food_code;	
  int amount = 0;   	
  char type; 
  char ch='Y';
  int delivaryCost = 0;
  int totalamount=0;

 
  
    printf("__|___|___|___|___|___|___|___|___|____|___|__|___|___|___|___|___|___|__|_\n");
    printf("               			 HOT FOODS RESTURANT                    		  \n");
    printf("___________________________________________________________________________\n");
    printf(" FOODCODE \t       FOODNAME \t              \tFOODPRICE \n");
    printf("___________________________________________________________________________\n");
    printf("        1 \t       Chicken Kottu       \t     RS.420.00 \n");
    printf("        2 \t       Chicken Fried Rice  \t     RS.400.00 \n");
    printf("        3 \t       Chicken Biryani     \t     RS.450.00  \n");
    printf("        4 \t       Vegetable Kottu     \t     RS.380.00   \n");
    printf("        5 \t       Vegetable Fried Rice\t     RS.350.00 \n\n");
    printf("___________________________________________________________________________\n\n\n\n");
		
 
    printf ("HELLO! \t Welcome to the shop!!\n" );                                                                                         
 
 
  while ((count <= 20) &&  (ch=='Y')) //loop to run only 20 times and see if ueser want to input again
  {
      
      printf ("Enter The Food CODE ="); //input the food code by customer
      scanf("%d",&food_code);
       
	  printf ("Enter the Amount =");      //input the amount by customer
	  scanf ("%d",&amount);
	 
	 if(food_code== 1 ){                 
	      total = (amount * 420) ;	
	      }else if (food_code == 2 ){
      		total = (amount * 400) ;
	      }  else if (food_code == 3){
      		  total = (amount * 450) ;
       	  }    else if (food_code == 4){
  	            total =(amount * 380) ;
       	  }      else if (food_code == 5 ){
  	       	      total = (amount * 350) ;
  	       	       	      
           }
            else
         	{
	               printf ("Invalid Food Code, Try Again! \n"); //when customer enter a wrong code display this msg
             }
	          ++count;  //count=count+1
	          totalamount=totalamount+amount; //counting total amount 
	          
           	if (totalamount > 20) //loop to check if it run more than 20 times
           {
             printf("Sorry ,You can't buy foods because the shop has reached the maximum number of delivery today!!!!!!!! \n");
             totalamount=0; //amount needs to be '0' because amount is maore than 20
             price=0;  //price becomes '0' because amount is '0'
			 break;  // daily limit is reached
           }
           else
           {
            printf("Do you want do buy more food items !!< Please enter ONLY Capital Y or N >!! (Y/N)"); 
            //selecting if customer wants to buy more or not
            scanf("%*c%c",&ch);
               price = price + total; 
           }
           if(price <=500){    //checking that if adding a delivaryCost or not
           	delivaryCost = delivaryCost+100;
           }else{
           	delivaryCost = 0;
           }
  }
    
	        
            printf("****************HOT FOODS RESTURANT********************\n");
            printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf("Food cost: %d\n",price);
            printf("_______________________________________________________\n");
            printf("Delivery Cost: %d\n",delivaryCost);
            printf("_______________________________________________________\n");
            printf("Total Amount: %d\n",price+delivaryCost);
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf("-----------------Thank You! Come Again!-----------------\n");
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	       
  //final total printer as a bill
    
  return 0;

}
