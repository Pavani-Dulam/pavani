import React from 'react';
import "./Flex3.css";
export default function Flex3() {
    function Add(){
        var container=document.querySelector('.container-flex-3');
        var div = document.createElement("div");
        var text=document.createTextNode("flex"+(container.childElementCount+1));
        div.classList.add('flex-3');
        div.appendChild(text);
        container.appendChild(div);
    }
    function reverse(){
        var rev=document.querySelector('.container-flex-3');
        rev.classList.remove('.container-flex-3');
        rev.classList.add("reverse");
    }
return (
<>
 <div className='container-flex-3'>
 <div className="flex-3">flex1</div>
 <div className='flex-3'> flex2</div>
 <div className="flex-3">flex3</div>
 </div>
 <button type='button' onClick={Add} id="button">click me</button>
 <button type='button' onClick={reverse} id="reverse">reverse me</button>
</>
)
}

