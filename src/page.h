#include <string>
#include <vector>

//contains the text itself, along with different style options
struct Line{
    std::string body;
    int bold;
    int italics;
    int underline;
    
    Line(){
        bold = 0;
        italics = 0;
        underline = 0;
        body = "";
    }
};

//page, which is a series of lines
struct Page{
    std::vector<Line*> lines;
    int is_saved;

    Page(){
        is_saved = 0;
    }
};