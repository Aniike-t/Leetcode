char stack[10000];
int top=-1;
bool push(char c){
    if(top==9999)return false;
    stack[++top]=c;
    return true;
}
char pop(){
    if(top==-1)return 'f';
    return stack[top--];
}
char peek(){
    if(top==-1)return 'f';
    return stack[top];
}
bool isValid(char * s){
    top=-1;
    int len=strlen(s);
    if(len%2 !=0)return false;
    for(int i=0;i<len;i++){
        switch(s[i]){
            case '(':
                push('(');
                break;
            case ')':
                if(peek()!='(') return false;
                pop();
                break;
            case '{':
                push('{');
                break;
            case '}':
                if(peek()!='{') return false;
                pop();
                break;
            case '[':
                push('[');
                break;
            case ']':
                if(peek()!='[') return false;
                pop();
                break;
        }
    }
    if(top!= -1)return false;
    return true;
}