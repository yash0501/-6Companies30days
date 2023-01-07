class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="*"){
                // int a = stoi(s.top());
                int a = s.top();
                s.pop();
                // int b = stoi(s.top());
                int b = s.top();
                s.pop();
                if(tokens[i]=="+"){
                    int c = b+a;
                    s.push(c);
                }
                else if(tokens[i]=="-"){
                    int c = b-a;
                    s.push(c);
                }
                else if(tokens[i]=="*"){
                    int c = b*a;
                    s.push(c);
                }
                else if(tokens[i]=="/"){
                    int c = b/a;
                    s.push(c);
                }
            }
            else{
                // int x = tokens[i] - '0';
                int x = stoi(tokens[i]);
                s.push(x);
            }
        }
        return s.top();
    }
};
