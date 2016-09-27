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
