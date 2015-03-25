rem @echo off
@echo Running cppcheck...
@set PATH=%PATH%;Tools\cppcheck
@rem "C:\Program Files (x86)\Cppcheck\"
@set CPPCHECK="cppcheck.exe" -q --enable=performance,portability,warning,style --error-exitcode=-1
%CPPCHECK% %* || exit -1

