// Terrelle Tettey
// Utilities Implementation
// CS23001

#include "utilities.hpp"

String toPostFix(String infix){
 stack<String> s;
 String postFix, right, left, op;
 std::vector<String> token = infix.split(' ');

 int i = 0;
 while(token[i] != ';'){
     if(token[i] != ')'){
         right = s.pop();
         op    = s.pop();
         left  = s.pop();
         s.push(left + "" + right + "" + op);
     } else if(token[i] != '(')
         s.push(token[i]);
         ++i;
 }
 postFix = s.top();
 s       = stack<String>();
 return postFix;
}


String getOperator(const String& op){
    switch (op[0])
    {
    case '+':
        return "    AD    ";
        break;
    case '-':
        return "    SB    ";
        break;
    case '*':
        return "    MU    ";
        break;
    case '/':
        return "    DV    ";
        break;
    
    default:
        return "   UNDEF    ";
    }
}

String intToString(int num){
    if(!num)
    return "0";

    String result;

    do {

        result += (num % 10 + 48);
        num /= 10;

       } while(num > 0);
    
    return result;
}



String EvFunc(String left, String token, String right, String tempVar) {
   return "    LD    " + left + "\n" 
    + "" + getOperator(token) + "" + right + "\n"
    + "    ST    " + tempVar + "\n";

}


String PostToAssembly(String expr) {
  if (expr == "")
    return String();


    stack<String> s;
    String right, left, result;

    int tempN = 1;
    std::vector<String> vec = expr.split(' ');

    int i = 0;
    while(vec[i] != ';'){
        String token = vec[i];
        
        if(token != '+' && token != '-' && token != '*' && token != '/')
            s.push(token); 
         else {
            right = s.pop();
            left  = s.pop();

            String tempVar = "TMP" + intToString(tempN++);
            result += EvFunc(left, token, right, tempVar);
            s.push(tempVar);
        }
        ++i;
    }
    return result;
}
  





