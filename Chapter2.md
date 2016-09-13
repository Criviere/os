#Chapter 2#

 ***

**Q 2.1:** What is the purpose of system calls?

  **Answer:**
  `A system call is a program that request a service from kernel of operating system. This may include services like accessing hard disk, executing and creating new processes and defines communication with kernel services like scheduling. These calls provide an interface between operating systems and a process.`

Purpose of system calls are given as follows:

  **Basic Purpose:** `Calls provide basic functionality to users to operate the operating system.`

  **Process Control:** `Systems call loads, execute and create processes and terminate when the user's task is finished with the process.`

  **File Management:** `It provides file management such as creating a file, deleting it, open, close, and save it. It also provides read, write and reposition functionalities`

  **Device Management:** `All hard disk are managed by system calls such as requesting for a device, releasing the device, reading and writing the device`

  **Information Maintenance:** `System calls help in making information maintenance such as get/set time or date, get/set data of system, processes, files or attributes of device.`

  **Communication between processes:** `Systems calls are use for Communication purpose as they help in creating and deleting communications, sending or receiving messages. They help in attaching or detaching remote devices and in transfer or status information.`

**Q 2.2:** What are the five major activities of an operating system with regard to process management?

* **Answer:**

  **Five activities of operating system with regard to the process management are given as follows:**

    1. `It helps in protecting the processes from deadlocks.`

    2. `It helps in providing mechanisms for communication between processes.`

    3. `It provides synchronization for multiple processes.`

    4. `It provides resumption and suspension of processes.`

    5. `It creates and deletes processes of both user processes and system processes.`

**Q 2.3:** What are the three major activities of an operating system with regard to memory management?

  * **Answer:**

**The three major activities of an operating system in connection with regard to memory management are:**

1. `Keep track of which parts of memory are currently being used and by whom.`

2. `Decide which processes are to be loaded into memory when memory space becomes available.`

3. `Allocate and de allocate memory space as needed.`

**Q 2.4:** What are the three major activities of an operating system with regard to secondary-storage management?

* **Answer:** Three important activities of operating system with regard to the secondary storage is given as follows:

    1. `It manages the free space available on the secondary storage media.`

    2. `Whenever a new file has to be written, it provides the storage space for it.`

    3. `It schedules the various requests for memory accesses.`

**Q 2.5:** What is the purpose of the command interpreter? Why is it usually separate from the kernel?

  * **Answer:** `The main function of command interpreter is to get and execute the next user-specified command. It reads commands from the user or from a file of commands and executes them, usually by turning them into one or more systems calls. It is usually not part of the kernel since the command interpreter is more subject to changes. The command interpreter allows a user to create and manage processes and also determine ways by which they communicate (such as through pipes and files). As all of this functionality could be accessed by a user-level program using the system calls, it should be possible for the user to develop a new command-line interpreter.`

  **Q 2.6:** What system calls have to be executed by a command interpreter or shell in order to start a new process?

  * **Answer:**

    * `The fork() system calls creates a new process. The new process will have the same address space of the process that executed the fork().`

    * `After execution of fork(), exec() has to be called by one of the two processes. The exec() system call loads the new program into memory.`

  **Q 2.7:** What is the purpose of system programs?

  * **Answer:**

    * `System programs are also known as system utilities`

    * `The system programs provide a convenient environment for development and execution of system programs.`

    * `A system program is a collection of many system calls and they provide basic functionality to users so that they can operate the system easily`

    * `These programs allow user level processes to use the services of operating system`

**Q 2.8: ** What is the main advantage of the layered approach to system design? What are the disadvantages of the layered approach?

