#include<stdio.h>
int n;
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main(){
    printf("What your number sequence's legth?: ");
    scanf("%d",&n);
    int nb_sequence[n];
for(int i=0;i<n;i++){
  nb_sequence[i]=i+1;
}

for(int i=0;i<n;i++){
        printf("%d ",nb_sequence[i]);
      }
printf("\n");

int check=n-1;
while (check>=0){

    check=n-1;
    while (check>0 && nb_sequence[check]<nb_sequence[check-1]){
          check-=1;
    }
    
    if (check == 0){
            break;
        }

    
    for(int i=n-1;i>=check;i--){
    if ( nb_sequence[i] > nb_sequence[check-1] ){
          swap(&nb_sequence[i],&nb_sequence[check-1]);
          break;
    }
    
    
}

    int k=check;
    int v=n-1;
  while(v>k){
      swap(&nb_sequence[k],&nb_sequence[v]);
      k++;
      v--;
    }

     for(int i=0;i<n;i++){
        printf("%d ",nb_sequence[i]);
    }
    printf("\n");
}

}
