t=int(input())
for ii in range(t):
  a=int(input())
  n=input()
  dictionary={}
  for i in range(1,10):
    dictionary[str(i)]=0
  for i in n:
      dictionary[i]+=1
  if dictionary['1']>0:
    print(1)
    print(1)
  elif dictionary['4']>0:
    print(1)
    print(4)
  elif dictionary['6']>0:
    print(1)
    print(6)
  elif dictionary['8']>0:
    print(1)
    print(8) 
  elif dictionary['9']>0:
    print(1)
    print(9)
  else:
    array=['22','25','27','32','33','35','52','55','57','72','75','77']
    boolean=True
    print(2)
    for j in array:
      if j in n:
        print(j)
        boolean=False
        break
    if boolean==True:
      if '237' in n:
        print(27)
      elif '373' in n:
        print(33)
      elif '737' in n:
        print(77)
      elif '537' in n:
        print(57)
