s = "(()())(())(()(()))"
def f(s):
    st=[]
    str=""
    for i in s:
        if i=='(':
            if(len(st)!=0):
                str=str+i
            st.append('(')
            
        else:
            if i==')' and st[-1]=='(' and len(st)>0:
                if len(st)>1:
                    str=str+i
                st.pop()
                
    return str
res=f(s)
print(res)