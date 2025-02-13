// casingCheck.js
import fs from 'fs';

// Allows camelCase and snake_case
const allowedCasing = /^[a-z\d]+(?:[A-Z][a-z\d]*)*$|^[a-z\d]+(?:_[a-z\d]+)*$/;

function checkCasing(filePath) {
  const content = fs.readFileSync(filePath, 'utf-8');
  const variableDeclarations = content.matchAll(/(const|let|var)\s+([a-zA-Z0-9_$-]+)/g);

  for (const match of variableDeclarations) {
    const variableName = match[2];
    if (!allowedCasing.test(variableName)) {
      console.warn(`Casing violation in ${filePath}: Variable "${variableName}" does not match allowed casing styles.`);
    }
  }
}

const filePath = process.argv[2];
checkCasing(filePath);