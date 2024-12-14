name: C Build and Run

on:
  push:
    branches:
      - main
  pull_request:
    branches:
      - main
  workflow_dispatch:

jobs:
  build-and-run:
    runs-on: ubuntu-latest

    steps:
      # Checkout the repository code
      - name: Checkout code
        uses: actions/checkout@v3

      # Install GCC compiler
      - name: Install GCC
        run: sudo apt-get update && sudo apt-get install -y build-essential

      # Compile the C program
      - name: Compile main.c
        run: gcc -o main main.c

      # Run the compiled program
      - name: Run main
        run: ./main
