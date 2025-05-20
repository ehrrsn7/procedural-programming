# Add C# compiler (csc.exe) to the user PATH

$cscPath = "C:\Windows\Microsoft.NET\Framework64\v4.0.30319"
Write-Output "Adding $cscPath to the user PATH..."

# Get current user PATH
$userPath = [System.Environment]::GetEnvironmentVariable("Path", [System.EnvironmentVariableTarget]::User)

if ($userPath -notmatch [regex]::Escape($cscPath)) {
    $newUserPath = "$userPath;$cscPath"
    [System.Environment]::SetEnvironmentVariable("Path", $newUserPath, [System.EnvironmentVariableTarget]::User)
    Write-Output "$cscPath added to the user PATH."
} else {
    Write-Output "$cscPath is already in the user PATH."
}