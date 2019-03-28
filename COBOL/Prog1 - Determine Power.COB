
       IDENTIFICATION DIVISION.
       PROGRAM-ID. POWER.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 NOMBR PIC S9999 VALUE 0.
       01 NOMBR2 PIC 9999 VALUE 0.
       01 NOMBR3 PIC 9999 VALUE 0.
       01 NOMBR4 PIC 9999 VALUE 0.
       01 XTMP2 PIC 9(9) VALUE 0.
       01 X3 PIC 9(9) VALUE 0.
       01 X4 PIC 9(9) VALUE 0.
       01 REMDR PIC 9999 VALUE 0.
       01 TEMPR PIC 9999 VALUE 0.
       01 rst PIC X(99) VALUE " ".
       01 STR2 PIC X(99) VALUE " ".
       01 STR3 PIC X(99) VALUE " ".
       01 STR4 PIC X(99) VALUE " ".

       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           DISPLAY "Enter a number: " ACCEPT NOMBR.
           IF NOMBR <= 0
               DISPLAY "False,False,False"
               STOP RUN.


           MOVE NOMBR TO NOMBR2.
           MOVE NOMBR TO NOMBR3.
           MOVE NOMBR TO NOMBR4.


           PERFORM UNTIL NOMBR2 <= 1
               DIVIDE NOMBR2 BY 2 GIVING TEMPR REMAINDER REMDR
                   IF REMDR IS NOT = 0 THEN
                       MOVE 0 TO XTMP2
                       MOVE 1 TO NOMBR2
                   ELSE
                       DIVIDE NOMBR2 BY 2 GIVING NOMBR2
                       MOVE 1 TO XTMP2
                   END-IF
           END-PERFORM.

           PERFORM UNTIL NOMBR3 <= 1
               DIVIDE NOMBR3 BY 3 GIVING TEMPR REMAINDER REMDR
               IF REMDR IS NOT = 0 THEN
                   MOVE 0 TO X3
                   MOVE 1 TO NOMBR3
               ELSE
                   DIVIDE NOMBR3 BY 3 GIVING NOMBR3
                   MOVE 1 TO X3
               END-IF
           END-PERFORM.

           PERFORM UNTIL NOMBR4 <= 1
               DIVIDE NOMBR4 BY 4 GIVING TEMPR REMAINDER REMDR
               IF REMDR IS NOT = 0 THEN
                   MOVE 0 TO X4
                   MOVE 1 TO NOMBR4
               ELSE
                   DIVIDE NOMBR4 BY 4 GIVING NOMBR4
                   MOVE 1 TO X4
               END-IF
           END-PERFORM

           IF XTMP2 = 1 THEN
              MOVE "True," TO STR2
           ELSE
                MOVE "False," TO STR2
           END-IF
           IF X3 = 1 THEN
                MOVE "True," TO STR3
           ELSE
                MOVE "False," TO STR3
           END-IF
           IF X4 = 1 THEN
                MOVE "True" TO STR4
           ELSE
                MOVE "False" TO STR4
           END-IF

           STRING STR2 DELIMITED BY " ",
           " ",
           STR3 DELIMITED BY " ",
           STR4 DELIMITED BY SIZE
           INTO rst.

           DISPLAY rst.
           STOP RUN.
