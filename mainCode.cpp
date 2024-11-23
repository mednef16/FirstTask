// Neffaa Mohamed
#include <list>
#include <iostream>
#include <string>
using namespace std;

class Text {
private:
    string text;

public:
    Text(string f) {
        text = f;
    }

    void setText(string newText) {
        text = newText;
    }

    string getText() { 
        return text;
    }
};

class Row {
private:
    Text* children;
    int length;

public:
    Row(int l, Text* newChildren) {
        length = l;
        children = newChildren;
    }

    void setText(int index, string newText) {
        if (index >= 0 && index < length) { 
            children[index].setText(newText);
        }
    }

    string getText(int index) {
        if (index >= 0 && index < length) { 
            return children[index].getText();
        }
        return "";
    }

    void printChildren() {
        cout << "Row's children are: " << endl;
        for (int i = 0; i < length; i++) {
            cout << children[i].getText() << " ";
        }
        cout << endl;
    }
};

class Column {
private:
    Text* children;
    int length;

public:
    Column(int l, Text* newChildren) {
        length = l;
        children = newChildren;
    }

    void setText(int index, string newText) {
        if (index >= 0 && index < length) { 
            children[index].setText(newText);
        }
    }

    string getText(int index) {
        if (index >= 0 && index < length) { 
            return children[index].getText();
        }
        return "";
    }

    void printChildren() {
        cout << "Column's children are: " << endl;
        for (int i = 0; i < length; i++) {
            cout << children[i].getText() << " ";
        }
        cout << endl;
    }
};

int main() {
    Text rowText[] = {Text("text1"), Text("text2"), Text("text3"), Text("text4")};
    Row row(4, rowText);
    
    Text colText[] = {Text("col1"), Text("col2"), Text("col3"), Text("col4"), Text("col5"), Text("col6")};
    Column column(6, colText);

    row.printChildren();
    column.printChildren();

    row.setText(0, "row0");
    column.setText(0, "colum0");

    cout << "\nAfter updating the first child of each:" << endl;
    row.printChildren();
    column.printChildren();

    return 0;
}
