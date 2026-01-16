packages <- c("tidyverse", "dplyr", "corrplot")

new_packages <- packages[!(packages %in% installed.packages()[,"Package"])]
if(length(new_packages)) install.packages(new_packages)

library(tidyverse)
library(dplyr)
library(corrplot)