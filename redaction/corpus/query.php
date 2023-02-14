/**
  * Enables distinct select clauses.
  *
  * @param bool $distinct
  * @return \Kirby\Database\Query
  */
 public function distinct(bool $distinct = true)
 {
     $this->distinct = $distinct;
     return $this;
 }