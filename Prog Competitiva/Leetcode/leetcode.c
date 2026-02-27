int climbStairs(int n) {
    int t1 = 1, t2 = 2, m = 0;
    if (n == 1){
     return 1;
 
    }
    if(n == 2){
     return 2;
 
    }
    for(int i = 3; i <= n; i++)
    {
     m = t1 + t2;
     t1 = t2;
     t2 = m;
    }
    
    return t2;
 }

 int main(void)
 {
    int t2;
    printf("%d",climbStairs(t2));
 }