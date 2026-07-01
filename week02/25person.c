#include <stdio.h>

struct person{
	char name[50];
	int age;
	float salary;

};

void give_raise(struct person *p, float amount){
	p->salary = p->salary + amount;
}

void print_person(const struct person *p){
        printf("Name: %s\n",p->name); 
        printf("Age: %d\n",p->age);
        printf("Salary: %.2f\n",p->salary);
}



int main (void)
{
struct person alice = {"Alice", 30, 50000.0f};

print_person(&alice);

give_raise(&alice,5000);

print_person(&alice);

return 0;
}
