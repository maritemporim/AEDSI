int letraM(char *p){
    int c = 0;
    if(p >= "A" && p <= "Z"){
        c++;
    }
    else letraM(p+1);
}