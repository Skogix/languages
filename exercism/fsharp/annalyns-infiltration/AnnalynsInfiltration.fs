module AnnalynsInfiltration

let canFastAttack (knightIsAwake: bool): bool = not knightIsAwake

let canSpy(knightIsAwake: bool) (archerIsAwake: bool) (prisonerIsAwake: bool): bool =
  [knightIsAwake;archerIsAwake;prisonerIsAwake]
  |> List.contains(true)

let canSignalPrisoner(archerIsAwake: bool) (prisonerIsAwake: bool): bool =
  match archerIsAwake, prisonerIsAwake with
  | false, true -> true
  | _, _ -> false

let canFreePrisoner(knightIsAwake: bool) (archerIsAwake: bool) (prisonerIsAwake: bool) (petDogIsPresent: bool): bool =
  // pris true andra false
  // arh false petdog true
  match knightIsAwake, archerIsAwake, prisonerIsAwake, petDogIsPresent with
  | false, false, true, true -> true
  | _, _, true, _ -> true
  | false, false, false, true -> true
  | _, _, _, _ -> false

canSpy false false false
