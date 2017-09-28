 #include<stdio.h>
 #include<time.h>

void quicksort(int [10],int,int);

int main(){

	int size;
	int i=0;
	printf("Enter \n");
	scanf("%d",&size);
	int x[size];
	srand((unsigned)time(0));
	for(i=0;i<size;i++){
		x[i]=(rand()%size)+1;
	}
  

   printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
    printf("%d, ",x[i]);
	printf("\n-----------------------------------------------------\n");
	clock_t begin = clock();
  quicksort(x,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n---------------------------\nRunning time is %lf",time_spent);
  /*Binary Search starts*/
  int  first, last, middle,search;
  	 printf("\n!!Binary Search started!!\n");
     printf("\nEnter value to find\n");
   scanf("%d", &search);
 begin = clock();
   first = 0;
   last = size - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (x[middle] < search)
         first = middle + 1;    
      else if (x[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
        end = clock();
   time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n---------------------------\n Binary search Running time is %lf",time_spent);
 
  return 0;
}

void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
