s="2-1-1"

def f(s):
    res=[]
    nums=""
    for i in range(len(s)):
        if s[i] in "+-*":
            left=f(s[0:i])
            right=f(s[i+1:])
            for j in left:
                for k in right:
                    if(s[i]=="+"):
                        res.append(j+k)
                    elif(s[i]=="-"):
                        res.append(j-k)
                    else:
                        res.append(j*k)
    if len(res)==0:
        res.append(int(s))
    return res
res=f(s)
print(res)

