

#include <iostream>
#include <stack>
#include <string>

std::string postfix_record(std::string line)
{
    std::string answer = "";
    std::stack<char> sign;
    for (int i = 0; i < line.length(); i++)
    {
        if (isdigit(line[i]))
        {
            answer += line[i];
        }
        else if (line[i] == '+' || line[i] == '*' || line[i] == '-' || line[i] == '/')
        {
            sign.push(line[i]);
        }
    }
    while (!sign.empty())
    {
        answer += sign.top();
        sign.pop();
    }
    return answer;
}
int main()
{
    std::cout << "1+2*3" <<" = " << postfix_record("1+2*3") << std::endl;
}
