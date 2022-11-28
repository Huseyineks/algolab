#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct ogrenci{
	char name[20];
	char lastname[20];
	int yas;
	
	
};

struct schoolk{
	char okul[20];
	int okulno;
	char bolum[20];
	struct ogrenci detail;
	
	
	
	
};
struct schoolk otherstudent(struct schoolk *p,int num){
	
printf("For %d. student\n ",num);
fgets(p->detail.name,20,stdin);
printf("Enter a name: ");
fgets(p->detail.name,20,stdin);
printf("Enter a lastname : ");
fgets(p->detail.lastname,20,stdin);
printf("Enter a department : ");
fgets(p->bolum,20,stdin);	
printf("Enter a school : ");
fgets(p->okul,20,stdin); 
printf("Enter a age : ");
scanf("%d",&p->detail.yas);
printf("Enter a schoolnumber : ");
scanf("%d",&p->okulno);	
	
}
void goster(struct schoolk goster){
	printf("%s%s%s%s%d\n%d\n",goster.detail.name,goster.detail.lastname,goster.bolum,goster.okul,goster.detail.yas,goster.okulno);
	
	
	
}
	
	


int main(){
 int n;	
 printf("Enter a numbers of student: ");
 scanf("%d",&n);		
 struct schoolk a;
 fgets(a.detail.name,20,stdin);
 printf("Enter a name: ");
 fgets(a.detail.name,20,stdin);
 printf("Enter a lastname: ");
 fgets(a.detail.lastname,20,stdin);
 printf("Enter a department: ");
 fgets(a.bolum,20,stdin);
 printf("Enter a school: ");
fgets(a.okul,20,stdin);
 printf("Enter a age: ");
  scanf("%d",&a.detail.yas);
 printf("Enter a schoolnumber: ");
 scanf("%d",&a.okulno);
 goster(a);
 int i;
 for(i=1;i<n;i++){
 
 otherstudent(&a,i+1);
 goster(a);
 
}


return 0;
	
}
