echo off
echo Deploying project component, version 1_0
echo Running MCRInstaller if present...
MCRInstaller.exe
echo Registering DLL's
set path=%path%;.\MATLAB Component Runtime\v70\runtime\win32
regsvr32 component_1_0.dll
echo Installation complete.
echo Please refer to documentation for any additional setup steps.
