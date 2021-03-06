## Scalable Mesh Refinement for Canonical Polygonal Schemas of Extremely High Genus Shapes

This repository provides data and scripts to reproduce Figure 7 of the paper:

Scalable Mesh Refinement for Canonical Polygonal Schemas of Extremely High Genus Shapes

IEEE Transactions in Visualization and Computer Graphics

Marco Livesu

All you have to do do is to launch the bash script, which will install external dependencies, compile the code, and run it on the 8 models shown in the paper figure. For each such model, the program will produce two output meshes:
 - a mesh that reproduces the input model, cut through along the (refined) homotopy basis in order to permit a 2D flattening
 - a mapping to the canonigal polygon

