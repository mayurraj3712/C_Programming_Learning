# include<stdio.h>

int main(){

  int age1, age2 ;
  printf("Enter age1 :\n");
  scanf ("%d",&age1);

  
  printf("Enter age2 :\n");
  scanf ("%d",&age2);


  if (age1 >=18) {
    printf("adult\n");
    printf("he/she can drive vehicle\n");
  }
  else if ( 13< age1 >18) {
    printf("tenager\n");
    printf("he can't vate\n");
  }
  else{
    printf("child\n");
  }


  if (age2 >=50) {
    printf("mid age\n");
  }
  else if (18< age2 >50){
    printf("young man");
  }
  else {
    printf("bhuda");
  }

  return 0;
}