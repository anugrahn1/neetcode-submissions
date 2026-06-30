class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;

        for (string s : tokens) {
            if (s == "+") {
                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                nums.push(left + right);
            } else if (s == "-") {
                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                nums.push(left - right);
            } else if (s == "*") {
                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                nums.push(left * right);
            } else if (s == "/") {
                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                nums.push(left / right);
            } else {
                nums.push(stoi(s));
            }
        }
        return nums.top();
    }
};
