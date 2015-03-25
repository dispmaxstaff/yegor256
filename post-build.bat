@call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\vsvars32.bat"
@cd HelloWorld\%CONF%
vstest.console.exe HelloWorldTests.dll || exit -1
@cd ..\..
