import React from "react";
import { useState } from "react";
import picture from "../assests/watch.jpg";
import "bootstrap/dist/css/bootstrap.min.css";
import { Table } from "react-bootstrap";
const Products = () => {
  const Array = [
    {
      SNO: "1",
      Image:
        "https://images.samsung.com/is/image/samsung/p6pim/in/2108/gallery/in-galaxy-watch4-398879-sm-r870nzgainu-481111378?$1300_1038_PNG$",
      Name: "MI watch",
      price: 1500,
      qty: 15,
    },
    {
      SNO: "2",
      Image:
        "https://images.samsung.com/is/image/samsung/p6pim/in/2108/gallery/in-galaxy-watch4-398879-sm-r870nzgainu-481111378?$1300_1038_PNG$",
      Name: "Boat watch",
      price: 2700,
      qty: 1,
    },
    {
      SNO: "3",
      Image:
        "https://images.samsung.com/is/image/samsung/p6pim/in/2108/gallery/in-galaxy-watch4-398879-sm-r870nzgainu-481111378?$1300_1038_PNG$",
      Name: "FastTrack watch",
      price: 1300,
      qty: 3,
    },
    {
      SNO: "4",
      Image:
        "https://images.samsung.com/is/image/samsung/p6pim/in/2108/gallery/in-galaxy-watch4-398879-sm-r870nzgainu-481111378?$1300_1038_PNG$",
      Name: "Samsung watch",
      price: 1800,
      qty: 11,
    },
    {
      SNO: "5",
      Image:
        "https://images.samsung.com/is/image/samsung/p6pim/in/2108/gallery/in-galaxy-watch4-398879-sm-r870nzgainu-481111378?$1300_1038_PNG$",
      Name: "Apple watch",
      price: 3000,
      qty: 0,
    },
  ];
  const [data, setData] = useState(Array);
  return (
    <>
      {data.map((eachelement, index) => {
        const { SNO, Name, price, qty } = eachelement;
        return (
          <>
            <div className="p-5">
              <Table striped bordered hover size="sm">
                <thead>
                  <tr>
                    <th>id</th>
                    <th>Image</th>
                    <th> Name</th>
                    <th>price</th>
                    <th>quantity</th>
                    <th>total</th>
                  </tr>
                </thead>
                <tbody>
                  <tr>
                    <td>{SNO}</td>
                    <td>
                      <img src={picture} />
                    </td>
                    <td>{Name}</td>
                    <td>{price}</td>
                    <td>{qty}</td>
                  </tr>
                </tbody>
              </Table>
            </div>
          </>
        );
      })}
    </>
  );
};
export default Products;
