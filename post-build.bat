@call vars.bat
@cd HelloWorld\%CONF%
vstest.console.exe HelloWorldTests.dll || exit -1
@cd ..\..
