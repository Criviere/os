5.21 Servers can be designed to limit the number of open connections. For
example, a server may wish to have only N socket connections at any
point in time. As soon as N connections are made, the server will
not accept another incoming connection until an existing connection
is released. Explain how semaphores can be used by a server to limit the
number of concurrent connections.

**Answer:**

`The main disadvantage of mutual exclusion is that they require all process to be bust waiting. Busy waiting wastes CPU cycle so-that other process do not use it. A semaphore that product this result is called spinlock because the process "Spin" while waiting for lock. The main advantage of spin lock is that no context switch is required when a process must wait on a lock and context switch takes much time. Hence spinlock is useful for short locks. They are often used in multiprocessor system where one thread spin while other thread perform its critical section.`

`The process instead of busy waiting, blocks itself, this block operation places process into waiting state. Then the control is transferred to CPU scheduler which selects another process to exit. The process is then restarted and placement in ready of none. The CPU may not be switched from running process to ready process depending upon CPU scheduling algorithm.`

`Semaphores can be used by a server to limit the number of concurrent connections. This can be accomplished by initializing the semaphore 'availableConn' to a value 'N'. When a new connection is opened, the semaphore value should be decremented by executing P (availableConn) to decrement the value of currently available connections.
Similarly, when one connection is closed, then V(availableConn) can be executed indicating that there is one more socket available for a connection.`

5.20
Consider the code example for allocating and releasing processes shown in Figure 5.23.
a. Identify the race condition(s).
b. Assume you have a mutex lock named mutex with the operations
acquire() and release(). Indicate where the locking needs to
be placed to prevent the race condition(s).
c. Could we replace the integer variable
int number of processes = 0
with the atomic integer
atomic t number of processes = 0
to prevent the race condition(s)?

**Answer:**

`Where many processes receive and modify the same data simultaneously and outcome of the program based on the sequence in which they are accessed is known as race condition.`

`The given code illustrates only one race condition; that is on the variable 'number_of_processes'. The piece of code that illustrates the same is given below:`

`if (number_of_processes == MAX_PROCESSES)
      return -1;
else
{
    ++number_of_processes;
    Return new_pid;
}

Hence, only one race condition is observed in the program code that is on the variable number_of_processes.`


`b.

If we have a mutex lock in the given program, with acquire() and release() operations; the programmer needs to place the two operations at the very first and end of a function call respectively. The acquire() function should be placed in the beginning of function call. Whereas, release() operation call should be placed just before the end of function call.`
