import React from 'react';
import "./Flex2.css";
export default function Flex2() {
    function Add(){
        var container=document.querySelector('.container-flex-2');
        var div = document.createElement("div");
        var text=document.createTextNode("Flex"+(container.childElementCount+1));
        div.classList.add('flex-2');
        div.appendChild(text);
        container.appendChild(div);
    }
    function reverse(){
        var rev=document.querySelector('.container-flex-2');
        rev.classList.remove('.container-flex-2');
        rev.classList.add('reverse');
    }
return (
<>
 <div className='container-flex-2'>
 <div className="flex-2">flex1</div>
 <div className='flex-2'> Flex2</div>
 <div className="flex-2">Flex3</div>
 </div>
 <button type='button' onClick={Add} id="button">click me</button>
 <button type='button' onClick={reverse} id="reverse">reverse me</button>
</>
)
}

