#GAME stone,paper,scissors

import random
def game(computer,player):
    
    if computer==player:
        return "tie"
    elif computer=='stone':
        if player=='paper':
            return "player won" 
        if player=='scissor':
            return "computer won"

    elif computer=='paper':
        if player=='scissor':
            return "player won"
        if player=='stone':
            return "computer won"

    elif computer=="scissor":
        if player=='stone':
            return "player won"
        if player=='paper':
            return "computer won"

                           
player=input("Player choice:(1)stone (2)paper and (3)scissor:")
randchoice=random.randint(1,3) #randint() is a function of a module random which is used to choose a random value b/w a range ex=random.randint'''(0,9)'''RANGE  
print("computer choices:(1)stone (2)paper and (3)scissor")
if randchoice==1:
    computer='stone'
elif randchoice==2:
    computer="paper"
elif randchoice==3:
    computer="scissor"
    
print(f"computer choose:{computer}") #f string is used to print {variable} inside print function
print(f"player choose:{player}")    
first=game(computer,player)
print(first)



      


                  
        
