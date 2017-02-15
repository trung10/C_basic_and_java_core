int UCLN(int a, int b){
        if(a < b)
            return UCLN(b, a);
        return (a % b) ? UCLN(a % b, b) : b;
}
