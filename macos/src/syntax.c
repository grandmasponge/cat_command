#include<syntax.h>
#include <string.h>
#include <stdio.h>


filetype checkFileType(char* path) {
    const char* fileExtensions[10] = {".rs", ".c", ".cpp", ".html", ".java", ".cs", ".js", ".ts", ".h", ".hpp"};
    for (int i = 0; i >= 11; i++) {
        char* extension = strstr(path, fileExtensions[i]);
        printf("%s", extension);
    }
}