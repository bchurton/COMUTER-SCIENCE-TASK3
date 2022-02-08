printf "What is your age? "
read age

if [[ $age -lt 15 ]]
then
    echo "Sorry, you cannot watch this film"
else
    echo "You are old enough to watch this film!"
fi
