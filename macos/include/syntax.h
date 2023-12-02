/*
    author grandma sponge

    im cool


*/

//enumerations

typedef enum _FILETYPE {
    rust = 0,
    c = 1,
    cpp = 2,
    csharp = 3,
    html = 4,
    jsts = 5,
    java = 6,
    other = 7,
}filetype;


//check file type function

filetype checkFileType(char* path);

// syntax highlighting functions

void rustlang(filetype type);

void clang(filetype type);

void cpplang(filetype type);

void csharplang(filetype type);

void htmllang(filetype type);

void scriptinglang(filetype type);

void javalang(filetype type);




