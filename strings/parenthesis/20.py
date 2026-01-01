def f(s):
    st=[]
    for i in s:
        if i=='(' or i=='{' or i=='[':
            st.append(i)
        else:
            if(len(st)!=0 and (st[len(st)-1]=='(') and i==')'):
                st.pop()
            if(len(st)!=0 and (st[len(st)-1]=='{') and i=='}'):
                st.pop()
            if(len(st)!=0 and (st[len(st)-1]=='[') and i==']'):
                st.pop()
    return len(st)==0
s="(]"
ans=f(s)
print(ans)