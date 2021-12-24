

int countMatches(char *** items, int itemsSize, int* itemsColSize, char * ruleKey, char * ruleValue){

    if (strcmp(ruleKey, "type") == 0) {
        int count = 0;
        for (int i = 0; i < itemsSize; i++) {
            if (strcmp(items[i][0], ruleValue) == 0)
                count++;
        }
        return count;
    } else if (strcmp(ruleKey, "color") == 0) {
        int count = 0;
        for (int i = 0; i < itemsSize; i++) {
            if (strcmp(items[i][1], ruleValue) == 0)
                count++;
        }
        return count;
    } else if (strcmp(ruleKey, "name") == 0) {
        int count = 0;
        for (int i = 0; i < itemsSize; i++) {
            if (strcmp(items[i][2], ruleValue) == 0)
                count++;
        }
        return count;
    } else return 0;
}