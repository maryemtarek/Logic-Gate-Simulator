# Logic-Gate-Simulator
A C++ Console Application that:  
-Uses OOP consepts.    
-Allow the user to build his own logic gate using And,OR,XOR gates.  
-He is able to see the values of nodes after Simulating the circuit.

## Input Format  
-Enter your input in a file called input.txt with the following format:  
gate_name input1_node_name input2_node_name  output_node_name  
SET gate_name gate_value  
SIM  
OUT gate_name  
#### Example:  
AND A B C  
OR X Y Z  
SET A 0  
SET B 1  
SET X 0  
SET Y 0  
SIM  
OUT C  
OUT Z  

