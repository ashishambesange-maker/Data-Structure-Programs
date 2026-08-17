//Program for searching an Element in Array
main()
{

int i,Ele,arr[5]={10,20,30,40,50};
int Flag=0;
printf("Enter an element to search in Array");

scanf("%d",&Ele);

for(i=0; i<=4; i++)
{
 if (Ele==arr[i])
 {
  printf("Element Found=%d",Ele);
  exit(0);
 }
else
 {
 if(i==4) Flag=1;
 }

}//For Loop Ends
if(Flag==1) printf("Element not Found");
getch();

}
