import React from 'react'
import {useState} from "react";
import "./Objects.css";
import pic from "../assests/watch.jpg";

const Objects = () => {
    const Array=[
        {
            SNO: "1",
            Image: "smartWatch",
            Name: "MI watch",
            price: 1500,
            qty: 15,
          },
          {
            SNO: "2",
            Image: "smartWatch",
            Name: "Boat watch",
            price: 2700,
            qty: 1,
          },
          {
            SNO: "3",
            Image: "smartWatch",
            Name: "FastTrack watch",
            price: 1300,
            qty: 3,
          },
          {
            SNO: "4",
            Image: "smartWatch",
            Name: "Samsung watch",
            price: 1800,
            qty: 11,
          },
          {
            SNO: "5",
            Image: "smartWatch",
            Name: "Apple watch",
            price: 3000,
            qty: 0,
          }
    ];
    const[data,setData]=useState(Array)
  return (
    <>
    {data.map((eachelement,index)=>{
        const{Name,price,qty}=eachelement;
        if(qty>=10){
            var a="Available";
        }
        else if(qty<=10 && qty>=1){
            a="All most out of stock";
             }
        else{
            a="out of stock";
        }
        return(
            <>
            <div className='myboxx'>
            <div className='mybox' key={index}>
            <p><span><img src={pic} alt="its not working"/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>{Name}</p>
            <p>{price}</p><br></br>
            <p>{qty}</p><br></br>
            <h6>{a}</h6>
            
            </div>
            </div>
            </>
        )
    })}

    </>

  )
}

export default Objects