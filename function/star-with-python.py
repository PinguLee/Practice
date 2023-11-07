starCount = 5

'''
*
**
***
****
*****
'''
def ex1():
    for i in range(starCount):
        print("*" * (i + 1))
        
'''
*****
****
***
**
*
'''
def ex2():

        
'''
    *
   **
  ***
 ****
*****
'''
def ex3():
    for i in range(starCount):
        print(" " * (starCount - (i + 1)), end = "")
        print('*' * (i + 1))
      
'''
*****
 ****
  ***
   **
    *
'''  
def ex4():


        
ex1()
ex2()
ex3()
ex4()
