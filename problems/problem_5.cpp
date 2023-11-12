float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
   switch (operation){
       case '+':
           result=x+y;
       case '-':
           result=x-y;
       case '*':
           result=x*y;
       case '/':
           if(y==0){
               result=0;
           }else{
               result=x/y;
           }

   }

   return result;
}
