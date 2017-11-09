double f(int k){
    if(k==0) return (1.00/2.00);

    double a=f(k-1);

    return (a/2.00)+(1.00/2.00);
}
double geometricSum(int k) {
    // Write your code here
    return f(k)*2.00;
}
