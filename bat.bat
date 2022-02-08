@echo off
setlocal

set /p inp_str="What is your age? "

if %inp_str% LSS 15 (
    echo Sorry, you cannot watch this film
) else (
    echo You are old enough to watch this film!
)

endlocal
