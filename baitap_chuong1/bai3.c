#include<stdio.h>
int n;
int main(){
printf("Do dai day so cua ban n: ");
scanf("%d",&n);

int arr[n];
for (int i=0;i<n;i++){
      arr[i]=0;
  }


int check =n-1;

while (check>=0){
  check=n-1;

while (arr[check]==1){
      check--;
  }
  if (check<0){
  break;
  }
  
  arr[check]++;
  for (int i=check+1;i<n;i++){
          arr[i]=0;
  }
int dem=0;
for (int i=0;i<n;i++){
    if (arr[i]==0 && arr[i+1]==1)
    {
      dem++;
    }
  }
if (dem==2){

for (int i=0;i<n;i++){
        printf("%d",arr[i]);
  }
printf("\n");
}

}


}
