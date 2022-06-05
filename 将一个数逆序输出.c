bool isPalindrome(int x){
    if(x==0){
        return true;
    }
    if(x<0){
        return false;
    }
    long t = x;
    ret=0;//防止x倒置后的ret溢出，故采用long类型，也可以用unsigned int。

    while(t)
    {
        ret=ret*10+t%10;
        t/=10;
    }//倒置
    
    return ret==x;//优美的返回值
}