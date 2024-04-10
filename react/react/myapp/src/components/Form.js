import React from 'react';
import { useState } from 'react';

const Form = () => {
    const[firstName,setfirstName] = useState("");
    const[email,setemail] = useState(" ");
    const[Password,setpassword] = useState("");
    const changeFirstName=(e)=>{
        setfirstName(e.target.value);
        // console.log(e.target.value);
    };
    const changeEmail=(e)=>{
       setemail(e.target.value);
    //    console.log(e.target.value);
    }
    const changePassword=(e)=>{
        setpassword(e.target.value);
        // console.log(e.target.value);
    }
    const handleSubmit=(e)=>{
        e.preventDefault();
        let obj={
            firstname:firstName,
            email:email,
            password:Password
        };
        console.log(obj)
    } 
  return (
    <div>
        <form onSubmit={handleSubmit}>
        <div className='form-con'>
        <input type="text" name="firstname" id="firstname" placeholder="enter your first name" value={firstName} onChange={changeFirstName}/>
        </div>
        <div className='form-con'>
        <input type="email" name="email" id="email" placeholder="enter your email" value={email} onChange={changeEmail}/>  
        </div>
        <div className='form-con'>
        <input type="password" name="password" id="password" placeholder="enter your password" value={Password} onChange={changePassword}/>
        </div>
        <div className='form-submit'>
        <button type="submit">submit</button>
        </div>
        </form>
    </div>
  );
};
  
export default Form;