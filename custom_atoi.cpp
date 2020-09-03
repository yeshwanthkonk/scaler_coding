string A = " +  7 U T 1";
    int len = A.length();
    int i = 0;
    const char white = ' ';
    int op = 0;
    while(i<len){
        if(48<=int(A[i]) && int(A[i])<=57)
            {op = op*10 + (int(A[i])-48);
                
            }
        else{
            if((A[i] != ' ' || A[i] != '+' || A[i] != '-') && op != 0)
                break;
        }
        i++;
    }
    if(op == 0)
        cout<<0;
    else 
        cout<<op;
