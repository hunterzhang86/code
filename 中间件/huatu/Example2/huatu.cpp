  #include "matlib.h"
  #pragma hdrstop
  
  #include "huatu.h"
  
  
  Mm huatu(Mm x1, Mm x2, i_o_t, Mm& X1__o, Mm& Y1__o) {
    begin_scope
    x1.setname("x1"); x2.setname("x2"); 
    dMm(X1); dMm(Y1); dMm(x); dMm(y); 
    
    #line 1 "e:/code/中间件/huatu/huatu.m"
    call_stack_begin;
    #line 1 "e:/code/中间件/huatu/huatu.m"
    // nargin, nargout entry code
    double old_nargin=nargin_val; if (!nargin_set) nargin_val=2.0;
    nargin_set=0;
    double old_nargout=nargout_val; if (!nargout_set) nargout_val=2.0;
    nargout_set=0;
    
    // translated code
    
    #line 2 "e:/code/中间件/huatu/huatu.m"
_   x = colon(x1,0.1,x2);
    #line 3 "e:/code/中间件/huatu/huatu.m"
_   y = sin(x);
    #line 4 "e:/code/中间件/huatu/huatu.m"
_   X1 = rand(1.0);
    #line 5 "e:/code/中间件/huatu/huatu.m"
_   Y1 = rand(1.0);
    #line 6 "e:/code/中间件/huatu/huatu.m"
_   plot((CL(x),y,X1,Y1,TM("*")));
    
    call_stack_end;
    
    // nargin, nargout exit code
    nargin_val=old_nargin; nargout_val=old_nargout;
    
    // function exit code
    x1.setname(NULL); x2.setname(NULL); 
    X1__o=X1; Y1__o=Y1; 
    return x_M;
    end_scope
  }
  
  
  Mm huatu(Mm x1, Mm x2) {
    begin_scope
    double old_nargin=nargin_val; nargin_val=2.0; nargin_set=1;
    double old_nargout=nargout_val; nargout_val=1.0; nargout_set=1;
    dMm(X1__o); dMm(Y1__o); 
    huatu(x1, x2, i_o, X1__o, Y1__o);
    nargout_val=old_nargout;
    nargin_val=old_nargin;
    return(X1__o);
    end_scope
  }
  
