int waysUpStair(int n) {
	// Write your code here
    if(n<0) return 0;
    if(n==0) return 1;

    return waysUpStair(n-1)+waysUpStair(n-2)+waysUpStair(n-3);
}
