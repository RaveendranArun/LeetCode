bool isCharPresent(char* t, char c) {
    
    int i;
    
    for (i = 0; t[i]; ++i)
        if (t[i] == c)
            return true;
    
    return false;
}

int lengthOfLongestSubstring(char * s){
    int i, j, k = 0, len = 0;
    char* subString = NULL;
    
    subString = (char* )malloc(sizeof(char) * 5 * pow(10, 4));
    memset(subString, '\0', sizeof(char) * 5 * pow(10, 4));
    
    for (i = 0; s[i]; ++i) {
        subString[k++] = s[i];
        for (j = i + 1; s[j]; ++j) {
            if (isCharPresent(subString, s[j])) {
                int t = k;
                if (len < t)
                    len = t;
                memset(subString, '\0', sizeof(char) * 5 * pow(10, 4));
                k = 0;
                break;
            }
            
            subString[k++] = s[j]; 
        }
        
        if (s[j] == '\0') {
            int t = strlen(subString);
            if (len < t)
                len = t;
            memset(subString, '\0', sizeof(char) * 5 * pow(10, 4));
            k = 0;
        }
    }
    
    int t = strlen(subString);
    if (len < t)
        len = t;
    
    return len;
    
}