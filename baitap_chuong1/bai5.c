#include<stdio.h>
int n;
int k;
int main(){
printf("Nhap vao so n: ");
scanf("%d",&n);
for (int i = 0 ;i<n;i++){

k=i+1;
printf("Tap con %d phan tu: ",k);
printf("\n");

int arr[k];
for (int i=0;i<k;i++){
    arr[i]=i+1;
}

for (int i=0;i<k;i++){
    printf("%d",arr[i]);
}
printf("\n");

int check=k-1;
while (check >=0){
check=k-1;
  while (arr[check]  == n - k + check +1  ){
      check--;
  }
  
if (check<0){
break;
}
  arr[check]++;


  for (int i=check+1;i<k;i++){
          arr[i]=arr[i-1]+1;  
  }
for (int i=0;i<k;i++){
    printf("%d",arr[i]);
}
printf("\n");

}
}

}
