char* intToRoman(int num) {
    char* result = (char*)malloc(sizeof(char)*100);
    int index = 0;
    while(num - 1000 >= 0)
    {
        num = num - 1000;
        result[index++] = 'M';
    }
    if(num - 900 >= 0)
    {
        num = num - 900;
        result[index++] = 'C';
        result[index++] = 'M';
    }
    if(num - 500 >= 0)
    {
        num = num - 500;
        result[index++] = 'D';
    }
    if(num - 400 >= 0)
    {
        num = num - 400;
        result[index++] = 'C';
        result[index++] = 'D';
    }
    while(num - 100 >= 0)
    {
        num = num - 100;
        result[index++] = 'C';
    }
    if(num - 90 >= 0)
    {
        num = num - 90;
        result[index++] = 'X';
        result[index++] = 'C';
    }
    if(num - 50 >= 0)
    {
        num = num - 50;
        result[index++] = 'L';
    }
    if(num - 40 >= 0)
    {
        num = num - 40;
        result[index++] = 'X';
        result[index++] = 'L';
    }
    while(num - 10 >= 0)
    {
        num = num - 10;
        result[index++] = 'X';
    }
    if(num - 9 >= 0)
    {
        num = num - 9;
        result[index++] = 'I';
        result[index++] = 'X';
    }
    if(num - 5 >= 0)
    {
        num = num - 5;
        result[index++] = 'V';
    }
    if(num - 4 >= 0)
    {
        num = num - 4;
        result[index++] = 'I';
        result[index++] = 'V';
    }
    while(num - 1 >= 0)
    {
        num = num - 1;
        result[index++] = 'I';
    }
    result[index] = '\0';
    return result;
    
}
