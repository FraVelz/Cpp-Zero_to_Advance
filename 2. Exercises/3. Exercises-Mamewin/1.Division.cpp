#include <cstdio>

const int buffer_size = 1 << 17;
char buffer[buffer_size];
int buffer_pos = 0;

inline void flush_buffer() {
    fwrite(buffer, 1, buffer_pos, stdout);
}

inline void write_char(char c) {
    buffer[buffer_pos++] = c;
}

inline void write_string(const char *s) {
    while (*s) write_char(*s++);
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int num;
        scanf("%d", &num);

        write_string("Division ");
        if (num >= 1900) write_char('1');
        else if (num >= 1600) write_char('2');
        else if (num >= 1400) write_char('3');
        else write_char('4');
        
        write_char('\n');
    }

    flush_buffer();
    return 0;
}