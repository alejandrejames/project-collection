CLS
Dim number as integer
Dim sum as integer
Dim i as integer
Dim a as integer
sum=0
i=1
a=0
INPUT "enter a number: ",number
WHILE a < number 
    IF (number mod i) = 0 THEN 
        sum=sum+i
        i = i+ 1
    ELSE
        i = i+ 1
    END IF
    a = a +1
WEND
IF sum/2=number THEN
    PRINT ;number; " perfect number"
ELSE
    PRINT ;number;" is not a perfect number"
END IF
SLEEP
END