@echo off
setlocal enabledelayedexpansion

set "output_file=output.txt"

for /r "D:\maket\c++\source\prackic_2023" %%F in (*.h *.cpp) do (
    echo Processing file "%%F"
    echo // %%F >> "%output_file%"
    type "%%F" >> "%output_file%"
    echo. >> "%output_file%"
)

echo Done! Output file is "%output_file%"

endlocal
pause