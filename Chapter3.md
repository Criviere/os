#Chapter 3#
***

**Q 3.3:** Original versions of Apple’s mobile iOS operating system provided no means of concurrent processing. Discuss three major complications that concurrent processing adds to an operating system.

  **Answer:**

  * Concurrent Systems:

    * `Concurrent systems are those which support the concept of executing more than one applications or processes at the same time. Here the processes running can be either a duplicate of each other or simply two different processes in all.`

    * `The main motive behind going for concurrency lies beneath reducing the overall execution time that may be required in executing a series of processes individually.`

  * Complications with Concurrency:

    Concurrency may reduce the overall processing time for some situations, but it has few of its complications as well. Three major complications that concurrency adds to an operating system are as follows:

      * `As multiple processes are concurrently running on the system, the operating system requires keeping track of all the storage space addressed on main memory to prevent on process from mixing with another or using the information stored for any other running process.`

      * `Context switching between two simultaneous processes requires enough time to locate and maintain register values for program running. A continuos communication between operating system and program control block may overload the system.`

      * `Process that requires big data blocks for execution may enter deadlocks
      in wait of getting resources freed up by other processes.`

  **Q 3.4:** The Sun UltraSPARC processor has multiple register sets. Describe what happens when a context switch occurs if the new context is already loaded into one of the register sets. What happens if the new context is in memory rather than in a register set and all the register sets are in use?

  * **Answer:**

  `Context switch time pure overhead, because system does no useful work while switching. Context switch times are highly dependent on hardware support. In Sun Ultra SPARC, context switch simply requires the CPU current-register-set pointer is changed to the register set containing the new context, which takes very little time.`

  `If the new context is in memory rather than register set and all the register sets are in use, then one of the contexts in a register set must be chosen and be moved to memory, and the new context must be loaded from memory into the set. This process takes a little more time than on systems with new context is already on one of the register set.`


  **Q 3.5:** When a process creates a new process using the fork() operation, which of the following states is shared between the parent process and the child process?

  a. Stack

  b. Heap

  c. Shared memory segments

  * **Answer: **

    ** Part 1:**

      * `When a process uses the fork() to create a new process, all the new processes corresponding to the parent process are created and loaded into a separate memory location for the child process by the operating system. The parent process and the newly created child process only share the shared memory segments.`

      `Therefore, the correct answer is C) Shared memory segments.`

    **Part 2:**

      * `Stacks and heads are not shared by these procceses. Instead, new copies of the stack and the head are made for the newly created process, when a process tries to write into these. There, the option "A" and "B" are incorrect.`

    **Q 3.8:** Describe the differences among short-term, medium-term, and longterm scheduling.
    * **Answer:**

    * `Short-term scheduling is also called as CPU Scheduling. It selects among the processes that are ready to execute and allocates the CPU to one of them. It selects a new process for the CPU frequently. It executes at least once in ever 100 milliseconds. Hence it is fast`

    * `Medium-term scheduling is having advantage to remove processes from memory and thus reduce the degree of multiprogramming. The process can be reintroduced into the memory, and its execution can be continued where it left off. This method is called swapping. This is done by medium-term scheduler.`

        * `Long -term scheduling is also called as job scheduling. It selects processes from this pool and loads them into memory for execution. Long-term scheduler executes much less frequently. It also controls degree of multi programming. It select a good process mix of I/O bound and CPU-bound process.`

      **Q 3.9:** Describe the actions taken by a kernel to context-switch between processes.

        * **Answer:**

          * The process of context switching between the processes is accomplished by the kernel.

          This process is performed as follows:

          1. `In reply to the clock interrupt, Operating System stores the value of the Program Counter and the user Stack Pointer of the presently implementing process, and handovers charge to the kernel clock interrupt handler.`

          2. `The clock interrupt handler hold back the remaining registers, along with other machine status such the status of the floating point registers in the Proess Control Block of the process.`

          3. `The Operating System call upon the scheduler to decide the next process that has to be implemented.`

          4. `The Operating System takes the status of the next process from its Process Control Block and fix up the registers. This restore task takes the processor back to the state in which the process was earlier interrupted, implementing in user code with user mode privileges.`

      **Q 3.15:** Give an example of a situation in which ordinary pipes are more suitable than named pipes and an example of a situation in which named pipes are more suitable than ordinary pipes.

      **Answer:**

      **Part 1:**

      **In the following situation ordinary pipes are more suitable than named pipes.**

      * `If we want to establish communication between two specific processes on the same machine, then using ordinary pipes is more suitable than using named pipes because named pipes involve more overhead in this situation.`

      * `In the situation, where we will not allow access to our pipe after the communication is finished between processes using ordinary pipes is more suitable than named pipes.`

     **Part 2:**

     **In the following situations named pipes are more suitable than ordinary pipes.**

     * `Named pipes are more suitable than ordinary pipes when the medium is bidirectional, and there is no parent child relationship between processes.`

     * `Named pipes are more suitable than ordinary pipes in situations where we want to communicate over a network rather than communicating with the processes reside on the same machine.`

     * `Named pipes can be used to listen to request from other processes (similar to TCP/IP ports). If the calling proceses are aware of the name, they can send requests to this. Unnamed pipes cannot be used for this purpose.`

      **3.18** What are the benefits and the disadvantages of each of the following?
