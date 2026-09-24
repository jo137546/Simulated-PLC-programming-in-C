# Simulated-PLC-programming-in-C
The project will be a Mock PLC Runtime / Controller Simulator: a small C program that behaves like the execution core of a PLC.

The controller shall:

1. Store three digital inputs:
   START
   STOP
   ESTOP

2. Store two digital outputs:
   MOTOR
   ALARM

3. Execute repeatedly in a PLC-style scan loop.

4. MOTOR shall turn on when START is pressed.

5. MOTOR shall turn off when STOP is pressed.

6. ESTOP shall immediately force MOTOR off
   and turn ALARM on.

7. The controller shall print its I/O state
   after every scan.