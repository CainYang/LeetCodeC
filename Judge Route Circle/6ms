bool judgeCircle(char* moves) {
    int x=0,y=0,i=0;
    while(moves[i] != '\0') {
        switch(moves[i]) {
            case 'U':
                y++;break;
            case 'D':
                y--;break;
            case 'R':
                x++;break;
            case 'L':
                x--;break;
        }
        i++;
    }
    if(x == 0 && y == 0)
        return 1;
    return 0;
}
