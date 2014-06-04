#include "Goal4.h"

namespace busybin
{
  /**
   * Solve a 2x2x2 cube with two additional solved cubes with matching color.
   * @param cube The cube.
   */
  bool Goal4::isSatisfied(RubiksCubeModel& cube)
  {
    this->updateSolved(cube);

    return
      (this->LU && this->LUF && this->UF && this->LF && this->LDF && (this->LD || this->DF)) ||
      (this->UF && this->RUF && this->RU && this->RF && this->RDF && (this->DF || this->RD)) ||
      (this->RU && this->RUB && this->UB && this->RB && this->RDB && (this->DB || this->RD)) ||
      (this->UB && this->LUB && this->LU && this->LB && this->LDB && (this->LD || this->DB)) ||
      (this->LU && this->LUF && this->UF && this->LF && this->LUB && (this->LB || this->UB)) ||
      (this->UF && this->RUF && this->RU && this->RF && this->RUB && (this->UB || this->RB)) ||
      (this->LD && this->LDF && this->DF && this->LF && this->LDB && (this->DB || this->LB)) ||
      (this->DF && this->RDF && this->RD && this->RF && this->RDB && (this->DB || this->RB));
  }
}
