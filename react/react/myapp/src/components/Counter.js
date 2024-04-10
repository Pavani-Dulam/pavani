import React, { useState } from "react";
import "./Counter.css";
const Counter = () => {
  const [counter, setCounter] = useState(0)
   const Click1 = () => {
    setCounter(counter + 1)
  }
  const Click2 = () => {
  
    if(counter>0)
    {
        setCounter(counter - 1)
    }
    else{
        alert("its not decrement")
    }
}
  return(
    <>
    <div className="Counter">
    <div className="counttitle">Counter App</div>
    <div className="Head">{counter}</div>
    <div className="button">
    <button onClick={Click1} className="a">Increment</button>
    <button onClick={Click2}className="b">Decrement</button>
    </div>
    </div>
    </>
    )
}
export default Counter;
  
