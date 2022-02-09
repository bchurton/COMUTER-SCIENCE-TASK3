
print("What is your age? ")
if let age:Int? = readLine() {

  if (Int(age) < 15) {
    print("Sorry, you cannot watch this film")
  } else {
    print("You are old enough to watch this film!")
  }
  print(age)
}
