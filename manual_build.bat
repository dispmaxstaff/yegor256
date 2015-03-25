@call "vars.bat
call pre-build.bat || exit -1
MSBuild.exe /p:Configuration=%CONF% /p:Platform="Win32" HelloWorld\HelloWorld.sln || exit -1
call post-build.bat || exit -1
pause
