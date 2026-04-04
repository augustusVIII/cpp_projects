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
