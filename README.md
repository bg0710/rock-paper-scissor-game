# Rock Paper Scissors Game

A console-based Rock-Paper-Scissors game developed in C, featuring random computer-generated moves and a best-of-three scoring system.

## Overview

This project implements the classic Rock-Paper-Scissors game where the player competes against the computer.

The computer generates its moves using C's random number generation functions, while the program determines the winner of each round and maintains the scores throughout the game.

## Features

- Player vs. computer gameplay
- Randomly generated computer moves
- Best-of-three game format
- Score tracking for player and computer
- Input validation for invalid choices
- Option to play multiple games

## How to Play

Choose one of the following options:

- `r` — Rock
- `p` — Paper
- `s` — Scissor

The game consists of three rounds. The player and computer scores are displayed after the game.

## Technologies

- C
- Standard C Libraries
  - `stdio.h`
  - `stdlib.h`
  - `time.h`

## Concepts Demonstrated

- Functions and modular programming
- Conditional statements
- Switch-case
- Loops
- Character input handling
- Random number generation
- Basic game logic and score management

## How to Run

Compile the program using a C compiler:

```bash
gcc game.c -o game
