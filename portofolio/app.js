const sections=document.querySelectorAll('.section');
const sectBtns=document.querySelectorAll('.contro');
const sectBtn=document.querySelectorAll('.control');
const allsections=document.querySelector('.main-content');
function pagetransition(){
    //button click active class
    for(let i=0;i<sectBtn.length;i++)
    {
        sectBtn[i].addEventListener('click',function(){
            let currentBtn = document.querySelectorAll('.active-btn');
            currentBtn[0].className=currentBtn[0].className.replace('active-btn','');
            this.className +=' active-btn';
        })  
    }
    allsections.addEventListener('click',(e)=>{
        const id=e.target.dataset.id;
        if(id){
            sectBtns.forEach((btn)=>{
                btn.classList.remove('active')
            })
            e.target.classList.add('active')
        }
    })
}
pagetransition(); 