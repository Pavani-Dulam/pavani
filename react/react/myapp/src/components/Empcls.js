import React from "react";

class Empcls extends React.Component {
  render() {
    const {data} = this.props;
    return (
      <div>
        {data.map((item, index) => (
          <div key={index}>
            <p>{item.title}</p>
            <p>{item.salary}</p>
            <p>{item.description}</p>
          </div>
        ))}
      </div>
    );
  }
}

class Emp extends React.Component {
  render() {
    const list = [
      { title: "jen", salary: 10000, description: "software engineer" },
      { title: "ben", salary: 20000, description: "Software Developer" },
      { title: "ren", salary: 10000, description: "software engineer" },
      { title: "men", salary: 20000, description: "Software Developer" },
    ];

    return (
      <>
        <div>
          <Empcls data={list} />
        </div>
      </>
    );
  }
}

export default Emp;
