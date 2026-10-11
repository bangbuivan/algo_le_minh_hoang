#include<stdio.h>
int n;
int k;
int main(){

printf("Nhap vao so n: ");
scanf("%d",&n);
printf("Nhap vao so k: ");
scanf("%d",&k);

int sequence[k];
for (int i=0;i<k;i++){
  sequence[i]=0;
}

int check=k-1;
while (check>=0){
      check=k-1;
       while ( sequence[check] == n-1){
          check--;
       }
    if (check<0){
    break;}
    sequence[check]++;
  
  for (int i=check+1;i<k;i++){
        sequence[i]=0;
}
  
  
    for (int i=0;i<k;i++){
        printf("%d",sequence[i]);
}
printf("\n");
    
}

}
