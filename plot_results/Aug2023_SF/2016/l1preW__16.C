#ifdef __CLING__
#pragma cling optimize(0)
#endif
void l1preW__16()
{
//=========Macro generated from canvas: l1preW__16/l1preW__16
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *l1preW__16 = new TCanvas("l1preW__16", "l1preW__16",0,0,600,600);
   l1preW__16->SetHighLightColor(2);
   l1preW__16->Range(0,0,1,1);
   l1preW__16->SetFillColor(0);
   l1preW__16->SetFillStyle(4000);
   l1preW__16->SetBorderMode(0);
   l1preW__16->SetBorderSize(2);
   l1preW__16->SetFrameFillStyle(1000);
   l1preW__16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-1.709893e+09,2.209678,1.708183e+12);
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
   st->SetMaximum(1.537194e+12);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",500,-5,5);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(1.537194e+12);
   st_stack_7->SetDirectory(nullptr);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->SetLineWidth(0);
   st_stack_7->GetXaxis()->SetRange(151,350);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/0.02");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *l1preW_stack_1 = new TH1D("l1preW_stack_1","",500,-5,5);
   l1preW_stack_1->SetBinContent(252,91.203);
   l1preW_stack_1->SetBinContent(253,1230.34);
   l1preW_stack_1->SetBinContent(254,17545.63);
   l1preW_stack_1->SetBinContent(255,30502.62);
   l1preW_stack_1->SetBinContent(256,86023.64);
   l1preW_stack_1->SetBinContent(257,102658.9);
   l1preW_stack_1->SetBinContent(258,209956.2);
   l1preW_stack_1->SetBinContent(259,386718.9);
   l1preW_stack_1->SetBinContent(260,1457046);
   l1preW_stack_1->SetBinContent(261,583771);
   l1preW_stack_1->SetBinContent(262,1685363);
   l1preW_stack_1->SetBinContent(263,5461280);
   l1preW_stack_1->SetBinContent(264,2.750574e+07);
   l1preW_stack_1->SetBinContent(265,4065530);
   l1preW_stack_1->SetBinContent(266,2.720639e+07);
   l1preW_stack_1->SetBinContent(267,2316362);
   l1preW_stack_1->SetBinContent(268,3397089);
   l1preW_stack_1->SetBinContent(269,8449113);
   l1preW_stack_1->SetBinContent(270,5534666);
   l1preW_stack_1->SetBinContent(271,3.573567e+07);
   l1preW_stack_1->SetBinContent(272,1.089812e+08);
   l1preW_stack_1->SetBinContent(273,8.542629e+07);
   l1preW_stack_1->SetBinContent(274,3.722777e+07);
   l1preW_stack_1->SetBinContent(275,8128620);
   l1preW_stack_1->SetBinContent(276,3.170388e+07);
   l1preW_stack_1->SetBinContent(277,1.248535e+08);
   l1preW_stack_1->SetBinContent(278,1.196621e+07);
   l1preW_stack_1->SetBinContent(279,1.355717e+08);
   l1preW_stack_1->SetBinContent(280,1.83988e+08);
   l1preW_stack_1->SetBinContent(281,7.374271e+07);
   l1preW_stack_1->SetBinContent(282,2.143919e+08);
   l1preW_stack_1->SetBinContent(283,4.078844e+07);
   l1preW_stack_1->SetBinContent(284,8.981604e+07);
   l1preW_stack_1->SetBinContent(285,3.393834e+08);
   l1preW_stack_1->SetBinContent(286,3.371682e+08);
   l1preW_stack_1->SetBinContent(287,3.406993e+08);
   l1preW_stack_1->SetBinContent(288,4.241699e+08);
   l1preW_stack_1->SetBinContent(289,4.479674e+08);
   l1preW_stack_1->SetBinContent(290,1.613702e+08);
   l1preW_stack_1->SetBinContent(291,5.209374e+08);
   l1preW_stack_1->SetBinContent(292,6.211068e+08);
   l1preW_stack_1->SetBinContent(293,1.620281e+09);
   l1preW_stack_1->SetBinContent(294,1.573995e+09);
   l1preW_stack_1->SetBinContent(295,2.452713e+09);
   l1preW_stack_1->SetBinContent(296,1.987713e+09);
   l1preW_stack_1->SetBinContent(297,3.026605e+09);
   l1preW_stack_1->SetBinContent(298,1.079649e+10);
   l1preW_stack_1->SetBinContent(299,5.449165e+10);
   l1preW_stack_1->SetBinContent(300,3.070314e+11);
   l1preW_stack_1->SetBinContent(301,6.916282e+11);
   l1preW_stack_1->SetBinError(252,39.63542);
   l1preW_stack_1->SetBinError(253,139.2351);
   l1preW_stack_1->SetBinError(254,2267.332);
   l1preW_stack_1->SetBinError(255,2900.03);
   l1preW_stack_1->SetBinError(256,5616.987);
   l1preW_stack_1->SetBinError(257,4960.096);
   l1preW_stack_1->SetBinError(258,9152.133);
   l1preW_stack_1->SetBinError(259,12943.83);
   l1preW_stack_1->SetBinError(260,15076.47);
   l1preW_stack_1->SetBinError(261,15317.01);
   l1preW_stack_1->SetBinError(262,29988.41);
   l1preW_stack_1->SetBinError(263,65134.51);
   l1preW_stack_1->SetBinError(264,142290.7);
   l1preW_stack_1->SetBinError(265,78145.28);
   l1preW_stack_1->SetBinError(266,144057.1);
   l1preW_stack_1->SetBinError(267,45879.24);
   l1preW_stack_1->SetBinError(268,42422.8);
   l1preW_stack_1->SetBinError(269,87427);
   l1preW_stack_1->SetBinError(270,90300.68);
   l1preW_stack_1->SetBinError(271,298054.9);
   l1preW_stack_1->SetBinError(272,526170.1);
   l1preW_stack_1->SetBinError(273,556212.3);
   l1preW_stack_1->SetBinError(274,178762.6);
   l1preW_stack_1->SetBinError(275,116527.7);
   l1preW_stack_1->SetBinError(276,188616.6);
   l1preW_stack_1->SetBinError(277,598284.8);
   l1preW_stack_1->SetBinError(278,168874.7);
   l1preW_stack_1->SetBinError(279,736315.1);
   l1preW_stack_1->SetBinError(280,1382391);
   l1preW_stack_1->SetBinError(281,574218.3);
   l1preW_stack_1->SetBinError(282,1406292);
   l1preW_stack_1->SetBinError(283,279930.9);
   l1preW_stack_1->SetBinError(284,506728.8);
   l1preW_stack_1->SetBinError(285,1855505);
   l1preW_stack_1->SetBinError(286,2030932);
   l1preW_stack_1->SetBinError(287,1910583);
   l1preW_stack_1->SetBinError(288,2293581);
   l1preW_stack_1->SetBinError(289,1662756);
   l1preW_stack_1->SetBinError(290,1269033);
   l1preW_stack_1->SetBinError(291,2623919);
   l1preW_stack_1->SetBinError(292,2043736);
   l1preW_stack_1->SetBinError(293,4802194);
   l1preW_stack_1->SetBinError(294,4257584);
   l1preW_stack_1->SetBinError(295,5037378);
   l1preW_stack_1->SetBinError(296,4501051);
   l1preW_stack_1->SetBinError(297,6250551);
   l1preW_stack_1->SetBinError(298,1.340138e+07);
   l1preW_stack_1->SetBinError(299,3.047182e+07);
   l1preW_stack_1->SetBinError(300,7.750112e+07);
   l1preW_stack_1->SetBinError(301,1.163205e+08);
   l1preW_stack_1->SetEntries(2.561203e+08);

   ci = TColor::GetColor("#ff6600");
   l1preW_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_1->SetLineColor(ci);
   l1preW_stack_1->GetXaxis()->SetRange(1,500);
   l1preW_stack_1->GetXaxis()->SetLabelFont(42);
   l1preW_stack_1->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_1->GetXaxis()->SetTitleFont(42);
   l1preW_stack_1->GetYaxis()->SetLabelFont(42);
   l1preW_stack_1->GetYaxis()->SetTitleFont(42);
   l1preW_stack_1->GetZaxis()->SetLabelFont(42);
   l1preW_stack_1->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_1,"");
   
   TH1D *l1preW_stack_2 = new TH1D("l1preW_stack_2","",500,-5,5);
   l1preW_stack_2->SetBinContent(253,0.1312021);
   l1preW_stack_2->SetBinContent(254,0.9355236);
   l1preW_stack_2->SetBinContent(255,1.529729);
   l1preW_stack_2->SetBinContent(256,6.370001);
   l1preW_stack_2->SetBinContent(257,7.499005);
   l1preW_stack_2->SetBinContent(258,17.02518);
   l1preW_stack_2->SetBinContent(259,29.29924);
   l1preW_stack_2->SetBinContent(260,191.4001);
   l1preW_stack_2->SetBinContent(261,91.14549);
   l1preW_stack_2->SetBinContent(262,210.1427);
   l1preW_stack_2->SetBinContent(263,508.5165);
   l1preW_stack_2->SetBinContent(264,1828.907);
   l1preW_stack_2->SetBinContent(265,333.0844);
   l1preW_stack_2->SetBinContent(266,2019.554);
   l1preW_stack_2->SetBinContent(267,226.7016);
   l1preW_stack_2->SetBinContent(268,424.166);
   l1preW_stack_2->SetBinContent(269,911.4421);
   l1preW_stack_2->SetBinContent(270,715.0619);
   l1preW_stack_2->SetBinContent(271,2757.672);
   l1preW_stack_2->SetBinContent(272,5632.525);
   l1preW_stack_2->SetBinContent(273,5716.653);
   l1preW_stack_2->SetBinContent(274,2574.475);
   l1preW_stack_2->SetBinContent(275,832.8075);
   l1preW_stack_2->SetBinContent(276,3752.328);
   l1preW_stack_2->SetBinContent(277,6477.883);
   l1preW_stack_2->SetBinContent(278,1410.062);
   l1preW_stack_2->SetBinContent(279,8535.855);
   l1preW_stack_2->SetBinContent(280,6499.386);
   l1preW_stack_2->SetBinContent(281,8406.193);
   l1preW_stack_2->SetBinContent(282,9449.682);
   l1preW_stack_2->SetBinContent(283,6366.007);
   l1preW_stack_2->SetBinContent(284,5726.517);
   l1preW_stack_2->SetBinContent(285,13317.73);
   l1preW_stack_2->SetBinContent(286,15581.26);
   l1preW_stack_2->SetBinContent(287,13929.22);
   l1preW_stack_2->SetBinContent(288,19435.73);
   l1preW_stack_2->SetBinContent(289,29002.83);
   l1preW_stack_2->SetBinContent(290,14728.77);
   l1preW_stack_2->SetBinContent(291,26191.55);
   l1preW_stack_2->SetBinContent(292,35425.5);
   l1preW_stack_2->SetBinContent(293,57506.88);
   l1preW_stack_2->SetBinContent(294,59479.02);
   l1preW_stack_2->SetBinContent(295,93360.7);
   l1preW_stack_2->SetBinContent(296,82055.96);
   l1preW_stack_2->SetBinContent(297,134583);
   l1preW_stack_2->SetBinContent(298,368486.4);
   l1preW_stack_2->SetBinContent(299,1260136);
   l1preW_stack_2->SetBinContent(300,4289034);
   l1preW_stack_2->SetBinContent(301,4267177);
   l1preW_stack_2->SetBinError(253,0.07574959);
   l1preW_stack_2->SetBinError(254,0.204472);
   l1preW_stack_2->SetBinError(255,0.2629405);
   l1preW_stack_2->SetBinError(256,0.7210853);
   l1preW_stack_2->SetBinError(257,0.8340971);
   l1preW_stack_2->SetBinError(258,1.265844);
   l1preW_stack_2->SetBinError(259,1.637655);
   l1preW_stack_2->SetBinError(260,3.885495);
   l1preW_stack_2->SetBinError(261,2.775383);
   l1preW_stack_2->SetBinError(262,4.079682);
   l1preW_stack_2->SetBinError(263,6.748366);
   l1preW_stack_2->SetBinError(264,11.46524);
   l1preW_stack_2->SetBinError(265,5.625624);
   l1preW_stack_2->SetBinError(266,12.31097);
   l1preW_stack_2->SetBinError(267,4.474297);
   l1preW_stack_2->SetBinError(268,6.102704);
   l1preW_stack_2->SetBinError(269,8.901924);
   l1preW_stack_2->SetBinError(270,7.870967);
   l1preW_stack_2->SetBinError(271,15.70466);
   l1preW_stack_2->SetBinError(272,21.15951);
   l1preW_stack_2->SetBinError(273,21.41247);
   l1preW_stack_2->SetBinError(274,14.40785);
   l1preW_stack_2->SetBinError(275,8.580437);
   l1preW_stack_2->SetBinError(276,16.92816);
   l1preW_stack_2->SetBinError(277,23.32742);
   l1preW_stack_2->SetBinError(278,11.70832);
   l1preW_stack_2->SetBinError(279,27.23625);
   l1preW_stack_2->SetBinError(280,23.14432);
   l1preW_stack_2->SetBinError(281,26.05028);
   l1preW_stack_2->SetBinError(282,27.38076);
   l1preW_stack_2->SetBinError(283,23.14135);
   l1preW_stack_2->SetBinError(284,21.26294);
   l1preW_stack_2->SetBinError(285,34.59981);
   l1preW_stack_2->SetBinError(286,36.18748);
   l1preW_stack_2->SetBinError(287,33.91643);
   l1preW_stack_2->SetBinError(288,41.6302);
   l1preW_stack_2->SetBinError(289,48.42493);
   l1preW_stack_2->SetBinError(290,37.05632);
   l1preW_stack_2->SetBinError(291,49.44916);
   l1preW_stack_2->SetBinError(292,57.55439);
   l1preW_stack_2->SetBinError(293,71.96388);
   l1preW_stack_2->SetBinError(294,71.55615);
   l1preW_stack_2->SetBinError(295,87.6985);
   l1preW_stack_2->SetBinError(296,86.78847);
   l1preW_stack_2->SetBinError(297,113.2188);
   l1preW_stack_2->SetBinError(298,187.7381);
   l1preW_stack_2->SetBinError(299,350.2913);
   l1preW_stack_2->SetBinError(300,660.7126);
   l1preW_stack_2->SetBinError(301,648.1679);
   l1preW_stack_2->SetEntries(1.87656e+08);

   ci = TColor::GetColor("#660066");
   l1preW_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_2->SetLineColor(ci);
   l1preW_stack_2->GetXaxis()->SetRange(1,500);
   l1preW_stack_2->GetXaxis()->SetLabelFont(42);
   l1preW_stack_2->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_2->GetXaxis()->SetTitleFont(42);
   l1preW_stack_2->GetYaxis()->SetLabelFont(42);
   l1preW_stack_2->GetYaxis()->SetTitleFont(42);
   l1preW_stack_2->GetZaxis()->SetLabelFont(42);
   l1preW_stack_2->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_2,"");
   
   TH1D *l1preW_stack_3 = new TH1D("l1preW_stack_3","",500,-5,5);
   l1preW_stack_3->SetBinContent(252,0.09762297);
   l1preW_stack_3->SetBinContent(253,0.606691);
   l1preW_stack_3->SetBinContent(254,4.182152);
   l1preW_stack_3->SetBinContent(255,8.742326);
   l1preW_stack_3->SetBinContent(256,26.22788);
   l1preW_stack_3->SetBinContent(257,28.22662);
   l1preW_stack_3->SetBinContent(258,64.38108);
   l1preW_stack_3->SetBinContent(259,120.8925);
   l1preW_stack_3->SetBinContent(260,499.2763);
   l1preW_stack_3->SetBinContent(261,355.195);
   l1preW_stack_3->SetBinContent(262,608.5619);
   l1preW_stack_3->SetBinContent(263,1986.561);
   l1preW_stack_3->SetBinContent(264,3630.519);
   l1preW_stack_3->SetBinContent(265,1377.672);
   l1preW_stack_3->SetBinContent(266,4223.863);
   l1preW_stack_3->SetBinContent(267,948.9688);
   l1preW_stack_3->SetBinContent(268,1532.821);
   l1preW_stack_3->SetBinContent(269,3132.094);
   l1preW_stack_3->SetBinContent(270,2738.717);
   l1preW_stack_3->SetBinContent(271,10369.43);
   l1preW_stack_3->SetBinContent(272,13567.63);
   l1preW_stack_3->SetBinContent(273,14201.68);
   l1preW_stack_3->SetBinContent(274,6492.298);
   l1preW_stack_3->SetBinContent(275,3645.937);
   l1preW_stack_3->SetBinContent(276,10323.77);
   l1preW_stack_3->SetBinContent(277,17388.06);
   l1preW_stack_3->SetBinContent(278,6742.662);
   l1preW_stack_3->SetBinContent(279,25451.65);
   l1preW_stack_3->SetBinContent(280,17739.41);
   l1preW_stack_3->SetBinContent(281,23835.85);
   l1preW_stack_3->SetBinContent(282,24183.99);
   l1preW_stack_3->SetBinContent(283,19342.6);
   l1preW_stack_3->SetBinContent(284,16439.18);
   l1preW_stack_3->SetBinContent(285,43156.53);
   l1preW_stack_3->SetBinContent(286,44563.51);
   l1preW_stack_3->SetBinContent(287,40294.29);
   l1preW_stack_3->SetBinContent(288,64683.92);
   l1preW_stack_3->SetBinContent(289,74837.95);
   l1preW_stack_3->SetBinContent(290,55517.46);
   l1preW_stack_3->SetBinContent(291,92371.95);
   l1preW_stack_3->SetBinContent(292,125528.4);
   l1preW_stack_3->SetBinContent(293,179136.7);
   l1preW_stack_3->SetBinContent(294,187995.5);
   l1preW_stack_3->SetBinContent(295,255967);
   l1preW_stack_3->SetBinContent(296,292445.1);
   l1preW_stack_3->SetBinContent(297,516474.8);
   l1preW_stack_3->SetBinContent(298,1327058);
   l1preW_stack_3->SetBinContent(299,4183476);
   l1preW_stack_3->SetBinContent(300,1.302368e+07);
   l1preW_stack_3->SetBinContent(301,9404730);
   l1preW_stack_3->SetBinError(252,0.06902986);
   l1preW_stack_3->SetBinError(253,0.1942801);
   l1preW_stack_3->SetBinError(254,0.4810242);
   l1preW_stack_3->SetBinError(255,0.6987375);
   l1preW_stack_3->SetBinError(256,1.205425);
   l1preW_stack_3->SetBinError(257,1.252735);
   l1preW_stack_3->SetBinError(258,1.885285);
   l1preW_stack_3->SetBinError(259,2.593236);
   l1preW_stack_3->SetBinError(260,5.299504);
   l1preW_stack_3->SetBinError(261,4.438041);
   l1preW_stack_3->SetBinError(262,5.858961);
   l1preW_stack_3->SetBinError(263,10.48277);
   l1preW_stack_3->SetBinError(264,14.23323);
   l1preW_stack_3->SetBinError(265,8.761085);
   l1preW_stack_3->SetBinError(266,15.32147);
   l1preW_stack_3->SetBinError(267,7.257527);
   l1preW_stack_3->SetBinError(268,9.28128);
   l1preW_stack_3->SetBinError(269,13.30779);
   l1preW_stack_3->SetBinError(270,12.40527);
   l1preW_stack_3->SetBinError(271,23.99376);
   l1preW_stack_3->SetBinError(272,27.49045);
   l1preW_stack_3->SetBinError(273,28.0279);
   l1preW_stack_3->SetBinError(274,18.96127);
   l1preW_stack_3->SetBinError(275,14.32194);
   l1preW_stack_3->SetBinError(276,24.11382);
   l1preW_stack_3->SetBinError(277,31.07127);
   l1preW_stack_3->SetBinError(278,19.45364);
   l1preW_stack_3->SetBinError(279,37.54785);
   l1preW_stack_3->SetBinError(280,31.4496);
   l1preW_stack_3->SetBinError(281,36.67381);
   l1preW_stack_3->SetBinError(282,36.91133);
   l1preW_stack_3->SetBinError(283,33.07745);
   l1preW_stack_3->SetBinError(284,30.632);
   l1preW_stack_3->SetBinError(285,48.99038);
   l1preW_stack_3->SetBinError(286,49.98925);
   l1preW_stack_3->SetBinError(287,47.73779);
   l1preW_stack_3->SetBinError(288,60.04449);
   l1preW_stack_3->SetBinError(289,65.07629);
   l1preW_stack_3->SetBinError(290,55.94525);
   l1preW_stack_3->SetBinError(291,71.89311);
   l1preW_stack_3->SetBinError(292,83.95998);
   l1preW_stack_3->SetBinError(293,100.2215);
   l1preW_stack_3->SetBinError(294,103.4375);
   l1preW_stack_3->SetBinError(295,121.0732);
   l1preW_stack_3->SetBinError(296,129.1731);
   l1preW_stack_3->SetBinError(297,171.3365);
   l1preW_stack_3->SetBinError(298,273.6127);
   l1preW_stack_3->SetBinError(299,482.2023);
   l1preW_stack_3->SetBinError(300,850.8192);
   l1preW_stack_3->SetBinError(301,745.7746);
   l1preW_stack_3->SetEntries(5.5215e+08);

   ci = TColor::GetColor("#cc00cc");
   l1preW_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_3->SetLineColor(ci);
   l1preW_stack_3->GetXaxis()->SetRange(1,500);
   l1preW_stack_3->GetXaxis()->SetLabelFont(42);
   l1preW_stack_3->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_3->GetXaxis()->SetTitleFont(42);
   l1preW_stack_3->GetYaxis()->SetLabelFont(42);
   l1preW_stack_3->GetYaxis()->SetTitleFont(42);
   l1preW_stack_3->GetZaxis()->SetLabelFont(42);
   l1preW_stack_3->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_3,"");
   
   TH1D *l1preW_stack_4 = new TH1D("l1preW_stack_4","",500,-5,5);
   l1preW_stack_4->SetBinContent(252,0.3465533);
   l1preW_stack_4->SetBinContent(253,1.731679);
   l1preW_stack_4->SetBinContent(254,19.00698);
   l1preW_stack_4->SetBinContent(255,20.88533);
   l1preW_stack_4->SetBinContent(256,85.17062);
   l1preW_stack_4->SetBinContent(257,63.9504);
   l1preW_stack_4->SetBinContent(258,155.3845);
   l1preW_stack_4->SetBinContent(259,279.5753);
   l1preW_stack_4->SetBinContent(260,612.2861);
   l1preW_stack_4->SetBinContent(261,574.0741);
   l1preW_stack_4->SetBinContent(262,1280.961);
   l1preW_stack_4->SetBinContent(263,2914.509);
   l1preW_stack_4->SetBinContent(264,6473.979);
   l1preW_stack_4->SetBinContent(265,2324.062);
   l1preW_stack_4->SetBinContent(266,6243.472);
   l1preW_stack_4->SetBinContent(267,1687.655);
   l1preW_stack_4->SetBinContent(268,1957.555);
   l1preW_stack_4->SetBinContent(269,4899.334);
   l1preW_stack_4->SetBinContent(270,4316.786);
   l1preW_stack_4->SetBinContent(271,15307.43);
   l1preW_stack_4->SetBinContent(272,25152.33);
   l1preW_stack_4->SetBinContent(273,27558.22);
   l1preW_stack_4->SetBinContent(274,10514.61);
   l1preW_stack_4->SetBinContent(275,5344.541);
   l1preW_stack_4->SetBinContent(276,13718.79);
   l1preW_stack_4->SetBinContent(277,30683.66);
   l1preW_stack_4->SetBinContent(278,10070.06);
   l1preW_stack_4->SetBinContent(279,45734.1);
   l1preW_stack_4->SetBinContent(280,32600.17);
   l1preW_stack_4->SetBinContent(281,34769.82);
   l1preW_stack_4->SetBinContent(282,42744.05);
   l1preW_stack_4->SetBinContent(283,28817.22);
   l1preW_stack_4->SetBinContent(284,28566.27);
   l1preW_stack_4->SetBinContent(285,73894.46);
   l1preW_stack_4->SetBinContent(286,73887.68);
   l1preW_stack_4->SetBinContent(287,67033.26);
   l1preW_stack_4->SetBinContent(288,99981.53);
   l1preW_stack_4->SetBinContent(289,140401.1);
   l1preW_stack_4->SetBinContent(290,78273.76);
   l1preW_stack_4->SetBinContent(291,129296.4);
   l1preW_stack_4->SetBinContent(292,189908.5);
   l1preW_stack_4->SetBinContent(293,290061);
   l1preW_stack_4->SetBinContent(294,324655.5);
   l1preW_stack_4->SetBinContent(295,500464.7);
   l1preW_stack_4->SetBinContent(296,449625.1);
   l1preW_stack_4->SetBinContent(297,697171.8);
   l1preW_stack_4->SetBinContent(298,1754280);
   l1preW_stack_4->SetBinContent(299,5207405);
   l1preW_stack_4->SetBinContent(300,1.185372e+07);
   l1preW_stack_4->SetBinContent(301,1.916065e+07);
   l1preW_stack_4->SetBinError(252,0.2874433);
   l1preW_stack_4->SetBinError(253,0.4291729);
   l1preW_stack_4->SetBinError(254,5.499039);
   l1preW_stack_4->SetBinError(255,4.1254);
   l1preW_stack_4->SetBinError(256,11.67938);
   l1preW_stack_4->SetBinError(257,6.091128);
   l1preW_stack_4->SetBinError(258,12.9951);
   l1preW_stack_4->SetBinError(259,17.90979);
   l1preW_stack_4->SetBinError(260,18.29444);
   l1preW_stack_4->SetBinError(261,22.44435);
   l1preW_stack_4->SetBinError(262,37.62401);
   l1preW_stack_4->SetBinError(263,66.1565);
   l1preW_stack_4->SetBinError(264,101.3959);
   l1preW_stack_4->SetBinError(265,58.43025);
   l1preW_stack_4->SetBinError(266,93.35308);
   l1preW_stack_4->SetBinError(267,42.27494);
   l1preW_stack_4->SetBinError(268,38.11895);
   l1preW_stack_4->SetBinError(269,73.72455);
   l1preW_stack_4->SetBinError(270,71.25177);
   l1preW_stack_4->SetBinError(271,165.9318);
   l1preW_stack_4->SetBinError(272,213.4998);
   l1preW_stack_4->SetBinError(273,231.5936);
   l1preW_stack_4->SetBinError(274,122.8101);
   l1preW_stack_4->SetBinError(275,83.85064);
   l1preW_stack_4->SetBinError(276,119.6234);
   l1preW_stack_4->SetBinError(277,245.6219);
   l1preW_stack_4->SetBinError(278,122.4258);
   l1preW_stack_4->SetBinError(279,302.5321);
   l1preW_stack_4->SetBinError(280,255.0145);
   l1preW_stack_4->SetBinError(281,209.8732);
   l1preW_stack_4->SetBinError(282,265.8113);
   l1preW_stack_4->SetBinError(283,194.6501);
   l1preW_stack_4->SetBinError(284,224.6119);
   l1preW_stack_4->SetBinError(285,405.6206);
   l1preW_stack_4->SetBinError(286,367.379);
   l1preW_stack_4->SetBinError(287,354.1986);
   l1preW_stack_4->SetBinError(288,449.1303);
   l1preW_stack_4->SetBinError(289,499.0319);
   l1preW_stack_4->SetBinError(290,357.1458);
   l1preW_stack_4->SetBinError(291,491.9683);
   l1preW_stack_4->SetBinError(292,614.2831);
   l1preW_stack_4->SetBinError(293,802.8285);
   l1preW_stack_4->SetBinError(294,835.0659);
   l1preW_stack_4->SetBinError(295,1019.71);
   l1preW_stack_4->SetBinError(296,973.0134);
   l1preW_stack_4->SetBinError(297,1226.4);
   l1preW_stack_4->SetBinError(298,2011.867);
   l1preW_stack_4->SetBinError(299,3528.778);
   l1preW_stack_4->SetBinError(300,5329.252);
   l1preW_stack_4->SetBinError(301,6753.601);
   l1preW_stack_4->SetEntries(4.770593e+07);

   ci = TColor::GetColor("#00cccc");
   l1preW_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_4->SetLineColor(ci);
   l1preW_stack_4->GetXaxis()->SetRange(1,500);
   l1preW_stack_4->GetXaxis()->SetLabelFont(42);
   l1preW_stack_4->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_4->GetXaxis()->SetTitleFont(42);
   l1preW_stack_4->GetYaxis()->SetLabelFont(42);
   l1preW_stack_4->GetYaxis()->SetTitleFont(42);
   l1preW_stack_4->GetZaxis()->SetLabelFont(42);
   l1preW_stack_4->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_4,"");
   
   TH1D *l1preW_stack_5 = new TH1D("l1preW_stack_5","",500,-5,5);
   l1preW_stack_5->SetBinContent(252,0.7972896);
   l1preW_stack_5->SetBinContent(253,6.136174);
   l1preW_stack_5->SetBinContent(254,76.8826);
   l1preW_stack_5->SetBinContent(255,109.8949);
   l1preW_stack_5->SetBinContent(256,381.221);
   l1preW_stack_5->SetBinContent(257,272.9542);
   l1preW_stack_5->SetBinContent(258,757.7241);
   l1preW_stack_5->SetBinContent(259,1217.656);
   l1preW_stack_5->SetBinContent(260,2699.758);
   l1preW_stack_5->SetBinContent(261,2505.959);
   l1preW_stack_5->SetBinContent(262,6069.395);
   l1preW_stack_5->SetBinContent(263,12007.4);
   l1preW_stack_5->SetBinContent(264,31320.63);
   l1preW_stack_5->SetBinContent(265,9896.286);
   l1preW_stack_5->SetBinContent(266,31527.3);
   l1preW_stack_5->SetBinContent(267,6671.796);
   l1preW_stack_5->SetBinContent(268,7973.288);
   l1preW_stack_5->SetBinContent(269,17798.07);
   l1preW_stack_5->SetBinContent(270,18091.39);
   l1preW_stack_5->SetBinContent(271,61026.44);
   l1preW_stack_5->SetBinContent(272,117964.2);
   l1preW_stack_5->SetBinContent(273,130451.5);
   l1preW_stack_5->SetBinContent(274,52043.01);
   l1preW_stack_5->SetBinContent(275,21019.27);
   l1preW_stack_5->SetBinContent(276,52961.41);
   l1preW_stack_5->SetBinContent(277,137972.7);
   l1preW_stack_5->SetBinContent(278,43627.14);
   l1preW_stack_5->SetBinContent(279,211296.7);
   l1preW_stack_5->SetBinContent(280,139876.5);
   l1preW_stack_5->SetBinContent(281,144543.8);
   l1preW_stack_5->SetBinContent(282,180110.6);
   l1preW_stack_5->SetBinContent(283,125845.9);
   l1preW_stack_5->SetBinContent(284,106412.7);
   l1preW_stack_5->SetBinContent(285,308143.5);
   l1preW_stack_5->SetBinContent(286,327115.8);
   l1preW_stack_5->SetBinContent(287,274247.5);
   l1preW_stack_5->SetBinContent(288,434722.6);
   l1preW_stack_5->SetBinContent(289,609138.1);
   l1preW_stack_5->SetBinContent(290,326487.9);
   l1preW_stack_5->SetBinContent(291,564472.2);
   l1preW_stack_5->SetBinContent(292,786486.2);
   l1preW_stack_5->SetBinContent(293,1244502);
   l1preW_stack_5->SetBinContent(294,1265315);
   l1preW_stack_5->SetBinContent(295,1956841);
   l1preW_stack_5->SetBinContent(296,1745771);
   l1preW_stack_5->SetBinContent(297,2732243);
   l1preW_stack_5->SetBinContent(298,7077650);
   l1preW_stack_5->SetBinContent(299,2.115466e+07);
   l1preW_stack_5->SetBinContent(300,5.259106e+07);
   l1preW_stack_5->SetBinContent(301,7.297674e+07);
   l1preW_stack_5->SetBinError(252,0.5201423);
   l1preW_stack_5->SetBinError(253,1.757775);
   l1preW_stack_5->SetBinError(254,10.952);
   l1preW_stack_5->SetBinError(255,10.1077);
   l1preW_stack_5->SetBinError(256,29.8866);
   l1preW_stack_5->SetBinError(257,15.72948);
   l1preW_stack_5->SetBinError(258,37.60974);
   l1preW_stack_5->SetBinError(259,47.48953);
   l1preW_stack_5->SetBinError(260,49.78613);
   l1preW_stack_5->SetBinError(261,59.803);
   l1preW_stack_5->SetBinError(262,108.0787);
   l1preW_stack_5->SetBinError(263,168.6671);
   l1preW_stack_5->SetBinError(264,270.1289);
   l1preW_stack_5->SetBinError(265,155.9269);
   l1preW_stack_5->SetBinError(266,262.4283);
   l1preW_stack_5->SetBinError(267,110.6798);
   l1preW_stack_5->SetBinError(268,105.2145);
   l1preW_stack_5->SetBinError(269,189.1844);
   l1preW_stack_5->SetBinError(270,190.9971);
   l1preW_stack_5->SetBinError(271,428.2017);
   l1preW_stack_5->SetBinError(272,564.6038);
   l1preW_stack_5->SetBinError(273,621.7436);
   l1preW_stack_5->SetBinError(274,336.9097);
   l1preW_stack_5->SetBinError(275,217.3347);
   l1preW_stack_5->SetBinError(276,317.955);
   l1preW_stack_5->SetBinError(277,644.6812);
   l1preW_stack_5->SetBinError(278,341.5753);
   l1preW_stack_5->SetBinError(279,798.7261);
   l1preW_stack_5->SetBinError(280,662.0645);
   l1preW_stack_5->SetBinError(281,562.6007);
   l1preW_stack_5->SetBinError(282,694.8615);
   l1preW_stack_5->SetBinError(283,536.5227);
   l1preW_stack_5->SetBinError(284,578.3181);
   l1preW_stack_5->SetBinError(285,1039.091);
   l1preW_stack_5->SetBinError(286,976.3734);
   l1preW_stack_5->SetBinError(287,926.731);
   l1preW_stack_5->SetBinError(288,1194.238);
   l1preW_stack_5->SetBinError(289,1337.828);
   l1preW_stack_5->SetBinError(290,948.792);
   l1preW_stack_5->SetBinError(291,1307.351);
   l1preW_stack_5->SetBinError(292,1596.992);
   l1preW_stack_5->SetBinError(293,2092.187);
   l1preW_stack_5->SetBinError(294,2161.042);
   l1preW_stack_5->SetBinError(295,2649.29);
   l1preW_stack_5->SetBinError(296,2512.09);
   l1preW_stack_5->SetBinError(297,3181.049);
   l1preW_stack_5->SetBinError(298,5228.252);
   l1preW_stack_5->SetBinError(299,9041.411);
   l1preW_stack_5->SetBinError(300,13496.65);
   l1preW_stack_5->SetBinError(301,16956.98);
   l1preW_stack_5->SetEntries(1.558885e+08);

   ci = TColor::GetColor("#ff99cc");
   l1preW_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_5->SetLineColor(ci);
   l1preW_stack_5->GetXaxis()->SetRange(1,500);
   l1preW_stack_5->GetXaxis()->SetLabelFont(42);
   l1preW_stack_5->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_5->GetXaxis()->SetTitleFont(42);
   l1preW_stack_5->GetYaxis()->SetLabelFont(42);
   l1preW_stack_5->GetYaxis()->SetTitleFont(42);
   l1preW_stack_5->GetZaxis()->SetLabelFont(42);
   l1preW_stack_5->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_5,"");
   
   TH1D *l1preW_stack_6 = new TH1D("l1preW_stack_6","",500,-5,5);
   l1preW_stack_6->SetBinContent(254,0.9405851);
   l1preW_stack_6->SetBinContent(255,0.8062158);
   l1preW_stack_6->SetBinContent(256,2.956125);
   l1preW_stack_6->SetBinContent(257,1.074954);
   l1preW_stack_6->SetBinContent(258,5.240403);
   l1preW_stack_6->SetBinContent(259,10.21207);
   l1preW_stack_6->SetBinContent(260,25.53017);
   l1preW_stack_6->SetBinContent(261,16.93053);
   l1preW_stack_6->SetBinContent(262,46.49178);
   l1preW_stack_6->SetBinContent(263,99.43328);
   l1preW_stack_6->SetBinContent(264,297.4936);
   l1preW_stack_6->SetBinContent(265,81.15906);
   l1preW_stack_6->SetBinContent(266,303.0028);
   l1preW_stack_6->SetBinContent(267,48.23858);
   l1preW_stack_6->SetBinContent(268,75.51555);
   l1preW_stack_6->SetBinContent(269,141.4909);
   l1preW_stack_6->SetBinContent(270,135.4443);
   l1preW_stack_6->SetBinContent(271,614.8739);
   l1preW_stack_6->SetBinContent(272,1285.78);
   l1preW_stack_6->SetBinContent(273,1384.676);
   l1preW_stack_6->SetBinContent(274,519.8748);
   l1preW_stack_6->SetBinContent(275,165.6773);
   l1preW_stack_6->SetBinContent(276,398.1362);
   l1preW_stack_6->SetBinContent(277,1572.658);
   l1preW_stack_6->SetBinContent(278,353.3913);
   l1preW_stack_6->SetBinContent(279,2360.062);
   l1preW_stack_6->SetBinContent(280,2197.341);
   l1preW_stack_6->SetBinContent(281,1281.077);
   l1preW_stack_6->SetBinContent(282,2465.677);
   l1preW_stack_6->SetBinContent(283,1047.812);
   l1preW_stack_6->SetBinContent(284,923.3858);
   l1preW_stack_6->SetBinContent(285,4893.058);
   l1preW_stack_6->SetBinContent(286,4499.356);
   l1preW_stack_6->SetBinContent(287,3571.267);
   l1preW_stack_6->SetBinContent(288,6518.927);
   l1preW_stack_6->SetBinContent(289,6518.523);
   l1preW_stack_6->SetBinContent(290,3718.536);
   l1preW_stack_6->SetBinContent(291,8287.227);
   l1preW_stack_6->SetBinContent(292,9886.221);
   l1preW_stack_6->SetBinContent(293,22057.66);
   l1preW_stack_6->SetBinContent(294,16774.53);
   l1preW_stack_6->SetBinContent(295,22780.57);
   l1preW_stack_6->SetBinContent(296,21141.93);
   l1preW_stack_6->SetBinContent(297,40483.05);
   l1preW_stack_6->SetBinContent(298,123682);
   l1preW_stack_6->SetBinContent(299,447046.9);
   l1preW_stack_6->SetBinContent(300,1525090);
   l1preW_stack_6->SetBinContent(301,1972007);
   l1preW_stack_6->SetBinError(254,0.3555077);
   l1preW_stack_6->SetBinError(255,0.3291362);
   l1preW_stack_6->SetBinError(256,0.6302479);
   l1preW_stack_6->SetBinError(257,0.3800538);
   l1preW_stack_6->SetBinError(258,0.839136);
   l1preW_stack_6->SetBinError(259,1.171404);
   l1preW_stack_6->SetBinError(260,1.852153);
   l1preW_stack_6->SetBinError(261,1.508292);
   l1preW_stack_6->SetBinError(262,2.499413);
   l1preW_stack_6->SetBinError(263,3.65524);
   l1preW_stack_6->SetBinError(264,6.3225);
   l1preW_stack_6->SetBinError(265,3.302315);
   l1preW_stack_6->SetBinError(266,6.380773);
   l1preW_stack_6->SetBinError(267,2.545935);
   l1preW_stack_6->SetBinError(268,3.185431);
   l1preW_stack_6->SetBinError(269,4.360279);
   l1preW_stack_6->SetBinError(270,4.266093);
   l1preW_stack_6->SetBinError(271,9.089564);
   l1preW_stack_6->SetBinError(272,13.14417);
   l1preW_stack_6->SetBinError(273,13.6403);
   l1preW_stack_6->SetBinError(274,8.357943);
   l1preW_stack_6->SetBinError(275,4.718257);
   l1preW_stack_6->SetBinError(276,7.314184);
   l1preW_stack_6->SetBinError(277,14.53675);
   l1preW_stack_6->SetBinError(278,6.890931);
   l1preW_stack_6->SetBinError(279,17.80786);
   l1preW_stack_6->SetBinError(280,17.18299);
   l1preW_stack_6->SetBinError(281,13.12011);
   l1preW_stack_6->SetBinError(282,18.20196);
   l1preW_stack_6->SetBinError(283,11.86565);
   l1preW_stack_6->SetBinError(284,11.13888);
   l1preW_stack_6->SetBinError(285,25.64131);
   l1preW_stack_6->SetBinError(286,24.58811);
   l1preW_stack_6->SetBinError(287,21.90591);
   l1preW_stack_6->SetBinError(288,29.59634);
   l1preW_stack_6->SetBinError(289,29.59543);
   l1preW_stack_6->SetBinError(290,22.35301);
   l1preW_stack_6->SetBinError(291,33.36988);
   l1preW_stack_6->SetBinError(292,36.44729);
   l1preW_stack_6->SetBinError(293,54.44146);
   l1preW_stack_6->SetBinError(294,47.47612);
   l1preW_stack_6->SetBinError(295,55.32639);
   l1preW_stack_6->SetBinError(296,53.29941);
   l1preW_stack_6->SetBinError(297,73.75418);
   l1preW_stack_6->SetBinError(298,128.9149);
   l1preW_stack_6->SetBinError(299,245.0906);
   l1preW_stack_6->SetBinError(300,452.6868);
   l1preW_stack_6->SetBinError(301,514.7594);
   l1preW_stack_6->SetEntries(3.168e+07);

   ci = TColor::GetColor("#9933ff");
   l1preW_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_6->SetLineColor(ci);
   l1preW_stack_6->GetXaxis()->SetRange(1,500);
   l1preW_stack_6->GetXaxis()->SetLabelFont(42);
   l1preW_stack_6->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_6->GetXaxis()->SetTitleFont(42);
   l1preW_stack_6->GetYaxis()->SetLabelFont(42);
   l1preW_stack_6->GetYaxis()->SetTitleFont(42);
   l1preW_stack_6->GetZaxis()->SetLabelFont(42);
   l1preW_stack_6->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_6,"");
   
   TH1D *l1preW_stack_7 = new TH1D("l1preW_stack_7","",500,-5,5);
   l1preW_stack_7->SetBinContent(254,0.4362346);
   l1preW_stack_7->SetBinContent(255,0.4362346);
   l1preW_stack_7->SetBinContent(256,0.5452932);
   l1preW_stack_7->SetBinContent(257,0.5452932);
   l1preW_stack_7->SetBinContent(258,2.39929);
   l1preW_stack_7->SetBinContent(259,2.944583);
   l1preW_stack_7->SetBinContent(260,12.10551);
   l1preW_stack_7->SetBinContent(261,6.325401);
   l1preW_stack_7->SetBinContent(262,19.5215);
   l1preW_stack_7->SetBinContent(263,42.86005);
   l1preW_stack_7->SetBinContent(264,129.5617);
   l1preW_stack_7->SetBinContent(265,33.80818);
   l1preW_stack_7->SetBinContent(266,133.0515);
   l1preW_stack_7->SetBinContent(267,20.39397);
   l1preW_stack_7->SetBinContent(268,34.57159);
   l1preW_stack_7->SetBinContent(269,58.45543);
   l1preW_stack_7->SetBinContent(270,69.25224);
   l1preW_stack_7->SetBinContent(271,246.0363);
   l1preW_stack_7->SetBinContent(272,529.0435);
   l1preW_stack_7->SetBinContent(273,556.6353);
   l1preW_stack_7->SetBinContent(274,206.448);
   l1preW_stack_7->SetBinContent(275,75.03234);
   l1preW_stack_7->SetBinContent(276,189.653);
   l1preW_stack_7->SetBinContent(277,630.6861);
   l1preW_stack_7->SetBinContent(278,146.6839);
   l1preW_stack_7->SetBinContent(279,948.8102);
   l1preW_stack_7->SetBinContent(280,829.6091);
   l1preW_stack_7->SetBinContent(281,562.9607);
   l1preW_stack_7->SetBinContent(282,976.9473);
   l1preW_stack_7->SetBinContent(283,483.2388);
   l1preW_stack_7->SetBinContent(284,417.6946);
   l1preW_stack_7->SetBinContent(285,1790.852);
   l1preW_stack_7->SetBinContent(286,1759.988);
   l1preW_stack_7->SetBinContent(287,1419.725);
   l1preW_stack_7->SetBinContent(288,2393.401);
   l1preW_stack_7->SetBinContent(289,2687.968);
   l1preW_stack_7->SetBinContent(290,1440.119);
   l1preW_stack_7->SetBinContent(291,3109.48);
   l1preW_stack_7->SetBinContent(292,3785.425);
   l1preW_stack_7->SetBinContent(293,8083.753);
   l1preW_stack_7->SetBinContent(294,6535.121);
   l1preW_stack_7->SetBinContent(295,9300.739);
   l1preW_stack_7->SetBinContent(296,8383.338);
   l1preW_stack_7->SetBinContent(297,15338.44);
   l1preW_stack_7->SetBinContent(298,48256.92);
   l1preW_stack_7->SetBinContent(299,176804.4);
   l1preW_stack_7->SetBinContent(300,578175.7);
   l1preW_stack_7->SetBinContent(301,812468.1);
   l1preW_stack_7->SetBinError(254,0.2181173);
   l1preW_stack_7->SetBinError(255,0.2181173);
   l1preW_stack_7->SetBinError(256,0.2438625);
   l1preW_stack_7->SetBinError(257,0.2438625);
   l1preW_stack_7->SetBinError(258,0.5115304);
   l1preW_stack_7->SetBinError(259,0.5666853);
   l1preW_stack_7->SetBinError(260,1.149004);
   l1preW_stack_7->SetBinError(261,0.8305658);
   l1preW_stack_7->SetBinError(262,1.459105);
   l1preW_stack_7->SetBinError(263,2.162003);
   l1preW_stack_7->SetBinError(264,3.758965);
   l1preW_stack_7->SetBinError(265,1.920175);
   l1preW_stack_7->SetBinError(266,3.809254);
   l1preW_stack_7->SetBinError(267,1.491354);
   l1preW_stack_7->SetBinError(268,1.941734);
   l1preW_stack_7->SetBinError(269,2.52489);
   l1preW_stack_7->SetBinError(270,2.748191);
   l1preW_stack_7->SetBinError(271,5.179998);
   l1preW_stack_7->SetBinError(272,7.595838);
   l1preW_stack_7->SetBinError(273,7.791398);
   l1preW_stack_7->SetBinError(274,4.744991);
   l1preW_stack_7->SetBinError(275,2.860581);
   l1preW_stack_7->SetBinError(276,4.547889);
   l1preW_stack_7->SetBinError(277,8.293477);
   l1preW_stack_7->SetBinError(278,3.999643);
   l1preW_stack_7->SetBinError(279,10.17231);
   l1preW_stack_7->SetBinError(280,9.511889);
   l1preW_stack_7->SetBinError(281,7.835543);
   l1preW_stack_7->SetBinError(282,10.32204);
   l1preW_stack_7->SetBinError(283,7.259571);
   l1preW_stack_7->SetBinError(284,6.749311);
   l1preW_stack_7->SetBinError(285,13.97526);
   l1preW_stack_7->SetBinError(286,13.85431);
   l1preW_stack_7->SetBinError(287,12.4432);
   l1preW_stack_7->SetBinError(288,16.15615);
   l1preW_stack_7->SetBinError(289,17.12151);
   l1preW_stack_7->SetBinError(290,12.53226);
   l1preW_stack_7->SetBinError(291,18.41509);
   l1preW_stack_7->SetBinError(292,20.3183);
   l1preW_stack_7->SetBinError(293,29.6918);
   l1preW_stack_7->SetBinError(294,26.69665);
   l1preW_stack_7->SetBinError(295,31.84848);
   l1preW_stack_7->SetBinError(296,30.23699);
   l1preW_stack_7->SetBinError(297,40.89975);
   l1preW_stack_7->SetBinError(298,72.54539);
   l1preW_stack_7->SetBinError(299,138.8598);
   l1preW_stack_7->SetBinError(300,251.1077);
   l1preW_stack_7->SetBinError(301,297.6687);
   l1preW_stack_7->SetEntries(1.5488e+07);

   ci = TColor::GetColor("#3399ff");
   l1preW_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_7->SetLineColor(ci);
   l1preW_stack_7->GetXaxis()->SetRange(1,500);
   l1preW_stack_7->GetXaxis()->SetLabelFont(42);
   l1preW_stack_7->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_7->GetXaxis()->SetTitleFont(42);
   l1preW_stack_7->GetYaxis()->SetLabelFont(42);
   l1preW_stack_7->GetYaxis()->SetTitleFont(42);
   l1preW_stack_7->GetZaxis()->SetLabelFont(42);
   l1preW_stack_7->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_7,"");
   
   TH1D *l1preW_stack_8 = new TH1D("l1preW_stack_8","",500,-5,5);
   l1preW_stack_8->SetBinContent(255,0.2432072);
   l1preW_stack_8->SetBinContent(256,1.216036);
   l1preW_stack_8->SetBinContent(257,0.7296215);
   l1preW_stack_8->SetBinContent(258,0.9728286);
   l1preW_stack_8->SetBinContent(259,1.70245);
   l1preW_stack_8->SetBinContent(260,3.4049);
   l1preW_stack_8->SetBinContent(261,4.620936);
   l1preW_stack_8->SetBinContent(262,6.566593);
   l1preW_stack_8->SetBinContent(263,19.45657);
   l1preW_stack_8->SetBinContent(264,30.88731);
   l1preW_stack_8->SetBinContent(265,10.70111);
   l1preW_stack_8->SetBinContent(266,42.31804);
   l1preW_stack_8->SetBinContent(267,9.485079);
   l1preW_stack_8->SetBinContent(268,9.241872);
   l1preW_stack_8->SetBinContent(269,25.53675);
   l1preW_stack_8->SetBinContent(270,26.02317);
   l1preW_stack_8->SetBinContent(271,93.63475);
   l1preW_stack_8->SetBinContent(272,152.7341);
   l1preW_stack_8->SetBinContent(273,176.3252);
   l1preW_stack_8->SetBinContent(274,72.23252);
   l1preW_stack_8->SetBinContent(275,24.07751);
   l1preW_stack_8->SetBinContent(276,73.69177);
   l1preW_stack_8->SetBinContent(277,183.8646);
   l1preW_stack_8->SetBinContent(278,66.39555);
   l1preW_stack_8->SetBinContent(279,309.1163);
   l1preW_stack_8->SetBinContent(280,252.449);
   l1preW_stack_8->SetBinContent(281,186.5399);
   l1preW_stack_8->SetBinContent(282,295.9831);
   l1preW_stack_8->SetBinContent(283,163.192);
   l1preW_stack_8->SetBinContent(284,162.2192);
   l1preW_stack_8->SetBinContent(285,554.9987);
   l1preW_stack_8->SetBinContent(286,536.515);
   l1preW_stack_8->SetBinContent(287,480.5773);
   l1preW_stack_8->SetBinContent(288,733.5128);
   l1preW_stack_8->SetBinContent(289,810.8526);
   l1preW_stack_8->SetBinContent(290,554.5123);
   l1preW_stack_8->SetBinContent(291,983.7729);
   l1preW_stack_8->SetBinContent(292,1290.457);
   l1preW_stack_8->SetBinContent(293,2466.121);
   l1preW_stack_8->SetBinContent(294,2063.613);
   l1preW_stack_8->SetBinContent(295,2843.335);
   l1preW_stack_8->SetBinContent(296,2813.177);
   l1preW_stack_8->SetBinContent(297,5550.23);
   l1preW_stack_8->SetBinContent(298,16728.27);
   l1preW_stack_8->SetBinContent(299,60363.53);
   l1preW_stack_8->SetBinContent(300,178162.9);
   l1preW_stack_8->SetBinContent(301,312381.1);
   l1preW_stack_8->SetBinError(255,0.2432072);
   l1preW_stack_8->SetBinError(256,0.5438277);
   l1preW_stack_8->SetBinError(257,0.4212471);
   l1preW_stack_8->SetBinError(258,0.4864143);
   l1preW_stack_8->SetBinError(259,0.6434656);
   l1preW_stack_8->SetBinError(260,0.9099978);
   l1preW_stack_8->SetBinError(261,1.060115);
   l1preW_stack_8->SetBinError(262,1.263741);
   l1preW_stack_8->SetBinError(263,2.175311);
   l1preW_stack_8->SetBinError(264,2.740805);
   l1preW_stack_8->SetBinError(265,1.613254);
   l1preW_stack_8->SetBinError(266,3.208123);
   l1preW_stack_8->SetBinError(267,1.518828);
   l1preW_stack_8->SetBinError(268,1.49923);
   l1preW_stack_8->SetBinError(269,2.492132);
   l1preW_stack_8->SetBinError(270,2.515754);
   l1preW_stack_8->SetBinError(271,4.772069);
   l1preW_stack_8->SetBinError(272,6.094754);
   l1preW_stack_8->SetBinError(273,6.548553);
   l1preW_stack_8->SetBinError(274,4.191356);
   l1preW_stack_8->SetBinError(275,2.419881);
   l1preW_stack_8->SetBinError(276,4.233481);
   l1preW_stack_8->SetBinError(277,6.687091);
   l1preW_stack_8->SetBinError(278,4.018442);
   l1preW_stack_8->SetBinError(279,8.670599);
   l1preW_stack_8->SetBinError(280,7.83565);
   l1preW_stack_8->SetBinError(281,6.735565);
   l1preW_stack_8->SetBinError(282,8.48441);
   l1preW_stack_8->SetBinError(283,6.299957);
   l1preW_stack_8->SetBinError(284,6.281151);
   l1preW_stack_8->SetBinError(285,11.61807);
   l1preW_stack_8->SetBinError(286,11.42297);
   l1preW_stack_8->SetBinError(287,10.8111);
   l1preW_stack_8->SetBinError(288,13.35648);
   l1preW_stack_8->SetBinError(289,14.04298);
   l1preW_stack_8->SetBinError(290,11.61298);
   l1preW_stack_8->SetBinError(291,15.46805);
   l1preW_stack_8->SetBinError(292,17.71577);
   l1preW_stack_8->SetBinError(293,24.49037);
   l1preW_stack_8->SetBinError(294,22.4028);
   l1preW_stack_8->SetBinError(295,26.29676);
   l1preW_stack_8->SetBinError(296,26.15693);
   l1preW_stack_8->SetBinError(297,36.74038);
   l1preW_stack_8->SetBinError(298,63.78429);
   l1preW_stack_8->SetBinError(299,121.1645);
   l1preW_stack_8->SetBinError(300,208.1597);
   l1preW_stack_8->SetBinError(301,275.6326);
   l1preW_stack_8->SetEntries(2433000);

   ci = TColor::GetColor("#33ff99");
   l1preW_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_8->SetLineColor(ci);
   l1preW_stack_8->GetXaxis()->SetRange(1,500);
   l1preW_stack_8->GetXaxis()->SetLabelFont(42);
   l1preW_stack_8->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_8->GetXaxis()->SetTitleFont(42);
   l1preW_stack_8->GetYaxis()->SetLabelFont(42);
   l1preW_stack_8->GetYaxis()->SetTitleFont(42);
   l1preW_stack_8->GetZaxis()->SetLabelFont(42);
   l1preW_stack_8->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_8,"");
   
   TH1D *l1preW_stack_9 = new TH1D("l1preW_stack_9","",500,-5,5);
   l1preW_stack_9->SetBinContent(254,0.006896937);
   l1preW_stack_9->SetBinContent(255,0.006896937);
   l1preW_stack_9->SetBinContent(256,0.01517326);
   l1preW_stack_9->SetBinContent(257,0.03034652);
   l1preW_stack_9->SetBinContent(258,0.0441404);
   l1preW_stack_9->SetBinContent(259,0.08276324);
   l1preW_stack_9->SetBinContent(260,0.1089716);
   l1preW_stack_9->SetBinContent(261,0.1600089);
   l1preW_stack_9->SetBinContent(262,0.2648424);
   l1preW_stack_9->SetBinContent(263,0.6110686);
   l1preW_stack_9->SetBinContent(264,0.7821127);
   l1preW_stack_9->SetBinContent(265,0.5103733);
   l1preW_stack_9->SetBinContent(266,0.8110798);
   l1preW_stack_9->SetBinContent(267,0.4262307);
   l1preW_stack_9->SetBinContent(268,0.4800268);
   l1preW_stack_9->SetBinContent(269,1.005573);
   l1preW_stack_9->SetBinContent(270,0.9752269);
   l1preW_stack_9->SetBinContent(271,3.51192);
   l1preW_stack_9->SetBinContent(272,3.626409);
   l1preW_stack_9->SetBinContent(273,4.48025);
   l1preW_stack_9->SetBinContent(274,1.517326);
   l1preW_stack_9->SetBinContent(275,1.466289);
   l1preW_stack_9->SetBinContent(276,2.851194);
   l1preW_stack_9->SetBinContent(277,5.019591);
   l1preW_stack_9->SetBinContent(278,3.222249);
   l1preW_stack_9->SetBinContent(279,8.479094);
   l1preW_stack_9->SetBinContent(280,6.648647);
   l1preW_stack_9->SetBinContent(281,7.263854);
   l1preW_stack_9->SetBinContent(282,8.022517);
   l1preW_stack_9->SetBinContent(283,6.014129);
   l1preW_stack_9->SetBinContent(284,6.814174);
   l1preW_stack_9->SetBinContent(285,17.41615);
   l1preW_stack_9->SetBinContent(286,15.7595);
   l1preW_stack_9->SetBinContent(287,15.78019);
   l1preW_stack_9->SetBinContent(288,24.9076);
   l1preW_stack_9->SetBinContent(289,24.99864);
   l1preW_stack_9->SetBinContent(290,21.02738);
   l1preW_stack_9->SetBinContent(291,32.00731);
   l1preW_stack_9->SetBinContent(292,46.02326);
   l1preW_stack_9->SetBinContent(293,72.88683);
   l1preW_stack_9->SetBinContent(294,81.19626);
   l1preW_stack_9->SetBinContent(295,102.6264);
   l1preW_stack_9->SetBinContent(296,115.2933);
   l1preW_stack_9->SetBinContent(297,224.0608);
   l1preW_stack_9->SetBinContent(298,575.9218);
   l1preW_stack_9->SetBinContent(299,1712.283);
   l1preW_stack_9->SetBinContent(300,5058.986);
   l1preW_stack_9->SetBinContent(301,5494.163);
   l1preW_stack_9->SetBinError(254,0.003084404);
   l1preW_stack_9->SetBinError(255,0.003084404);
   l1preW_stack_9->SetBinError(256,0.00457491);
   l1preW_stack_9->SetBinError(257,0.0064699);
   l1preW_stack_9->SetBinError(258,0.007802993);
   l1preW_stack_9->SetBinError(259,0.01068469);
   l1preW_stack_9->SetBinError(260,0.01226026);
   l1preW_stack_9->SetBinError(261,0.01485646);
   l1preW_stack_9->SetBinError(262,0.01911335);
   l1preW_stack_9->SetBinError(263,0.02903275);
   l1preW_stack_9->SetBinError(264,0.03284564);
   l1preW_stack_9->SetBinError(265,0.02653305);
   l1preW_stack_9->SetBinError(266,0.03344837);
   l1preW_stack_9->SetBinError(267,0.02424742);
   l1preW_stack_9->SetBinError(268,0.02573214);
   l1preW_stack_9->SetBinError(269,0.03724346);
   l1preW_stack_9->SetBinError(270,0.03667718);
   l1preW_stack_9->SetBinError(271,0.069601);
   l1preW_stack_9->SetBinError(272,0.0707264);
   l1preW_stack_9->SetBinError(273,0.07861298);
   l1preW_stack_9->SetBinError(274,0.0457491);
   l1preW_stack_9->SetBinError(275,0.04497311);
   l1preW_stack_9->SetBinError(276,0.06271284);
   l1preW_stack_9->SetBinError(277,0.08321034);
   l1preW_stack_9->SetBinError(278,0.06666881);
   l1preW_stack_9->SetBinError(279,0.1081478);
   l1preW_stack_9->SetBinError(280,0.09576565);
   l1preW_stack_9->SetBinError(281,0.1000983);
   l1preW_stack_9->SetBinError(282,0.1051958);
   l1preW_stack_9->SetBinError(283,0.09108136);
   l1preW_stack_9->SetBinError(284,0.09695043);
   l1preW_stack_9->SetBinError(285,0.1549955);
   l1preW_stack_9->SetBinError(286,0.1474397);
   l1preW_stack_9->SetBinError(287,0.1475364);
   l1preW_stack_9->SetBinError(288,0.185357);
   l1preW_stack_9->SetBinError(289,0.1856955);
   l1preW_stack_9->SetBinError(290,0.1703083);
   l1preW_stack_9->SetBinError(291,0.2101201);
   l1preW_stack_9->SetBinError(292,0.2519601);
   l1preW_stack_9->SetBinError(293,0.3170791);
   l1preW_stack_9->SetBinError(294,0.3346657);
   l1preW_stack_9->SetBinError(295,0.3762467);
   l1preW_stack_9->SetBinError(296,0.3987909);
   l1preW_stack_9->SetBinError(297,0.5559376);
   l1preW_stack_9->SetBinError(298,0.891302);
   l1preW_stack_9->SetBinError(299,1.536848);
   l1preW_stack_9->SetBinError(300,2.641648);
   l1preW_stack_9->SetBinError(301,2.752922);
   l1preW_stack_9->SetEntries(9939628);

   ci = TColor::GetColor("#cccc00");
   l1preW_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_9->SetLineColor(ci);
   l1preW_stack_9->GetXaxis()->SetRange(1,500);
   l1preW_stack_9->GetXaxis()->SetLabelFont(42);
   l1preW_stack_9->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_9->GetXaxis()->SetTitleFont(42);
   l1preW_stack_9->GetYaxis()->SetLabelFont(42);
   l1preW_stack_9->GetYaxis()->SetTitleFont(42);
   l1preW_stack_9->GetZaxis()->SetLabelFont(42);
   l1preW_stack_9->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_9,"");
   
   TH1D *l1preW_stack_10 = new TH1D("l1preW_stack_10","",500,-5,5);
   l1preW_stack_10->SetBinContent(254,0.0003580462);
   l1preW_stack_10->SetBinContent(255,0.001074139);
   l1preW_stack_10->SetBinContent(256,0.00286437);
   l1preW_stack_10->SetBinContent(257,0.003580462);
   l1preW_stack_10->SetBinContent(258,0.003938508);
   l1preW_stack_10->SetBinContent(259,0.008235063);
   l1preW_stack_10->SetBinContent(260,0.04654601);
   l1preW_stack_10->SetBinContent(261,0.03150807);
   l1preW_stack_10->SetBinContent(262,0.06086786);
   l1preW_stack_10->SetBinContent(263,0.09524029);
   l1preW_stack_10->SetBinContent(264,0.2577933);
   l1preW_stack_10->SetBinContent(265,0.07268338);
   l1preW_stack_10->SetBinContent(266,0.2996847);
   l1preW_stack_10->SetBinContent(267,0.07912821);
   l1preW_stack_10->SetBinContent(268,0.1142167);
   l1preW_stack_10->SetBinContent(269,0.2821404);
   l1preW_stack_10->SetBinContent(270,0.2030122);
   l1preW_stack_10->SetBinContent(271,0.5660711);
   l1preW_stack_10->SetBinContent(272,0.9130178);
   l1preW_stack_10->SetBinContent(273,0.790566);
   l1preW_stack_10->SetBinContent(274,0.4443353);
   l1preW_stack_10->SetBinContent(275,0.2427553);
   l1preW_stack_10->SetBinContent(276,0.759058);
   l1preW_stack_10->SetBinContent(277,1.031173);
   l1preW_stack_10->SetBinContent(278,0.4178399);
   l1preW_stack_10->SetBinContent(279,1.412492);
   l1preW_stack_10->SetBinContent(280,0.9892817);
   l1preW_stack_10->SetBinContent(281,1.807059);
   l1preW_stack_10->SetBinContent(282,1.719696);
   l1preW_stack_10->SetBinContent(283,1.504152);
   l1preW_stack_10->SetBinContent(284,0.9617121);
   l1preW_stack_10->SetBinContent(285,1.934166);
   l1preW_stack_10->SetBinContent(286,2.635578);
   l1preW_stack_10->SetBinContent(287,2.427195);
   l1preW_stack_10->SetBinContent(288,3.260727);
   l1preW_stack_10->SetBinContent(289,5.309109);
   l1preW_stack_10->SetBinContent(290,3.537497);
   l1preW_stack_10->SetBinContent(291,5.292997);
   l1preW_stack_10->SetBinContent(292,6.627435);
   l1preW_stack_10->SetBinContent(293,8.761391);
   l1preW_stack_10->SetBinContent(294,10.1968);
   l1preW_stack_10->SetBinContent(295,16.48445);
   l1preW_stack_10->SetBinContent(296,16.09883);
   l1preW_stack_10->SetBinContent(297,25.02206);
   l1preW_stack_10->SetBinContent(298,59.70993);
   l1preW_stack_10->SetBinContent(299,180.8355);
   l1preW_stack_10->SetBinContent(300,688.3281);
   l1preW_stack_10->SetBinContent(301,738.6472);
   l1preW_stack_10->SetBinError(254,0.0003580462);
   l1preW_stack_10->SetBinError(255,0.0006201542);
   l1preW_stack_10->SetBinError(256,0.001012708);
   l1preW_stack_10->SetBinError(257,0.001132242);
   l1preW_stack_10->SetBinError(258,0.001187505);
   l1preW_stack_10->SetBinError(259,0.001717129);
   l1preW_stack_10->SetBinError(260,0.004082355);
   l1preW_stack_10->SetBinError(261,0.003358771);
   l1preW_stack_10->SetBinError(262,0.004668351);
   l1preW_stack_10->SetBinError(263,0.005839557);
   l1preW_stack_10->SetBinError(264,0.009607388);
   l1preW_stack_10->SetBinError(265,0.005101373);
   l1preW_stack_10->SetBinError(266,0.01035862);
   l1preW_stack_10->SetBinError(267,0.00532274);
   l1preW_stack_10->SetBinError(268,0.00639491);
   l1preW_stack_10->SetBinError(269,0.01005084);
   l1preW_stack_10->SetBinError(270,0.008525711);
   l1preW_stack_10->SetBinError(271,0.01423656);
   l1preW_stack_10->SetBinError(272,0.01808045);
   l1preW_stack_10->SetBinError(273,0.01682436);
   l1preW_stack_10->SetBinError(274,0.01261319);
   l1preW_stack_10->SetBinError(275,0.009322962);
   l1preW_stack_10->SetBinError(276,0.01648569);
   l1preW_stack_10->SetBinError(277,0.01921478);
   l1preW_stack_10->SetBinError(278,0.01223135);
   l1preW_stack_10->SetBinError(279,0.02248861);
   l1preW_stack_10->SetBinError(280,0.01882043);
   l1preW_stack_10->SetBinError(281,0.0254364);
   l1preW_stack_10->SetBinError(282,0.02481392);
   l1preW_stack_10->SetBinError(283,0.02320681);
   l1preW_stack_10->SetBinError(284,0.01855633);
   l1preW_stack_10->SetBinError(285,0.02631579);
   l1preW_stack_10->SetBinError(286,0.03071903);
   l1preW_stack_10->SetBinError(287,0.02947962);
   l1preW_stack_10->SetBinError(288,0.03416857);
   l1preW_stack_10->SetBinError(289,0.04359939);
   l1preW_stack_10->SetBinError(290,0.03558914);
   l1preW_stack_10->SetBinError(291,0.04353318);
   l1preW_stack_10->SetBinError(292,0.04871271);
   l1preW_stack_10->SetBinError(293,0.05600877);
   l1preW_stack_10->SetBinError(294,0.06042288);
   l1preW_stack_10->SetBinError(295,0.07682574);
   l1preW_stack_10->SetBinError(296,0.07592184);
   l1preW_stack_10->SetBinError(297,0.09465228);
   l1preW_stack_10->SetBinError(298,0.1462153);
   l1preW_stack_10->SetBinError(299,0.2544553);
   l1preW_stack_10->SetBinError(300,0.4964406);
   l1preW_stack_10->SetBinError(301,0.5142663);
   l1preW_stack_10->SetEntries(5000000);

   ci = TColor::GetColor("#0000cc");
   l1preW_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_10->SetLineColor(ci);
   l1preW_stack_10->GetXaxis()->SetRange(1,500);
   l1preW_stack_10->GetXaxis()->SetLabelFont(42);
   l1preW_stack_10->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_10->GetXaxis()->SetTitleFont(42);
   l1preW_stack_10->GetYaxis()->SetLabelFont(42);
   l1preW_stack_10->GetYaxis()->SetTitleFont(42);
   l1preW_stack_10->GetZaxis()->SetLabelFont(42);
   l1preW_stack_10->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_10,"");
   
   TH1D *l1preW_stack_11 = new TH1D("l1preW_stack_11","",500,-5,5);
   l1preW_stack_11->SetBinContent(257,0.002735007);
   l1preW_stack_11->SetBinContent(258,0.005470015);
   l1preW_stack_11->SetBinContent(259,0.01367504);
   l1preW_stack_11->SetBinContent(260,0.01914505);
   l1preW_stack_11->SetBinContent(261,0.008205022);
   l1preW_stack_11->SetBinContent(262,0.0355551);
   l1preW_stack_11->SetBinContent(263,0.0738452);
   l1preW_stack_11->SetBinContent(264,0.1203403);
   l1preW_stack_11->SetBinContent(265,0.04649513);
   l1preW_stack_11->SetBinContent(266,0.1148703);
   l1preW_stack_11->SetBinContent(267,0.05196514);
   l1preW_stack_11->SetBinContent(268,0.0382901);
   l1preW_stack_11->SetBinContent(269,0.08478523);
   l1preW_stack_11->SetBinContent(270,0.09025525);
   l1preW_stack_11->SetBinContent(271,0.4321312);
   l1preW_stack_11->SetBinContent(272,0.4512762);
   l1preW_stack_11->SetBinContent(273,0.380166);
   l1preW_stack_11->SetBinContent(274,0.1777755);
   l1preW_stack_11->SetBinContent(275,0.1476904);
   l1preW_stack_11->SetBinContent(276,0.3391409);
   l1preW_stack_11->SetBinContent(277,0.5989666);
   l1preW_stack_11->SetBinContent(278,0.2926458);
   l1preW_stack_11->SetBinContent(279,0.8451173);
   l1preW_stack_11->SetBinContent(280,0.716572);
   l1preW_stack_11->SetBinContent(281,0.7001619);
   l1preW_stack_11->SetBinContent(282,0.7630671);
   l1preW_stack_11->SetBinContent(283,0.5005064);
   l1preW_stack_11->SetBinContent(284,0.6290517);
   l1preW_stack_11->SetBinContent(285,1.583569);
   l1preW_stack_11->SetBinContent(286,1.463229);
   l1preW_stack_11->SetBinContent(287,1.444084);
   l1preW_stack_11->SetBinContent(288,1.980145);
   l1preW_stack_11->SetBinContent(289,1.761345);
   l1preW_stack_11->SetBinContent(290,1.542544);
   l1preW_stack_11->SetBinContent(291,2.311081);
   l1preW_stack_11->SetBinContent(292,3.569185);
   l1preW_stack_11->SetBinContent(293,5.273094);
   l1preW_stack_11->SetBinContent(294,5.757191);
   l1preW_stack_11->SetBinContent(295,7.27512);
   l1preW_stack_11->SetBinContent(296,7.923317);
   l1preW_stack_11->SetBinContent(297,12.93385);
   l1preW_stack_11->SetBinContent(298,31.33498);
   l1preW_stack_11->SetBinContent(299,83.86353);
   l1preW_stack_11->SetBinContent(300,202.3714);
   l1preW_stack_11->SetBinContent(301,301.4881);
   l1preW_stack_11->SetBinError(257,0.002735007);
   l1preW_stack_11->SetBinError(258,0.003867885);
   l1preW_stack_11->SetBinError(259,0.006115663);
   l1preW_stack_11->SetBinError(260,0.00723615);
   l1preW_stack_11->SetBinError(261,0.004737172);
   l1preW_stack_11->SetBinError(262,0.00986121);
   l1preW_stack_11->SetBinError(263,0.01421152);
   l1preW_stack_11->SetBinError(264,0.01814199);
   l1preW_stack_11->SetBinError(265,0.01127672);
   l1preW_stack_11->SetBinError(266,0.01772487);
   l1preW_stack_11->SetBinError(267,0.01192162);
   l1preW_stack_11->SetBinError(268,0.01023346);
   l1preW_stack_11->SetBinError(269,0.01522788);
   l1preW_stack_11->SetBinError(270,0.01571142);
   l1preW_stack_11->SetBinError(271,0.03437851);
   l1preW_stack_11->SetBinError(272,0.03513181);
   l1preW_stack_11->SetBinError(273,0.03224526);
   l1preW_stack_11->SetBinError(274,0.02205034);
   l1preW_stack_11->SetBinError(275,0.02009812);
   l1preW_stack_11->SetBinError(276,0.03045575);
   l1preW_stack_11->SetBinError(277,0.04047441);
   l1preW_stack_11->SetBinError(278,0.02829114);
   l1preW_stack_11->SetBinError(279,0.04807704);
   l1preW_stack_11->SetBinError(280,0.04426996);
   l1preW_stack_11->SetBinError(281,0.04376012);
   l1preW_stack_11->SetBinError(282,0.04568363);
   l1preW_stack_11->SetBinError(283,0.0369985);
   l1preW_stack_11->SetBinError(284,0.04147844);
   l1preW_stack_11->SetBinError(285,0.06581089);
   l1preW_stack_11->SetBinError(286,0.06326091);
   l1preW_stack_11->SetBinError(287,0.06284569);
   l1preW_stack_11->SetBinError(288,0.07359152);
   l1preW_stack_11->SetBinError(289,0.06940671);
   l1preW_stack_11->SetBinError(290,0.06495283);
   l1preW_stack_11->SetBinError(291,0.07950361);
   l1preW_stack_11->SetBinError(292,0.09880155);
   l1preW_stack_11->SetBinError(293,0.1200914);
   l1preW_stack_11->SetBinError(294,0.1254829);
   l1preW_stack_11->SetBinError(295,0.1410585);
   l1preW_stack_11->SetBinError(296,0.1472085);
   l1preW_stack_11->SetBinError(297,0.1880802);
   l1preW_stack_11->SetBinError(298,0.292748);
   l1preW_stack_11->SetBinError(299,0.4789232);
   l1preW_stack_11->SetBinError(300,0.7439673);
   l1preW_stack_11->SetBinError(301,0.9080595);
   l1preW_stack_11->SetEntries(249197);

   ci = TColor::GetColor("#cc0000");
   l1preW_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_11->SetLineColor(ci);
   l1preW_stack_11->GetXaxis()->SetRange(1,500);
   l1preW_stack_11->GetXaxis()->SetLabelFont(42);
   l1preW_stack_11->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_11->GetXaxis()->SetTitleFont(42);
   l1preW_stack_11->GetYaxis()->SetLabelFont(42);
   l1preW_stack_11->GetYaxis()->SetTitleFont(42);
   l1preW_stack_11->GetZaxis()->SetLabelFont(42);
   l1preW_stack_11->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_11,"");
   
   TH1D *l1preW_stack_12 = new TH1D("l1preW_stack_12","",500,-5,5);
   l1preW_stack_12->SetBinContent(257,0.0003572658);
   l1preW_stack_12->SetBinContent(258,0.0003572658);
   l1preW_stack_12->SetBinContent(259,0.0003572658);
   l1preW_stack_12->SetBinContent(260,0.00428719);
   l1preW_stack_12->SetBinContent(261,0.001786329);
   l1preW_stack_12->SetBinContent(262,0.003929924);
   l1preW_stack_12->SetBinContent(263,0.01071798);
   l1preW_stack_12->SetBinContent(264,0.0271522);
   l1preW_stack_12->SetBinContent(265,0.00857438);
   l1preW_stack_12->SetBinContent(266,0.0271522);
   l1preW_stack_12->SetBinContent(267,0.007502583);
   l1preW_stack_12->SetBinContent(268,0.01036071);
   l1preW_stack_12->SetBinContent(269,0.02500861);
   l1preW_stack_12->SetBinContent(270,0.01000344);
   l1preW_stack_12->SetBinContent(271,0.05573347);
   l1preW_stack_12->SetBinContent(272,0.08467201);
   l1preW_stack_12->SetBinContent(273,0.05501894);
   l1preW_stack_12->SetBinContent(274,0.04108557);
   l1preW_stack_12->SetBinContent(275,0.02357955);
   l1preW_stack_12->SetBinContent(276,0.07073864);
   l1preW_stack_12->SetBinContent(277,0.09931991);
   l1preW_stack_12->SetBinContent(278,0.02107868);
   l1preW_stack_12->SetBinContent(279,0.1164687);
   l1preW_stack_12->SetBinContent(280,0.08824466);
   l1preW_stack_12->SetBinContent(281,0.1203986);
   l1preW_stack_12->SetBinContent(282,0.1546961);
   l1preW_stack_12->SetBinContent(283,0.09931991);
   l1preW_stack_12->SetBinContent(284,0.09181732);
   l1preW_stack_12->SetBinContent(285,0.1757748);
   l1preW_stack_12->SetBinContent(286,0.1718449);
   l1preW_stack_12->SetBinContent(287,0.2004261);
   l1preW_stack_12->SetBinContent(288,0.2511579);
   l1preW_stack_12->SetBinContent(289,0.3765582);
   l1preW_stack_12->SetBinContent(290,0.1546961);
   l1preW_stack_12->SetBinContent(291,0.3311854);
   l1preW_stack_12->SetBinContent(292,0.4819516);
   l1preW_stack_12->SetBinContent(293,0.5709108);
   l1preW_stack_12->SetBinContent(294,0.6373623);
   l1preW_stack_12->SetBinContent(295,1.00356);
   l1preW_stack_12->SetBinContent(296,1.093948);
   l1preW_stack_12->SetBinContent(297,1.334745);
   l1preW_stack_12->SetBinContent(298,2.788103);
   l1preW_stack_12->SetBinContent(299,9.263546);
   l1preW_stack_12->SetBinContent(300,27.13005);
   l1preW_stack_12->SetBinContent(301,41.71222);
   l1preW_stack_12->SetBinError(257,0.0003572658);
   l1preW_stack_12->SetBinError(258,0.0003572658);
   l1preW_stack_12->SetBinError(259,0.0003572658);
   l1preW_stack_12->SetBinError(260,0.001237605);
   l1preW_stack_12->SetBinError(261,0.0007988707);
   l1preW_stack_12->SetBinError(262,0.001184917);
   l1preW_stack_12->SetBinError(263,0.001956826);
   l1preW_stack_12->SetBinError(264,0.003114571);
   l1preW_stack_12->SetBinError(265,0.001750238);
   l1preW_stack_12->SetBinError(266,0.003114571);
   l1preW_stack_12->SetBinError(267,0.001637198);
   l1preW_stack_12->SetBinError(268,0.001923935);
   l1preW_stack_12->SetBinError(269,0.002989101);
   l1preW_stack_12->SetBinError(270,0.001890473);
   l1preW_stack_12->SetBinError(271,0.004462249);
   l1preW_stack_12->SetBinError(272,0.005500038);
   l1preW_stack_12->SetBinError(273,0.004433553);
   l1preW_stack_12->SetBinError(274,0.003831249);
   l1preW_stack_12->SetBinError(275,0.002902441);
   l1preW_stack_12->SetBinError(276,0.005027176);
   l1preW_stack_12->SetBinError(277,0.005956812);
   l1preW_stack_12->SetBinError(278,0.002744211);
   l1preW_stack_12->SetBinError(279,0.006450603);
   l1preW_stack_12->SetBinError(280,0.005614874);
   l1preW_stack_12->SetBinError(281,0.006558529);
   l1preW_stack_12->SetBinError(282,0.007434221);
   l1preW_stack_12->SetBinError(283,0.005956812);
   l1preW_stack_12->SetBinError(284,0.005727407);
   l1preW_stack_12->SetBinError(285,0.00792454);
   l1preW_stack_12->SetBinError(286,0.007835452);
   l1preW_stack_12->SetBinError(287,0.008461998);
   l1preW_stack_12->SetBinError(288,0.009472599);
   l1preW_stack_12->SetBinError(289,0.01159877);
   l1preW_stack_12->SetBinError(290,0.007434221);
   l1preW_stack_12->SetBinError(291,0.01087756);
   l1preW_stack_12->SetBinError(292,0.01312192);
   l1preW_stack_12->SetBinError(293,0.0142817);
   l1preW_stack_12->SetBinError(294,0.01508999);
   l1preW_stack_12->SetBinError(295,0.01893509);
   l1preW_stack_12->SetBinError(296,0.01976943);
   l1preW_stack_12->SetBinError(297,0.0218371);
   l1preW_stack_12->SetBinError(298,0.03156095);
   l1preW_stack_12->SetBinError(299,0.05752868);
   l1preW_stack_12->SetBinError(300,0.09845121);
   l1preW_stack_12->SetBinError(301,0.1220752);
   l1preW_stack_12->SetEntries(248940);

   ci = TColor::GetColor("#00cc00");
   l1preW_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_12->SetLineColor(ci);
   l1preW_stack_12->GetXaxis()->SetRange(1,500);
   l1preW_stack_12->GetXaxis()->SetLabelFont(42);
   l1preW_stack_12->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_12->GetXaxis()->SetTitleFont(42);
   l1preW_stack_12->GetYaxis()->SetLabelFont(42);
   l1preW_stack_12->GetYaxis()->SetTitleFont(42);
   l1preW_stack_12->GetZaxis()->SetLabelFont(42);
   l1preW_stack_12->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_12,"");
   st->Draw("hist");
   
   TH1D *l1preW__13 = new TH1D("l1preW__13","",200,-2,2);
   l1preW__13->SetEntries(199);

   ci = TColor::GetColor("#000099");
   l1preW__13->SetLineColor(ci);
   l1preW__13->SetLineWidth(2);
   l1preW__13->SetMarkerStyle(20);
   l1preW__13->SetMarkerSize(1.2);
   l1preW__13->GetXaxis()->SetRange(1,200);
   l1preW__13->GetXaxis()->SetLabelFont(42);
   l1preW__13->GetXaxis()->SetTitleOffset(1);
   l1preW__13->GetXaxis()->SetTitleFont(42);
   l1preW__13->GetYaxis()->SetLabelFont(42);
   l1preW__13->GetYaxis()->SetTitleFont(42);
   l1preW__13->GetZaxis()->SetLabelFont(42);
   l1preW__13->GetZaxis()->SetTitleOffset(1);
   l1preW__13->GetZaxis()->SetTitleFont(42);
   l1preW__13->Draw("same E");
   
   Double_t Graph_from_l1preW_fx1013[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_l1preW_fy1013[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92.44447, 1238.945, 17648.02, 30645.17, 86527.36, 103033.9,
   210959.4, 388381.3, 1461090, 587325.4, 1693605, 5478859, 2.754945e+07, 4079588, 2.725088e+07, 2325976, 3409097, 8476080, 5560760, 3.582609e+07, 1.091455e+08, 8.560634e+07,
   3.73002e+07, 8159729, 3.17853e+07, 1.250484e+08, 1.202863e+07, 1.358663e+08, 1.84188e+08, 7.39563e+07, 2.146521e+08, 4.097052e+07, 8.997469e+07, 3.398291e+08, 3.376362e+08, 3.411003e+08, 4.247984e+08, 4.488308e+08,
   1.618509e+08, 5.217622e+08, 6.222592e+08, 1.622085e+09, 1.575858e+09, 2.455555e+09, 1.990315e+09, 3.030747e+09, 1.080721e+10, 5.452415e+10, 3.071154e+11, 6.917371e+11, 0, 0, 0, 0,
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
   0, 0, 0 };
   Double_t Graph_from_l1preW_fex1013[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_l1preW_fey1013[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39.63993, 139.247, 2267.365, 2900.051, 5617.079, 4960.125,
   9152.22, 12943.93, 15076.57, 15317.14, 29988.63, 65134.77, 142291, 78145.46, 144057.4, 45879.4, 42422.95, 87427.23, 90300.91, 298055.2, 526170.4, 556212.7,
   178763, 116528, 188616.9, 598285.2, 168875.1, 736315.6, 1382391, 574218.6, 1406292, 279931.5, 506729.2, 1855506, 2030932, 1910584, 2293581, 1662757,
   1269033, 2623920, 2043737, 4802195, 4257585, 5037379, 4501052, 6250552, 1.340138e+07, 3.047182e+07, 7.750112e+07, 1.163205e+08, 0, 0, 0, 0,
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
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_l1preW_fx1013,Graph_from_l1preW_fy1013,Graph_from_l1preW_fex1013,Graph_from_l1preW_fey1013);
   gre->SetName("Graph_from_l1preW");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_l1preW1013 = new TH1F("Graph_Graph_from_l1preW1013","",500,-6,6);
   Graph_Graph_from_l1preW1013->SetMinimum(0);
   Graph_Graph_from_l1preW1013->SetMaximum(7.610388e+11);
   Graph_Graph_from_l1preW1013->SetDirectory(nullptr);
   Graph_Graph_from_l1preW1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_l1preW1013->SetLineColor(ci);
   Graph_Graph_from_l1preW1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_l1preW1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_l1preW1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_l1preW1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_l1preW1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_l1preW1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("l1preW","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("l1preW","ggZHcc","F");

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
   entry=leg->AddEntry("l1preW","ZHcc","F");

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
   entry=leg->AddEntry("l1preW","ggZHbb","F");

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
   entry=leg->AddEntry("l1preW","ZHbb","F");

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
   entry=leg->AddEntry("l1preW","ZZ","F");

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
   entry=leg->AddEntry("l1preW","WZ","F");

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
   entry=leg->AddEntry("l1preW","WW","F");

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
   entry=leg->AddEntry("l1preW","W + jets","F");

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
   entry=leg->AddEntry("l1preW","Z + jets","F");

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
   entry=leg->AddEntry("l1preW","t#bar{t}","F");

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
   entry=leg->AddEntry("l1preW","Single top","F");

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
   entry=leg->AddEntry("l1preW","QCD","F");

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
   entry=leg->AddEntry("Graph_from_l1preW","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   l1preW__16->cd();
  
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
   
   TH1D *data_mc_ratio__14 = new TH1D("data_mc_ratio__14","",200,-2,2);
   data_mc_ratio__14->SetMinimum(0.4);
   data_mc_ratio__14->SetMaximum(1.6);
   data_mc_ratio__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__14->SetLineColor(ci);
   data_mc_ratio__14->SetLineWidth(2);
   data_mc_ratio__14->SetMarkerStyle(20);
   data_mc_ratio__14->SetMarkerSize(1.2);
   data_mc_ratio__14->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   data_mc_ratio__14->GetXaxis()->SetRange(1,200);
   data_mc_ratio__14->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__14->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__14->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__14->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__14->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__14->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__14->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_mc_statistical_error_fy1014[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1014[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1014[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4287972, 0.1123916, 0.128477, 0.09463322, 0.06491679, 0.0481407,
   0.0433838, 0.03332789, 0.01031871, 0.02607948, 0.01770697, 0.01188838, 0.005164929, 0.01915524, 0.00528634, 0.0197248, 0.01244404, 0.01031458, 0.01623895, 0.008319503, 0.004820817, 0.00649733,
   0.004792548, 0.01428086, 0.005934092, 0.004784429, 0.01403944, 0.005419413, 0.007505329, 0.007764296, 0.006551496, 0.006832511, 0.005631908, 0.005460114, 0.00601515, 0.005601236, 0.005399224, 0.003704641,
   0.007840753, 0.005028957, 0.003284381, 0.002960508, 0.002701757, 0.002051422, 0.002261477, 0.00206238, 0.001240041, 0.0005588684, 0.0002523518, 0.0001681571, 0, 0, 0, 0,
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
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.4854433);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.514557);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   l1preW__16->cd();
   l1preW__16->Modified();
   l1preW__16->cd();
   l1preW__16->SetSelected(l1preW__16);
}
