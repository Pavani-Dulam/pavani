import { Card, Button } from "react-bootstrap";
import React from "react";
import pic1 from "../assests/bank.jpg";
import pic2 from "../assests/p3.jpg";
import pic3 from "../assests/p1.jpg";
import pic4 from "../assests/p2.jpg";
import "./Bank.css";
function Bank() {
  const hi = () => {
    document.write("hi");
  };
  return (
    <>
        <div className="App">
          <Card className="card"> 
            <Card.Img className="bank" variant="top" src={pic1} />
            <Card.Body>
              <Card.Title>Paris</Card.Title>
              <Card.Text>
                Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras
                vitae molestie magna. Vivamus sed molestie enim, eu convallis
                mauris. Aliquam pharetra velit ac enim maximus, a commodo augue
                hendrerit. Phasellus at aliquam est
              </Card.Text>
              <Button variant="primary" onClick={hi}>
                Read More
              </Button>
            </Card.Body>
          </Card>
          <Card className="card">
            <Card.Img className="bank" variant="top" src={pic2} />
            <Card.Body>
              <Card.Title>indonesia</Card.Title>
              <Card.Text>
                Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras
                vitae molestie magna. Vivamus sed molestie enim, eu convallis
                mauris. Aliquam pharetra velit ac enim maximus, a commodo augue
                hendrerit. Phasellus at aliquam est
              </Card.Text>
              <Button variant="primary">Read More</Button>
            </Card.Body>
          </Card>
          <Card className="card">
            <Card.Img className="bank" variant="top" src={pic3} />
            <Card.Body>
              <Card.Title>Malaysia</Card.Title>
              <Card.Text>
                Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras
                vitae molestie magna. Vivamus sed molestie enim, eu convallis
                mauris. Aliquam pharetra velit ac enim maximus, a commodo augue
                hendrerit. Phasellus at aliquam est
              </Card.Text>
              <Button variant="primary">Read More</Button>
            </Card.Body>
          </Card>
          <Card className="card">
            <Card.Img className="bank" variant="top" src={pic4} />
            <Card.Body>
              <Card.Title>Bangkok</Card.Title>
              <Card.Text>
                Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras
                vitae molestie magna. Vivamus sed molestie enim, eu convallis
                mauris. Aliquam pharetra velit ac enim maximus, a commodo augue
                hendrerit. Phasellus at aliquam est
              </Card.Text>
              <Button variant="primary">Read More</Button>
            </Card.Body>
          </Card>
        </div>
      
    </>
  );
}
export default Bank;
