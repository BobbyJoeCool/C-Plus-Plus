# 31 Card Game (C++ Console Edition)

## Overview

This project is a **console-based implementation of the card game 31**, written in modern C++ with an object-oriented approach.

It demonstrates skills in **object-oriented design, turn-based game logic, and basic AI implementation**, making it a strong showcase of C++ programming and software design principles for a portfolio.

The game allows a **single human player to compete against AI opponents** following a modified rule set designed for clarity and challenge.

## Key Features

- **Object-Oriented Design**: Classes like `Card`, `Deck`, `Hand`, `Player`, `HumanPlayer`, `AIPlayer`, and `Game` demonstrate encapsulation, inheritance, and polymorphism.
- **AI Opponents**: Basic AI with decision-making logic for drawing, discarding, and knocking. Designed for future scalability and smarter strategies.
- **Game Mechanics**: Implements turn-based gameplay, knock logic, score calculation, and instant-win detection.
- **Lives and Scoring System**: Tracks player lives, enforces elimination rules, and calculates highest suit totals dynamically.
- **Modular and Extendable**: Codebase is structured for easy extension (e.g., GUI transition, multiple difficulty levels).
- **Portfolio-Focused**: Highlights applied C++ skills, problem-solving, and clean software design.

## Technical Highlights

- **C++17 Modern Standards**: Leverages `enum class`, `std::vector`, smart pointers, and clean memory management.
- **OOP Principles**: Clear separation of concerns:
  - `Card` & `Deck`: Card representation and management
  - `Hand`: Encapsulates a player’s cards and scoring logic
  - `Player` (abstract) + `HumanPlayer` / `AIPlayer`: Polymorphic player logic
  - `Game`: Controls rounds, turns, and overall state
- **AI Logic**: Demonstrates basic heuristics and decision-making in a turn-based environment.
- **Clean Console UI**: Simple, readable interface suitable for CLI demonstration.

## Game Rules (Project Variant)

- Each player has 3 cards; Ace = 11, Face Cards = 10, Number Cards = face value.
- Only cards of the **same suit** count toward the score.
- Players take turns **drawing, optionally knocking, and discarding**.
- Knocking triggers the **final turn for all other players**.
- Reaching **31 ends the round immediately**, penalizing all other players.
- Players lose lives for lowest scores; elimination occurs at 0 lives.

## Learning Objectives / Skills Demonstrated

This project demonstrates:

1. **Advanced C++ Programming**: Polymorphism, encapsulation, dynamic memory management.
2. **Game Development Concepts**: Turn-based logic, scoring algorithms, AI decision-making.
3. **Problem Solving & Architecture**: Designing modular, maintainable, and scalable software.
4. **Portfolio-Ready Practices**: Clear structure, documentation, and potential for extension to GUI or more complex AI.

## Build & Run

- **Requirements**: C++17 or newer
- **Compilation Example**:

```
g++ -std=c++17 main.cpp -o thirtyone  
./thirtyone
```

- No external dependencies; fully standard C++.

## Future Enhancements

- Smarter AI with probability analysis
- Configurable number of players
- Difficulty levels
- Save/load functionality
- GUI version (SFML or Qt)
- Unit tests for scoring and AI behavior

## Portfolio Notes

This project is a **demonstration of applied object-oriented programming** in C++. It showcases:

- Clean and maintainable class structure
- Effective AI logic implementation
- Turn-based game mechanics and state management
- Real-world problem-solving skills suitable for software engineering portfolios
