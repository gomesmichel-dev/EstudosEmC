#!/bin/bash

git add .

echo "menssagem do commit"
read msgcommit

git commit -m "$msgcommit"

git push origin main

