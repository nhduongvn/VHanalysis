#ifdef __CLING__
#pragma cling optimize(0)
#endif
void puSF__18()
{
//=========Macro generated from canvas: puSF__18/puSF__18
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *puSF__18 = new TCanvas("puSF__18", "puSF__18",0,0,600,600);
   puSF__18->SetHighLightColor(2);
   puSF__18->Range(0,0,1,1);
   puSF__18->SetFillColor(0);
   puSF__18->SetFillStyle(4000);
   puSF__18->SetBorderMode(0);
   puSF__18->SetBorderSize(2);
   puSF__18->SetFrameFillStyle(1000);
   puSF__18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-6.952869e+08,2.209678,6.945916e+11);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(6.250629e+11);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",500,-5,5);
   st_stack_6->SetMinimum(0.01);
   st_stack_6->SetMaximum(6.250629e+11);
   st_stack_6->SetDirectory(nullptr);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->SetLineWidth(0);
   st_stack_6->GetXaxis()->SetRange(151,350);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/0.02");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetLabelSize(0.05);
   st_stack_6->GetYaxis()->SetTitleSize(0.057);
   st_stack_6->GetYaxis()->SetTitleOffset(1.2);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *puSF_stack_1 = new TH1D("puSF_stack_1","",500,-5,5);
   puSF_stack_1->SetBinContent(251,1.887582e+07);
   puSF_stack_1->SetBinContent(252,8.288656e+07);
   puSF_stack_1->SetBinContent(253,2.004391e+08);
   puSF_stack_1->SetBinContent(254,2.96895e+08);
   puSF_stack_1->SetBinContent(255,6.06592e+08);
   puSF_stack_1->SetBinContent(256,5.204493e+08);
   puSF_stack_1->SetBinContent(257,7.48038e+08);
   puSF_stack_1->SetBinContent(258,1.088466e+09);
   puSF_stack_1->SetBinContent(259,1.521602e+09);
   puSF_stack_1->SetBinContent(260,2.128119e+09);
   puSF_stack_1->SetBinContent(262,2.93852e+09);
   puSF_stack_1->SetBinContent(264,4.121233e+09);
   puSF_stack_1->SetBinContent(266,5.601193e+09);
   puSF_stack_1->SetBinContent(268,5026.146);
   puSF_stack_1->SetBinContent(269,7.59753e+09);
   puSF_stack_1->SetBinContent(271,1568131);
   puSF_stack_1->SetBinContent(272,1.011679e+10);
   puSF_stack_1->SetBinContent(275,1.325414e+10);
   puSF_stack_1->SetBinContent(276,2190725);
   puSF_stack_1->SetBinContent(278,1.70897e+10);
   puSF_stack_1->SetBinContent(281,2960309);
   puSF_stack_1->SetBinContent(282,2.166621e+10);
   puSF_stack_1->SetBinContent(285,2.679455e+10);
   puSF_stack_1->SetBinContent(286,3906539);
   puSF_stack_1->SetBinContent(288,1754393);
   puSF_stack_1->SetBinContent(289,3.234848e+10);
   puSF_stack_1->SetBinContent(290,437699);
   puSF_stack_1->SetBinContent(292,3.820791e+10);
   puSF_stack_1->SetBinContent(295,4.416498e+10);
   puSF_stack_1->SetBinContent(296,6347162);
   puSF_stack_1->SetBinContent(297,4.999369e+10);
   puSF_stack_1->SetBinContent(298,52859.72);
   puSF_stack_1->SetBinContent(299,5087130);
   puSF_stack_1->SetBinContent(300,5.536016e+10);
   puSF_stack_1->SetBinContent(301,6.010004e+10);
   puSF_stack_1->SetBinContent(302,6.409372e+10);
   puSF_stack_1->SetBinContent(303,6.706776e+10);
   puSF_stack_1->SetBinContent(304,2.812113e+11);
   puSF_stack_1->SetBinContent(305,2.080824e+11);
   puSF_stack_1->SetBinContent(306,6.71767e+10);
   puSF_stack_1->SetBinContent(307,6.603319e+10);
   puSF_stack_1->SetBinContent(308,2.773968e+07);
   puSF_stack_1->SetBinContent(309,6.472155e+10);
   puSF_stack_1->SetBinContent(310,5.178575e+07);
   puSF_stack_1->SetBinContent(311,6.307752e+10);
   puSF_stack_1->SetBinContent(313,6.078863e+10);
   puSF_stack_1->SetBinContent(315,5.831599e+10);
   puSF_stack_1->SetBinContent(318,5.571496e+10);
   puSF_stack_1->SetBinContent(321,5.286695e+10);
   puSF_stack_1->SetBinContent(322,4.921016e+10);
   puSF_stack_1->SetBinContent(323,1.316569e+11);
   puSF_stack_1->SetBinContent(324,5.8626e+10);
   puSF_stack_1->SetBinContent(326,1.453282e+10);
   puSF_stack_1->SetBinContent(329,1.125108e+10);
   puSF_stack_1->SetBinContent(335,8.382841e+09);
   puSF_stack_1->SetBinContent(346,5.93218e+09);
   puSF_stack_1->SetBinContent(362,4.099971e+09);
   puSF_stack_1->SetBinContent(389,2.635382e+09);
   puSF_stack_1->SetBinContent(433,1.581874e+09);
   puSF_stack_1->SetBinContent(496,9.179737e+08);
   puSF_stack_1->SetBinContent(501,1.999912e+09);
   puSF_stack_1->SetBinError(251,593697.2);
   puSF_stack_1->SetBinError(252,1243944);
   puSF_stack_1->SetBinError(253,1933949);
   puSF_stack_1->SetBinError(254,2353278);
   puSF_stack_1->SetBinError(255,3364025);
   puSF_stack_1->SetBinError(256,3116634);
   puSF_stack_1->SetBinError(257,3736705);
   puSF_stack_1->SetBinError(258,4506741);
   puSF_stack_1->SetBinError(259,5329362);
   puSF_stack_1->SetBinError(260,6302468);
   puSF_stack_1->SetBinError(262,7404152);
   puSF_stack_1->SetBinError(264,8770457);
   puSF_stack_1->SetBinError(266,1.022224e+07);
   puSF_stack_1->SetBinError(268,215.6617);
   puSF_stack_1->SetBinError(269,1.190945e+07);
   puSF_stack_1->SetBinError(271,3821.022);
   puSF_stack_1->SetBinError(272,1.374094e+07);
   puSF_stack_1->SetBinError(275,1.572741e+07);
   puSF_stack_1->SetBinError(276,4517.49);
   puSF_stack_1->SetBinError(278,1.785978e+07);
   puSF_stack_1->SetBinError(281,5251.551);
   puSF_stack_1->SetBinError(282,2.010872e+07);
   puSF_stack_1->SetBinError(285,2.236238e+07);
   puSF_stack_1->SetBinError(286,6033.245);
   puSF_stack_1->SetBinError(288,4043.306);
   puSF_stack_1->SetBinError(289,2.456928e+07);
   puSF_stack_1->SetBinError(290,2020.364);
   puSF_stack_1->SetBinError(292,2.670247e+07);
   puSF_stack_1->SetBinError(295,2.87079e+07);
   puSF_stack_1->SetBinError(296,7689.216);
   puSF_stack_1->SetBinError(297,3.054635e+07);
   puSF_stack_1->SetBinError(298,701.2198);
   puSF_stack_1->SetBinError(299,6884.893);
   puSF_stack_1->SetBinError(300,3.214121e+07);
   puSF_stack_1->SetBinError(301,3.349105e+07);
   puSF_stack_1->SetBinError(302,3.45874e+07);
   puSF_stack_1->SetBinError(303,3.534345e+07);
   puSF_stack_1->SetBinError(304,7.243828e+07);
   puSF_stack_1->SetBinError(305,6.230689e+07);
   puSF_stack_1->SetBinError(306,3.540553e+07);
   puSF_stack_1->SetBinError(307,3.510258e+07);
   puSF_stack_1->SetBinError(308,16074.49);
   puSF_stack_1->SetBinError(309,3.47519e+07);
   puSF_stack_1->SetBinError(310,21962.22);
   puSF_stack_1->SetBinError(311,3.429856e+07);
   puSF_stack_1->SetBinError(313,3.368489e+07);
   puSF_stack_1->SetBinError(315,3.299145e+07);
   puSF_stack_1->SetBinError(318,3.224717e+07);
   puSF_stack_1->SetBinError(321,3.141227e+07);
   puSF_stack_1->SetBinError(322,3.030501e+07);
   puSF_stack_1->SetBinError(323,4.957188e+07);
   puSF_stack_1->SetBinError(324,3.307829e+07);
   puSF_stack_1->SetBinError(326,1.646877e+07);
   puSF_stack_1->SetBinError(329,1.449242e+07);
   puSF_stack_1->SetBinError(335,1.250817e+07);
   puSF_stack_1->SetBinError(346,1.052253e+07);
   puSF_stack_1->SetBinError(362,8747796);
   puSF_stack_1->SetBinError(389,7013933);
   puSF_stack_1->SetBinError(433,5434055);
   puSF_stack_1->SetBinError(496,4138320);
   puSF_stack_1->SetBinError(501,6108856);
   puSF_stack_1->SetEntries(3.284355e+08);

   ci = TColor::GetColor("#ff6600");
   puSF_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_1->SetLineColor(ci);
   puSF_stack_1->GetXaxis()->SetRange(1,500);
   puSF_stack_1->GetXaxis()->SetLabelFont(42);
   puSF_stack_1->GetXaxis()->SetTitleOffset(1);
   puSF_stack_1->GetXaxis()->SetTitleFont(42);
   puSF_stack_1->GetYaxis()->SetLabelFont(42);
   puSF_stack_1->GetYaxis()->SetTitleFont(42);
   puSF_stack_1->GetZaxis()->SetLabelFont(42);
   puSF_stack_1->GetZaxis()->SetTitleOffset(1);
   puSF_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_1,"");
   
   TH1D *puSF_stack_2 = new TH1D("puSF_stack_2","",500,-5,5);
   puSF_stack_2->SetBinContent(251,193.7578);
   puSF_stack_2->SetBinContent(252,822.8004);
   puSF_stack_2->SetBinContent(253,2015.41);
   puSF_stack_2->SetBinContent(254,2942.282);
   puSF_stack_2->SetBinContent(255,6127.119);
   puSF_stack_2->SetBinContent(256,5312.408);
   puSF_stack_2->SetBinContent(257,7579.236);
   puSF_stack_2->SetBinContent(258,11017.7);
   puSF_stack_2->SetBinContent(259,15209.16);
   puSF_stack_2->SetBinContent(260,21413.5);
   puSF_stack_2->SetBinContent(262,29598.35);
   puSF_stack_2->SetBinContent(264,41459.01);
   puSF_stack_2->SetBinContent(266,56565.89);
   puSF_stack_2->SetBinContent(269,76283.1);
   puSF_stack_2->SetBinContent(272,102043.5);
   puSF_stack_2->SetBinContent(275,133426.6);
   puSF_stack_2->SetBinContent(278,172122.6);
   puSF_stack_2->SetBinContent(282,218254.9);
   puSF_stack_2->SetBinContent(285,270162.3);
   puSF_stack_2->SetBinContent(289,325868.6);
   puSF_stack_2->SetBinContent(292,384584.8);
   puSF_stack_2->SetBinContent(295,444816.7);
   puSF_stack_2->SetBinContent(297,503040.2);
   puSF_stack_2->SetBinContent(300,557368.6);
   puSF_stack_2->SetBinContent(301,605529.6);
   puSF_stack_2->SetBinContent(302,645551.4);
   puSF_stack_2->SetBinContent(303,674199);
   puSF_stack_2->SetBinContent(304,2829898);
   puSF_stack_2->SetBinContent(305,2093636);
   puSF_stack_2->SetBinContent(306,676747.5);
   puSF_stack_2->SetBinContent(307,664696.6);
   puSF_stack_2->SetBinContent(309,651231);
   puSF_stack_2->SetBinContent(311,635327);
   puSF_stack_2->SetBinContent(313,610883.2);
   puSF_stack_2->SetBinContent(315,587212.3);
   puSF_stack_2->SetBinContent(318,561489.9);
   puSF_stack_2->SetBinContent(321,531857.5);
   puSF_stack_2->SetBinContent(322,495895.4);
   puSF_stack_2->SetBinContent(323,1324350);
   puSF_stack_2->SetBinContent(324,589942);
   puSF_stack_2->SetBinContent(326,146518.9);
   puSF_stack_2->SetBinContent(329,112913);
   puSF_stack_2->SetBinContent(335,84180.99);
   puSF_stack_2->SetBinContent(346,59730.81);
   puSF_stack_2->SetBinContent(362,41355.04);
   puSF_stack_2->SetBinContent(389,26493.27);
   puSF_stack_2->SetBinContent(433,15841.9);
   puSF_stack_2->SetBinContent(496,9164.368);
   puSF_stack_2->SetBinContent(501,20197.04);
   puSF_stack_2->SetBinError(251,4.572998);
   puSF_stack_2->SetBinError(252,9.469405);
   puSF_stack_2->SetBinError(253,14.95122);
   puSF_stack_2->SetBinError(254,17.9489);
   puSF_stack_2->SetBinError(255,25.84413);
   puSF_stack_2->SetBinError(256,24.10038);
   puSF_stack_2->SetBinError(257,28.83009);
   puSF_stack_2->SetBinError(258,34.75377);
   puSF_stack_2->SetBinError(259,40.61897);
   puSF_stack_2->SetBinError(260,48.341);
   puSF_stack_2->SetBinError(262,56.82859);
   puSF_stack_2->SetBinError(264,67.16914);
   puSF_stack_2->SetBinError(266,78.46765);
   puSF_stack_2->SetBinError(269,91.1103);
   puSF_stack_2->SetBinError(272,105.3802);
   puSF_stack_2->SetBinError(275,120.4632);
   puSF_stack_2->SetBinError(278,136.7507);
   puSF_stack_2->SetBinError(282,154.162);
   puSF_stack_2->SetBinError(285,171.5319);
   puSF_stack_2->SetBinError(289,188.3302);
   puSF_stack_2->SetBinError(292,204.3988);
   puSF_stack_2->SetBinError(295,220.0347);
   puSF_stack_2->SetBinError(297,233.767);
   puSF_stack_2->SetBinError(300,246.1295);
   puSF_stack_2->SetBinError(301,256.6252);
   puSF_stack_2->SetBinError(302,265.1173);
   puSF_stack_2->SetBinError(303,270.6392);
   puSF_stack_2->SetBinError(304,554.6854);
   puSF_stack_2->SetBinError(305,477.0482);
   puSF_stack_2->SetBinError(306,271.3113);
   puSF_stack_2->SetBinError(307,268.8823);
   puSF_stack_2->SetBinError(309,266.1651);
   puSF_stack_2->SetBinError(311,262.7748);
   puSF_stack_2->SetBinError(313,257.6663);
   puSF_stack_2->SetBinError(315,252.6208);
   puSF_stack_2->SetBinError(318,247.1334);
   puSF_stack_2->SetBinError(321,240.4018);
   puSF_stack_2->SetBinError(322,232.2377);
   puSF_stack_2->SetBinError(323,379.4949);
   puSF_stack_2->SetBinError(324,253.3176);
   puSF_stack_2->SetBinError(326,126.2015);
   puSF_stack_2->SetBinError(329,110.7474);
   puSF_stack_2->SetBinError(335,95.64634);
   puSF_stack_2->SetBinError(346,80.44752);
   puSF_stack_2->SetBinError(362,67.0562);
   puSF_stack_2->SetBinError(389,53.58238);
   puSF_stack_2->SetBinError(433,41.44726);
   puSF_stack_2->SetBinError(496,31.50407);
   puSF_stack_2->SetBinError(501,46.94176);
   puSF_stack_2->SetEntries(2.81531e+08);

   ci = TColor::GetColor("#660066");
   puSF_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_2->SetLineColor(ci);
   puSF_stack_2->GetXaxis()->SetRange(1,500);
   puSF_stack_2->GetXaxis()->SetLabelFont(42);
   puSF_stack_2->GetXaxis()->SetTitleOffset(1);
   puSF_stack_2->GetXaxis()->SetTitleFont(42);
   puSF_stack_2->GetYaxis()->SetLabelFont(42);
   puSF_stack_2->GetYaxis()->SetTitleFont(42);
   puSF_stack_2->GetZaxis()->SetLabelFont(42);
   puSF_stack_2->GetZaxis()->SetTitleOffset(1);
   puSF_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_2,"");
   
   TH1D *puSF_stack_3 = new TH1D("puSF_stack_3","",500,-5,5);
   puSF_stack_3->SetBinContent(251,551.4112);
   puSF_stack_3->SetBinContent(252,2265.813);
   puSF_stack_3->SetBinContent(253,5546.794);
   puSF_stack_3->SetBinContent(254,8202.423);
   puSF_stack_3->SetBinContent(255,16996.76);
   puSF_stack_3->SetBinContent(256,14620.35);
   puSF_stack_3->SetBinContent(257,20916.79);
   puSF_stack_3->SetBinContent(258,30303.56);
   puSF_stack_3->SetBinContent(259,42454.93);
   puSF_stack_3->SetBinContent(260,59321.76);
   puSF_stack_3->SetBinContent(262,82152.67);
   puSF_stack_3->SetBinContent(264,115067.3);
   puSF_stack_3->SetBinContent(266,156779.7);
   puSF_stack_3->SetBinContent(269,211999.1);
   puSF_stack_3->SetBinContent(272,282950.1);
   puSF_stack_3->SetBinContent(275,370266.8);
   puSF_stack_3->SetBinContent(278,477674.9);
   puSF_stack_3->SetBinContent(282,605570.1);
   puSF_stack_3->SetBinContent(285,748840);
   puSF_stack_3->SetBinContent(289,904590.3);
   puSF_stack_3->SetBinContent(292,1067498);
   puSF_stack_3->SetBinContent(295,1234489);
   puSF_stack_3->SetBinContent(297,1396808);
   puSF_stack_3->SetBinContent(300,1547071);
   puSF_stack_3->SetBinContent(301,1680124);
   puSF_stack_3->SetBinContent(302,1790467);
   puSF_stack_3->SetBinContent(303,1871663);
   puSF_stack_3->SetBinContent(304,7855338);
   puSF_stack_3->SetBinContent(305,5811342);
   puSF_stack_3->SetBinContent(306,1876607);
   puSF_stack_3->SetBinContent(307,1844562);
   puSF_stack_3->SetBinContent(309,1807700);
   puSF_stack_3->SetBinContent(311,1763015);
   puSF_stack_3->SetBinContent(313,1696693);
   puSF_stack_3->SetBinContent(315,1629482);
   puSF_stack_3->SetBinContent(318,1557585);
   puSF_stack_3->SetBinContent(321,1476631);
   puSF_stack_3->SetBinContent(322,1375717);
   puSF_stack_3->SetBinContent(323,3676213);
   puSF_stack_3->SetBinContent(324,1637715);
   puSF_stack_3->SetBinContent(326,405697.2);
   puSF_stack_3->SetBinContent(329,313653.6);
   puSF_stack_3->SetBinContent(335,234451.5);
   puSF_stack_3->SetBinContent(346,165923);
   puSF_stack_3->SetBinContent(362,114764.1);
   puSF_stack_3->SetBinContent(389,73757.86);
   puSF_stack_3->SetBinContent(433,44047.8);
   puSF_stack_3->SetBinContent(496,25543.14);
   puSF_stack_3->SetBinContent(501,55899.69);
   puSF_stack_3->SetBinError(251,5.566893);
   puSF_stack_3->SetBinError(252,11.27763);
   puSF_stack_3->SetBinError(253,17.64093);
   puSF_stack_3->SetBinError(254,21.45811);
   puSF_stack_3->SetBinError(255,30.88501);
   puSF_stack_3->SetBinError(256,28.64385);
   puSF_stack_3->SetBinError(257,34.26296);
   puSF_stack_3->SetBinError(258,41.24387);
   puSF_stack_3->SetBinError(259,48.81482);
   puSF_stack_3->SetBinError(260,57.6951);
   puSF_stack_3->SetBinError(262,67.90788);
   puSF_stack_3->SetBinError(264,80.36);
   puSF_stack_3->SetBinError(266,93.80103);
   puSF_stack_3->SetBinError(269,109.0753);
   puSF_stack_3->SetBinError(272,126.0218);
   puSF_stack_3->SetBinError(275,144.1563);
   puSF_stack_3->SetBinError(278,163.7276);
   puSF_stack_3->SetBinError(282,184.3657);
   puSF_stack_3->SetBinError(285,204.9999);
   puSF_stack_3->SetBinError(289,225.3206);
   puSF_stack_3->SetBinError(292,244.7631);
   puSF_stack_3->SetBinError(295,263.2229);
   puSF_stack_3->SetBinError(297,279.9852);
   puSF_stack_3->SetBinError(300,294.6719);
   puSF_stack_3->SetBinError(301,307.0739);
   puSF_stack_3->SetBinError(302,316.9995);
   puSF_stack_3->SetBinError(303,324.1048);
   puSF_stack_3->SetBinError(304,663.9824);
   puSF_stack_3->SetBinError(305,571.0961);
   puSF_stack_3->SetBinError(306,324.5263);
   puSF_stack_3->SetBinError(307,321.7572);
   puSF_stack_3->SetBinError(309,318.5171);
   puSF_stack_3->SetBinError(311,314.5516);
   puSF_stack_3->SetBinError(313,308.5878);
   puSF_stack_3->SetBinError(315,302.4087);
   puSF_stack_3->SetBinError(318,295.6652);
   puSF_stack_3->SetBinError(321,287.8754);
   puSF_stack_3->SetBinError(322,277.8594);
   puSF_stack_3->SetBinError(323,454.2298);
   puSF_stack_3->SetBinError(324,303.1703);
   puSF_stack_3->SetBinError(326,150.8824);
   puSF_stack_3->SetBinError(329,132.6774);
   puSF_stack_3->SetBinError(335,114.7109);
   puSF_stack_3->SetBinError(346,96.51047);
   puSF_stack_3->SetBinError(362,80.25277);
   puSF_stack_3->SetBinError(389,64.3299);
   puSF_stack_3->SetBinError(433,49.71933);
   puSF_stack_3->SetBinError(496,37.8551);
   puSF_stack_3->SetBinError(501,56.01487);
   puSF_stack_3->SetEntries(9.43436e+08);

   ci = TColor::GetColor("#cc00cc");
   puSF_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_3->SetLineColor(ci);
   puSF_stack_3->GetXaxis()->SetRange(1,500);
   puSF_stack_3->GetXaxis()->SetLabelFont(42);
   puSF_stack_3->GetXaxis()->SetTitleOffset(1);
   puSF_stack_3->GetXaxis()->SetTitleFont(42);
   puSF_stack_3->GetYaxis()->SetLabelFont(42);
   puSF_stack_3->GetYaxis()->SetTitleFont(42);
   puSF_stack_3->GetZaxis()->SetLabelFont(42);
   puSF_stack_3->GetZaxis()->SetTitleOffset(1);
   puSF_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_3,"");
   
   TH1D *puSF_stack_4 = new TH1D("puSF_stack_4","",500,-5,5);
   puSF_stack_4->SetBinContent(251,728.9093);
   puSF_stack_4->SetBinContent(252,3147.853);
   puSF_stack_4->SetBinContent(253,7459.132);
   puSF_stack_4->SetBinContent(254,11021.96);
   puSF_stack_4->SetBinContent(255,23494.93);
   puSF_stack_4->SetBinContent(256,20253.92);
   puSF_stack_4->SetBinContent(257,29611.33);
   puSF_stack_4->SetBinContent(258,41563);
   puSF_stack_4->SetBinContent(259,59186.28);
   puSF_stack_4->SetBinContent(260,81905.48);
   puSF_stack_4->SetBinContent(262,112462.3);
   puSF_stack_4->SetBinContent(264,157749);
   puSF_stack_4->SetBinContent(266,214408.2);
   puSF_stack_4->SetBinContent(269,292361.5);
   puSF_stack_4->SetBinContent(272,390607.2);
   puSF_stack_4->SetBinContent(275,510185.2);
   puSF_stack_4->SetBinContent(278,656428.7);
   puSF_stack_4->SetBinContent(282,833241);
   puSF_stack_4->SetBinContent(285,1032577);
   puSF_stack_4->SetBinContent(289,1245850);
   puSF_stack_4->SetBinContent(292,1470434);
   puSF_stack_4->SetBinContent(295,1697269);
   puSF_stack_4->SetBinContent(297,1921773);
   puSF_stack_4->SetBinContent(300,2125736);
   puSF_stack_4->SetBinContent(301,2316516);
   puSF_stack_4->SetBinContent(302,2457812);
   puSF_stack_4->SetBinContent(303,2572181);
   puSF_stack_4->SetBinContent(304,1.080512e+07);
   puSF_stack_4->SetBinContent(305,7999251);
   puSF_stack_4->SetBinContent(306,2580667);
   puSF_stack_4->SetBinContent(307,2538144);
   puSF_stack_4->SetBinContent(309,2488381);
   puSF_stack_4->SetBinContent(311,2427508);
   puSF_stack_4->SetBinContent(313,2332978);
   puSF_stack_4->SetBinContent(315,2236788);
   puSF_stack_4->SetBinContent(318,2148819);
   puSF_stack_4->SetBinContent(321,2032492);
   puSF_stack_4->SetBinContent(322,1897426);
   puSF_stack_4->SetBinContent(323,5057172);
   puSF_stack_4->SetBinContent(324,2254112);
   puSF_stack_4->SetBinContent(326,556484.7);
   puSF_stack_4->SetBinContent(329,432028.6);
   puSF_stack_4->SetBinContent(335,322960.2);
   puSF_stack_4->SetBinContent(346,229140.8);
   puSF_stack_4->SetBinContent(362,157834.2);
   puSF_stack_4->SetBinContent(389,101408.7);
   puSF_stack_4->SetBinContent(433,61102.95);
   puSF_stack_4->SetBinContent(496,35486.73);
   puSF_stack_4->SetBinContent(501,76333.24);
   puSF_stack_4->SetBinError(251,50.71106);
   puSF_stack_4->SetBinError(252,105.2377);
   puSF_stack_4->SetBinError(253,162.1757);
   puSF_stack_4->SetBinError(254,196.9927);
   puSF_stack_4->SetBinError(255,288.1629);
   puSF_stack_4->SetBinError(256,267.7305);
   puSF_stack_4->SetBinError(257,324.0261);
   puSF_stack_4->SetBinError(258,383.0007);
   puSF_stack_4->SetBinError(259,457.6672);
   puSF_stack_4->SetBinError(260,538.1526);
   puSF_stack_4->SetBinError(262,629.9835);
   puSF_stack_4->SetBinError(264,746.0257);
   puSF_stack_4->SetBinError(266,870.037);
   puSF_stack_4->SetBinError(269,1016.225);
   puSF_stack_4->SetBinError(272,1174.785);
   puSF_stack_4->SetBinError(275,1342.633);
   puSF_stack_4->SetBinError(278,1522.558);
   puSF_stack_4->SetBinError(282,1715.486);
   puSF_stack_4->SetBinError(285,1910.155);
   puSF_stack_4->SetBinError(289,2097.86);
   puSF_stack_4->SetBinError(292,2279.088);
   puSF_stack_4->SetBinError(295,2448.563);
   puSF_stack_4->SetBinError(297,2604.885);
   puSF_stack_4->SetBinError(300,2739.63);
   puSF_stack_4->SetBinError(301,2860.635);
   puSF_stack_4->SetBinError(302,2946.493);
   puSF_stack_4->SetBinError(303,3013.738);
   puSF_stack_4->SetBinError(304,6177.474);
   puSF_stack_4->SetBinError(305,5315.613);
   puSF_stack_4->SetBinError(306,3018.995);
   puSF_stack_4->SetBinError(307,2993.859);
   puSF_stack_4->SetBinError(309,2965.112);
   puSF_stack_4->SetBinError(311,2928.237);
   puSF_stack_4->SetBinError(313,2870.693);
   puSF_stack_4->SetBinError(315,2810.329);
   puSF_stack_4->SetBinError(318,2755.298);
   puSF_stack_4->SetBinError(321,2679.8);
   puSF_stack_4->SetBinError(322,2588.855);
   puSF_stack_4->SetBinError(323,4226.294);
   puSF_stack_4->SetBinError(324,2821.342);
   puSF_stack_4->SetBinError(326,1401.475);
   puSF_stack_4->SetBinError(329,1235.623);
   puSF_stack_4->SetBinError(335,1067.72);
   puSF_stack_4->SetBinError(346,900.1376);
   puSF_stack_4->SetBinError(362,746.8369);
   puSF_stack_4->SetBinError(389,598.448);
   puSF_stack_4->SetBinError(433,464.9605);
   puSF_stack_4->SetBinError(496,354.206);
   puSF_stack_4->SetBinError(501,519.33);
   puSF_stack_4->SetEntries(5.027001e+07);

   ci = TColor::GetColor("#00cccc");
   puSF_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_4->SetLineColor(ci);
   puSF_stack_4->GetXaxis()->SetRange(1,500);
   puSF_stack_4->GetXaxis()->SetLabelFont(42);
   puSF_stack_4->GetXaxis()->SetTitleOffset(1);
   puSF_stack_4->GetXaxis()->SetTitleFont(42);
   puSF_stack_4->GetYaxis()->SetLabelFont(42);
   puSF_stack_4->GetYaxis()->SetTitleFont(42);
   puSF_stack_4->GetZaxis()->SetLabelFont(42);
   puSF_stack_4->GetZaxis()->SetTitleOffset(1);
   puSF_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_4,"");
   
   TH1D *puSF_stack_5 = new TH1D("puSF_stack_5","",500,-5,5);
   puSF_stack_5->SetBinContent(251,3206.486);
   puSF_stack_5->SetBinContent(252,12515.75);
   puSF_stack_5->SetBinContent(253,30609.61);
   puSF_stack_5->SetBinContent(254,45571.59);
   puSF_stack_5->SetBinContent(255,95806.3);
   puSF_stack_5->SetBinContent(256,81542.03);
   puSF_stack_5->SetBinContent(257,117175.8);
   puSF_stack_5->SetBinContent(258,169947.3);
   puSF_stack_5->SetBinContent(259,237313.4);
   puSF_stack_5->SetBinContent(260,331205.2);
   puSF_stack_5->SetBinContent(262,458461.7);
   puSF_stack_5->SetBinContent(264,641739.4);
   puSF_stack_5->SetBinContent(266,871692.5);
   puSF_stack_5->SetBinContent(269,1185386);
   puSF_stack_5->SetBinContent(272,1574944);
   puSF_stack_5->SetBinContent(275,2068415);
   puSF_stack_5->SetBinContent(278,2666197);
   puSF_stack_5->SetBinContent(282,3372793);
   puSF_stack_5->SetBinContent(285,4179810);
   puSF_stack_5->SetBinContent(289,5038347);
   puSF_stack_5->SetBinContent(292,5950135);
   puSF_stack_5->SetBinContent(295,6880053);
   puSF_stack_5->SetBinContent(297,7800940);
   puSF_stack_5->SetBinContent(300,8620421);
   puSF_stack_5->SetBinContent(301,9372754);
   puSF_stack_5->SetBinContent(302,9973208);
   puSF_stack_5->SetBinContent(303,1.043066e+07);
   puSF_stack_5->SetBinContent(304,4.381518e+07);
   puSF_stack_5->SetBinContent(305,3.240005e+07);
   puSF_stack_5->SetBinContent(306,1.046491e+07);
   puSF_stack_5->SetBinContent(307,1.027929e+07);
   puSF_stack_5->SetBinContent(309,1.00659e+07);
   puSF_stack_5->SetBinContent(311,9815884);
   puSF_stack_5->SetBinContent(313,9458896);
   puSF_stack_5->SetBinContent(315,9099538);
   puSF_stack_5->SetBinContent(318,8689537);
   puSF_stack_5->SetBinContent(321,8218859);
   puSF_stack_5->SetBinContent(322,7660315);
   puSF_stack_5->SetBinContent(323,2.049098e+07);
   puSF_stack_5->SetBinContent(324,9140914);
   puSF_stack_5->SetBinContent(326,2259341);
   puSF_stack_5->SetBinContent(329,1747605);
   puSF_stack_5->SetBinContent(335,1306909);
   puSF_stack_5->SetBinContent(346,925393.1);
   puSF_stack_5->SetBinContent(362,641014.3);
   puSF_stack_5->SetBinContent(389,412282.5);
   puSF_stack_5->SetBinContent(433,245817.5);
   puSF_stack_5->SetBinContent(496,141758.4);
   puSF_stack_5->SetBinContent(501,311150.6);
   puSF_stack_5->SetBinError(251,146.2157);
   puSF_stack_5->SetBinError(252,281.4965);
   puSF_stack_5->SetBinError(253,439.8247);
   puSF_stack_5->SetBinError(254,539.7768);
   puSF_stack_5->SetBinError(255,783.1104);
   puSF_stack_5->SetBinError(256,721.9582);
   puSF_stack_5->SetBinError(257,866.8531);
   puSF_stack_5->SetBinError(258,1041.782);
   puSF_stack_5->SetBinError(259,1228.881);
   puSF_stack_5->SetBinError(260,1452.065);
   puSF_stack_5->SetBinError(262,1707.814);
   puSF_stack_5->SetBinError(264,2021.39);
   puSF_stack_5->SetBinError(266,2355.853);
   puSF_stack_5->SetBinError(269,2751.983);
   puSF_stack_5->SetBinError(272,3167.838);
   puSF_stack_5->SetBinError(275,3631.861);
   puSF_stack_5->SetBinError(278,4124.021);
   puSF_stack_5->SetBinError(282,4636.583);
   puSF_stack_5->SetBinError(285,5163.317);
   puSF_stack_5->SetBinError(289,5667.909);
   puSF_stack_5->SetBinError(292,6159.318);
   puSF_stack_5->SetBinError(295,6624.193);
   puSF_stack_5->SetBinError(297,7058.459);
   puSF_stack_5->SetBinError(300,7413.14);
   puSF_stack_5->SetBinError(301,7733.292);
   puSF_stack_5->SetBinError(302,7973.945);
   puSF_stack_5->SetBinError(303,8153.612);
   puSF_stack_5->SetBinError(304,16718.78);
   puSF_stack_5->SetBinError(305,14374.79);
   puSF_stack_5->SetBinError(306,8169.089);
   puSF_stack_5->SetBinError(307,8093.853);
   puSF_stack_5->SetBinError(309,8011.472);
   puSF_stack_5->SetBinError(311,7908.509);
   puSF_stack_5->SetBinError(313,7768.206);
   puSF_stack_5->SetBinError(315,7620.724);
   puSF_stack_5->SetBinError(318,7443.107);
   puSF_stack_5->SetBinError(321,7237.29);
   puSF_stack_5->SetBinError(322,6986.159);
   puSF_stack_5->SetBinError(323,11432.77);
   puSF_stack_5->SetBinError(324,7636.643);
   puSF_stack_5->SetBinError(326,3793.296);
   puSF_stack_5->SetBinError(329,3338.007);
   puSF_stack_5->SetBinError(335,2886.95);
   puSF_stack_5->SetBinError(346,2430.779);
   puSF_stack_5->SetBinError(362,2024.991);
   puSF_stack_5->SetBinError(389,1623.53);
   puSF_stack_5->SetBinError(433,1252.055);
   puSF_stack_5->SetBinError(496,947.836);
   puSF_stack_5->SetBinError(501,1410.346);
   puSF_stack_5->SetEntries(1.797322e+08);

   ci = TColor::GetColor("#ff99cc");
   puSF_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_5->SetLineColor(ci);
   puSF_stack_5->GetXaxis()->SetRange(1,500);
   puSF_stack_5->GetXaxis()->SetLabelFont(42);
   puSF_stack_5->GetXaxis()->SetTitleOffset(1);
   puSF_stack_5->GetXaxis()->SetTitleFont(42);
   puSF_stack_5->GetYaxis()->SetLabelFont(42);
   puSF_stack_5->GetYaxis()->SetTitleFont(42);
   puSF_stack_5->GetZaxis()->SetLabelFont(42);
   puSF_stack_5->GetZaxis()->SetTitleOffset(1);
   puSF_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_5,"");
   
   TH1D *puSF_stack_6 = new TH1D("puSF_stack_6","",500,-5,5);
   puSF_stack_6->SetBinContent(251,70.06661);
   puSF_stack_6->SetBinContent(252,326.3748);
   puSF_stack_6->SetBinContent(253,775.7052);
   puSF_stack_6->SetBinContent(254,1171.243);
   puSF_stack_6->SetBinContent(255,2390.854);
   puSF_stack_6->SetBinContent(256,2018.823);
   puSF_stack_6->SetBinContent(257,2943.25);
   puSF_stack_6->SetBinContent(258,4321.528);
   puSF_stack_6->SetBinContent(259,5987.757);
   puSF_stack_6->SetBinContent(260,8432.404);
   puSF_stack_6->SetBinContent(262,11512.62);
   puSF_stack_6->SetBinContent(264,16325.52);
   puSF_stack_6->SetBinContent(266,22142.86);
   puSF_stack_6->SetBinContent(269,30029.19);
   puSF_stack_6->SetBinContent(272,39679.4);
   puSF_stack_6->SetBinContent(275,52309.47);
   puSF_stack_6->SetBinContent(278,67722.32);
   puSF_stack_6->SetBinContent(282,85342.94);
   puSF_stack_6->SetBinContent(285,105736.4);
   puSF_stack_6->SetBinContent(289,127734.6);
   puSF_stack_6->SetBinContent(292,151041.9);
   puSF_stack_6->SetBinContent(295,174116.4);
   puSF_stack_6->SetBinContent(297,197540.8);
   puSF_stack_6->SetBinContent(300,218526.5);
   puSF_stack_6->SetBinContent(301,237515.4);
   puSF_stack_6->SetBinContent(302,252988.4);
   puSF_stack_6->SetBinContent(303,264147.5);
   puSF_stack_6->SetBinContent(304,1109635);
   puSF_stack_6->SetBinContent(305,821342.5);
   puSF_stack_6->SetBinContent(306,264644.8);
   puSF_stack_6->SetBinContent(307,260294.3);
   puSF_stack_6->SetBinContent(309,254713.4);
   puSF_stack_6->SetBinContent(311,249376.6);
   puSF_stack_6->SetBinContent(313,238957.4);
   puSF_stack_6->SetBinContent(315,230074.8);
   puSF_stack_6->SetBinContent(318,219995.2);
   puSF_stack_6->SetBinContent(321,208365.9);
   puSF_stack_6->SetBinContent(322,194184);
   puSF_stack_6->SetBinContent(323,519707.6);
   puSF_stack_6->SetBinContent(324,231446.8);
   puSF_stack_6->SetBinContent(326,57438.8);
   puSF_stack_6->SetBinContent(329,44169.54);
   puSF_stack_6->SetBinContent(335,32936.73);
   puSF_stack_6->SetBinContent(346,23341.22);
   puSF_stack_6->SetBinContent(362,16151.03);
   puSF_stack_6->SetBinContent(389,10407.38);
   puSF_stack_6->SetBinContent(433,6136.479);
   puSF_stack_6->SetBinContent(496,3597.808);
   puSF_stack_6->SetBinContent(501,7809.037);
   puSF_stack_6->SetBinError(251,5.627886);
   puSF_stack_6->SetBinError(252,12.14641);
   puSF_stack_6->SetBinError(253,18.7257);
   puSF_stack_6->SetBinError(254,23.00982);
   puSF_stack_6->SetBinError(255,32.87503);
   puSF_stack_6->SetBinError(256,30.20917);
   puSF_stack_6->SetBinError(257,36.47567);
   puSF_stack_6->SetBinError(258,44.19859);
   puSF_stack_6->SetBinError(259,52.02616);
   puSF_stack_6->SetBinError(260,61.73983);
   puSF_stack_6->SetBinError(262,72.14012);
   puSF_stack_6->SetBinError(264,85.90595);
   puSF_stack_6->SetBinError(266,100.0476);
   puSF_stack_6->SetBinError(269,116.5096);
   puSF_stack_6->SetBinError(272,133.9283);
   puSF_stack_6->SetBinError(275,153.7729);
   puSF_stack_6->SetBinError(278,174.9668);
   puSF_stack_6->SetBinError(282,196.4145);
   puSF_stack_6->SetBinError(285,218.6261);
   puSF_stack_6->SetBinError(289,240.2946);
   puSF_stack_6->SetBinError(292,261.2994);
   puSF_stack_6->SetBinError(295,280.5496);
   puSF_stack_6->SetBinError(297,298.8258);
   puSF_stack_6->SetBinError(300,314.2981);
   puSF_stack_6->SetBinError(301,327.6692);
   puSF_stack_6->SetBinError(302,338.1738);
   puSF_stack_6->SetBinError(303,345.5517);
   puSF_stack_6->SetBinError(304,708.2391);
   puSF_stack_6->SetBinError(305,609.329);
   puSF_stack_6->SetBinError(306,345.8767);
   puSF_stack_6->SetBinError(307,343.0221);
   puSF_stack_6->SetBinError(309,339.3248);
   puSF_stack_6->SetBinError(311,335.7512);
   puSF_stack_6->SetBinError(313,328.6624);
   puSF_stack_6->SetBinError(315,322.4959);
   puSF_stack_6->SetBinError(318,315.3525);
   puSF_stack_6->SetBinError(321,306.9043);
   puSF_stack_6->SetBinError(322,296.276);
   puSF_stack_6->SetBinError(323,484.6958);
   puSF_stack_6->SetBinError(324,323.456);
   puSF_stack_6->SetBinError(326,161.1359);
   puSF_stack_6->SetBinError(329,141.3029);
   puSF_stack_6->SetBinError(335,122.0197);
   puSF_stack_6->SetBinError(346,102.7192);
   puSF_stack_6->SetBinError(362,85.44563);
   puSF_stack_6->SetBinError(389,68.58993);
   puSF_stack_6->SetBinError(433,52.66831);
   puSF_stack_6->SetBinError(496,40.32819);
   puSF_stack_6->SetBinError(501,59.41395);
   puSF_stack_6->SetEntries(1.5679e+07);

   ci = TColor::GetColor("#9933ff");
   puSF_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_6->SetLineColor(ci);
   puSF_stack_6->GetXaxis()->SetRange(1,500);
   puSF_stack_6->GetXaxis()->SetLabelFont(42);
   puSF_stack_6->GetXaxis()->SetTitleOffset(1);
   puSF_stack_6->GetXaxis()->SetTitleFont(42);
   puSF_stack_6->GetYaxis()->SetLabelFont(42);
   puSF_stack_6->GetYaxis()->SetTitleFont(42);
   puSF_stack_6->GetZaxis()->SetLabelFont(42);
   puSF_stack_6->GetZaxis()->SetTitleOffset(1);
   puSF_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_6,"");
   
   TH1D *puSF_stack_7 = new TH1D("puSF_stack_7","",500,-5,5);
   puSF_stack_7->SetBinContent(251,32.16807);
   puSF_stack_7->SetBinContent(252,114.0074);
   puSF_stack_7->SetBinContent(253,319.3154);
   puSF_stack_7->SetBinContent(254,462.1795);
   puSF_stack_7->SetBinContent(255,942.3353);
   puSF_stack_7->SetBinContent(256,784.3333);
   puSF_stack_7->SetBinContent(257,1167.985);
   puSF_stack_7->SetBinContent(258,1706.327);
   puSF_stack_7->SetBinContent(259,2404.09);
   puSF_stack_7->SetBinContent(260,3348.791);
   puSF_stack_7->SetBinContent(262,4669.574);
   puSF_stack_7->SetBinContent(264,6505.046);
   puSF_stack_7->SetBinContent(266,8778.099);
   puSF_stack_7->SetBinContent(269,11983.55);
   puSF_stack_7->SetBinContent(272,15812.03);
   puSF_stack_7->SetBinContent(275,20678.39);
   puSF_stack_7->SetBinContent(278,26841.89);
   puSF_stack_7->SetBinContent(282,33960.02);
   puSF_stack_7->SetBinContent(285,42160.04);
   puSF_stack_7->SetBinContent(289,50396.96);
   puSF_stack_7->SetBinContent(292,59579.53);
   puSF_stack_7->SetBinContent(295,69104.11);
   puSF_stack_7->SetBinContent(297,77971.62);
   puSF_stack_7->SetBinContent(300,86815.95);
   puSF_stack_7->SetBinContent(301,94333.34);
   puSF_stack_7->SetBinContent(302,100503.9);
   puSF_stack_7->SetBinContent(303,105053.4);
   puSF_stack_7->SetBinContent(304,440157.6);
   puSF_stack_7->SetBinContent(305,325508.2);
   puSF_stack_7->SetBinContent(306,105217.5);
   puSF_stack_7->SetBinContent(307,103357.9);
   puSF_stack_7->SetBinContent(309,101289.7);
   puSF_stack_7->SetBinContent(311,98879.45);
   puSF_stack_7->SetBinContent(313,95082.67);
   puSF_stack_7->SetBinContent(315,91052.67);
   puSF_stack_7->SetBinContent(318,87335.84);
   puSF_stack_7->SetBinContent(321,82541.38);
   puSF_stack_7->SetBinContent(322,76995.7);
   puSF_stack_7->SetBinContent(323,206269.2);
   puSF_stack_7->SetBinContent(324,91869.18);
   puSF_stack_7->SetBinContent(326,22754.65);
   puSF_stack_7->SetBinContent(329,17498.96);
   puSF_stack_7->SetBinContent(335,13190.8);
   puSF_stack_7->SetBinContent(346,9304.142);
   puSF_stack_7->SetBinContent(362,6471.932);
   puSF_stack_7->SetBinContent(389,4184.215);
   puSF_stack_7->SetBinContent(433,2420.647);
   puSF_stack_7->SetBinContent(496,1398.838);
   puSF_stack_7->SetBinContent(501,3130.71);
   puSF_stack_7->SetBinError(251,3.900952);
   puSF_stack_7->SetBinError(252,7.343864);
   puSF_stack_7->SetBinError(253,12.29046);
   puSF_stack_7->SetBinError(254,14.78643);
   puSF_stack_7->SetBinError(255,21.11353);
   puSF_stack_7->SetBinError(256,19.26231);
   puSF_stack_7->SetBinError(257,23.50589);
   puSF_stack_7->SetBinError(258,28.41117);
   puSF_stack_7->SetBinError(259,33.72356);
   puSF_stack_7->SetBinError(260,39.80174);
   puSF_stack_7->SetBinError(262,46.99987);
   puSF_stack_7->SetBinError(264,55.47321);
   puSF_stack_7->SetBinError(266,64.44041);
   puSF_stack_7->SetBinError(269,75.29235);
   puSF_stack_7->SetBinError(272,86.4872);
   puSF_stack_7->SetBinError(275,98.90459);
   puSF_stack_7->SetBinError(278,112.6846);
   puSF_stack_7->SetBinError(282,126.7483);
   puSF_stack_7->SetBinError(285,141.224);
   puSF_stack_7->SetBinError(289,154.4046);
   puSF_stack_7->SetBinError(292,167.8829);
   puSF_stack_7->SetBinError(295,180.8048);
   puSF_stack_7->SetBinError(297,192.0553);
   puSF_stack_7->SetBinError(300,202.6552);
   puSF_stack_7->SetBinError(301,211.2471);
   puSF_stack_7->SetBinError(302,218.0467);
   puSF_stack_7->SetBinError(303,222.9272);
   puSF_stack_7->SetBinError(304,456.3123);
   puSF_stack_7->SetBinError(305,392.4091);
   puSF_stack_7->SetBinError(306,223.1013);
   puSF_stack_7->SetBinError(307,221.121);
   puSF_stack_7->SetBinError(309,218.8974);
   puSF_stack_7->SetBinError(311,216.2774);
   puSF_stack_7->SetBinError(313,212.0844);
   puSF_stack_7->SetBinError(315,207.5412);
   puSF_stack_7->SetBinError(318,203.2611);
   puSF_stack_7->SetBinError(321,197.6032);
   puSF_stack_7->SetBinError(322,190.8496);
   puSF_stack_7->SetBinError(323,312.3743);
   puSF_stack_7->SetBinError(324,208.4697);
   puSF_stack_7->SetBinError(326,103.7512);
   puSF_stack_7->SetBinError(329,90.98382);
   puSF_stack_7->SetBinError(335,78.99392);
   puSF_stack_7->SetBinError(346,66.34317);
   puSF_stack_7->SetBinError(362,55.33183);
   puSF_stack_7->SetBinError(389,44.49027);
   puSF_stack_7->SetBinError(433,33.83949);
   puSF_stack_7->SetBinError(496,25.72419);
   puSF_stack_7->SetBinError(501,38.48394);
   puSF_stack_7->SetEntries(5945000);

   ci = TColor::GetColor("#3399ff");
   puSF_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_7->SetLineColor(ci);
   puSF_stack_7->GetXaxis()->SetRange(1,500);
   puSF_stack_7->GetXaxis()->SetLabelFont(42);
   puSF_stack_7->GetXaxis()->SetTitleOffset(1);
   puSF_stack_7->GetXaxis()->SetTitleFont(42);
   puSF_stack_7->GetYaxis()->SetLabelFont(42);
   puSF_stack_7->GetYaxis()->SetTitleFont(42);
   puSF_stack_7->GetZaxis()->SetLabelFont(42);
   puSF_stack_7->GetZaxis()->SetTitleOffset(1);
   puSF_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_7,"");
   
   TH1D *puSF_stack_8 = new TH1D("puSF_stack_8","",500,-5,5);
   puSF_stack_8->SetBinContent(251,10.89716);
   puSF_stack_8->SetBinContent(252,45.26512);
   puSF_stack_8->SetBinContent(253,110.9275);
   puSF_stack_8->SetBinContent(254,168.2074);
   puSF_stack_8->SetBinContent(255,356.2533);
   puSF_stack_8->SetBinContent(256,278.2967);
   puSF_stack_8->SetBinContent(257,414.3715);
   puSF_stack_8->SetBinContent(258,592.3584);
   puSF_stack_8->SetBinContent(259,848.5814);
   puSF_stack_8->SetBinContent(260,1169.908);
   puSF_stack_8->SetBinContent(262,1573.103);
   puSF_stack_8->SetBinContent(264,2302.374);
   puSF_stack_8->SetBinContent(266,3047.293);
   puSF_stack_8->SetBinContent(269,4112.7);
   puSF_stack_8->SetBinContent(272,5579.346);
   puSF_stack_8->SetBinContent(275,7308.921);
   puSF_stack_8->SetBinContent(278,9329.366);
   puSF_stack_8->SetBinContent(282,11912.27);
   puSF_stack_8->SetBinContent(285,14720.95);
   puSF_stack_8->SetBinContent(289,17728.28);
   puSF_stack_8->SetBinContent(292,20995.47);
   puSF_stack_8->SetBinContent(295,24186.94);
   puSF_stack_8->SetBinContent(297,27387.64);
   puSF_stack_8->SetBinContent(300,30395.81);
   puSF_stack_8->SetBinContent(301,32868.07);
   puSF_stack_8->SetBinContent(302,35194.47);
   puSF_stack_8->SetBinContent(303,36706.66);
   puSF_stack_8->SetBinContent(304,154222.8);
   puSF_stack_8->SetBinContent(305,114108.4);
   puSF_stack_8->SetBinContent(306,36792.44);
   puSF_stack_8->SetBinContent(307,36303.75);
   puSF_stack_8->SetBinContent(309,35562.18);
   puSF_stack_8->SetBinContent(311,34758.03);
   puSF_stack_8->SetBinContent(313,33360.4);
   puSF_stack_8->SetBinContent(315,32062.52);
   puSF_stack_8->SetBinContent(318,30557.59);
   puSF_stack_8->SetBinContent(321,28964.93);
   puSF_stack_8->SetBinContent(322,27069.66);
   puSF_stack_8->SetBinContent(323,72128.58);
   puSF_stack_8->SetBinContent(324,31998.81);
   puSF_stack_8->SetBinContent(326,7852.102);
   puSF_stack_8->SetBinContent(329,6144.88);
   puSF_stack_8->SetBinContent(335,4601.675);
   puSF_stack_8->SetBinContent(346,3222.486);
   puSF_stack_8->SetBinContent(362,2257.109);
   puSF_stack_8->SetBinContent(389,1460.499);
   puSF_stack_8->SetBinContent(433,874.0081);
   puSF_stack_8->SetBinContent(496,477.7985);
   puSF_stack_8->SetBinContent(501,1089.716);
   puSF_stack_8->SetBinError(251,1.744942);
   puSF_stack_8->SetBinError(252,3.556364);
   puSF_stack_8->SetBinError(253,5.567291);
   puSF_stack_8->SetBinError(254,6.855623);
   puSF_stack_8->SetBinError(255,9.977088);
   puSF_stack_8->SetBinError(256,8.818168);
   puSF_stack_8->SetBinError(257,10.76017);
   puSF_stack_8->SetBinError(258,12.8652);
   puSF_stack_8->SetBinError(259,15.39824);
   puSF_stack_8->SetBinError(260,18.08007);
   puSF_stack_8->SetBinError(262,20.96539);
   puSF_stack_8->SetBinError(264,25.36368);
   puSF_stack_8->SetBinError(266,29.17974);
   puSF_stack_8->SetBinError(269,33.89908);
   puSF_stack_8->SetBinError(272,39.48353);
   puSF_stack_8->SetBinError(275,45.1909);
   puSF_stack_8->SetBinError(278,51.05643);
   puSF_stack_8->SetBinError(282,57.6928);
   puSF_stack_8->SetBinError(285,64.13457);
   puSF_stack_8->SetBinError(289,70.38136);
   puSF_stack_8->SetBinError(292,76.59267);
   puSF_stack_8->SetBinError(295,82.20815);
   puSF_stack_8->SetBinError(297,87.47856);
   puSF_stack_8->SetBinError(300,92.15761);
   puSF_stack_8->SetBinError(301,95.8322);
   puSF_stack_8->SetBinError(302,99.16572);
   puSF_stack_8->SetBinError(303,101.2737);
   puSF_stack_8->SetBinError(304,207.5862);
   puSF_stack_8->SetBinError(305,178.5595);
   puSF_stack_8->SetBinError(306,101.392);
   puSF_stack_8->SetBinError(307,100.7164);
   puSF_stack_8->SetBinError(309,99.68242);
   puSF_stack_8->SetBinError(311,98.54893);
   puSF_stack_8->SetBinError(313,96.54726);
   puSF_stack_8->SetBinError(315,94.65055);
   puSF_stack_8->SetBinError(318,92.40254);
   puSF_stack_8->SetBinError(321,89.96231);
   puSF_stack_8->SetBinError(322,86.96926);
   puSF_stack_8->SetBinError(323,141.9639);
   puSF_stack_8->SetBinError(324,94.55647);
   puSF_stack_8->SetBinError(326,46.84005);
   puSF_stack_8->SetBinError(329,41.43631);
   puSF_stack_8->SetBinError(335,35.85769);
   puSF_stack_8->SetBinError(346,30.00681);
   puSF_stack_8->SetBinError(362,25.11312);
   puSF_stack_8->SetBinError(389,20.2011);
   puSF_stack_8->SetBinError(433,15.62723);
   puSF_stack_8->SetBinError(496,11.55438);
   puSF_stack_8->SetBinError(501,17.44942);
   puSF_stack_8->SetEntries(3526000);

   ci = TColor::GetColor("#33ff99");
   puSF_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_8->SetLineColor(ci);
   puSF_stack_8->GetXaxis()->SetRange(1,500);
   puSF_stack_8->GetXaxis()->SetLabelFont(42);
   puSF_stack_8->GetXaxis()->SetTitleOffset(1);
   puSF_stack_8->GetXaxis()->SetTitleFont(42);
   puSF_stack_8->GetYaxis()->SetLabelFont(42);
   puSF_stack_8->GetYaxis()->SetTitleFont(42);
   puSF_stack_8->GetZaxis()->SetLabelFont(42);
   puSF_stack_8->GetZaxis()->SetTitleOffset(1);
   puSF_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_8,"");
   
   TH1D *puSF_stack_9 = new TH1D("puSF_stack_9","",500,-5,5);
   puSF_stack_9->SetBinContent(251,0.2605788);
   puSF_stack_9->SetBinContent(252,1.003457);
   puSF_stack_9->SetBinContent(253,2.402353);
   puSF_stack_9->SetBinContent(254,3.764677);
   puSF_stack_9->SetBinContent(255,7.687074);
   puSF_stack_9->SetBinContent(256,6.420752);
   puSF_stack_9->SetBinContent(257,9.426551);
   puSF_stack_9->SetBinContent(258,13.62095);
   puSF_stack_9->SetBinContent(259,19.31026);
   puSF_stack_9->SetBinContent(260,26.96533);
   puSF_stack_9->SetBinContent(262,36.97933);
   puSF_stack_9->SetBinContent(264,52.29633);
   puSF_stack_9->SetBinContent(266,71.24086);
   puSF_stack_9->SetBinContent(269,95.56155);
   puSF_stack_9->SetBinContent(272,128.2436);
   puSF_stack_9->SetBinContent(275,167.7876);
   puSF_stack_9->SetBinContent(278,217.1467);
   puSF_stack_9->SetBinContent(282,275.9506);
   puSF_stack_9->SetBinContent(285,341.5342);
   puSF_stack_9->SetBinContent(289,410.2424);
   puSF_stack_9->SetBinContent(292,484.9737);
   puSF_stack_9->SetBinContent(295,562.7793);
   puSF_stack_9->SetBinContent(297,635.1745);
   puSF_stack_9->SetBinContent(300,706.2485);
   puSF_stack_9->SetBinContent(301,767.1805);
   puSF_stack_9->SetBinContent(302,813.7966);
   puSF_stack_9->SetBinContent(303,852.4194);
   puSF_stack_9->SetBinContent(304,3571.765);
   puSF_stack_9->SetBinContent(305,2644.874);
   puSF_stack_9->SetBinContent(306,853.2515);
   puSF_stack_9->SetBinContent(307,838.3367);
   puSF_stack_9->SetBinContent(309,822.7889);
   puSF_stack_9->SetBinContent(311,802.6123);
   puSF_stack_9->SetBinContent(313,773.1463);
   puSF_stack_9->SetBinContent(315,738.4939);
   puSF_stack_9->SetBinContent(318,708.8291);
   puSF_stack_9->SetBinContent(321,672.5218);
   puSF_stack_9->SetBinContent(322,626.6005);
   puSF_stack_9->SetBinContent(323,1672.104);
   puSF_stack_9->SetBinContent(324,745.4998);
   puSF_stack_9->SetBinContent(326,184.4601);
   puSF_stack_9->SetBinContent(329,142.5526);
   puSF_stack_9->SetBinContent(335,106.8487);
   puSF_stack_9->SetBinContent(346,75.40098);
   puSF_stack_9->SetBinContent(362,52.18433);
   puSF_stack_9->SetBinContent(389,33.6238);
   puSF_stack_9->SetBinContent(433,20.09885);
   puSF_stack_9->SetBinContent(496,11.31918);
   puSF_stack_9->SetBinContent(501,25.51158);
   puSF_stack_9->SetBinError(251,0.02440544);
   puSF_stack_9->SetBinError(252,0.04789238);
   puSF_stack_9->SetBinError(253,0.07410296);
   puSF_stack_9->SetBinError(254,0.09276432);
   puSF_stack_9->SetBinError(255,0.1325555);
   puSF_stack_9->SetBinError(256,0.1211463);
   puSF_stack_9->SetBinError(257,0.146789);
   puSF_stack_9->SetBinError(258,0.1764497);
   puSF_stack_9->SetBinError(259,0.2100928);
   puSF_stack_9->SetBinError(260,0.2482676);
   puSF_stack_9->SetBinError(262,0.2907345);
   puSF_stack_9->SetBinError(264,0.3457424);
   puSF_stack_9->SetBinError(266,0.4035354);
   puSF_stack_9->SetBinError(269,0.4673677);
   puSF_stack_9->SetBinError(272,0.5414208);
   puSF_stack_9->SetBinError(275,0.6192942);
   puSF_stack_9->SetBinError(278,0.7045206);
   puSF_stack_9->SetBinError(282,0.7942053);
   puSF_stack_9->SetBinError(285,0.8835562);
   puSF_stack_9->SetBinError(289,0.9683612);
   puSF_stack_9->SetBinError(292,1.052873);
   puSF_stack_9->SetBinError(295,1.134191);
   puSF_stack_9->SetBinError(297,1.204935);
   puSF_stack_9->SetBinError(300,1.270562);
   puSF_stack_9->SetBinError(301,1.324237);
   puSF_stack_9->SetBinError(302,1.363876);
   puSF_stack_9->SetBinError(303,1.395866);
   puSF_stack_9->SetBinError(304,2.857317);
   puSF_stack_9->SetBinError(305,2.45878);
   puSF_stack_9->SetBinError(306,1.396547);
   puSF_stack_9->SetBinError(307,1.384288);
   puSF_stack_9->SetBinError(309,1.371391);
   puSF_stack_9->SetBinError(311,1.354472);
   puSF_stack_9->SetBinError(313,1.329376);
   puSF_stack_9->SetBinError(315,1.299243);
   puSF_stack_9->SetBinError(318,1.272881);
   puSF_stack_9->SetBinError(321,1.239853);
   puSF_stack_9->SetBinError(322,1.196775);
   puSF_stack_9->SetBinError(323,1.955009);
   puSF_stack_9->SetBinError(324,1.305392);
   puSF_stack_9->SetBinError(326,0.6493342);
   puSF_stack_9->SetBinError(329,0.5708272);
   puSF_stack_9->SetBinError(335,0.4941989);
   puSF_stack_9->SetBinError(346,0.4151505);
   puSF_stack_9->SetBinError(362,0.345372);
   puSF_stack_9->SetBinError(389,0.2772302);
   puSF_stack_9->SetBinError(433,0.2143397);
   puSF_stack_9->SetBinError(496,0.1608513);
   puSF_stack_9->SetBinError(501,0.2414825);
   puSF_stack_9->SetEntries(9989262);

   ci = TColor::GetColor("#cccc00");
   puSF_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_9->SetLineColor(ci);
   puSF_stack_9->GetXaxis()->SetRange(1,500);
   puSF_stack_9->GetXaxis()->SetLabelFont(42);
   puSF_stack_9->GetXaxis()->SetTitleOffset(1);
   puSF_stack_9->GetXaxis()->SetTitleFont(42);
   puSF_stack_9->GetYaxis()->SetLabelFont(42);
   puSF_stack_9->GetYaxis()->SetTitleFont(42);
   puSF_stack_9->GetZaxis()->SetLabelFont(42);
   puSF_stack_9->GetZaxis()->SetTitleOffset(1);
   puSF_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_9,"");
   
   TH1D *puSF_stack_10 = new TH1D("puSF_stack_10","",500,-5,5);
   puSF_stack_10->SetBinContent(251,0.2557461);
   puSF_stack_10->SetBinContent(252,0.5424916);
   puSF_stack_10->SetBinContent(253,0.6015099);
   puSF_stack_10->SetBinContent(254,1.077233);
   puSF_stack_10->SetBinContent(256,1.777107);
   puSF_stack_10->SetBinContent(259,2.91634);
   puSF_stack_10->SetBinContent(262,4.502084);
   puSF_stack_10->SetBinContent(266,6.664301);
   puSF_stack_10->SetBinContent(268,0.0333841);
   puSF_stack_10->SetBinContent(271,9.463796);
   puSF_stack_10->SetBinContent(275,5.634163);
   puSF_stack_10->SetBinContent(276,13.34708);
   puSF_stack_10->SetBinContent(281,18.20387);
   puSF_stack_10->SetBinContent(286,23.87619);
   puSF_stack_10->SetBinContent(288,10.75028);
   puSF_stack_10->SetBinContent(290,2.657613);
   puSF_stack_10->SetBinContent(292,30.82783);
   puSF_stack_10->SetBinContent(295,19.01165);
   puSF_stack_10->SetBinContent(296,38.69158);
   puSF_stack_10->SetBinContent(298,0.3159567);
   puSF_stack_10->SetBinContent(299,30.9405);
   puSF_stack_10->SetBinContent(300,47.68621);
   puSF_stack_10->SetBinContent(303,840.4227);
   puSF_stack_10->SetBinContent(304,347.1785);
   puSF_stack_10->SetBinContent(305,540.2835);
   puSF_stack_10->SetBinContent(306,91.45574);
   puSF_stack_10->SetBinContent(307,67.16404);
   puSF_stack_10->SetBinContent(308,169.3492);
   puSF_stack_10->SetBinContent(309,90.47389);
   puSF_stack_10->SetBinContent(310,316.1737);
   puSF_stack_10->SetBinContent(311,248.4451);
   puSF_stack_10->SetBinError(251,0.01234754);
   puSF_stack_10->SetBinError(252,0.01798342);
   puSF_stack_10->SetBinError(253,0.01893639);
   puSF_stack_10->SetBinError(254,0.02534141);
   puSF_stack_10->SetBinError(256,0.03254862);
   puSF_stack_10->SetBinError(259,0.04169605);
   puSF_stack_10->SetBinError(262,0.05180631);
   puSF_stack_10->SetBinError(266,0.06303084);
   puSF_stack_10->SetBinError(268,0.004461138);
   puSF_stack_10->SetBinError(271,0.07511186);
   puSF_stack_10->SetBinError(275,0.05795495);
   puSF_stack_10->SetBinError(276,0.08920085);
   puSF_stack_10->SetBinError(281,0.1041736);
   puSF_stack_10->SetBinError(286,0.1193049);
   puSF_stack_10->SetBinError(288,0.08005448);
   puSF_stack_10->SetBinError(290,0.03980354);
   puSF_stack_10->SetBinError(292,0.1355649);
   puSF_stack_10->SetBinError(295,0.1064598);
   puSF_stack_10->SetBinError(296,0.1518742);
   puSF_stack_10->SetBinError(298,0.01372428);
   puSF_stack_10->SetBinError(299,0.1358124);
   puSF_stack_10->SetBinError(300,0.1686057);
   puSF_stack_10->SetBinError(303,0.707823);
   puSF_stack_10->SetBinError(304,0.454938);
   puSF_stack_10->SetBinError(305,0.5675272);
   puSF_stack_10->SetBinError(306,0.233497);
   puSF_stack_10->SetBinError(307,0.2000987);
   puSF_stack_10->SetBinError(308,0.3177367);
   puSF_stack_10->SetBinError(309,0.2322402);
   puSF_stack_10->SetBinError(310,0.4341489);
   puSF_stack_10->SetBinError(311,0.3848496);
   puSF_stack_10->SetEntries(5000000);

   ci = TColor::GetColor("#0000cc");
   puSF_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_10->SetLineColor(ci);
   puSF_stack_10->GetXaxis()->SetRange(1,500);
   puSF_stack_10->GetXaxis()->SetLabelFont(42);
   puSF_stack_10->GetXaxis()->SetTitleOffset(1);
   puSF_stack_10->GetXaxis()->SetTitleFont(42);
   puSF_stack_10->GetYaxis()->SetLabelFont(42);
   puSF_stack_10->GetYaxis()->SetTitleFont(42);
   puSF_stack_10->GetZaxis()->SetLabelFont(42);
   puSF_stack_10->GetZaxis()->SetTitleOffset(1);
   puSF_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_10,"");
   
   TH1D *puSF_stack_11 = new TH1D("puSF_stack_11","",500,-5,5);
   puSF_stack_11->SetBinContent(251,0.02275762);
   puSF_stack_11->SetBinContent(252,0.05916981);
   puSF_stack_11->SetBinContent(253,0.1661306);
   puSF_stack_11->SetBinContent(254,0.1752337);
   puSF_stack_11->SetBinContent(255,0.3937068);
   puSF_stack_11->SetBinContent(256,0.2912975);
   puSF_stack_11->SetBinContent(257,0.439222);
   puSF_stack_11->SetBinContent(258,0.7282438);
   puSF_stack_11->SetBinContent(259,0.9831291);
   puSF_stack_11->SetBinContent(260,1.329045);
   puSF_stack_11->SetBinContent(262,1.854746);
   puSF_stack_11->SetBinContent(264,2.435065);
   puSF_stack_11->SetBinContent(266,3.652598);
   puSF_stack_11->SetBinContent(269,4.590212);
   puSF_stack_11->SetBinContent(272,6.515506);
   puSF_stack_11->SetBinContent(275,8.611483);
   puSF_stack_11->SetBinContent(278,11.02379);
   puSF_stack_11->SetBinContent(282,13.7547);
   puSF_stack_11->SetBinContent(285,16.92257);
   puSF_stack_11->SetBinContent(289,20.54103);
   puSF_stack_11->SetBinContent(292,24.17314);
   puSF_stack_11->SetBinContent(295,28.10111);
   puSF_stack_11->SetBinContent(297,31.8106);
   puSF_stack_11->SetBinContent(300,35.03991);
   puSF_stack_11->SetBinContent(301,37.91192);
   puSF_stack_11->SetBinContent(302,40.26278);
   puSF_stack_11->SetBinContent(303,42.47937);
   puSF_stack_11->SetBinContent(304,177.1362);
   puSF_stack_11->SetBinContent(305,130.9337);
   puSF_stack_11->SetBinContent(306,42.66143);
   puSF_stack_11->SetBinContent(307,41.20722);
   puSF_stack_11->SetBinContent(309,41.28915);
   puSF_stack_11->SetBinContent(311,40.21954);
   puSF_stack_11->SetBinContent(313,38.1668);
   puSF_stack_11->SetBinContent(315,36.91969);
   puSF_stack_11->SetBinContent(318,34.97391);
   puSF_stack_11->SetBinContent(321,33.77458);
   puSF_stack_11->SetBinContent(322,31.41007);
   puSF_stack_11->SetBinContent(323,84.20774);
   puSF_stack_11->SetBinContent(324,37.07671);
   puSF_stack_11->SetBinContent(326,9.148563);
   puSF_stack_11->SetBinContent(329,7.223268);
   puSF_stack_11->SetBinContent(335,5.234252);
   puSF_stack_11->SetBinContent(346,3.693562);
   puSF_stack_11->SetBinContent(362,2.651263);
   puSF_stack_11->SetBinContent(389,1.620342);
   puSF_stack_11->SetBinContent(433,0.9125805);
   puSF_stack_11->SetBinContent(496,0.5757678);
   puSF_stack_11->SetBinContent(501,1.285805);
   puSF_stack_11->SetBinError(251,0.007196591);
   puSF_stack_11->SetBinError(252,0.01160415);
   puSF_stack_11->SetBinError(253,0.01944412);
   puSF_stack_11->SetBinError(254,0.01996973);
   puSF_stack_11->SetBinError(255,0.02993297);
   puSF_stack_11->SetBinError(256,0.02574731);
   puSF_stack_11->SetBinError(257,0.03161589);
   puSF_stack_11->SetBinError(258,0.04071007);
   puSF_stack_11->SetBinError(259,0.04730082);
   puSF_stack_11->SetBinError(260,0.05499627);
   puSF_stack_11->SetBinError(262,0.06496892);
   puSF_stack_11->SetBinError(264,0.07444212);
   puSF_stack_11->SetBinError(266,0.0911726);
   puSF_stack_11->SetBinError(269,0.1022068);
   puSF_stack_11->SetBinError(272,0.1217692);
   puSF_stack_11->SetBinError(275,0.1399917);
   puSF_stack_11->SetBinError(278,0.1583904);
   puSF_stack_11->SetBinError(282,0.1769249);
   puSF_stack_11->SetBinError(285,0.1962441);
   puSF_stack_11->SetBinError(289,0.2162094);
   puSF_stack_11->SetBinError(292,0.234547);
   puSF_stack_11->SetBinError(295,0.2528862);
   puSF_stack_11->SetBinError(297,0.2690601);
   puSF_stack_11->SetBinError(300,0.2823871);
   puSF_stack_11->SetBinError(301,0.293732);
   puSF_stack_11->SetBinError(302,0.302702);
   puSF_stack_11->SetBinError(303,0.3109227);
   puSF_stack_11->SetBinError(304,0.6349172);
   puSF_stack_11->SetBinError(305,0.5458698);
   puSF_stack_11->SetBinError(306,0.3115883);
   puSF_stack_11->SetBinError(307,0.3062316);
   puSF_stack_11->SetBinError(309,0.3065359);
   puSF_stack_11->SetBinError(311,0.3025394);
   puSF_stack_11->SetBinError(313,0.2947178);
   puSF_stack_11->SetBinError(315,0.2898627);
   puSF_stack_11->SetBinError(318,0.2821211);
   puSF_stack_11->SetBinError(321,0.2772416);
   puSF_stack_11->SetBinError(322,0.2673609);
   puSF_stack_11->SetBinError(323,0.4377634);
   puSF_stack_11->SetBinError(324,0.2904785);
   puSF_stack_11->SetBinError(326,0.1442912);
   puSF_stack_11->SetBinError(329,0.1282125);
   puSF_stack_11->SetBinError(335,0.1091417);
   puSF_stack_11->SetBinError(346,0.09168242);
   puSF_stack_11->SetBinError(362,0.07767652);
   puSF_stack_11->SetBinError(389,0.0607249);
   puSF_stack_11->SetBinError(433,0.0455721);
   puSF_stack_11->SetBinError(496,0.03619821);
   puSF_stack_11->SetBinError(501,0.05409424);
   puSF_stack_11->SetEntries(499433);

   ci = TColor::GetColor("#cc0000");
   puSF_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_11->SetLineColor(ci);
   puSF_stack_11->GetXaxis()->SetRange(1,500);
   puSF_stack_11->GetXaxis()->SetLabelFont(42);
   puSF_stack_11->GetXaxis()->SetTitleOffset(1);
   puSF_stack_11->GetXaxis()->SetTitleFont(42);
   puSF_stack_11->GetYaxis()->SetLabelFont(42);
   puSF_stack_11->GetYaxis()->SetTitleFont(42);
   puSF_stack_11->GetZaxis()->SetLabelFont(42);
   puSF_stack_11->GetZaxis()->SetTitleOffset(1);
   puSF_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_11,"");
   
   TH1D *puSF_stack_12 = new TH1D("puSF_stack_12","",500,-5,5);
   puSF_stack_12->SetBinContent(251,0.001498284);
   puSF_stack_12->SetBinContent(252,0.006892106);
   puSF_stack_12->SetBinContent(253,0.01977735);
   puSF_stack_12->SetBinContent(254,0.02457186);
   puSF_stack_12->SetBinContent(255,0.04524818);
   puSF_stack_12->SetBinContent(256,0.0485444);
   puSF_stack_12->SetBinContent(257,0.06682347);
   puSF_stack_12->SetBinContent(258,0.09648949);
   puSF_stack_12->SetBinContent(259,0.1177651);
   puSF_stack_12->SetBinContent(260,0.1746999);
   puSF_stack_12->SetBinContent(262,0.2565062);
   puSF_stack_12->SetBinContent(264,0.3467029);
   puSF_stack_12->SetBinContent(266,0.4608722);
   puSF_stack_12->SetBinContent(269,0.6035088);
   puSF_stack_12->SetBinContent(272,0.8363421);
   puSF_stack_12->SetBinContent(275,1.076667);
   puSF_stack_12->SetBinContent(278,1.428464);
   puSF_stack_12->SetBinContent(282,1.761982);
   puSF_stack_12->SetBinContent(285,2.242931);
   puSF_stack_12->SetBinContent(289,2.666945);
   puSF_stack_12->SetBinContent(292,3.168871);
   puSF_stack_12->SetBinContent(295,3.664203);
   puSF_stack_12->SetBinContent(297,4.048963);
   puSF_stack_12->SetBinContent(300,4.547891);
   puSF_stack_12->SetBinContent(301,4.986589);
   puSF_stack_12->SetBinContent(302,5.280852);
   puSF_stack_12->SetBinContent(303,5.540954);
   puSF_stack_12->SetBinContent(304,23.11313);
   puSF_stack_12->SetBinContent(305,17.21229);
   puSF_stack_12->SetBinContent(306,5.555937);
   puSF_stack_12->SetBinContent(307,5.442966);
   puSF_stack_12->SetBinContent(309,5.311117);
   puSF_stack_12->SetBinContent(311,5.22961);
   puSF_stack_12->SetBinContent(313,5.042924);
   puSF_stack_12->SetBinContent(315,4.779226);
   puSF_stack_12->SetBinContent(318,4.634192);
   puSF_stack_12->SetBinContent(321,4.376488);
   puSF_stack_12->SetBinContent(322,4.076831);
   puSF_stack_12->SetBinContent(323,10.74779);
   puSF_stack_12->SetBinContent(324,4.834962);
   puSF_stack_12->SetBinContent(326,1.237882);
   puSF_stack_12->SetBinContent(329,0.9049635);
   puSF_stack_12->SetBinContent(335,0.6802209);
   puSF_stack_12->SetBinContent(346,0.4677643);
   puSF_stack_12->SetBinContent(362,0.3284238);
   puSF_stack_12->SetBinContent(389,0.2196484);
   puSF_stack_12->SetBinContent(433,0.1303507);
   puSF_stack_12->SetBinContent(496,0.07521386);
   puSF_stack_12->SetBinContent(501,0.1573198);
   puSF_stack_12->SetBinError(251,0.000670053);
   puSF_stack_12->SetBinError(252,0.001437104);
   puSF_stack_12->SetBinError(253,0.002434423);
   puSF_stack_12->SetBinError(254,0.002713508);
   puSF_stack_12->SetBinError(255,0.003682244);
   puSF_stack_12->SetBinError(256,0.003814008);
   puSF_stack_12->SetBinError(257,0.00447483);
   puSF_stack_12->SetBinError(258,0.005377149);
   puSF_stack_12->SetBinError(259,0.005940465);
   puSF_stack_12->SetBinError(260,0.007235331);
   puSF_stack_12->SetBinError(262,0.008767202);
   puSF_stack_12->SetBinError(264,0.01019274);
   puSF_stack_12->SetBinError(266,0.01175174);
   puSF_stack_12->SetBinError(269,0.01344788);
   puSF_stack_12->SetBinError(272,0.01583084);
   puSF_stack_12->SetBinError(275,0.01796192);
   puSF_stack_12->SetBinError(278,0.02068934);
   puSF_stack_12->SetBinError(282,0.02297803);
   puSF_stack_12->SetBinError(285,0.02592508);
   puSF_stack_12->SetBinError(289,0.02826957);
   puSF_stack_12->SetBinError(292,0.03081515);
   puSF_stack_12->SetBinError(295,0.03313613);
   puSF_stack_12->SetBinError(297,0.03483244);
   puSF_stack_12->SetBinError(300,0.03691621);
   puSF_stack_12->SetBinError(301,0.03865573);
   puSF_stack_12->SetBinError(302,0.03977993);
   puSF_stack_12->SetBinError(303,0.04074782);
   puSF_stack_12->SetBinError(304,0.08322263);
   puSF_stack_12->SetBinError(305,0.07181768);
   puSF_stack_12->SetBinError(306,0.04080287);
   puSF_stack_12->SetBinError(307,0.04038591);
   puSF_stack_12->SetBinError(309,0.03989376);
   puSF_stack_12->SetBinError(311,0.03958647);
   puSF_stack_12->SetBinError(313,0.03887347);
   puSF_stack_12->SetBinError(315,0.03784346);
   puSF_stack_12->SetBinError(318,0.03726483);
   puSF_stack_12->SetBinError(321,0.03621387);
   puSF_stack_12->SetBinError(322,0.03495211);
   puSF_stack_12->SetBinError(323,0.05675076);
   puSF_stack_12->SetBinError(324,0.03806349);
   puSF_stack_12->SetBinError(326,0.0192598);
   puSF_stack_12->SetBinError(329,0.0164675);
   puSF_stack_12->SetBinError(335,0.014277);
   puSF_stack_12->SetBinError(346,0.01183929);
   puSF_stack_12->SetBinError(362,0.009920405);
   puSF_stack_12->SetBinError(389,0.0081129);
   puSF_stack_12->SetBinError(433,0.006249838);
   puSF_stack_12->SetBinError(496,0.004747456);
   puSF_stack_12->SetBinError(501,0.006866);
   puSF_stack_12->SetEntries(494168);

   ci = TColor::GetColor("#00cc00");
   puSF_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_12->SetLineColor(ci);
   puSF_stack_12->GetXaxis()->SetRange(1,500);
   puSF_stack_12->GetXaxis()->SetLabelFont(42);
   puSF_stack_12->GetXaxis()->SetTitleOffset(1);
   puSF_stack_12->GetXaxis()->SetTitleFont(42);
   puSF_stack_12->GetYaxis()->SetLabelFont(42);
   puSF_stack_12->GetYaxis()->SetTitleFont(42);
   puSF_stack_12->GetZaxis()->SetLabelFont(42);
   puSF_stack_12->GetZaxis()->SetTitleOffset(1);
   puSF_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_12,"");
   st->Draw("hist");
   
   TH1D *puSF__11 = new TH1D("puSF__11","",200,-2,2);
   puSF__11->SetEntries(199);

   ci = TColor::GetColor("#000099");
   puSF__11->SetLineColor(ci);
   puSF__11->SetLineWidth(2);
   puSF__11->SetMarkerStyle(20);
   puSF__11->SetMarkerSize(1.2);
   puSF__11->GetXaxis()->SetRange(1,200);
   puSF__11->GetXaxis()->SetLabelFont(42);
   puSF__11->GetXaxis()->SetTitleOffset(1);
   puSF__11->GetXaxis()->SetTitleFont(42);
   puSF__11->GetYaxis()->SetLabelFont(42);
   puSF__11->GetYaxis()->SetTitleFont(42);
   puSF__11->GetZaxis()->SetLabelFont(42);
   puSF__11->GetZaxis()->SetTitleOffset(1);
   puSF__11->GetZaxis()->SetTitleFont(42);
   puSF__11->Draw("same E");
   
   Double_t Graph_from_puSF_fx1011[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
   -4.65, -4.63, -4.61, -4.59, -4.57, -4.55, -4.53, -4.51, -4.49, -4.47, -4.45, -4.43, -4.41, -4.39, -4.37, -4.35,
   -4.33, -4.31, -4.29, -4.27, -4.25, -4.23, -4.21, -4.19, -4.17, -4.15, -4.13, -4.11, -4.09, -4.07, -4.05, -4.03,
   -4.01, -3.99, -3.97, -3.95, -3.93, -3.91, -3.89, -3.87, -3.85, -3.83, -3.81, -3.79, -3.77, -3.75, -3.73, -3.71,
   -3.69, -3.67, -3.65, -3.63, -3.61, -3.59, -3.57, -3.55, -3.53, -3.51, -3.49, -3.47, -3.45, -3.43, -3.41, -3.39,
   -3.37, -3.35, -3.33, -3.31, -3.29, -3.27, -3.25, -3.23, -3.21, -3.19, -3.17, -3.15, -3.13, -3.11, -3.09, -3.07,
   -3.05, -3.03, -3.01, -2.99, -2.97, -2.95, -2.93, -2.91, -2.89, -2.87, -2.85, -2.83, -2.81, -2.79, -2.77, -2.75,
   -2.73, -2.71, -2.69, -2.67, -2.65, -2.63, -2.61, -2.59, -2.57, -2.55, -2.53, -2.51, -2.49, -2.47, -2.45, -2.43,
   -2.41, -2.39, -2.37, -2.35, -2.33, -2.31, -2.29, -2.27, -2.25, -2.23, -2.21, -2.19, -2.17, -2.15, -2.13, -2.11,
   -2.09, -2.07, -2.05, -2.03, -2.01, -1.99, -1.97, -1.95, -1.93, -1.91, -1.89, -1.87, -1.85, -1.83, -1.81, -1.79,
   -1.77, -1.75, -1.73, -1.71, -1.69, -1.67, -1.65, -1.63, -1.61, -1.59, -1.57, -1.55, -1.53, -1.51, -1.49, -1.47,
   -1.45, -1.43, -1.41, -1.39, -1.37, -1.35, -1.33, -1.31, -1.29, -1.27, -1.25, -1.23, -1.21, -1.19, -1.17, -1.15,
   -1.13, -1.11, -1.09, -1.07, -1.05, -1.03, -1.01, -0.99, -0.97, -0.95, -0.93, -0.91, -0.89, -0.87, -0.85, -0.83,
   -0.81, -0.79, -0.77, -0.75, -0.73, -0.71, -0.69, -0.67, -0.65, -0.63, -0.61, -0.59, -0.57, -0.55, -0.53, -0.51,
   -0.49, -0.47, -0.45, -0.43, -0.41, -0.39, -0.37, -0.35, -0.33, -0.31, -0.29, -0.27, -0.25, -0.23, -0.21, -0.19,
   -0.17, -0.15, -0.13, -0.11, -0.09, -0.07, -0.05, -0.03, -0.01, 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13,
   0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33, 0.35, 0.37, 0.39, 0.41, 0.43, 0.45,
   0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65, 0.67, 0.69, 0.71, 0.73, 0.75, 0.77,
   0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97, 0.99, 1.01, 1.03, 1.05, 1.07, 1.09,
   1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.27, 1.29, 1.31, 1.33, 1.35, 1.37, 1.39, 1.41,
   1.43, 1.45, 1.47, 1.49, 1.51, 1.53, 1.55, 1.57, 1.59, 1.61, 1.63, 1.65, 1.67, 1.69, 1.71, 1.73,
   1.75, 1.77, 1.79, 1.81, 1.83, 1.85, 1.87, 1.89, 1.91, 1.93, 1.95, 1.97, 1.99, 2.01, 2.03, 2.05,
   2.07, 2.09, 2.11, 2.13, 2.15, 2.17, 2.19, 2.21, 2.23, 2.25, 2.27, 2.29, 2.31, 2.33, 2.35, 2.37,
   2.39, 2.41, 2.43, 2.45, 2.47, 2.49, 2.51, 2.53, 2.55, 2.57, 2.59, 2.61, 2.63, 2.65, 2.67, 2.69,
   2.71, 2.73, 2.75, 2.77, 2.79, 2.81, 2.83, 2.85, 2.87, 2.89, 2.91, 2.93, 2.95, 2.97, 2.99, 3.01,
   3.03, 3.05, 3.07, 3.09, 3.11, 3.13, 3.15, 3.17, 3.19, 3.21, 3.23, 3.25, 3.27, 3.29, 3.31, 3.33,
   3.35, 3.37, 3.39, 3.41, 3.43, 3.45, 3.47, 3.49, 3.51, 3.53, 3.55, 3.57, 3.59, 3.61, 3.63, 3.65,
   3.67, 3.69, 3.71, 3.73, 3.75, 3.77, 3.79, 3.81, 3.83, 3.85, 3.87, 3.89, 3.91, 3.93, 3.95, 3.97,
   3.99, 4.01, 4.03, 4.05, 4.07, 4.09, 4.11, 4.13, 4.15, 4.17, 4.19, 4.21, 4.23, 4.25, 4.27, 4.29,
   4.31, 4.33, 4.35, 4.37, 4.39, 4.41, 4.43, 4.45, 4.47, 4.49, 4.51, 4.53, 4.55, 4.57, 4.59, 4.61,
   4.63, 4.65, 4.67, 4.69, 4.71, 4.73, 4.75, 4.77, 4.79, 4.81, 4.83, 4.85, 4.87, 4.89, 4.91, 4.93,
   4.95, 4.97, 4.99 };
   Double_t Graph_from_puSF_fy1011[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1.888061e+07, 8.29058e+07, 2.00486e+08, 2.969645e+08, 6.067381e+08, 5.205741e+08, 7.482178e+08,
   1.088725e+09, 1.521965e+09, 2.128626e+09, 0, 2.93922e+09, 0, 4.122214e+09, 0, 5.602527e+09, 0, 5026.179, 7.599342e+09, 0, 1568141, 1.01192e+10, 0,
   0, 1.325731e+10, 2190738, 0, 1.709377e+10, 0, 0, 2960327, 2.167137e+10, 0, 0, 2.680095e+10, 3906563, 0, 1754403, 3.235619e+10,
   437701.7, 0, 3.821702e+10, 0, 0, 4.417551e+10, 6347201, 5.000562e+10, 52860.03, 5087161, 5.537335e+10, 6.011438e+10, 6.410898e+10, 6.708371e+10, 2.812783e+11, 2.081319e+11,
   6.719271e+10, 6.604892e+10, 2.773985e+07, 6.473696e+10, 5.178607e+07, 6.309255e+10, 0, 6.08031e+10, 0, 5.832989e+10, 0, 0, 5.572825e+10, 0, 0, 5.287953e+10,
   4.922189e+10, 1.316882e+11, 5.863998e+10, 0, 1.453628e+10, 0, 0, 1.125375e+10, 0, 0, 0, 0, 0, 8.38484e+09, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 5.933596e+09, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 4.100951e+09, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 2.636012e+09, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.58225e+09,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9.181911e+08, 0,
   0, 0, 0 };
   Double_t Graph_from_puSF_fex1011[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01 };
   Double_t Graph_from_puSF_fey1011[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 593697.2, 1243944, 1933949, 2353279, 3364025, 3116634, 3736705,
   4506741, 5329362, 6302468, 0, 7404153, 0, 8770457, 0, 1.022224e+07, 0, 215.6617, 1.190945e+07, 0, 3821.022, 1.374094e+07, 0,
   0, 1.572741e+07, 4517.49, 0, 1.785978e+07, 0, 0, 5251.551, 2.010872e+07, 0, 0, 2.236238e+07, 6033.245, 0, 4043.306, 2.456928e+07,
   2020.364, 0, 2.670247e+07, 0, 0, 2.87079e+07, 7689.216, 3.054635e+07, 701.2198, 6884.893, 3.214121e+07, 3.349105e+07, 3.45874e+07, 3.534345e+07, 7.243828e+07, 6.230689e+07,
   3.540553e+07, 3.510258e+07, 16074.49, 3.47519e+07, 21962.22, 3.429856e+07, 0, 3.368489e+07, 0, 3.299145e+07, 0, 0, 3.224717e+07, 0, 0, 3.141228e+07,
   3.030501e+07, 4.957188e+07, 3.307829e+07, 0, 1.646877e+07, 0, 0, 1.449242e+07, 0, 0, 0, 0, 0, 1.250817e+07, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 1.052253e+07, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 8747796, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 7013933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5434055,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4138320, 0,
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_puSF_fx1011,Graph_from_puSF_fy1011,Graph_from_puSF_fex1011,Graph_from_puSF_fey1011);
   gre->SetName("Graph_from_puSF");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_puSF1011 = new TH1F("Graph_Graph_from_puSF1011","",500,-6,6);
   Graph_Graph_from_puSF1011->SetMinimum(0);
   Graph_Graph_from_puSF1011->SetMaximum(3.094858e+11);
   Graph_Graph_from_puSF1011->SetDirectory(nullptr);
   Graph_Graph_from_puSF1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_puSF1011->SetLineColor(ci);
   Graph_Graph_from_puSF1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_puSF1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_puSF1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_puSF1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_puSF1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_puSF1011);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("puSF","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_puSF","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   puSF__18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.612902,-0.2774193,2.209678,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__12 = new TH1D("data_mc_ratio__12","",200,-2,2);
   data_mc_ratio__12->SetMinimum(0.4);
   data_mc_ratio__12->SetMaximum(1.6);
   data_mc_ratio__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__12->SetLineColor(ci);
   data_mc_ratio__12->SetLineWidth(2);
   data_mc_ratio__12->SetMarkerStyle(20);
   data_mc_ratio__12->SetMarkerSize(1.2);
   data_mc_ratio__12->GetXaxis()->SetTitle("PU Scale Factor");
   data_mc_ratio__12->GetXaxis()->SetRange(1,200);
   data_mc_ratio__12->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__12->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__12->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__12->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__12->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__12->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__12->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__12->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__12->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__12->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__12->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__12->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__12->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1012[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
   -4.65, -4.63, -4.61, -4.59, -4.57, -4.55, -4.53, -4.51, -4.49, -4.47, -4.45, -4.43, -4.41, -4.39, -4.37, -4.35,
   -4.33, -4.31, -4.29, -4.27, -4.25, -4.23, -4.21, -4.19, -4.17, -4.15, -4.13, -4.11, -4.09, -4.07, -4.05, -4.03,
   -4.01, -3.99, -3.97, -3.95, -3.93, -3.91, -3.89, -3.87, -3.85, -3.83, -3.81, -3.79, -3.77, -3.75, -3.73, -3.71,
   -3.69, -3.67, -3.65, -3.63, -3.61, -3.59, -3.57, -3.55, -3.53, -3.51, -3.49, -3.47, -3.45, -3.43, -3.41, -3.39,
   -3.37, -3.35, -3.33, -3.31, -3.29, -3.27, -3.25, -3.23, -3.21, -3.19, -3.17, -3.15, -3.13, -3.11, -3.09, -3.07,
   -3.05, -3.03, -3.01, -2.99, -2.97, -2.95, -2.93, -2.91, -2.89, -2.87, -2.85, -2.83, -2.81, -2.79, -2.77, -2.75,
   -2.73, -2.71, -2.69, -2.67, -2.65, -2.63, -2.61, -2.59, -2.57, -2.55, -2.53, -2.51, -2.49, -2.47, -2.45, -2.43,
   -2.41, -2.39, -2.37, -2.35, -2.33, -2.31, -2.29, -2.27, -2.25, -2.23, -2.21, -2.19, -2.17, -2.15, -2.13, -2.11,
   -2.09, -2.07, -2.05, -2.03, -2.01, -1.99, -1.97, -1.95, -1.93, -1.91, -1.89, -1.87, -1.85, -1.83, -1.81, -1.79,
   -1.77, -1.75, -1.73, -1.71, -1.69, -1.67, -1.65, -1.63, -1.61, -1.59, -1.57, -1.55, -1.53, -1.51, -1.49, -1.47,
   -1.45, -1.43, -1.41, -1.39, -1.37, -1.35, -1.33, -1.31, -1.29, -1.27, -1.25, -1.23, -1.21, -1.19, -1.17, -1.15,
   -1.13, -1.11, -1.09, -1.07, -1.05, -1.03, -1.01, -0.99, -0.97, -0.95, -0.93, -0.91, -0.89, -0.87, -0.85, -0.83,
   -0.81, -0.79, -0.77, -0.75, -0.73, -0.71, -0.69, -0.67, -0.65, -0.63, -0.61, -0.59, -0.57, -0.55, -0.53, -0.51,
   -0.49, -0.47, -0.45, -0.43, -0.41, -0.39, -0.37, -0.35, -0.33, -0.31, -0.29, -0.27, -0.25, -0.23, -0.21, -0.19,
   -0.17, -0.15, -0.13, -0.11, -0.09, -0.07, -0.05, -0.03, -0.01, 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13,
   0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33, 0.35, 0.37, 0.39, 0.41, 0.43, 0.45,
   0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65, 0.67, 0.69, 0.71, 0.73, 0.75, 0.77,
   0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97, 0.99, 1.01, 1.03, 1.05, 1.07, 1.09,
   1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.27, 1.29, 1.31, 1.33, 1.35, 1.37, 1.39, 1.41,
   1.43, 1.45, 1.47, 1.49, 1.51, 1.53, 1.55, 1.57, 1.59, 1.61, 1.63, 1.65, 1.67, 1.69, 1.71, 1.73,
   1.75, 1.77, 1.79, 1.81, 1.83, 1.85, 1.87, 1.89, 1.91, 1.93, 1.95, 1.97, 1.99, 2.01, 2.03, 2.05,
   2.07, 2.09, 2.11, 2.13, 2.15, 2.17, 2.19, 2.21, 2.23, 2.25, 2.27, 2.29, 2.31, 2.33, 2.35, 2.37,
   2.39, 2.41, 2.43, 2.45, 2.47, 2.49, 2.51, 2.53, 2.55, 2.57, 2.59, 2.61, 2.63, 2.65, 2.67, 2.69,
   2.71, 2.73, 2.75, 2.77, 2.79, 2.81, 2.83, 2.85, 2.87, 2.89, 2.91, 2.93, 2.95, 2.97, 2.99, 3.01,
   3.03, 3.05, 3.07, 3.09, 3.11, 3.13, 3.15, 3.17, 3.19, 3.21, 3.23, 3.25, 3.27, 3.29, 3.31, 3.33,
   3.35, 3.37, 3.39, 3.41, 3.43, 3.45, 3.47, 3.49, 3.51, 3.53, 3.55, 3.57, 3.59, 3.61, 3.63, 3.65,
   3.67, 3.69, 3.71, 3.73, 3.75, 3.77, 3.79, 3.81, 3.83, 3.85, 3.87, 3.89, 3.91, 3.93, 3.95, 3.97,
   3.99, 4.01, 4.03, 4.05, 4.07, 4.09, 4.11, 4.13, 4.15, 4.17, 4.19, 4.21, 4.23, 4.25, 4.27, 4.29,
   4.31, 4.33, 4.35, 4.37, 4.39, 4.41, 4.43, 4.45, 4.47, 4.49, 4.51, 4.53, 4.55, 4.57, 4.59, 4.61,
   4.63, 4.65, 4.67, 4.69, 4.71, 4.73, 4.75, 4.77, 4.79, 4.81, 4.83, 4.85, 4.87, 4.89, 4.91, 4.93,
   4.95, 4.97, 4.99 };
   Double_t Graph_from_mc_statistical_error_fy1012[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1012[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01 };
   Double_t Graph_from_mc_statistical_error_fey1012[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0314448, 0.0150043, 0.009646306, 0.007924443, 0.005544443, 0.005986917, 0.00499414,
   0.004139466, 0.003501632, 0.002960815, 0, 0.002519087, 0, 0.002127608, 0, 0.001824577, 0, 0.04290768, 0.001567169, 0, 0.002436658, 0.001357907, 0,
   0, 0.00118632, 0.002062086, 0, 0.001044812, 0, 0, 0.001773977, 0.0009278935, 0, 0, 0.0008343877, 0.001544387, 0, 0.002304662, 0.000759338,
   0.004615847, 0, 0.0006987062, 0, 0, 0.0006498601, 0.001211434, 0.0006108583, 0.0132656, 0.001353386, 0.0005804455, 0.000557122, 0.0005395095, 0.0005268559, 0.0002575324, 0.0002993624,
   0.0005269253, 0.0005314634, 0.0005794727, 0.000536817, 0.0004240951, 0.000543623, 0, 0.0005539995, 0, 0.000565601, 0, 0, 0.0005786503, 0, 0, 0.0005940347,
   0.0006156816, 0.0003764337, 0.0005640911, 0, 0.001132943, 0, 0, 0.001287785, 0, 0, 0, 0, 0, 0.00149176, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.001773381, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.002133114, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.002660812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003434384,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004507035, 0,
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1012,Graph_from_mc_statistical_error_fy1012,Graph_from_mc_statistical_error_fex1012,Graph_from_mc_statistical_error_fey1012);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1012 = new TH1F("Graph_Graph_from_mc_statistical_error1012","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1012->SetMinimum(0.9485108);
   Graph_Graph_from_mc_statistical_error1012->SetMaximum(1.051489);
   Graph_Graph_from_mc_statistical_error1012->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1012->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1012);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   puSF__18->cd();
   puSF__18->Modified();
   puSF__18->cd();
   puSF__18->SetSelected(puSF__18);
}
