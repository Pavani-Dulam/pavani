import React from "react";
import "bootstrap/dist/css/bootstrap.css";
import Form from "react-bootstrap/Form";
import Button from "react-bootstrap/Button";
import "./Registration.css";
import { useState } from 'react';
const Registration = () => {
  const[username,setusername] = useState("");
  const[email,setemail] = useState(" ");
  const[password,setpassword] = useState("");
  const[designation,setdesignation]=useState("");
  const[comment,setcomment]=useState("");
  const[gender,setgender]=useState("");
  const[terms,setterms]=useState("");
  const changeFirstName=(e)=>{
      setusername(e.target.value);
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
  const changedesignation=(e)=>{
    setdesignation(e.target.value);
    // console.log(e.target.value);
}
const changecomment=(e)=>{
  setcomment(e.target.value);
  // console.log(e.target.value);
}
const changecondition=(e)=>{
  setterms(e.target.value);
  // console.log(e.target.value);
}
const changegender=(e)=>{
  setgender(e.target.value);
  // console.log(e.target.value);
}

const handleSubmit=(e)=>{
    e.preventDefault();
    let obj={
        firstname:username,
        email:email,
        password:password,
        designation:designation,
        comment:comment,
        gender:gender,
        terms:terms,
    };
    console.log(obj)
} 
return (
    <>
    <div className="small">Register</div>
    <div className="myform">
      <Form onSubmit={handleSubmit}>
        <Form.Group className="custom-input">
          <Form.Control type="text" placeholder="username" value={username} onChange={changeFirstName}  />
        </Form.Group>
        <Form.Group className="custom-input">
          <Form.Control type="email" placeholder="email" value={email} onChange={changeEmail} />
        </Form.Group>
        <Form.Group  className="custom-input">
          <Form.Control type="password" placeholder="password" value={password} onChange={changePassword}/>
        </Form.Group>
        <Form.Group className="custom-input">
        <Form.Select value={designation} onChange={changedesignation}>
           <option>Designation</option>
          <option value="1">One</option>
          <option value="2">Two</option>
          <option value="3">Three</option>
       </Form.Select>
       </Form.Group>
        <Form.Group className="custom-input"> 
        <Form.Control as="textarea" placeholder="comments"rows={3} value={comment} onChange={changecomment}/>
        </Form.Group>
        <Form.Group className="radios" value={gender} onChange={changegender}>
          <Form.Check type="radio" label="male" name="gender" value="male"/>
          <Form.Check type="radio" label="female" name="gender" value="female"/>
        </Form.Group>
        <Form.Group>
          <Form.Check type="checkbox" label="Accept terms and conditions" value={terms} onChange={changecondition}/>
        </Form.Group>
        <Button variant="success" type="submit" className="custom-inputs">
          submit
        </Button>
       </Form>
        
       
      </div>
      
    </>
  );
};
export default Registration;
