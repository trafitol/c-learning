#include <stdio.h>

struct person{
	char name[50];
	int age;
	float salary;
};


void print_all(const struct person team[], int size)
{
for (int i= 0;i<size;i++){
	printf("Name: %s\n",team[i].name);
	printf("Age: %d\n", team[i].age);
	printf("Salary: %.2f\n", team[i].salary);
	printf("\n");
}
}

float total_salary(const struct person team[], int size){
float total = 0;
for (int i=0;i<size;i++){	
	total = total + team[i].salary;
}
return total;
}


int main (void)

{
struct person team[3] = {
	{"Alice", 30, 50000.0f},
	{"Bob", 25, 45000.0f},
	{"Charlie", 40, 60000.0f}
};

print_all(team,3);
printf("Total payroll: %.2f\n", total_salary(team,3));

return 0;
}

