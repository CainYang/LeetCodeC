int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int i=0,tail = -1,over = 0, sum = 0;
    while(1)
    {
        tail++;
        if(tail == gasSize)
            tail = 0;
        sum += (gas[tail]-cost[tail]);
        if(sum >= 0)
        {
            if(((i==0)&&(tail==gasSize-1))||((i!=0)&&(tail==i-1)))
            {
                over = 1;
                break;
            }
        }
        while(sum < 0)
        {
            sum -= (gas[i]-cost[i]);
            i++;
            if(i == gasSize)
            break;
        }
        if(i == gasSize)
            break;
    }
    return over==0?-1:i;
}
