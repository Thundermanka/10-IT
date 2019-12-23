int parseFunction (char *str, int countArg, int* funcValK, int* funcValB, char* funcVarY, char* funcVarX, char* functSign){
*funcVarY= str[9];
for (int i=9;i<strlen(str);i++){
if(isalpha(str[i])){
*funcVarX=str[i];
}
}
for (int i=9;i<strlen(str);i++){
if (str[i] == "-" || str[i] == "+"){
*functSign= str[i];
if (!isdigit(str[i-1])){
*funcValB = atoi(str[i+1]);
}
else{
*funcValB = atoi(str[i-1]);
}
}
if (str[i] == "*"){
*funcValK = atoi(str[i-1]);
}
}
return 0;
}
