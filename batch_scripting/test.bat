@REM ///// variable
@echo on
@REM set sms=HELLO
@REM set num1=10
@REM set num2 = 12

@REM set num3=%num1%+%num2%
@REM echo %num3% %sms%

@REM ///// working with numbers 
@REM SET /A a = 5
@REM SET /A b = 10 
@REM SET /A c = %a% + %b% 
@REM echo %c%
@REM  //// LOCAL AND GLOBAL variableset globalvar = 5
@REM set /A globalvar = 5
@REM SETLOCAL
@REM set /A var = 13145
@REM set /A var = %var% + 5
@REM echo %var%
@REM echo %globalvar%
@REM ENDLOCAL


@REM //////////////////////////STRING/////////////////////
 
@REM  set sms=hello 
@REM  set sms2=suraj
@REM  set leght=st

@REM  echo %sms% %sms2%  


@REM  //////////////////////// ARRAYS//////////////
set list=1 2 3 4 
set /A num=1
(for %%a in (%list%) do ( 
   echo %%a 
)) 
if %num%==1 echo "The value of variable c is 1"

