#!/usr/bin/python3
def is_pal(num):
    rev = 0
    temp = num
    while(num>0):
        dig=num%10
        rev=rev*10+dig
        num=num//10
    if(temp==rev):
        return (True)
    else:
        return (False)

def main():
    large_pal = 0
    for i in range(100, 999):
        for j in range (100,999):
            x = i * j
            if is_pal(x):
                if x > large_pal:
                    large_pal = x
    print(large_pal)

if __name__=="__main__": 
    main() 
