x = input()
u = 0
l = 0
for t in x:
    if(t.isupper()):
        u+=1 
    else:
        l+=1
if(u>l):
    print(x.upper())
else:
    print(x.lower())
