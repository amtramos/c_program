/* ---------------------------------------------------------------------------- */
/* ------------------------ VER 1.0 (14/02/2014) ------------------------------ */
/* ---------------- This program calculate the logistic map ------------------- */
/* ---------------------------------------------------------------------------- */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int 	t,
	n,
	T=200;

double 	xnew,
	xold,
	xplot[],
	r,
	Rmax=4.0;

for(r=0.0;r<Rmax;r=r+0.1)
  for(t=0;t<T;t++)
    {
      xnew = r*xold*(1-xold);			//define the logistic map
      xold=xnew;
      if(t>(T/2))				//despise the gradient regime
	{
	  xini=xnew;
	  xnew=0;
	  while(xnew!=xini)			//
	    {
	      xplot[n]
	    }
	}

    }


}
