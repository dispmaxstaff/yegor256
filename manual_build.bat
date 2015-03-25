call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\vsvars32.bat"
call pre-build.bat || exit -1
MSBuild.exe HelloWorld\HelloWorld.sln || exit -1
pause
