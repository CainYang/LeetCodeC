/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** pString=(char**)malloc(sizeof(char*)*n);
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            pString[i-1] = (char*)malloc(sizeof(char)*10);
            pString[i-1] = "FizzBuzz";
        }
        else if(i%3==0 && i%5!=0)
        {
            pString[i-1] = (char*)malloc(sizeof(char)*10);
            pString[i-1] = "Fizz";
        }
        else if(i%3!=0 && i%5==0)
        {
            pString[i-1] = (char*)malloc(sizeof(char)*10);
            pString[i-1] = "Buzz";
        }
        else
        {
            pString[i-1] = (char*)malloc(sizeof(char)*10);
            sprintf(pString[i-1],"%d",i);
        }
    }
    *returnSize = n;
    return pString;
}
