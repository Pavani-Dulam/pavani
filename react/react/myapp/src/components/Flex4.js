import React from 'react';
import "./Flex4.css";
export default function Flex4() {
    function Add(){
        var container=document.querySelector('.container-flex-4');
        var div = document.createElement("div");
        var text=document.createTextNode("Flex"+(container.childElementCount+1));
        div.classList.add('flex-4');
        div.appendChild(text);
        container.appendChild(div);
    }
    function reverse(){
        var rev=document.querySelector('.container-flex-4');
        rev.classList.remove('.container-flex-4');
        rev.classList.add("reverse");
    }
return (
<>
 <div className='container-flex-4'>
 <div className="flex-4">flex1</div>
 <div className='flex-4'> Flex2</div>
 <div className="flex-4">Flex3</div>
 </div>
 <button type='button' onClick={Add} id="button">click me</button>
 <button type='button' onClick={reverse} id="reverse">reverse me</button>
</>
)
}

