#include <stdio.h>

struct file_ops {
    int (*open)(const char *path);
    int (*read)(int fd, char *buf, int size);
    int (*write)(int fd, const char *buf, int size);
    int (*close)(int fd);
};

int regular_open(const char *path)                   { printf("opening %s\n", path); return 3; }
int regular_read(int fd, char *buf, int size)        { printf("reading %d bytes\n", size); return size; }
int regular_write(int fd, const char *buf, int size) { printf("writing %d bytes\n", size); return size; }
int regular_close(int fd)                            { printf("closing fd %d\n", fd); return 0; }

int main(void)
{
    struct file_ops regular;

    // Explicitly assign the ADDRESS of each function to the struct field
    regular.open  = &regular_open;
    regular.read  = &regular_read;
    regular.write = &regular_write;
    regular.close = &regular_close;

    // Explicitly dereference each function pointer before calling
    int fd = (*regular.open)("hello.txt");

    char buffer[100];
    (*regular.read)(fd, buffer, 50);
    (*regular.write)(fd, "data", 4);
    (*regular.close)(fd);

    return 0;
}
