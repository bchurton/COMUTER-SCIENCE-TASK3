main = do  
    putStrLn "What is your age?"  
    inputtedage <- getLine
    let age = read inputtedage :: Integer
    if age < 15 then print "Sorry, you cannot watch this film" else print"You are old enough to watch this film!"
