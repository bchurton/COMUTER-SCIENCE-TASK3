package main
  
import "fmt"
  
// main function
func main() {
  
    fmt.Println("What is your age? ")
    var age int
    fmt.Scanln(&age)

    if age < 15 {
      fmt.Print("Sorry, you cannot watch this film")
    } else {
      fmt.Print("You are old enough to watch this film!")
    }
    
}
