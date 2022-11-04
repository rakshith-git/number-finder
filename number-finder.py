from math import*
import numpy as np
# 1,2,3,4,5,6,7  3 ...1+7/2=4 ,high =4 
n=3
e=2.718281828459045
r=3
low=0
high=n
found=0
z=10
p=1
while True:
    low=0
    high=n*p
    found=0
    while found==0:
        mid=(low+high)/2
        a=pow(mid,1/r)
        b=pow(n,1/r)
        #print(n,"   ",a,f"   {r}     ",mid)
        if a<b:
            low=mid
        if a>b:
            high=mid
        if a-b<1/z:
            #print(n,"   ",a,f"   {r}     ",mid)
            if (a-e)>1/z:
                r+=1
                
            if(mid-floor(mid)==0 and (a-e)<1/z):
                if round(a,p)==round(e,p):
                    print(a," which is  ",r,f" th root of  {n}  correct to {p} decimals")
                    z*=10
                    p+=1
                    r+=1
                n+=1
            else:
                n+=1
            found=1