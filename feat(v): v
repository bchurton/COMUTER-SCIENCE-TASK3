import os { get_line }
import strconv { parse_int }

fn main() {
    print('What is your age? ')
    str := get_line()
    
    age := parse_int(str, 10, 8) or {
        println('Input must be a number')
        return
    }
    
    if age < 15 {
        println('Sorry, you cannot watch this film')
    } else {
        println('You are old enough to watch this film!')
    }
}
