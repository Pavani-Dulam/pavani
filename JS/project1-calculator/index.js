let display = document.getElementById("display");
let buttons = Array.from(document.getElementsByClassName("button"));
let background = document.getElementById("background")

buttons.map((button) => {
  button.addEventListener("click", (e) => {
    switch (e.target.innerText) {
      case "C":
        display.innerText = " ";
        break;
      case "←":
        if (display.innerText) {
          display.innerText = display.innerText.slice(0, -1);
          break;
        }
      case "=":
        try {
          display.innerText = eval(display.innerText);
        } catch {
          display.innerText = "error";
        }
        break;

        default:
            display.innerText += e.target.innerText;
            display.innerText.style.color="white;"
            display.innerText.style.fontSize="30px";
    }
  });
});
