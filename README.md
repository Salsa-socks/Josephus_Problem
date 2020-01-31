# Josephus_Problem
Josephus Problem Solver


Link to the riddle: https://youtu.be/uCsD3ZGzMgE

People are standing in a circle waiting to be executed. Counting begins at a specified point in the circle and proceeds around the circle in a specified direction. After a specified number of people are skipped, the next person is executed. The procedure is repeated with the remaining people, starting with the next person, going in the same direction and skipping the same number of people, until only one person remains, and is freed.

The problem — given the number of people, starting point, direction, and number to be skipped — is to choose the position in the initial circle to avoid execution.

Math Formula:
If there is an addition of x people to the circle, then the survivor is in the p + mx-th position if this is less than or equal to n + x. If x is the smallest value for which (p + mx) > (n + x), then the survivor is in position (p + mx) − (n + x).
