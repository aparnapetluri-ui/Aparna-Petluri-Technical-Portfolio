remove_na <- function(df) {
  missing <- is.na(df)
  byrow_missing <- apply(missing, MARGIN = 1, sum)
  return(df[byrow_missing == 0, , drop = FALSE])
}
to_factors_and_numeric <- function(df) {
  columnNames <- colnames(df)
  for (column in columnNames) {
    if (is.character(df[[column]])) { 
      df[[column]] <- factor(df[[column]]) 
    }
    else if (is.factor(df[[column]])) {
      df[[column]] <- as.numeric(as.character(df[[column]]))
    }
  }
  return(df) 
}

