/*
Problem: Give a nummber sequence with leght equal n. Show all subset with k element of nummber sequence.

Example: 1, 2, 3, 4, 5.
k=3 --> [1, 2, 3] ; [1, 2, 4]; ...; [3, 4, 5].

Input:n,k
Output: All subset with k element of nummber sequence.

*/





#include<stdio.h>
int n;
int k;
int main(){
printf("What is your number sequence legth ? : ");
scanf("%d",&n);
int nbr_sequence[n];

printf("What is your k ? : ");
scanf("%d",&k);
int subset[k];

for (int i=0;i<n;i++){
  nbr_sequence[i]=i+1;
}

for (int i=0;i<k;i++){
  subset[i]=i+1;
}

int check=k-1;
while (check>=0){
    check=k-1;

for (int i=0;i<k;i++){
  printf("%d",subset[i]);
}
  printf("\n");

while (subset[check] == n-k+check+1){
        check-=1;
    }
    
    if(check>=0){
    subset[check]+=1;
    
    for (int i=check+1;i<k;i++){
        subset[i]=subset[i-1]+1;
    }
    }

}

}
