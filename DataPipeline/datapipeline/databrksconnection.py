# Databricks notebook source 

# %%

from databricks.connect import DatabricksSession

spark = DatabricksSession.builder.getOrCreate()

# df = spark.read.table("samples.nyctaxi.trips")
# df.show(5)

# %%
from databricks.connect import DatabricksSession

spark = DatabricksSession.builder.getOrCreate()

# df = spark.read.table("samples.nyctaxi.trips")
# df.show(5)

