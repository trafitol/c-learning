#include <stdio.h>

void print_bits(int n)
{
     for (int i = 7; i >= 0; i--) {
         printf("%d", (n >> i) & 1);
     }
     printf("\n");
}


int set_bit(int n, int pos)        // returns n with bit `pos` set to 1
{ return n | (1 << pos); }

int clear_bit(int n, int pos)      // returns n with bit `pos` cleared to 0
{ return n &= ~(1 << pos); }

int toggle_bit(int n, int pos)     // returns n with bit `pos` flipped
{ return n ^ (1 << pos); }

int get_bit(int n, int pos)        // returns 0 or 1 — the value of bit `pos`
{ return (n >> pos) & 1; }


int main (void)

{
int n = 0;

n = set_bit(n, 3);     // 00001000
print_bits(n);

n = set_bit(n, 5);     // 00101000
print_bits(n);

printf("Bit 3: %d\n", get_bit(n, 3));   // 1
printf("Bit 4: %d\n", get_bit(n, 4));   // 0

n = toggle_bit(n, 3);   // 00100000
print_bits(n);

n = clear_bit(n, 5);    // 00000000
print_bits(n);

return 0;
}



