test_sub=input()
test_str=input()
res=[]

while(test_str.find(test_sub)!=-1):
    res.append(test_str.find(test_sub))
    test_str=test_str.replace(test_sub,"*"*len(test_sub),1)

if res.__len__==0:
    print("-1")
else:
    print(res.__len__())
