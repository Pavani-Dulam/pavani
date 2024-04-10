import React from "react";
import { Routes, Route ,Link} from "react-router-dom";
import "./App.css";
import Employee from "./components/Employee";
import Empcls from "./components/Empcls";
import Bank from "./components/Bank";
import Flex1 from "./components/Flex1";
import Flex2 from "./components/Flex2";
import Flex3 from "./components/Flex3";
import Flex4 from "./components/Flex4";
import Counter from "./components/Counter";
import Objects from "./components/Objects";
import Form from "./components/Form";
import Registration from "./components/Registration";
import Barchart from "./components/Barchart";
import Products from "./components/products";
function App() {
  return (
    <>
       <nav>
        <span id="unique">
          <p><Link to="/">Home</Link></p>
          <p><Link to="/Bank">Bank</Link></p>
          <p><Link to="/Empcls">Employee class</Link></p>
          <p><Link to="/Employee">Employee functional</Link></p>
          <p><Link to="/Flex1">Flex1</Link></p>
          <p><Link to="/Flex2">Flex2</Link></p>
          <p><Link to="/Flex3">Flex3</Link></p>
          <p><Link to="/Flex4">Flex4</Link></p>
          <p><Link to="/Counter">Counter</Link></p>
          <p><Link to="/Objects">Objects</Link></p>
          <p><Link to="/Form">Form</Link></p>
          <p><Link to="/Registration">Registration</Link></p>
          <p><Link to="/Barchart">Barchart</Link></p>
          <p><Link to="/Products">Products</Link></p>
  
        </span>
       </nav>
      <Routes>
        <Route path="/Bank" element={<Bank />} />
        <Route path="/Empcls" element={<Empcls />} />
        <Route path="/Employee" element={<Employee />} />
        <Route path="/Flex1" element={<Flex1 />} />
        <Route path="/Flex2" element={<Flex2 />} />
        <Route path="/Flex3" element={<Flex3 />} />
        <Route path="/Flex4" element={<Flex4 />} />
        <Route path="/Counter" element={<Counter/>}/>
        <Route path="/Objects"element={<Objects/>}/>
        <Route path="/Form" element={<Form/>}/>
        <Route path="/Registration"element={<Registration/>}/>
        <Route path="/Barchart" element={<Barchart/>}/>
        <Route path="/Products" element={<Products/>}/>
      </Routes>
    </>
  );
}
export default App;
