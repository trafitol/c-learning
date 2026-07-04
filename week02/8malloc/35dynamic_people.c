#include <stdio.h>
#include <stdlib.h>
#include <string.h>    // for sprintf

struct person {
    char name[50];
    int age;
    float salary;
};

void print_person(const struct person *p)
{
    printf("Name: %s, Age: %d, Salary: %.2f\n", p->name, p->age, p->salary);
}

int main(void)
{
    int n;
    printf("How many people? ");
    scanf("%d", &n);

    struct person *team = malloc(sizeof(struct person) * n);
    if (team == NULL) {
        fprintf(stderr, "Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        sprintf(team[i].name, "Person%d", i + 1);   // generates "Person1", "Person2", ...
        team[i].age = 20 + i;
        team[i].salary = 40000.0f + i * 5000.0f;
    }

    for (int i = 0; i < n; i++) {
        print_person(&team[i]);
    }

    free(team);
    team = NULL;

    return 0;
}
