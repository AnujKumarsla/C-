from random import randint

keywords=['int','return','auto','double','struct','break','else',
'long','switch','case','enum','register','typedef','char','extern',
'return','union','const','float','short','unsigned','continue',
'for','signed','void','default','goto','sizeof','volatile','do','if','static','while']

operators=['.','-','&','*','sizeof','type()','%','/','+','<<','>>','==','!=','<','>','<=','>=','!','~','++','--','^','&&','||','|','\\','?:','^',
    '+=','-=','*=','/=','%=','&=','^=','|=']

symbols=['[',']','{','}','\'','"',';',':','@','#','$','%','(',')',',','.']
alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
upper=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

numeric=['1','2','3','4','5','6','7','8','9','0']

function=['printf()','scanf()','getch()','gets()','puts()','main()','goto','continue','break']
print('\n')
for i in range(45):
    s=""
    n=""
    s=upper[randint(0,len(upper)-1)]
    for x in range(randint(0,7)):
        s+=alpha[randint(0,len(alpha)-1)]
        
    for x in range(randint(0,4)):
        n+=numeric[randint(0,len(numeric)-1)]
        

    print(keywords[randint(0,len(keywords)-1)],
          operators[randint(0,len(operators)-1)],
          symbols[randint(0,len(symbols)-1)],
          function[randint(0,len(function)-1)],
          s,
          n,end=' ')
