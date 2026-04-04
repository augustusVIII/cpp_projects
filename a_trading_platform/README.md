"A Trading Platform" is a simple project that mimic a trading platform.
I mostly want to learn OOP and GUI in this project.
Since this is a big project, I used claude/gemini to help me brainstorm the folder structure, the 
workflow and some general stuffs, but NONE of the code is AI-generated.  
I want to learn, so I write the code all by myself, without any help.  

## Folder structure (claude suggestion)
```
TradingPlatform/
│
├── src/
│   ├── main.cpp
│   │
│   ├── core/
│   │   ├── Order.h / Order.cpp
│   │   ├── OrderBook.h / OrderBook.cpp
│   │   ├── MatchingEngine.h / MatchingEngine.cpp
│   │   ├── Stock.h / Stock.cpp
│   │   └── Trader.h / Trader.cpp
│   │
│   ├── algo/
│   │   └── AlgoTrader.h / AlgoTrader.cpp
│   │
│   └── gui/
│       ├── Window.h / Window.cpp
│       ├── OrderBookPanel.h / OrderBookPanel.cpp
│       └── ChartPanel.h / ChartPanel.cpp
│
├── third_party/
│   ├── imgui/
│   └── implot/
│
└── CMakeLists.txt
```

## Purpose of each pieces
- Order — the smallest unit. One buy or sell intent. Holds price, quantity, direction, timestamp, which trader placed it.  
- OrderBook — the container. Holds all pending orders split into bids and asks. Knows how to add and remove orders. Does not do matching.  
- MatchingEngine — the brain. Looks at the OrderBook, finds pairs that can trade, executes them. Completely separate from the OrderBook on purpose.  
- Stock — a fictional ticker. Holds its name, symbol, and a price history list that grows every time a trade executes. That history feeds the chart.  
- Trader — a human player. Has a balance, a portfolio, can place orders.  
- AlgoTrader — inherits from Trader. Has its own logic for deciding when and what to trade. Lives in its own folder because it's a different concern from core data.  
- Window — boots up ImGui, opens the application window, runs the main loop. Everything else plugs into it.
- OrderBookPanel — one GUI panel that reads from OrderBook and draws bids, asks, spread.  
- ChartPanel — one GUI panel that reads from Stock's price history and draws the line chart via ImPlot.  
- CMakeLists.txt — your build file. Tells the compiler where everything is. You'll set this up once and mostly forget it.

## Build order - what to write first
Follow this sequence:  
1. Get ImGui running — blank window, nothing else. Just prove the GUI boots.
2. Build Order and OrderBook — pure logic, no GUI. Test it mentally or with cout.
3. Build MatchingEngine — hook it to OrderBook. Make a trade happen in the console.
4. Build Stock + price history — every matched trade logs a price.
5. Connect OrderBook to OrderBookPanel — first real GUI data, see bids/asks on screen.
6. Connect Stock history to ChartPanel — line chart appears.
7. Build Trader — human player can place orders through the GUI.
8. Build AlgoTrader — simulated opponent placing orders on a timer.
