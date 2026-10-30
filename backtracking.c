#include<stdio.h>
int n,check;
int main(){
check=0;
printf("Do dai day nhi phan : ");
scanf("%d",&n);
int arr[n];
arr[0]=-1;


while (check>=0){
  arr[check]++;
  
  if(arr[check]>1){
    check--;
  }
  else if (check==n-1){
    for (int k=0;k<n;k++)
    {
      printf("%d",arr[k]);
    }
    printf("\n");
  }
  else{
    check++;
    arr[check]=-1;
  }
  
}

}
