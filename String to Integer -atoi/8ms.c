int myAtoi(char* str) {
    int flag = 1;
    int result = 0;
    int valid = 0;
    int length = strlen(str);
    int i = 0, dignes = 0;
    int newresult = 0;
    for(i = 0; i < length; i++)
    {
        if(valid == 0 && str[i] == ' ')
        {
            if(dignes == 1)
            {
                if(result == 0)
                    valid = 1;
                break;
            }
            continue;
        }
        else if(str[i] == '-')
        {
            if(dignes == 1)
            {
                if(result == 0)
                    valid = 1;
                break;
            }
            flag = -1;
            dignes = 1;
        }
        else if(str[i] == '+')
        {
            if(dignes == 1)
            {
                if(result == 0)
                    valid = 1;
                break;
            }
            dignes = 1;
            continue;
        }
        else if(str[i] < 48 || str[i] > 57)
        {
            if(result == 0)
                valid = 1;
            break;
        }
        else
        {
            dignes = 1;
            newresult = result*10 + str[i] - 48;
            if(result > 214748364 || newresult < result)
            {
                newresult = 2147483647;
                if(flag == -1)
                {
                    flag = 1;
                    newresult = -2147483648;
                }
                break;
            }
            result = newresult;
            
        }
    }
    return valid == 0 ? newresult*flag : 0;
}
