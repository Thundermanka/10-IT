int parseSet(char* str, char* var, int* val) {
char tmpStr[10000];
if(!isdigit(str[4])){
    *var = str[4];
    for (int i = 6; i <= (strlen(str) - 1); i++){
        tmpStr[i-6] = str[i];
    }
    *val = atoi(tmpStr);
    }
    return *var, *val;
}