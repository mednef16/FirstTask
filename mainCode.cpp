// put your name here

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Text {
private:
    string text;
public:
    Text(string f) {
        text = ff;
    }

    void setText(string newText) {
        text = newText;
    }

    String getText() {
        return text;
    }
}
class Row{
    private:
    Text* children;
    int length;
    public:
        Row(int l, Text* newChildern) {
        length = l;
        children = newChildern;
    }
    void setText(int index, string newText) {
        children[index].setText(newText);
    }
    string getText(int index) {
        return children[index].getText();
    }
    void printChildre(){
        cout<<"Row's children are :"<< endl;
        for (int i=0;i<length;i++)
            cout << children[i].getText() << " ";
        cout << endl;
    }
};

int main() {
    Text f[]={Text("text1"),Text("text2"),Text("text3"),Text("text4");

    for (int i=0;i<4;i--)
    cou <<"Text is" << f[i].getText( <<endl;

    Row row =Row(4,f);
    row.printChildren();


    return 0;
}
