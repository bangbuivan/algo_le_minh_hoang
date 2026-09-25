#include<stdio.h>
int n;
int main(){
printf("What is your sequence legth: ");
scanf("%d",&n);
int sequence[n];

for (int i=0;i<n;i++){
sequence[i]=0;
}

int check=n-1;
int stt=0;
printf("Sequence %d is : ", stt);
  for (int i=0;i<n;i++){
  printf("%d",sequence[i]);
}
printf("\n");
while (check>=0){
while (sequence[check] ==1){
    check-=1;
  }
if (sequence[check]==0){ 
  sequence[check]=1;
  for (int i=check+1;i<n;i++){
    sequence[i]=0;
  }
  stt+=1;
  printf("Sequence %d is : ", stt);
  for (int i=0;i<n;i++){
  printf("%d",sequence[i]);
}
  check=n-1;
}
printf("\n");
}

}
