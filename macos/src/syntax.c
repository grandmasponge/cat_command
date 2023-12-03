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

void rustlang(char* text) {
    char* keywords[] = {"as", "break", "const", "continue", "crate", "else", "enum", "extern", "false", "fn", "for", "if", "impl", "in", "let", "loop", "match", "mod", "move", "mut", "pub", "ref", "return", "self", "Self", "static", "struct", "super", "trait", "true", "type", "unsafe", "use", "where", "while", "async", "await", "dyn", "i8", "i16", "i32", "i64", "i128", "isize", "u8", "u16", "u32", "u64", "u128", "usize", "f32", "f64", "bool", "char", "str", "Box", "Option", "Result", "String", "Vec", "assert", "assert_eq", "cfg", "column", "compile_error", "concat", "concat_idents", "debug_assert", "debug_assert_eq", "env", "eprint", "eprintln", "file", "format", "format_args", "include", "include_bytes", "include_str", "line", "matches", "module_path", "option_env", "panic", "print", "println", "select", "stringify", "thread_local", "todo", "try", "vec",};
    char* symbols[] =  {"!", "#", "$", "%", "&", "'", "(", ")", "*", "+", ",", "-", ".", "/", ":", ";", "<", "=", ">", "?", "@", "[", "\\", "]", "^", "_", "`", "{", "|", "}", "~",};     
    size_t textsize = sizeof(text);
    char* words[textsize];
    size_t wordcounter = 0;
    for(int i = 0; i <= sizeof(text); i++)
    {
        if(text[i] != ' ' || text[i] != '0\a' || text[i] != '\n'|| text[i] != '0\t' )
        {   
            words[wordcounter] = text[i];
        }
        else
        {
            wordcounter = 0;
        }
    }
}