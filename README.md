# Stretch Programs

Welcome to the Stretch Programs repository! This repository contains a collection of small, self-contained programs designed to help you practice and improve your coding skills.

## Linktree

Here's a list of the programs available in this repository:

**[1-1-alignMoney](/js/1-1-alignMoney)**

This program demonstrates how to align multiple columns of numbers (money in this case) so they are pleasing to the eye.

To download this assignment (minus the key), open the terminal and navigate to your desired folder on your machine (I recommend something like C:/Users/<your_user>/Code/JavaScript/), then run the following command:

```powershell
mkdir 1-1-alignMoney
cd 1-1-alignMoney
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/1-1-alignMoney.js" -OutFile "1-1-alignMoney.js"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/1-1-alignMoney.test.js" -OutFile "1-1-alignMoney.test.js"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/eslint.config.js" -OutFile "eslint.config.js"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/package.json" -OutFile "package.json"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/README.md" -OutFile "README.md"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/vite.config.js" -OutFile "vite.config.js"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/vitest.config.js" -OutFile "vitest.config.js"

mkdir etc
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/etc/casingCheck.js" -OutFile "etc/casingCheck.js"
Invoke-WebRequest -Uri "https://raw.githubusercontent.com/ehrrsn7/stretch-programs/main/js/1-1-alignMoney/etc/utils.js" -OutFile "etc/utils.js"
```

## Install dependencies:
Once you have installed the folder, navigate into it by running
```powershell
cd <folder name>
```

Then, run this command (assuming you have nodejs previously installed on your machine) to install the dependencies.
```powershell
npm install
```

**Run the program:**
To run your program, enter the following command:

```powershell
node <assignment name>.js
```

To run the testbed and style checker for your program, run:
```powershell
npm test
npm run lint
```
