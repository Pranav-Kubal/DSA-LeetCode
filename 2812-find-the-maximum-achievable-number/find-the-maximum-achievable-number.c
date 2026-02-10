int theMaximumAchievableX(int num, int t) {

    /* detailed explanation as follows:
    There are four operations
        num-- , x++;
        num-- , x--;
        num++ , x--;
        num++ , x++;

    Example :
        num=4 , t=1
        num-1=3, x+1=3 then x=2;
        num-1=3, x-1=3 then x=4 ;
        num+1=5, x-1=5 then x=6; (Highest)
        num+1=5, x+1=5 then x=4; */

    return (num + 2 * (t)); // this is short-cut formula for this question
}