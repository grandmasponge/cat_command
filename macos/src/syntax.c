#include<syntax.h>
#include <string.h>
#include <stdio.h>


filetype checkFileType(char* path) {
    const char* filetype[10] = {"rs", "c", "cpp", "cs", "html", "js", "java", "ts", "h", "hpp"};
    const char *dot = strrchr(path, '.');
    const char *extension = dot+1;
    for(int i = 0; i <= 10; i++)
    {
        int result = strcmp(extension, filetype[i]);
        if (result == 0)
        {
            switch(i){
                case 0:
                    return rust;
                case 1:
                    return c;
                case 2: 
                    return cpp;
                case 3: 
                    return csharp;
                case 4: 
                    return html;
                case 5:
                    return jsts;
                case 6:
                    return java;
                case 7:
                    return jsts;
                case 8: 
                    return c;
                case 9:
                    return cpp;
                default:
                    break;                         
            };
        }
    }
    return other;
}