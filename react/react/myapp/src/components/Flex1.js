import React from 'react';
import "./Flex1.css";
export default function Flex1() {
    function Add(){
        var container=document.querySelector('.container-flex-1');
        var div = document.createElement("div");
        var text=document.createTextNode("Flex"+(container.childElementCount+1));
        div.classList.add('flex-1');
        div.appendChild(text);
        container.appendChild(div);
    }
    function reverse(){
        var rev=document.querySelector('.container-flex-1');
        // rev.classList.remove('.container-flex-1');
        rev.classList.add("reverse");
        document.getElementsByClassName("container-flex-1").style[0] = "display:flex;flex-direction: 40%;"
    }
return (
<>
 <div className='container-flex-1'>
 <div className="flex-1">Flex1</div>
 <div className='flex-1'> Flex2</div>
 <div className="flex-1">Flex3</div>
 </div>
 <button type='button' onClick={Add} id="button">click me</button>
 <button type='button' onClick={reverse} id="reverse">reverse me</button>

</>
)
}

