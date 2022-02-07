const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("What is your age? ", function (answer) {
  if (Number(answer) < 15) {
    console.log("Sorry, you cannot watch this film")
  }
  else {
    console.log("You are old enough to watch this film!")
  }
});