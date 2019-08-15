#ifndef HEADER_FILE
#define HEADER_FILE
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
void copy(const char *file_from, char *file_to);
void error_98(const char *a);
void error_99(char *a);
void error_100(int a);
#endif
