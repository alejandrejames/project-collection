DIM message_list(26) AS STRING
    message_list(1) = "A"
    message_list(2) = "B"
    message_list(3) = "C"
    message_list(4) = "D"
    message_list(5) = "E"
    message_list(6) = "F"
    message_list(7) = "G"
    message_list(8) = "H"
    message_list(9) = "I"
    message_list(10) = "J"
    message_list(11) = "K"
    message_list(12) = "L"
    message_list(13) = "M"
    message_list(14) = "N"
    message_list(15) = "O"
    message_list(16) = "P"
    message_list(17) = "Q"
    message_list(18) = "R"
    message_list(19) = "S"
    message_list(20) = "T"
    message_list(21) = "U"
    message_list(22) = "V"
    message_list(23) = "W"
    message_list(24) = "X"
    message_list(25) = "Y"
    message_list(26) = "Z"
Dim inpstr as String
Dim nuocc As integer
Dim count as Integer
count = 0
Input "Enter number of occurences: ",nuocc
while nuocc > count 
    Input "Enter a string: ",inpstr
    print "",inpstr[0]
    count = count + 1
wend
