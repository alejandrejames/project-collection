def solve(numLegs, numHeads): 
    for numChicks in range(0, numHeads + 1):
        numDogs = numHeads - numChicks
        totLegs = 4*numDogs + 2*numChicks 
        if totLegs == numLegs:
            print ("[",numChicks,end=" ")
            print (",",numDogs,end=" ")
            print (']')
            return 0 
    print ('None')


heads = int(input('Enter number of heads: '))    
legs = int(input('Enter number of legs: ')) 
solve(legs, heads) 

