CLS
DIM lines(10) AS STRING
DIM codes(70) AS STRING
DIM count2 AS INTEGER
DIM count AS INTEGER
DIM code AS STRING
DIM final AS STRING
DIM e AS INTEGER
DIM x AS INTEGER
DIM in AS INTEGER
DIM B AS STRING

e = 0
INPUT "Input # of lines: ", count
FOR k = 1 TO count
        INPUT "Input max. #: ", count2
        DO
                INPUT "your code: ", code
                codes(e) = code
                e = e + 1
                LOOP UNTIL e = count2

               
        DO
               
                IF codes(x) = "_" THEN
                      final = final + " "
                ELSEIF codes(x) = "#" THEN
                      x = x + 1
                      final = final + codes(x)
                ELSEIF codes(x) = "," THEN
                      final = final + codes(x)
                ELSEIF codes(x) = "." THEN
                      final = final + codes(x)
                ELSEIF codes(x) = "!" THEN
                      final = final + codes(x)
                ELSEIF codes(x) = "-" THEN
                      final = final + codes(x)
                ELSEIF codes(x) = "?" THEN
                      final = final + codes(x)
                ELSEIF codes(x) = "_" THEN
                      final = final + codes(x)
                ELSE
                      in = VAL(codes(x))
                      in = in + 64
                      B = CHR$(in)
                      final = final + B
                END IF
                x = x + 1
        LOOP UNTIL x = count2
PRINT final
NEXT k
END

