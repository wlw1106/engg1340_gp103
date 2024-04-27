# Sudoku in C++ (ENGG1340 Group 103)
<p>Makefile is ready for use, please type in the following command for testing:
<pre>make main<br>./main</pre>
</p>
<p>To quit the game, please type:
<pre>q</pre>
</p>
<p>To clean the repo, please type:
<pre>make clean</pre>
</p>

> [!Caution]
> Please clean all function files before committing.

<h3>Code Requirement</h3>
<p>To fulfil the project requirement, our code has the following features:
<ul><li>Generation of random game sets or events<br>
  Our game puzzle is randomly generated from files 1-10.txt every time<br>
    <pre>srand(time(0));<br>int k = rand()%10+1;</pre></li>
</li>
  <li>Data structures for storing game status (e.g., arrays, STL containers)<br>
    We have used a 2-D int array to store our Sudoku puzzle<br>
    <pre>int sudoku[9][9] = {0}</pre></li>
  <li><b>[!! We are missing this]</b> Dynamic memory management (e.g., dynamic arrays, linked lists, STL containers)</li>
  <li>File input/output (e.g., for loading/saving game status)<br>
    We have used file 1-10.txt for inputting our game puzzle<br>
    <pre>ifstream fin;<br>char filename[6] = {char(k+48),'.','t','x','t'};<br>while (fin >> coordinate >> value){ ... }</pre></li>
  <li>Program codes in multiple files (recall separate compilation)<br>
    We have <code>check</code> (Compile from <code>check.h</code> & <code>check.cpp</code>) and <code>print</code> (Compile from <code>print.h</code> & <code>print.cpp</code>) for separate compilation<br>
    <pre>#include "print.h"<br>#include "check.h"
</pre></li></li>
  <li>Proper indentation and naming styles<br>We followed correct indentation and programming style for C++</li>
  <li>In-code documentation<br>We inserted comments and README for documentation</li>
</p>
