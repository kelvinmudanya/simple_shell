<h1 class="gap"> Project Simple Shell </h1>

<p> In this project, we must write a simple UNIX command interpreter using C language, similar to the UNIX shell. This will be our final project of the first trimestrer at Holberton School </p>

<p><img src="https://www.entreprises-magazine.com/wp-content/uploads/2020/05/Holberton-School-696x385.jpg" alt="" style="" /></p>

<h2>Learning Objectives</h2>
<p> At the end of this project, we are expected to be able to explain to anyone, <strong> whitout the help of Google </strong>:</p>

<h3>General</h3>

<ul>
<li>Who designed and implemented the original Unix operating system</li>
<li>Who wrote the first version of the UNIX shell</li>
<li>Who invented the B programming language (the direct predecessor to the C programming language)</li>
<li>Who is Ken Thompson</li>
<li>How does a shell work</li>
<li>What is a pid and a ppid</li>
<li>How to manipulate the environment of the current process</li>
<li>What is the difference between a function and a system call</li>
<li>How to create processes</li>
<li>What are the three prototypes of <code>main</code></li>
<li>How does the shell use the <code>PATH</code> to find the programs</li>
<li>How to execute another program with the <code>execve</code> system call</li>
<li>How to suspend the execution of a process until one of its children terminates</li>
<li>What is <code>EOF</code> / &ldquo;end-of-file&rdquo;?</li>
</ul>

<h2>Requirements and Use</h2>

<h3>General</h3>
<ul>
<li>The allowed editors for this project are: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All the files will be compiled on Ubuntu 14.04 LTS</li>
<li>The C programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Our code is verified using the <code>Betty</code> style. It is checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>The created shell should not have any memory leaks</li>
<li>Is not allowed to use more than 5 functions per file</li>
<li>All the header files are include guarded</li>
</ul>

<h2>More Info</h2>

<h3>List of allowed functions and system calls to create the shell</h3>

<ul>
<li><code>access</code> (man 2 access)</li>
<li><code>chdir</code> (man 2 chdir)</li>
<li><code>close</code> (man 2 close)</li>
<li><code>closedir</code> (man 3 closedir)</li>
<li><code>execve</code> (man 2 execve)</li>
<li><code>exit</code> (man 3 exit)</li>
<li><code>_exit</code> (man 2 _exit)</li>
<li><code>fflush</code> (man 3 fflush)</li>
<li><code>fork</code> (man 2 fork)</li>
<li><code>free</code> (man 3 free)</li>
<li><code>getcwd</code> (man 3 getcwd)</li>
<li><code>getline</code> (man 3 getline)</li>
<li><code>isatty</code> (man 3 isatty)</li>
<li><code>kill</code> (man 2 kill)</li>
<li><code>malloc</code> (man 3 malloc)</li>
<li><code>open</code> (man 2 open)</li>
<li><code>opendir</code> (man 3 opendir)</li>
<li><code>perror</code> (man 3 perror)</li>
<li><code>read</code> (man 2 read)</li>
<li><code>readdir</code> (man 3 readdir)</li>
<li><code>signal</code> (man 2 signal)</li>
<li><code>stat</code> (__xstat) (man 2 stat)</li>
<li><code>lstat</code> (__lxstat) (man 2 lstat)</li>
<li><code>fstat</code> (__fxstat) (man 2 fstat)</li>
<li><code>strtok</code> (man 3 strtok)</li>
<li><code>wait</code> (man 2 wait)</li>
<li><code>waitpid</code> (man 2 waitpid)</li>
<li><code>wait3</code> (man 2 wait3)</li>
<li><code>wait4</code> (man 2 wait4)</li>
<li><code>write</code> (man 2 write)</li>
</ul>

<h3>Compilation</h3>

<p>Our shell will be compiled this way:</p>

<pre><code>gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
</code></pre>

<h3>Running</h3>

<p>Interactive mode:</p>

<pre><code>$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
</code></pre>

<p>Non-interactive mode:</p>

<pre><code>$ echo &quot;/bin/ls&quot; | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
</code></pre>


<h2 class="gap"> Development, task by task</h2>

<h4 class="task">
    0. README, man, AUTHORS
</h4>
<li>Write a <code>README</code></li>
<li>Write a <code>man</code> for your shell.</li>
<li>Write an <code>AUTHORS</code> file at the root of the repository, listing all individuals having contributed content to the repository.</li>
</ul>


<h4 class="task">
    1. Betty would be proud
  </h4>
<p>Write a beautiful code that passes the Betty checks</p>

