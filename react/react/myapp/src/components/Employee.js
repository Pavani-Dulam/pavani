import React from "react";
import "./Employee.css";
const list = [
  { title: "jen", salary: 10000, description: "software engineer" },
  { title: "ben", salary: 20000, description: "Software Developer" },
  { title: "ren", salary: 10000, description: "software engineer" },
  { title: "men", salary: 20000, description: "Software Developer" },
];
const Employee = () => {
  return (
    <>
      {list.map((item, index) => (
        <Emp
          key={index}
          title={item.title}
          salary={item.salary}
          description={item.description}
        ></Emp>
      ))}
    </>
  );
};

function Emp(props) {
  return (
    <div className="pavani">
      <h2 className="title">{props.title}</h2>
      <p>${props.salary}</p>
      <p>{props.description}</p>
    </div>
  );
}
export default Employee;
