int parseFunction(char* str, char* var1, char* var2, char* var3, char* val){ // val - это значение для переменных, поэтому одна и такая же как в parseSet
    char tmpStr[10000];
    if(!isdigit(str[10])){ 
         *var1 = str[4];
    for (int i = 12; i <= (strlen(str) - 1); i++){
        tmpStr[i-12] = str[i];
    }
    *val = atoi(tmpStr);
    }
    
    return *var1, *val;
}