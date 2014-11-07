function [X1,Y1]=huatu(x1,x2)
x=x1:0.1:x2;
y=sin(x);
X1=rand(1);
Y1=rand(1);
plot(x,y,X1,Y1,'*');