Consider both the system level and the programmer level.
a. Synchronous and asynchronous communication
b. Automatic and explicit buffering
c. Send by copy and send by reference
d. Fixed-sized and variable-sized messages

    **Answer:**

      **Part 1:**

      a. **Synchrnous and asynchronous communication:**

      * `A benefit of symmetric communication is that it allows a rendezvous between the sender and receiver.`
        `At the programmer level, neither process has to block its execution which can result in better performance.`

        **Part 2:**

      * `The disadvantage of asymmetric communication is that, blocking send is a rendezvous and may not be required and the message could be delivered asynchronously and received at a point of no interest to the sender. As a result, message-passing systems often provide both forms of synchronization.`

      *  `And it is more difficult to program since the programmer must guarantee that the message arrive at the receiver when it is needed. At the system level, asymmetric is more complicated since it requires kernel-level buffering.`

    **Part 3:**

    b. **Automatic and explicit buffering:**

    * `Automatic buffering provides a queue with indefinite length. Thus ensuring that the sender will never have to block while waiting to copy a message. There are no specifications how auto matic buffering will be provided. One schema may reserve sufficiently large memory where much of the memory is wasted.`

    * `Explicit buffering specifies how large the bugger is. In this situation, the sender may be blocked while waiting for available space in the queue. However, it is less likely that memory will be wasted in explicit buffering.`

    c. **Send by copy and send by reference:**

      * `Send by copy is better for network generalization and synchronization issues. It does not allow the receiver to alter the state of the parameter, but send by reference allows it. Send by reference is more efficient for big data structures but hard to code because it allows the programmer to write a distributed version of a centralized application (shared memory implications)`

      **EX:**
      * `Java's RMI (Remote Method Invocation) provides passing a parameter by reference and requires declaring the parameter as a remote object as well.`

      **Part 5:**

      d. Fixed-sized and variable sized messages:

      * `The implications of this are mostly related to buffering issues with fixed-size messages (a buffer with a specific size can hold a known number of messages). Fixed-Sized messages are easier to implement at the kernel-level but require slightly more effort on the part of the programmer.`

      * `Variable sized messages are somewhat more complex for the kernel but somewhat easier for the programmer. The number of variable-sized messages that can be held by such a buffer is unknown.`

      Example:
      `Windows 2000 handles this situation with fixed-sized messages (anything < 256 bytes), the mesages are copied from the address space of the sender to the address space of the receiving process. Larger messages use shared memory to pass the message.`
