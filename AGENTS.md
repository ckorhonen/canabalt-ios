# Working on Canabalt iOS

`src/` contains game code, `Classes/` app integration, `flixel-ios/` the engine,
`data/` assets, and `Canabalt.xcodeproj` the historical Xcode project.
Read `README.TXT`, `GAME_LICENSE.TXT`, and `flixel-ios/ENGINE_LICENSE.TXT` before
redistribution: game source/data and engine code have different licenses.

Use macOS/Xcode. Start with `xcodebuild -list -project Canabalt.xcodeproj` to
identify available targets/configurations; inspect project SDK/architecture
settings before selecting a supported build destination. This 2010 project can
require unavailable legacy SDKs. Report that prerequisite instead of changing
platform targets or signing settings just to make a modern build pass.

There is no declared automated test/lint/typecheck suite. Validate changed game
behavior in the appropriate simulator/device when feasible. README explicitly
says sound effects do not work in the Simulator, so simulator checks cannot
prove device audio. Building is not permission to sign, distribute, or publish.

## Completing changes

Follow existing patterns and carry authorized work through the relevant checks,
repairing failures caused by the change. Choose routine implementation details
directly; ask only when missing information materially changes scope or outcome.
For documentation-only edits, check the diff, referenced paths, and command
accuracy rather than starting application runtimes. If a prerequisite blocks a
check, report the exact blocker and continue independent authorized work. Close
with changed paths, checks actually run and results, and remaining unverified
behavior; distinguish commands inspected from commands executed.
