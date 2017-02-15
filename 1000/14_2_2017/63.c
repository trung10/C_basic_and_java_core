int BCNN(int a, int b){
        if(a < b)
            return BCNN(b, a);
        int i = 2, c = a;
        while(c % b){
            c = a * i;
            i++;
        }
        return c;
}
 void main(){
    printf("%d", BCNN(4, 3));
 }
