puts "How old are you? "
age = gets.chomp
if age.to_i < 15
  puts "Sorry, you cannot watch this film"
else
  puts "You are old enough to watch this film!"
end