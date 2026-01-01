s="(()(()))"

def f(s):
    st=[]
    for i in s:
        if i=='(':
            st.append(0)
        else:
            if i==')' and st[-1]==0:
                st[-1]=1
            elif i==')' and st[-1]>0:
                v=0
                while len(st)!=0 and st[-1]!=0:
                    v=v+st[-1]
                    st.pop()
                st[-1]=2*v
                
    return sum(st)
res=f(s)

print(res)