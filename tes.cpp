#include <iostream>
#include <string>
#include <stack>
#include <cmath> // for pow() function

using namespace std;

// Structure to represent a node in the expression tree
struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to build the expression tree from a string
Node* buildExpressionTree(const string& expr) {
    stack<Node*> st;

    for (char ch : expr) {
        if (isalnum(ch)) { // Operand (variable or number)
            st.push(new Node(ch));
        } else { // Operator
            Node* right = st.top();
            st.pop();
            Node* left = st.top();
            st.pop();
            Node* operatorNode = new Node(ch);
            operatorNode->left = left;
            operatorNode->right = right;
            st.push(operatorNode);
        }
    }

    return st.top(); // Root of the expression tree
}

// Function to evaluate the expression tree (recursive)
double evaluateExpressionTree(Node* root) {
    if (root == nullptr) {
        return 0.0; // Handle empty expression
    }

    if (isalpha(root->data)) {
        // Access the value of the variable (replace with your logic to get variable values)
        double value; // Replace with logic to get variable value based on root->data
        return value;
    } else {
        double leftValue = evaluateExpressionTree(root->left);
        double rightValue = evaluateExpressionTree(root->right);

        switch (root->data) {
            case '+':
                return leftValue + rightValue;
            case '-':
                return leftValue - rightValue;
            case '*':
                return leftValue * rightValue;
            case '/':
                if (rightValue == 0) {
                    // Handle division by zero error
                    cerr << "Error: Division by zero!" << endl;
                    return numeric_limits<double>::quiet_NaN(); // Or throw an exception
                }
                return leftValue / rightValue;
            case '^': // Exponentiation
                return pow(leftValue, rightValue);
            default:
                cerr << "Error: Invalid operator!" << endl;
                return numeric_limits<double>::quiet_NaN(); // Or throw an exception
        }
    }
}

int main() {
    string equation;
    cout << "Enter a math equation (variables, exponentials, and powers allowed): ";
    getline(cin, equation);

    // Build the expression tree
    Node* root = buildExpressionTree(equation);

    // Evaluate the expression
    double result = evaluateExpressionTree(root);

    cout << "The result of the equation is: " << result << endl;

    return 0;
}