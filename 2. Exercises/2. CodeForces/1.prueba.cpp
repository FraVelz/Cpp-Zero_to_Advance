#include <cstdio>

// ******************** Prueba #1 - Codeforces ******************** //

//* Sin STL **********************************************************

const int outbuffer_size = 1 << 10;
char out_buffer[outbuffer_size] = {};
int outbuffer_pos = 0;

inline void write_char(char c) {
    if (outbuffer_pos == outbuffer_size) {
        fwrite(out_buffer, 1, outbuffer_pos, stdout);
        outbuffer_pos = 0;
    }
    out_buffer[outbuffer_pos++] = c;
};

inline void write_string(char* s) {
    while (*s) { write_char(*s++); }
};

inline void flush_buffer() {
    fwrite(out_buffer, 1, outbuffer_pos, stdout);
    outbuffer_pos = 0;
}

int main() {
    const int len_maxim_text = 100;
    int casos; 

    scanf("%d", &casos);
    
    while (casos--) {
        char p[len_maxim_text] = {};
        
        scanf("%s", p);
        
        int size = 0;
        while (p[size]) ++size; 
        

        if (size <= 10) {
            write_string(p);
        }

        else {
            char tmp[5] = {}; int pos = 1;
            int middle = size - 2;

            tmp[0] = p[0];
            if (middle >= 0) tmp[pos++] = (middle / 10) + '0';
            tmp[pos++] = (middle % 10) + '0';
            tmp[pos++] = p[size-1];
            write_string(tmp);
        };

        if (casos != 0) write_char('\n');
    }

    flush_buffer();
    return 0;
}


// * Con STL *********************************************************

// #include <iostream>
// #include <string>

// using namespace std;

// string shorten(const string& word) {
//     int len = word.length();
//     if (len <= 10) return word;
//     return word[0] + to_string(len - 2) + word[len - 1];
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;

//     while (n--) {
//         string word;
//         cin >> word;
//         cout << shorten(word) << '\n';
//     }

//     return 0;
// }
