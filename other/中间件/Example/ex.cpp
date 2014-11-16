  #include "matlib.h"
  #pragma hdrstop
  
  #include "ex.h"
  
  
  Mm ex() {
    begin_scope
    #line 1 "d:/matcom45/ex.m"
    call_stack_begin;
    #line 1 "d:/matcom45/ex.m"
    // nargin, nargout entry code
    double old_nargin=nargin_val; if (!nargin_set) nargin_val=0.0;
    nargin_set=0;
    double old_nargout=nargout_val; if (!nargout_set) nargout_val=0.0;
    nargout_set=0;
    
    // translated code
    
    #line 2 "d:/matcom45/ex.m"
_   subplot(121.0);
    #line 3 "d:/matcom45/ex.m"
_   surf((CL(peaks(25.0))));
    #line 4 "d:/matcom45/ex.m"
_   subplot(122.0);
    #line 5 "d:/matcom45/ex.m"
_   pcolor((CL(peaks(25.0))));
    
    call_stack_end;
    
    // nargin, nargout exit code
    nargin_val=old_nargin; nargout_val=old_nargout;
    
    // function exit code
    
    return x_M;
    end_scope
  }
  
  
