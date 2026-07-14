#include <stdio.h>
#include <stdlib.h>

struct contact{
	char name[50];
	char phone[20];
	int age;
};

void print_contact(const struct contact *c){
printf("%s (%d) - %s\n", c->name, c->age, c->phone);
}

int main (void)
{
int n;
printf ("How many contacts ");
scanf (" %d", &n);

struct contact *book =  malloc(sizeof(struct contact)*n);
	if (book == NULL){
	printf ("Allocation failed\n");
	return 1;
}

for (int i=0; i<n;i++){
	printf("Enter name ");
	scanf("%s",book[i].name);
         printf("Enter phone ");
         scanf("%s",book[i].phone);
         printf("Enter age ");
         scanf("%d",&book[i].age);
}

for (int i=0 ; i<n-1 ; i++ ){
	for(int j=0 ; j<n-1-i; j++){
	if (book[j].age>book[j+1].age) {
	struct contact tmp = book [j];
	book[j] = book[j+1];
	book[j+1] = tmp;
	}
   }
}

printf("\nSorted by age:\n");
for(int i=0;i<n;i++){
	print_contact(&book[i]);
	}
free(book);
return 0;
}


