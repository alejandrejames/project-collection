Dim no As Integer
Dim no2 as Integer
Dim no3 as Integer
Dim x2 as Integer
Dim x3 as Integer
Dim no4 as Integer
Dim x4 as Integer
Dim str2 as String
Dim str3 as String
Dim str4 as String

INPUT "Enter a number: ",no
IF no = 0 THEN
    print "False,False,False"
ELSE
    no2 = no
    no3 = no
    no4 = no

    WHILE no2<>1
        IF (no2 mod 2)<>0 THEN
            x2=0
            no2 = 1
        ELSE
            no2 = no2/2
            x2=1
        END IF
    WEND

    WHILE no3<>1
        IF (no3 mod 3)<>0 THEN
            x3=0
            no3 = 1
        ELSE
            no3 = no3/3
            x3=1
        END IF
    WEND

    WHILE no4<>1
        IF (no4 mod 4)<>0 THEN
            x4=0
            no4 = 1
        ELSE
            no4 = no4/4
            x4=1
        END IF
    WEND

    IF x2=1 THEN
        str2 = "True, "
    ELSE
        str2 = "False, "
    END IF

    IF x3=1 THEN
        str3 = "True, "
    ELSE
        str3 = "False, "
    END IF

    IF x4=1 THEN
        str4 = "True"
    ELSE
        str4 = "False"  
    END IF

    PRINT " ",str2+str3+str4
END IF

END