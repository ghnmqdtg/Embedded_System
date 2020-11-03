# The PONG Game
## Rules
1. The ball
    
    Define a 2D point structure containing two floating point numbers x and y to represent position and speed.
    * 10 speed modes: 10ms to 100ms (default value: 5)
    * random serve angle (use random function or read the tail number of timer)
        
2. Grid:
    * Point counter in the middle of the screen
    * Set two paddles in both sides of the screen.
        * length: 60px
        * width: 5px
        * padding: 30px
    * The ball can rebound when meet the top and bottom of the screen.
    * LCD-TFT: 480 x 272px

## Programming
The Algorithm

- Main Loop 
    - User Input
        1. Finger position
        2. Finger click

    - Logic
        1. Take the current 2D position and add the 2D speed.
            
            Ex: position.x = position.x + speed.x * elapsedtime (set by user)

        2. Check the Y of the ball to detect when the ball hits the top and bottom of the screen:
            (If the (0, 0) is on the top-left corner)
            * If the Y is **lower** than the radius of the ball, change the Y part of the speed into positive.
            * If the Y is **higher** than the screen's Y resolution(272px) - radius of the ball, change the Y part of the speed into negative.
        3. Paddle position:
            
            Take the Y position of the player's finger and set the Y position of the paddle to that.
        
        4. Ball bounce on one of the paddles:
            
            We only bounce the ball if it hits the paddle, so check the Y of the ball is inside the paddle extremities between Y and Y+60px. And the X position of it should be 0+30px for the left one and 480-30px for the right one.
        
        5. Player losses:
            
            Check if the ball goes outside the screen on X axis.

    - Drawing
        1. The ball
        2. Two paddles