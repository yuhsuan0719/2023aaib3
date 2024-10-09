//week05-2.c
char* toLowerCase(char* s) {
    for(int i=0; s[i]!=0;i++) // 字串的迴圈 中間的 s[i]!=0 要記一下
    {
        char c = s[i]; //多此一舉
        if(isupper(c)) c = tolower(c);
        s[i] = c;
    }
    return s;
}