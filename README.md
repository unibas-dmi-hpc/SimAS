# SimAS
Simulation-assisted scheduling Algorithm Selection (SimAS) approach for the dynamic selection of the most efficient dynamic loop scheduling technique under Perturbations.

Many scientific applications consist of large and computationally-intensive loops. Dynamic loop self-scheduling (DLS) techniques are used to parallelize and to balance the load of such applications during execution. Load imbalance arises from variations in the loop iteration (or tasks) execution times, caused by problem, algorithmic, or systemic characteristics. Variations in systemic characteristics are referred to as perturbations.

Our hypothesis is that no single DLS technique can achieve the absolute best performance under various perturbations on heterogeneous HPC systems. The Simulation-assisted scheduling Algorithm Selection (SimAS) approach is a novel control-theoretic-inspired approach to dynamically select DLS techniques that improve the performance of applications executing on heterogeneous HPC systems under perturbations. SimAS-based simulates the loop execution with various DLS techniques during execution, asynchronous to the application execution, and selects the most efficient DLS technique to be used in the native application code. SimAs simulation also considers application state (execution progress, i.e., current loop index), system state, and perturbations on the system that can be passed to the simulator.

Authors
=======
[1] Ali Mohammed

[2] Florina M. Ciorba


Publications
=============
[1] Ali Mohammed and Florina M. Ciorba. Research Report - University of Basel, Switzerland. https://drive.switch.ch/index.php/s/imo0kyLe3PmETWL. [Online; accessed 20 May 2019]. October 2018.

[2]  Ali Mohammed and Florina M. Ciorba, “SiL: An Approach for Adjusting Applications to Heterogeneous Systems Under Perturbations”, in Proceedings of the International Workshop on Algorithms, Models and Tools for Parallel Computing on Heterogeneous Platforms (HeteroPar 2018) of the 24th International European Conference on Parallel and Distributed Computing (Euro-Par 2018), Tier A, Turin, Italy, August 27-31, 2018.
