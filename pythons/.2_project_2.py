# THE PERFECT GUESS
import random
randno=random.randint(1,199)
print(randno)
userguess=None
Noofguesses=0
while(userguess!=randno):
    userguess=int(input("enter the no :"))
    if (userguess==randno):
        print("You won")
    else:
        if(userguess>randno):
            print("enter smaller number")
        else:
            print("enter larger number")
    Noofguesses+=1
print(Noofguesses)
f=open('highscore.txt','r')
highscore=int(f.read())
print(highscore)
if (Noofguesses<highscore):
    print("You have broken the record")
    f=open('highscore.txt','w')
    Write=f.write(str(Noofguesses))
f.close()   
                    

