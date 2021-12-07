

#include <iostream>
#include <string>
using namespace std;

string eraseEngOfWords(string line){
    int end_word=line.find(" ");
    if(line[line.size()-1]!=' '){
        line.replace(line.size()-1, 1, "");
    }
    while (end_word!=string::npos) {
        if(line[end_word-1]!=' '){
            line.replace(end_word-1, 1, "");
        }
        end_word=line.find(" ", end_word+1);
    }
    return line;
}

void imeraseEngOfWords(string &line){
    int end_word=line.find(" ");
    if(line[line.size()-1]!=' '){
        line.replace(line.size()-1, 1, "");
    }
    while (end_word!=string::npos) {
        if(line[end_word-1]!=' '){
            line.replace(end_word-1, 1, "");
        }
        end_word=line.find(" ", end_word+1);
    }
}

int main() {
    string str="qwerty    asd   groop until ";
    cout<<str<<endl<<eraseEngOfWords(str)<<endl<<str<<endl;
    imeraseEngOfWords(str);
    cout<<str<<endl;
}
