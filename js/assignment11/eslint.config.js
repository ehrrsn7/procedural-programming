import eslint from "@eslint/js";
import globals from "globals";
import jestPlugin from "eslint-plugin-jest";

export default [
   {
      ...eslint.configs.recommended,
   },
   {
      languageOptions: {
         globals: {
         ...globals.node,
         ...globals.jest,
         },
         sourceType: "module",
      },
      plugins: {
         jest: jestPlugin,
      },
      rules: {
         "indent": ["warn", 3],
         "quotes": ["warn", "double"],
         "semi": ["warn", "always"],
         "comma-dangle": ["warn", "always-multiline"],
         "keyword-spacing": "warn",
         "space-before-blocks": "warn",
         "brace-style": ["warn", "1tbs"],
         "max-len": ["warn", { code: 80 }],
         "no-unused-vars": "error",
         "no-console": "error",
         "no-extra-semi": "error",
         "no-irregular-whitespace": "error",
         "no-unexpected-multiline": "error",
         "no-unreachable": "error",
         "no-useless-return": "error",
         "no-shadow": "error",
         "no-undef": "error",
         "no-undef-init": "error",
         "camelcase": "error",
      },
   },
];