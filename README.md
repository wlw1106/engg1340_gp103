# Sudoku in C++ (ENGG1340 Group 103)
> [!Caution]
> Please clean all function files before committing.

> [!Warning]
> Make sure to pull the latest file to edit.

<h3>Team Members (Group 103)</h3>
<ul><li>Ching Chun Wing ( )</li>
<li>Kim Minjae ( )</li>
<li>Nie Hong ( )</li>
<li>Wong Lik Wai (3036222721)</li>
</ul>

<h3>Description</h3>
<p>Sudoku is a logic-based, combinatorial number-placement puzzle. In Sudoku, the objective is to fill a 9 × 9 grid with digits so that <b>each column, each row, and each of the nine 3 × 3 subgrids</b> contains all of the digits from 1 to 9.</p>
<p>In our game, you will randomly be given a game puzzle when you start. The level of difficulty will also vary with the choice of puzzle. The only way to win is to fill in all grids with 1 to 9 with the Sudoku rules.</p>
  
<h3>Code Requirement</h3>
<p>To fulfil the project requirement, our code has the following features:
<ul><li>Generation of random game sets or events<br>
  Our game puzzle is randomly generated from files 1-10.txt every time<br>
    <pre>srand(time(0));<br>int k = rand()%10+1;</pre></li>
</li>
  <li>Data structures for storing game status (e.g., arrays, STL containers)<br>
    We have used a 2-D int array to store our Sudoku puzzle<br>
    <pre>int sudoku[9][9] = {0}</pre></li>
  <li>Dynamic memory management (e.g., dynamic arrays, linked lists, STL containers)
  <br>
    We have used dynamic STL containers for storing our preset coordinate<br>
    <pre>vector<string> presetv;<br>if (count(presetv.begin(), presetv.end(), coordinate) > 0){ ... }</pre></li>
  <li>File input/output (e.g., for loading/saving game status)<br>
    We have used file 1-10.txt for inputting our game puzzle<br>
    <pre>ifstream fin;<br>char filename[6] = {char(k+48),'.','t','x','t'};<br>while (fin >> coordinate >> value){ ... }</pre></li>
  <li>Program codes in multiple files (recall separate compilation)<br>
    We have <code>check</code> (Compile from <code>check.h</code> & <code>check.cpp</code>) and <code>print</code> (Compile from <code>print.h</code> & <code>print.cpp</code>) for separate compilation<br>
    <pre>#include "print.h"<br>#include "check.h"
</pre></li></li>
  <li>Proper indentation and naming styles<br>We followed correct indentation and programming style for C++</li>
  <li>In-code documentation<br>We inserted comments and README for documentation</li>
</p></ul>

<h3>Quick Start</h3>
<p>To start the game, please make use of Makefile:
<pre>make main<br>./main</pre>
</p>
<p>Enter a coordinate and its value (Note: you cannot change our preset value!)<br>For example: Editing <b style="color: red">A3</b> be 6; Press ENTER and you will see the result:
<pre>    1 2 3   4 5 6   7 8 9
  + + + + + + + + + + + + +
A + 0 0 <b style="color: red">0</b> + 0 0 0 + 9 2 0 + A
B + 5 4 0 + 0 3 0 + 1 0 0 + B
C + 0 0 8 + 0 5 7 + 0 0 4 + C
  + + + + + + + + + + + + +
D + 0 5 0 + 0 8 0 + 0 0 3 + D
E + 9 0 3 + 0 4 6 + 8 0 0 + E
F + 1 0 0 + 3 0 0 + 0 4 0 + F
  + + + + + + + + + + + + +
G + 0 7 0 + 4 0 0 + 0 0 0 + G
H + 3 6 1 + 0 7 9 + 0 8 0 + H
I + 0 0 0 + 0 6 0 + 0 3 7 + I
  + + + + + + + + + + + + +
    1 2 3   4 5 6   7 8 9
Please enter the coordinate and its value: <b style="color: red">A3 6</b>
    1 2 3   4 5 6   7 8 9
  + + + + + + + + + + + + +
A + 0 0 <b style="color: red">6</b> + 0 0 0 + 9 2 0 + A
B + 5 4 0 + 0 3 0 + 1 0 0 + B
C + 0 0 8 + 0 5 7 + 0 0 4 + C
  + + + + + + + + + + + + +
D + 0 5 0 + 0 8 0 + 0 0 3 + D
E + 9 0 3 + 0 4 6 + 8 0 0 + E
F + 1 0 0 + 3 0 0 + 0 4 0 + F
  + + + + + + + + + + + + +
G + 0 7 0 + 4 0 0 + 0 0 0 + G
H + 3 6 1 + 0 7 9 + 0 8 0 + H
I + 0 0 0 + 0 6 0 + 0 3 7 + I
  + + + + + + + + + + + + +
    1 2 3   4 5 6   7 8 9
Please enter the coordinate and its value: C8 5
...</pre>
</p>
<p>To quit the game during any time after the game started, please type <b>q</b>:
<pre>...
Please enter the coordinate and its value: <b>q</b>
BYE!!</pre>
</p>
<p>You will receive the following command if you win the game:
<pre>You are WIN~
BYE!!</pre>
</p>
<p>You are recommended to clean the repo after you enjoy our game, use clean function in our Makefile:
<pre>make clean</pre>
</p>

<h3>Contribution</h3>
<ul><li>Ching Chun Wing (3035928823)
<p>Responsible for <code>checkwin()</code> function in check.cpp, the trailer, and creating files for puzzle input.</p></li>
<li>Kim Minjae ( )
<p><i>Please declare your own contribution here...</i></p></li>
<li>Nie Hong ( )
<p><i>Please declare your own contribution here...</i></p></li>
<li>Wong Lik Wai (3036222721)
<p>Responsible for main function code in main.cpp, <code>printv()</code> function in print.cpp and editing this README.MD file.</p></li>
