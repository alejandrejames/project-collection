Declare Function solve(numLegs As Integer,numHeads As Integer) As Integer
Declare Function solve2(numLegs As Integer,numHeads As Integer) As Integer

Dim heads As Integer
Dim legs as Integer
Dim dogs as Integer
Dim chickens as Integer
Input "Enter number of heads: ",heads
Input "Enter number of legs: ",legs
dogs = solve(legs,heads)
chickens = solve2(legs,heads)
IF dogs = 0 THEN
    Print "None"
ELSE
    print "[";chickens
    print","
    print "";dogs
    print"]"
END IF
Sleep
End

Function solve(numLegs As Integer,numHeads As Integer) As Integer
    Dim numChicks as Integer
    Dim numDogs As Integer
    Dim totLegs As Integer
    numHeads = numHeads
    FOR numChicks = 0 TO (numHeads)
        numDogs = numHeads - numChicks
        totLegs = (4*numDogs) + (2*numChicks)
        IF totLegs = numLegs THEN
            return numDogs
            Exit Function
        END IF
    NEXT
return numDogs
End Function
 
Function solve2(numLegs As Integer,numHeads As Integer) As Integer
    Dim numChicks as Integer
    Dim numDogs As Integer
    Dim totLegs As Integer
    numHeads = numHeads
    FOR numChicks = 0 TO (numHeads)
        numDogs = numHeads - numChicks
        totLegs = (4*numDogs) + (2*numChicks)
        IF totLegs = numLegs THEN
            return numChicks
            Exit Function
        END IF
    NEXT
return numChicks
End Function