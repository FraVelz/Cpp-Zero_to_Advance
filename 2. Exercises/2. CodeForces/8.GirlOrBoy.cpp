#include <cstdio>

// Output
const int outbuffer_size = 1 << 4;
char out_buffer[outbuffer_size] = {};
int outbuffer_pos = 0;

inline void write_char(char c) {
    out_buffer[outbuffer_pos++] = c; 
};

inline void write_str(const char *s) {
    while (*s) write_char(*s++);
};

inline void write_flush() {
    fwrite(out_buffer, 1, outbuffer_pos, stdout);
};

int main() {
    char name[100] = {}; 
    int len = 0;
    int words_repeat = 0;

    scanf("%d", name);

    while (name[len++] != '\0') {
        for (int i = 0; i < 100; ++i) {
            if (name[i] == '\0') break;

            else if (name[i] == name[len-1]) {
                ++words_repeat;
            }
        }
    };

    write_str(((len-words_repeat-1) % 2 == 0) ? "IGNORE HIM!": "CHAT WITH HER!");
    write_flush();
    return 0;
}