* **Answer:**

  * `The main advantage of the layered approach is simplicity of construction and debugging.`

    **Some of the disadvantages or difficulties with layered approach are:**

     1. `The major difficulty with the layered approach involves careful definition of the layer, because a layer can use only those layers below it. For example, the device driver for the disk space used by virtual-memory algorithms must be a at a level lower than that of memory management routines, because memory management requires the ability to use the disk space.`

     2. `Another problem with layered implementations is that they tend to be less efficient than other types. For instance, when a user program executes and I/O operation, it executes a system call that is trapped to the I/O layer, which calls memory management layer, which in turn calls the CPU-scheduling layer, which is then passed to the hardware. At each layer, the parameters may be modified; data may need to be passed, and so on. Each layer adds overhead to the system call, results in layered system takes longer time to execute system call than the non layered system`

 **Q 2.9:** List five services provided by an operating system, and explain how each creates convenience for users. In which cases would it be impossible for user-level programs to provide these services? Explain your answer.

  **Answer:**

  **Five services provided by the operated system are given as follows:**

    1. `Program execution`
    2. `I/O operations`
    3. `File-system manipulation`
    4. `Communications`
    5. `Error detection`

    Program Exection:

      * `It allows the user to execute programs by providing convenient environment for development and execution of programs.`

      * `A user level program cannot properly allocate CPU time.`

    I/O Operations:

      * `Every program may require some input/output such as a file or an I/O device.`

      * `The operating system provides an environment to handle I/O operations.`

      * `A user level program cannot control the I/O devices directly. For some I/O devices, special functions are necessary.`

    File-system manipulation:

      * `All task related to files such as creating a file, deleting a file, reading a file, writing to a file, etc. are handle by the operating system.`

      * `A user need not to know the details of secondary storage system. All a user can see is that his task is accomplished.`

      * `User made programs cannot be made to allocate free blocks when available and deallocate the blocks after deletion.`

    Communications:

      * `There are times when a process needs to communicate with other process. All this is taken care by operating system.`

      * `Communication takes place in the form of data packets and they need access to the network device but user level programs cannot provide that.`

  **Q 2.15:** What are the five major activities of an operating system with regard to file management?

**Answer:**

  * `Creation and deletion of files.`

  * `Creation and deletion of directories.`

  * `Supporting primitives for manipulating files and directories.`

  * `Mapping the files onto secondary storage.`

  * `Backing up files on nonvolatile storage media.`

  **Q 2.18:** What are the two models of interprocess communication? What are the strengths and weaknesses of the two approaches?

    **Answer:**

    * Message - passing model:

      * `In this, the communicating processes exchange messages with one another to transfer information. Messages can be exchanged between the processes either directly or indirectly through a common mail box. Message passing is useful for exchanging smaller amounts of data, because no conflicts need to be avoided. It is also easier to implement than is shared memory for inter computer communication. But the main advantage is it can handle only small amounts of data.`

    * Shared - Memory mode:

        * `In this, processes use shared memory creates and shared memory attaches system calls to create and gain access to regions of memory owned by other processes. Two or more processes can exchange information by reading and writing data in the shared areas. Shared memory allows maximum speed and convenience of communication, since it can be done at memory speeds when it takes place within a computer. Problem exist, however, in the areas of protection and synchronization between the processes sharing memory.`


  **Q 2.19:** Why is the separation of mechanism and policy desirable?

  * **Answer:**

      * `Mechanism determines how to do something and policy means what to do. The separation of policy and mechanism is very important for flexibility. In worst-case, each change in policy would require a change in the underlying mechanism. A general mechanism insensitive to change in policy would be more desirable.`

      * `Policy may change with respect to time. If the mechanism is separated and policy is independent, it can be used to support a policy decision that I/O intensive programs should have priority over CPU-intensive ones or to support the opposite policy.`

**Q 2.21:** What is the main advantage of the microkernel approach to system design? How do user programs and system services interact in a microkernel architecture? What are the disadvantages of using the microkernel approach?

* **Answer:**

    * **Part 1:** `The backing - store driver would normally be above the CPU scheduler, because the driver may need to wait for I/O and CPU can be rescheduled during this time. However on large system, the CPU scheduler may have more information about all the active processes that can fit in memory. Therefore, this information may need to be swapped in and out of memory, requiring the backing-store driver routine to be be below the CPU schedule.`

    * **Part 2:** `When a user program executes and I/O operation, it executes an I/O operation, it executes a system call that is trapped to the I/O layer, which calls the memory management layer, which in turn calls the CPU -scheduling layer, which is then passed to hardware. At each layer parameter may be modified, data may need to be passed and so on. Each layer adds overhead to system call, the net result is a system call that takes longer than does one on a non layered system.`

    `The layers are designed, providing most of the advantages of modularized code while avoiding difficult problems of layer definition and interaction.`

**Q 2.22:** What are the advantages of using loadable kernel modules?

**Answer:**

  * `An OS has been developed called Mach that modularized the kernel using the microkernel approach. This method structures the OS by removing all non-essential components from the kernel and implementing them as system and user-level program. Micro kernel provides minimal process and memory management with communication facility. The communication is done indirectly via the method called Message passing.`

  * `All new services are added to user space and consequently do not require modification of the kernel. Micro kernel provides more security and reliability, since most services are running as user rather than kernel.`
