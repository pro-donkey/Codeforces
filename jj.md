```mermaid
graph LR
    subgraph Layer 1 (Input a1)
        A1((a_1,1))
        A2((a_1,2))
    end

    subgraph Weight Matrix W1
        direction TB
        W1[Rows of W1 connect inputs to specific next neurons]
    end

    subgraph Layer 2 (Output z1)
        Z1((z_1,1))
        Z2((z_1,2))
        Z3((z_1,3))
    end

    A1 --> Z1
    A1 --> Z2
    A1 --> Z3
    A2 --> Z1
    A2 --> Z2
    A2 --> Z3

    style W1 fill:#f9f,stroke:#333,stroke-width:2px
```
