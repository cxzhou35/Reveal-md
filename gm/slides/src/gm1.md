---
title: 组会汇报
separator: <!--s-->
verticalSeparator: <!--v-->
theme: simple
highlightTheme: github
css: light.css
revealOptions:
    transition: 'slide'
    transitionSpeed: fast
    center: false
    slideNumber: "c/t"
    width: 1000
---

<div class="middle center">
<div style="width: 100%">

# Learning NeRF

<hr/>

2023.3.14 [Chenxu Zhou](https://github.com/Xuer04)

</div>
</div>

<!--s-->

## 本周进展

- 学习整理 [nerf-pytorch](https://github.com/yenchenlin/nerf-pytorch) 的源码
- 熟悉 [learning_nerf](https://github.com/pengsida/learning_nerf) 的框架
  - 看懂 Image fitting demo 的整个流程
  - 完成了 Dataset 和 Network 部分的代码(render 还没 work)

```sh
├── lib.datasets.nerf.synthetic.py
│   ├── __init__
│   ├── __getitem__
│   └── __len__
├── lib.networks.nerf.network.py
│   ├── __init__
│   ├── forward
│   └── render
├── lib.evaluators.nerf.py
└── lib.train.losses.nerf.py
```

<!--s-->

## 下周计划

- 完成框架的代码
- 用框架跑一下 Blender 合成的数据集
