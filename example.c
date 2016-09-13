// Camilo Riviere COP 4610

// PSEUDOCODE



typedef struct{

  int sum;

  Mutex mcheck_cores;

  Mutex sumL;

  int completed;

  int running;

  double average;

  Condition cond_cores;

  int R;

  int C;

} Global_Variables;



Global_Variables G;



// Have to get number of cores M with system call to linux.



// R = number of rows

// C = number of columns

// R = C



Mutex_Lock;

Mutex_trgLock;

Mutex_unlock;



Condition_wait;

Condition_wait_timeout;

Condition_signal;

Condition_signal_all;



thread(tid, NULL, fucntion(), parameter);



// nethod for sum



void * sum(void * arg){

  int * p = (int*) arg;

  int sum = 0;

  Mutex_Lock(G.mcheck_cores);

  if(G.running > M){

    Condition_wait(G.cond_cores);

    G.running++;

  }

  Mutex_unlock(G.mcheck_cores);

  int i;

  for(i=0; i<G.C; ++i){

    sum += P[i];

  }

  Mutex_Lock(G.sumL);

  G.sum += sum;

  Mutex_unlock(G.sumL);

  Mutex_Lock(G.mcheck_cores);

    G.running--;

    G.completed++;

    Mutex_unlock(G.mcheck_cores);

  Condition_signal(G.mcheck_cores);

  return null;

}
