int parseSet (char* str, char* tmpVarSet, int* tmpValSet){
char tmpStr[80];
if (!isdigit (str[4])){
*tmpVarSet= str[4];
for (int i=6; i<=(strlen(str)-1); i++){
tmpStr[i-6]= str[i];
}
*tmpValSet=atoi(tmpStr);
}
else{
for (int i=6; i<=(strlen(str)-3); i++){
tmpStr[i-6]= str[i];
}
*tmpValSet= atoi(tmpStr);
*tmpVarSet=str[strlen(str)-1];
}
return 0;
}