<h4 class="task">
    2. Simple shell 0.1
  </h4>
<p>Write a UNIX command line interpreter.</p>

<ul>
<li>Usage: <code>simple_shell</code></li>
</ul>

<p>In this first level, our shell should:</p>

<ul>
<li>Display a prompt and wait for the user to type a command. A command line always ends with a new line.</li>
<li>The prompt is displayed again each time a command has been executed.</li>
<li>The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.</li>
<li>The command lines are made only of one word. No arguments will be passed to programs.</li>
<li>If an executable cannot be found, print an error message and display the prompt again.</li>
<li>Handle errors.</li>
<li>You have to handle the &ldquo;end of file&rdquo; condition (<code>Ctrl+D</code>)</li>
</ul>

<p>We don&rsquo;t have to:</p>

<ul>
<li>use the <code>PATH</code></li>
<li>implement built-ins</li>
<li>handle special characters : <code>&quot;</code>, <code>&#39;</code>, <code>`</code>, <code>\</code>, <code>*</code>, <code>&amp;</code>, <code>#</code></li>
<li>be able to move the cursor</li>
<li>handle commands with arguments</li>
</ul>

<p> Example:</p>

<pre><code>sofia&cristhian@vagrant:~/shell$ ./shell
#cisfun$ ls
./shell: No such file or directory
#cisfun$ /bin/ls
file_f       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ /bin/ls -l
./shell: No such file or directory
#cisfun$ ^[[D^[[D^[[D
./shell: No such file or directory
#cisfun$ ^[[C^[[C^[[C^[[C
./shell: No such file or directory
#cisfun$ exit
./shell: No such file or directory
#cisfun$ ^C
sofia&cristhian@vagrant:~/shell$ echo &quot;/bin/ls&quot; | ./shell
#cisfun$ file_f       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ sofia&cristhian@vagrant:~/shell$
</code></pre>

<h4 class="task">
    3. Simple shell 0.2
  </h4
<p>In this level our shell should:</p>

<ul>
<li>Handle command lines with arguments</li>
</ul>

  <h4 class="task">
    4. Simple shell 0.3
  </h4>
 <p>In this level our shell should:</p>
<ul>
<li>Handle the <code>PATH</code></li>
</ul>

<pre><code>sofia&cristhian@vagrant:~/shell$ ./shell
#cisfun$ /bin/ls
file_f       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
#cisfun$ ls
file_f       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
#cisfun$ ls -l /tmp
total 20
-rw------- 1 file file    0 Aug  12 12:09 config-err-aAMZrR
drwx------ 3 root   root   4096 Aug  12 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr
drwx------ 3 root   root   4096 Aug  12 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV
drwx------ 3 root   root   4096 Aug  12 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH
-rw-rw-r-- 1 file file     0 Aug  12 12:09 unity_support_test.0
#cisfun$ ^C
sofia&cristhian@vagrant:~/shell$
</code></pre>

 <h4 class="task">
    5. Simple shell 0.4
 </h4>

 <p>In this level, our shell should:</p>

<ul>
<li>Implement the <code>exit</code> built-in, that exits the shell</li>
<li>Usage: <code>exit</code></li>
<li>You don&rsquo;t have to handle any argument to the built-in <code>exit</code></li>
</ul>

 <h4 class="task">
    6. Simple shell 1.0
  </h4>
 <p>In this level, our shell should:</p>

<ul>
<li>Implement the <code>env</code> <strong>built-in</strong>, that prints the current environment</li>
</ul>

<h4 class="task">
    7. BLOG: What happens when you type ls -l in the shell
  </h4>

 <p>Write a blog post describing step by step what happens when you type <code>ls -l</code> and hit Enter in a shell.
Try to explain every step you know of, going in as much details as you can, give examples and draw diagrams when needed.
You should merge your previous knowledge of the shell with the specifics of how it works under the hoods (including syscalls).</p>

<ul>
<li>Have at least one picture, at the top of the blog post</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on LinkedIn</li>
<li>Only one blog post by team</li>
<li>The blog post must be done and published before the first deadline (it will be part of the manual review)</li>
<li>Please, remember that these blogs must be written in English to further your technical ability in a variety of settings</li>
</ul>

<h2 class="gap"> Authors </h2>
<p> Cristhian Carbonell - <strong>GitHub</strong> <a href="https://github.com/Cristhian-Carbonell">Cristhian-Carbonell</a></p>
<p> Diana Sofía García - <strong>GitHub</strong> <a href="https://github.com/Sofiag8">Sofiag8</a></p>