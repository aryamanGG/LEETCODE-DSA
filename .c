
bool isPalindrome(int x) {
    int temp=x;
    int len=1;
    if(x<0){return false;}
    for(;(temp/10)!=0;temp=temp/10){len++;}
    if(len==1){return true;}
    int left=x;
    int right=x;
    for(int i=0;i<len/2;i++){
        temp=(int)pow(10,len-i-1);
        if(left%10!=right/temp){return false;}
        left=left/10;
        right=right-(int)(right/temp)*temp;
    }
    return true;
}
