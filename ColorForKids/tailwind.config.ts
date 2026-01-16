/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./src/**/*.{ts,tsx}"],
  theme: {
    extend: {
      fontFamily: {
        caveat: ['"Caveat Brush"', "cursive"],
      },
    },
  },
  plugins: [],
};
