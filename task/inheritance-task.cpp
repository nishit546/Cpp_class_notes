#include <iostream>
#include <map>
#include <fstream>
using namespace std;

// ---------- Parent Class ----------
class Operation {
protected:
    int a, b;
    string oper;

public:
    Operation(int x, int y, string op) {
        a = x;
        b = y;
        oper = op;
    }

    string getOperator() {
        return oper;
    }
};

// ---------- File Function ----------
void fileOperation(int a, int b, double result, string oper) {
    ofstream file("Practice.txt", ios::app);

    if (file.is_open()) {
        file << "Operator: " << oper << endl;
        file << "A: " << a << " B: " << b << endl;
        file << "Result: " << result << endl;
        file << "-----------------------" << endl;
        file.close();
    }
}

// ---------- Child Classes ----------
class Add : public Operation {
public:
    Add(int x, int y) : Operation(x, y, "Add") {}

    double calculate() {
        return a + b;
    }
};

class Sub : public Operation {
public:
    Sub(int x, int y) : Operation(x, y, "Sub") {}

    double calculate() {
        return a - b;
    }
};

class Mul : public Operation {
public:
    Mul(int x, int y) : Operation(x, y, "Mul") {}

    double calculate() {
        return a * b;
    }
};

class Div : public Operation {
public:
    Div(int x, int y) : Operation(x, y, "Div") {}

    double calculate() {
        if (b == 0) {
            cout << "Division by zero not allowed.\n";
            return 0;
        }
        return (double)a / b;
    }
};

// ---------- Calculator ----------
class Cal {
private:
    map<string, int> freq;

public:
    void execute(string choice, int a, int b) {
        double result = 0;

        if (choice == "Add") {
            Add obj(a, b);
            result = obj.calculate();
        }
        else if (choice == "Sub") {
            Sub obj(a, b);
            result = obj.calculate();
        }
        else if (choice == "Mul") {
            Mul obj(a, b);
            result = obj.calculate();
        }
        else if (choice == "Div") {
            Div obj(a, b);
            result = obj.calculate();
        }
        else {
            cout << "Invalid operation\n";
            return;
        }

        freq[choice]++;

        cout << "Result: " << result << endl;

        fileOperation(a, b, result, choice);
    }

    void showFrequency() {
        cout << "\nFrequency Count:\n";
        for (auto x : freq) {
            cout << x.first << " -> " << x.second << endl;
        }
    }
};

// ---------- Main ----------
int main() {

    Cal c1;

    c1.execute("Add", 10, 20);
    c1.execute("Sub", 50, 10);
    c1.execute("Mul", 5, 6);
    c1.execute("Div", 20, 4);
    c1.execute("Add", 1, 2);

    c1.showFrequency();

    return 0;
}
