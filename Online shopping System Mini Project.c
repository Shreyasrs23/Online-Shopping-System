#include<stdio.h>
#include<string.h>
void main()
{
static int totalCost;
int i,j,choice,c=1,a[9],cost[9];
for(i=0;i<9;i++)
 a[i]=0;
char str[100];
char items[9][100]={"levi's jeans",
"H and M jeans",
"Leecooper jeans",
"Adidas shoe",
"Nike shoe",
"spark shoe",
"puma shirt",
"adidas shirt",
"nike shirt" 
};
printf("Please Enter Your Name\n");
gets(str);
printf("Hello %s, Welcome to our Online Shopping.\n",str);
do
{
 //C is 1 by default
 if(c==1){
 printf("Enter\n1 - jeans \n2 - Shoes\n3 - shirt \nAny other number to exit\n");
 scanf("%d",&choice);
 switch(choice)
{
 case 1:
 {
 printf("\n \n ");
 int accessoriesChoice;
 printf("Enter\n1 - levi's jeans - Rs.355\n2 - H and M jeans- Rs.500\n3 - Leecooper jeans -
Rs.550\nAny other number to exit\n");
 scanf("%d",&accessoriesChoice);
 cost[0]=355;
 cost[1]=500;
 cost[2]=550;
 switch(accessoriesChoice)
 {
 case 1:
 {
 int num;
 printf("You chose levi's jeans with Rs.355.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[0]++;
 totalCost+=355;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 case 2:
 {
 int num;
 printf("You chose H and M jeans with Rs.500.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[1]++;
 totalCost+=500;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 case 3:
 {
 int num;
 printf("You chose Leecooper jeans with Rs.550.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[2]++;
 totalCost+=550;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 default:{
 printf("Exit from jeans\n");
 break;
 }
 }
 break;
 }
 case 2:
 {
 printf("\n \n ");
 int shoesChoice;
 printf("Enter\n1 -Adidas shoe - Rs.3550\n2 -Nike shoe - Rs.5000\n3 -spark shoe - Rs.2800\nAny 
other number to exit\n");
 scanf("%d",&shoesChoice);
 cost[3]=3550;
 cost[4]=5000;
 cost[5]=2800;
 switch(shoesChoice)
 {
 case 1:
 {
 int num;
 printf("You chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[3]++;
 totalCost+=3550;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 case 2:
 {
 int num;
 printf("You chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[4]++;
 totalCost+=5000;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 case 3:
 {
 int num;
 printf("You chose spark shoe for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[5]++;
 totalCost+=2800;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 default:{
 printf("Exit from Shoes Category\n");
 break;
 }
 }
 break;
 }
 case 3:
 {
 printf("\n \n ");
 int mobileChoice;
 printf("Enter\n1 - puma shirt - Rs.1100\n2 -adidas shirt - Rs.986\n3 -nike shirt - Rs.1280\nAny 
other number to exit\n");
 scanf("%d",&mobileChoice);
 cost[6]=1100;
 cost[7]=986;
 cost[8]=1280;
 switch(mobileChoice)
 {
 case 1:
 {
 int num;
 printf("You chose to buy puma shirt for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[6]++;
 totalCost+=1100;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 case 2:
 {
 int num;
 printf("You chose to buy adidas shirt for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[7]++;
 totalCost+=986;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 case 3:
 {
 int num;
 printf("You chose to buy nike shirt for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any 
number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[8]++;
 totalCost+=1280;
 }
 printf("Your Cost in Cart is %d\n",totalCost);
 break;
 }
 default:{
 printf("Exit from Shirt Category\n");
 break;
 }
 }
 break;
 }
 default:
 {
 printf("Enter Valid Categories Choice\n");
 break;
 }
 }
 printf(" \n \n ***** \n \n ");
 printf("%s's cart\n",str);
 printf("Id\tItems\t\tQuantity\t\t\tCost\n");
 for(i=0;i<9;i++)
 {
 if(a[i]!=0)
 {
 printf("%d\t%s\t\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf("\n \n Total Cost\t\t\t\t\t%d\n",totalCost);
 printf("\n ****** \n ");
 printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change 
Quantity \nAny other number to Exit\n");
 scanf("%d",&c);
}
 if(c==2)
 {
 printf("\n \n ");
 int id;
 printf("Enter id to delete item\n");
 scanf("%d",&id);
 if(id < 9&&id >= 0){
 totalCost=totalCost-(cost[id]*a[id]);
 a[id]=0;
 }
 else{
 printf("Enter Valid id\n");
 }
 printf(" \n \n ***** \n \n ");
 printf("Revised Items \n");
 printf("Id\tItems\t\tQuantity\t\t\tCost\n");
 for(i=0;i<9;i++)
 {
 if(a[i]!=0)
 {
 printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf("\n Total Cost\t\t\t\t\t%d\n",totalCost);
 printf("\n ****** \n ");
 printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change 
Quantity \nAny other number to Exit\n");
 scanf("%d",&c);
 }
 if(c==3)
 {
 int id,quantity;
 printf("\n \n ");
 printf("Enter id to Change quantity of an item\n");
 scanf("%d",&id);
 printf("Enter quantity to be changed of an item\n");
 scanf("%d",&quantity);
 if(id<9&&id>=0){
 if(quantity>0 && a[id]>0)
 { 
 if(quantity<a[id]) 
 {
 int dec=a[id]-quantity;
 a[id]=quantity;
 totalCost=totalCost-(cost[id]*dec); 
 }
 if(quantity>a[id]) 
 {
 int inc=quantity-a[id];
 a[id]=quantity;
 totalCost=totalCost+(cost[id]*inc); 
 }
 if(quantity==a[id]) 
 {
 a[id]=quantity;
 totalCost=totalCost+0; 
 } 
 }
 else{
 printf("Item has no Quantity.Please Try again\n");
 }
 }
 else{
 printf("Enter Valid id\n");
 }
 printf(" \n \n ***** \n \n ");
 printf("Revised Items \n");
 printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
 for(i=0;i<9;i++)
 {
 if(a[i]!=0)
 {
 printf("%d\t%s\t\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf("\n Total Cost\t\t\t\t\t%d\n",totalCost);
 printf("\n ****** \n ");
 printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change 
Quantity \nAny other number to Exit\n");
 scanf("%d",&c);
 }
}while(c==1 || c==2 ||c==3);
if (totalCost > 0 ){
int payment ;
jump : 
printf("select payment \n ") ;
printf("1.cash on delivery \n 2. net banking \n 3.online payment \n 4. upi payment ");
scanf("%d",&payment);
if ( payment == 1 ) { 
 char add[100];
 printf("100 rs for shipping \n ");
 printf("total Cost : %d \n " , totalCost+100);
 printf("enter your address\n ") ;
 scanf("%s",&add);
 printf("item will be delivered to given address \n ");
 printf("thank you \n ");
}
else if (payment == 2 ) { 
 printf("****\n");
 printf("redirecting to payment \n ");
 printf("enter your account number \n ");
 char acc[100];
 scanf("%s",&acc);
 printf("enter IFSC code \n ");
 char ifsc[10];
 scanf("%s",&ifsc);
 printf("thank you\n your payment has be done \n");
}
else if ( payment == 3 ) { 
 printf("****\n");
 printf("select card to proceed to payment \n 1.debit \n 2.credit \n ");
 int online;
 int card_number;
 scanf("%d",&online);
 if ( online == 1 ){ 
 printf("enter card number \n ");
 scanf("%d",&card_number);
 printf("enter your debit card password \n ");
 scanf("%d",&card_number);
 printf("thank you your payment is done \n ");
 }
 else { 
 printf("enter card number \n ");
 scanf("%d",&card_number);
 printf("enter your credit card password \n ");
 scanf("%d",&card_number);
 printf("thank you your payment is done \n ");
 }
}
 else if (payment == 4){ 
 printf("*****\n");
 printf("pay to : onlineShop@ybl through your third party app \n ");
 printf("thank you ");
 }
 else {
 printf("invalid input choose correct option \n ");
 goto jump;
 }
}
else 
 printf("your cart has no item \n ");
printf("Your Final Cost is %d\n",totalCost);
printf("Thanks %s for Choosing Us and Visit us again.\n",str);
printf("\n \n **** \n");
printf("developed by \n ");
printf("jaswanth reddy \n");
printf("shreyas r s \n ");
printf("sonika \n ");
printf("shreyas \n ");
printf("taher \n");
}
