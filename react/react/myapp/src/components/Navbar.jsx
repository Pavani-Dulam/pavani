import Nav from "react-bootstrap/Nav";
import "./Bank.css";
function Navbar() {
  return (
    <>
      <Nav className="just" activeKey="/home">
        <Nav.Item>
          <Nav.Link href="/home" className="a">Paris</Nav.Link>
        </Nav.Item>
        <Nav.Item>
          <Nav.Link eventKey="link-1">Indonesia</Nav.Link>
        </Nav.Item>
        <Nav.Item>
          <Nav.Link eventKey="link-2">Malaysia</Nav.Link>
        </Nav.Item>
        <Nav.Item>
          <Nav.Link eventKey="link-3">Paris</Nav.Link>
        </Nav.Item>
      </Nav>
    </>
  );
}
export default Navbar;
