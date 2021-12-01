t=int(input())
while(t):
    x1=input().split(" ")
    x2=input().split(" ")
    if((int(x1[0])*(10**int(x1[1])))>(int(x2[0])*(10**int(x2[1])))):
        print('>')
    elif((int(x1[0])*(10**int(x1[1])))<(int(x2[0])*(10**int(x2[1])))):
        print('<')

    else:
        print('=')
    t=t-1
