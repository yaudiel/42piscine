module Player = struct
  type s = X | O | None
  type k = IA | Human
  type t = (s * k * string)

  let ask p =
  let toString p =
end

module Board = struct
  type t = Player.s list

  (* return a new board *)
  let toggle x y p = function
  | [] ->
  | b ->

  let toString b =
end

type t = (Board.t list * (Player.t * Player.t))

(* return a new game *)
let toggle x y p = function
| [] ->
| b ->
