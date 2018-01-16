int calPoints(char** ops, int opsSize) {
    int i,sum=0,top=0;
    int stack[1000];
    for(i=0;i<opsSize;i++)
    {
        switch(ops[i][0])
        {
            case 'C':
                stack[--top]=0;
                break;
            case 'D':
                stack[top] = stack[top-1]*2;
                top++;
                break;
            case '+':
                stack[top] = stack[top-1]+stack[top-2];
                top++;
                break;
            default:
                stack[top] = atoi(ops[i]);
                top++;
        }
    }
    for(i=0;i<top;i++)
    sum+=stack[i];
    return sum;
}
