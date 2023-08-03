void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug  3 10:21:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(0,0,1,1);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-53.06283,6.525,53019.77);
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
   st->SetMaximum(45440.46);
   
   TH1F *st_stack_213 = new TH1F("st_stack_213","",30,0,6);
   st_stack_213->SetMinimum(0.01);
   st_stack_213->SetMaximum(47712.49);
   st_stack_213->SetDirectory(0);
   st_stack_213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_213->SetLineColor(ci);
   st_stack_213->GetXaxis()->SetRange(1,31);
   st_stack_213->GetXaxis()->SetLabelFont(42);
   st_stack_213->GetXaxis()->SetLabelSize(0.035);
   st_stack_213->GetXaxis()->SetTitleSize(0.035);
   st_stack_213->GetXaxis()->SetTitleFont(42);
   st_stack_213->GetYaxis()->SetTitle("Events/0.2");
   st_stack_213->GetYaxis()->SetLabelFont(42);
   st_stack_213->GetYaxis()->SetLabelSize(0.05);
   st_stack_213->GetYaxis()->SetTitleSize(0.057);
   st_stack_213->GetYaxis()->SetTitleOffset(1.2);
   st_stack_213->GetYaxis()->SetTitleFont(42);
   st_stack_213->GetZaxis()->SetLabelFont(42);
   st_stack_213->GetZaxis()->SetLabelSize(0.035);
   st_stack_213->GetZaxis()->SetTitleSize(0.035);
   st_stack_213->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_213);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,5.879633);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13219.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,10332.56);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8047.159);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,6747.838);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7622.682);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,7753.205);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,6842.545);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,10304.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,6274.59);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,9151.331);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,12546.38);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,14159.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,18741.29);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,17806.06);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,8903.769);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,5236.538);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,3506.527);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3953.368);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2966.538);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1340.582);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,325.1512);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,163.1487);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,338.8892);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,29.72668);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,5.879633);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,2412.288);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1873.176);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1732.225);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1061.008);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1749.373);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1750.493);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,1062.233);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,1892.776);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,883.1811);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1226.931);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,2353.136);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2387.731);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2238.541);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2536.728);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1774.203);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,873.3192);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,729.0422);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,862.2234);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1496.664);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,474.8821);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,71.27608);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,52.48517);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,270.1474);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,22.76318);
   VbbHcc_both_H_dR_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,18.01348);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,28.3835);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,27.65251);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,29.70184);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,32.58854);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,38.512);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,46.55144);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,41.91454);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,48.0796);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,56.61513);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,59.70968);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,71.29238);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,80.62031);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,76.33316);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,50.55035);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,28.81721);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,17.92585);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,15.21562);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,10.19454);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,5.476832);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,4.291148);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,1.649291);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.120284);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.4075899);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.04373405);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.4135476);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,1.699255);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,2.159457);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,2.125182);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,2.157382);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,2.23027);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,2.475951);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,2.833875);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,2.565146);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,2.709481);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,3.032295);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,2.990245);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,3.369555);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,3.682262);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,3.438621);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,2.795735);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,1.919242);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,1.608517);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.516728);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.138676);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.8167542);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.7015117);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.4391235);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.3321749);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.1361429);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.04373405);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.2812064);
   VbbHcc_both_H_dR_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.4881951);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,359.1844);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,573.3382);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,653.0998);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,722.968);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,777.4853);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,805.8159);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,830.0977);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,883.4055);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,955.7624);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1053.24);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,1169.967);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,1257.74);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,1378.496);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,1336.403);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,777.7638);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,485.0157);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,320.1903);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,204.6281);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,130.033);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,74.14808);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,45.30725);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,20.86833);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,12.77886);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,4.31276);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,2.417778);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.4487182);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.1661592);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,4.759641);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,6.044188);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,6.455496);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,6.79514);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,7.035246);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,7.151493);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,7.23763);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,7.457716);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,7.748744);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,8.132857);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,8.57787);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,8.882573);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,9.316879);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,9.181729);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,6.972459);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,5.498512);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,4.458952);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,3.563439);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,2.836243);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,2.134414);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,1.664877);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.1291);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,0.8920599);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.5141937);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.3798854);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.1614016);
   VbbHcc_both_H_dR_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(2,0.066575);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,79.52841);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,118.4012);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,98.87026);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,91.89368);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,86.25649);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,83.86603);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,112.1499);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,107.5164);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,130.5054);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,156.0751);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,147.2166);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,165.3829);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,215.4075);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,197.7585);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,92.1193);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,72.77582);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,34.69459);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,22.72782);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,22.9578);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,12.13298);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,5.97224);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,1.527756);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,0.7924526);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.3563303);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.13315);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,0.07830265);
   VbbHcc_both_H_dR_stack_4->SetBinError(2,0.066575);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,4.052466);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,6.782516);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,4.909832);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,7.52946);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,7.474843);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,7.364212);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,10.33017);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,9.265106);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,9.854997);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,11.606);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,8.564004);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,9.10111);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,13.31253);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,10.34925);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,6.511244);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,7.725824);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,4.343392);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,3.264366);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,5.523551);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,2.956989);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.034745);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.5311401);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.3405168);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.1598728);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.09415127);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.07830265);
   VbbHcc_both_H_dR_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,9.262755);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,10.48962);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,13.95553);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,5.681461);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,9.280608);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,5.855974);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,9.703648);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,6.872857);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,12.29347);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,11.10646);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,15.25061);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,20.841);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,20.71849);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,18.10786);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,11.04631);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,6.667694);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,4.117869);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,4.014989);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.501091);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,0.8852834);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.5019734);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,1.637023);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.146767);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,0.0002136538);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.386932);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.01505);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,6.214927);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,1.197668);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,1.99733);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,0.7848885);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.228106);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,0.8084477);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,2.07659);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,1.778306);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.347834);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,6.504753);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.730933);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.599964);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.764443);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.238526);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.6854255);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.192662);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.513745);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.2820714);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.2139146);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,1.051695);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.146767);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,0.0002136538);
   VbbHcc_both_H_dR_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,0.2687386);
   VbbHcc_both_H_dR_stack_6->SetBinContent(12,0.2687386);
   VbbHcc_both_H_dR_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_both_H_dR_stack_6->SetBinContent(17,0.4031079);
   VbbHcc_both_H_dR_stack_6->SetBinError(5,0.1343693);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.1900269);
   VbbHcc_both_H_dR_stack_6->SetBinError(12,0.1900269);
   VbbHcc_both_H_dR_stack_6->SetBinError(13,0.1343693);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,0.1900269);
   VbbHcc_both_H_dR_stack_6->SetBinError(17,0.2327345);
   VbbHcc_both_H_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.7634105);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.3271759);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.5452932);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,0.4362346);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.3271759);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.6543518);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.3271759);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.1090586);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.288542);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.1888951);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.1542322);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.1542322);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.1888951);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.1542322);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.2438625);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.2181173);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.1888951);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.267138);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.1888951);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.1542322);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.1090586);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.1090586);
   VbbHcc_both_H_dR_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,2.432072);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,4.377729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,5.350557);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,3.161693);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.70245);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.9728286);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.9728286);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.70245);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.70245);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,3.161693);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,1.459243);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.161693);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,5.593764);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,3.161693);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.70245);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.7296215);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,0.7690885);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.031841);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.140743);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.8768959);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6434656);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.4864143);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.4864143);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.6434656);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.6434656);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.8768959);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.5957334);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.8768959);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.166381);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,0.8768959);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.6434656);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.4864143);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4212471);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_H_dR_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,1.981237);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,3.713789);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,4.191924);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,3.635474);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,2.633864);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.945514);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.382194);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.264035);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.397308);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.836972);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,2.460746);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,3.18207);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,3.978961);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,3.926751);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.353342);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.475387);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.1854834);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.09342865);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.06182779);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.02335716);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01373951);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.006869754);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002747902);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.05217396);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.07143223);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.07589135);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.07067505);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.06015645);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.05170146);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.04357829);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.04167399);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.04381589);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.05023852);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.05814588);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.06612116);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.07393847);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.07345177);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.04312105);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.02555696);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01596387);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01132989);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.009216742);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.005664944);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.004344814);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.003072247);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.00194306);
   VbbHcc_both_H_dR_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0003580462);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.7028447);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.502362);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,1.807059);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,1.76481);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.397812);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.029741);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.7758861);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.697116);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.7773183);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,0.9627863);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.140735);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.337303);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.498065);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.451161);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.5943567);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.263522);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1256742);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.06767073);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.04010118);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.0186184);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.008593109);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.006444832);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002506323);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.0007160924);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0003580462);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0003580462);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01586351);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02319299);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.0254364);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02513729);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.02237144);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.01920143);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.01666743);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01579873);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.0166828);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.01856669);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.0202098);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.02188187);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.02315981);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.02279436);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.01458791);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.00971355);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.006707994);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.004922322);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.003789205);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002581908);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.001754061);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001519061);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.0009473012);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0005063538);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0003580462);
   VbbHcc_both_H_dR_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.008205022);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.01641004);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01094003);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.01094003);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.01094003);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.008205022);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.004737172);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.006699373);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.005470015);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.003867885);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.005470015);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.003867885);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.004737172);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.005470015);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.004737172);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_H_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.001071798);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003215393);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005358988);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.002500861);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.006788051);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003215393);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.002143595);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.002143595);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.00428719);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.002858127);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.004644456);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.002143595);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005358988);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001071798);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006188026);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.001071798);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001383685);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.0009452366);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001557286);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001071798);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.000875119);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.000875119);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001237605);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0010105);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.00128814);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.000875119);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001383685);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0006188026);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_both_H_dR_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__425 = new TH1D("VbbHcc_both_H_dR__425","",30,0,6);
   VbbHcc_both_H_dR__425->SetBinContent(2,2);
   VbbHcc_both_H_dR__425->SetBinContent(3,4740);
   VbbHcc_both_H_dR__425->SetBinContent(4,5229);
   VbbHcc_both_H_dR__425->SetBinContent(5,4263);
   VbbHcc_both_H_dR__425->SetBinContent(6,4223);
   VbbHcc_both_H_dR__425->SetBinContent(7,4396);
   VbbHcc_both_H_dR__425->SetBinContent(8,4557);
   VbbHcc_both_H_dR__425->SetBinContent(9,4939);
   VbbHcc_both_H_dR__425->SetBinContent(10,5195);
   VbbHcc_both_H_dR__425->SetBinContent(11,5833);
   VbbHcc_both_H_dR__425->SetBinContent(12,6545);
   VbbHcc_both_H_dR__425->SetBinContent(13,7308);
   VbbHcc_both_H_dR__425->SetBinContent(14,8376);
   VbbHcc_both_H_dR__425->SetBinContent(15,9224);
   VbbHcc_both_H_dR__425->SetBinContent(16,9530);
   VbbHcc_both_H_dR__425->SetBinContent(17,5902);
   VbbHcc_both_H_dR__425->SetBinContent(18,3929);
   VbbHcc_both_H_dR__425->SetBinContent(19,2724);
   VbbHcc_both_H_dR__425->SetBinContent(20,1918);
   VbbHcc_both_H_dR__425->SetBinContent(21,1307);
   VbbHcc_both_H_dR__425->SetBinContent(22,812);
   VbbHcc_both_H_dR__425->SetBinContent(23,513);
   VbbHcc_both_H_dR__425->SetBinContent(24,301);
   VbbHcc_both_H_dR__425->SetBinContent(25,154);
   VbbHcc_both_H_dR__425->SetBinContent(26,64);
   VbbHcc_both_H_dR__425->SetBinContent(27,25);
   VbbHcc_both_H_dR__425->SetBinContent(28,9);
   VbbHcc_both_H_dR__425->SetEntries(102047);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__425->SetLineColor(ci);
   VbbHcc_both_H_dR__425->SetLineWidth(2);
   VbbHcc_both_H_dR__425->SetMarkerStyle(20);
   VbbHcc_both_H_dR__425->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__425->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__425->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__425->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__425->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__425->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__425->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__425->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__425->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__425->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__425->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__425->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__425->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__425->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__425->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__425->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1425[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_both_H_dR_fy1425[30] = {
   0,
   6.434761,
   13691.34,
   11073.1,
   8852.679,
   7606.877,
   8534.257,
   8691.427,
   7844.46,
   11347.62,
   7425.44,
   10434.82,
   13944.27,
   15682.75,
   20448.21,
   19443.87,
   9839.633,
   5831.745,
   3884.496,
   4200.358,
   3133.326,
   1433.376,
   381.2488,
   188.8445,
   353.8391,
   34.80704,
   2.59502,
   0.9405685,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1425[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_both_H_dR_fey1425[30] = {
   0,
   5.882357,
   2412.298,
   1873.201,
   1732.257,
   1061.059,
   1749.406,
   1750.525,
   1062.314,
   1892.815,
   883.2769,
   1227.019,
   2353.171,
   2387.776,
   2238.605,
   2536.769,
   1774.232,
   873.3738,
   729.071,
   862.2392,
   1496.678,
   474.8969,
   71.3068,
   52.51237,
   270.1493,
   22.76995,
   0.3938149,
   0.3335548,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1425,Graph_from_VbbHcc_both_H_dR_fy1425,Graph_from_VbbHcc_both_H_dR_fex1425,Graph_from_VbbHcc_both_H_dR_fey1425);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1425 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1425","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMaximum(24955.49);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1425);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__426 = new TH1D("data_mc_ratio__426","",30,0,6);
   data_mc_ratio__426->SetBinContent(2,0.3108118);
   data_mc_ratio__426->SetBinContent(3,0.3462041);
   data_mc_ratio__426->SetBinContent(4,0.4722255);
   data_mc_ratio__426->SetBinContent(5,0.4815492);
   data_mc_ratio__426->SetBinContent(6,0.5551556);
   data_mc_ratio__426->SetBinContent(7,0.5151005);
   data_mc_ratio__426->SetBinContent(8,0.5243097);
   data_mc_ratio__426->SetBinContent(9,0.6296163);
   data_mc_ratio__426->SetBinContent(10,0.4578052);
   data_mc_ratio__426->SetBinContent(11,0.7855426);
   data_mc_ratio__426->SetBinContent(12,0.6272269);
   data_mc_ratio__426->SetBinContent(13,0.5240862);
   data_mc_ratio__426->SetBinContent(14,0.5340899);
   data_mc_ratio__426->SetBinContent(15,0.4510909);
   data_mc_ratio__426->SetBinContent(16,0.4901286);
   data_mc_ratio__426->SetBinContent(17,0.5998191);
   data_mc_ratio__426->SetBinContent(18,0.6737263);
   data_mc_ratio__426->SetBinContent(19,0.7012492);
   data_mc_ratio__426->SetBinContent(20,0.4566277);
   data_mc_ratio__426->SetBinContent(21,0.4171286);
   data_mc_ratio__426->SetBinContent(22,0.5664948);
   data_mc_ratio__426->SetBinContent(23,1.345578);
   data_mc_ratio__426->SetBinContent(24,1.593904);
   data_mc_ratio__426->SetBinContent(25,0.435226);
   data_mc_ratio__426->SetBinContent(26,1.838709);
   data_mc_ratio__426->SetBinContent(27,9.633838);
   data_mc_ratio__426->SetBinContent(28,9.568681);
   data_mc_ratio__426->SetBinError(2,0.2197772);
   data_mc_ratio__426->SetBinError(3,0.005028554);
   data_mc_ratio__426->SetBinError(4,0.006530404);
   data_mc_ratio__426->SetBinError(5,0.007375356);
   data_mc_ratio__426->SetBinError(6,0.008542877);
   data_mc_ratio__426->SetBinError(7,0.007768964);
   data_mc_ratio__426->SetBinError(8,0.007766912);
   data_mc_ratio__426->SetBinError(9,0.008958936);
   data_mc_ratio__426->SetBinError(10,0.00635167);
   data_mc_ratio__426->SetBinError(11,0.01028546);
   data_mc_ratio__426->SetBinError(12,0.007753001);
   data_mc_ratio__426->SetBinError(13,0.006130607);
   data_mc_ratio__426->SetBinError(14,0.005835741);
   data_mc_ratio__426->SetBinError(15,0.004696825);
   data_mc_ratio__426->SetBinError(16,0.005020693);
   data_mc_ratio__426->SetBinError(17,0.007807656);
   data_mc_ratio__426->SetBinError(18,0.01074837);
   data_mc_ratio__426->SetBinError(19,0.01343596);
   data_mc_ratio__426->SetBinError(20,0.01042649);
   data_mc_ratio__426->SetBinError(21,0.01153804);
   data_mc_ratio__426->SetBinError(22,0.01988007);
   data_mc_ratio__426->SetBinError(23,0.05940871);
   data_mc_ratio__426->SetBinError(24,0.09187112);
   data_mc_ratio__426->SetBinError(25,0.03507151);
   data_mc_ratio__426->SetBinError(26,0.2298386);
   data_mc_ratio__426->SetBinError(27,1.926768);
   data_mc_ratio__426->SetBinError(28,3.18956);
   data_mc_ratio__426->SetMinimum(0.4);
   data_mc_ratio__426->SetMaximum(1.6);
   data_mc_ratio__426->SetEntries(42.41823);
   data_mc_ratio__426->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__426->SetLineColor(ci);
   data_mc_ratio__426->SetLineWidth(2);
   data_mc_ratio__426->SetMarkerStyle(20);
   data_mc_ratio__426->SetMarkerSize(1.2);
   data_mc_ratio__426->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__426->GetXaxis()->SetRange(1,31);
   data_mc_ratio__426->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__426->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__426->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__426->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__426->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__426->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1426[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1426[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1426[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1426[30] = {
   0,
   0.9141531,
   0.1761914,
   0.1691668,
   0.195676,
   0.1394869,
   0.2049863,
   0.2014082,
   0.1354222,
   0.1668028,
   0.1189528,
   0.1175889,
   0.1687554,
   0.1522549,
   0.1094768,
   0.1304662,
   0.1803149,
   0.149762,
   0.1876874,
   0.2052775,
   0.4776641,
   0.3313136,
   0.1870348,
   0.2780721,
   0.7634806,
   0.6541767,
   0.1517579,
   0.3546311,
   0,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1426,Graph_from_mc_statistical_error_fy1426,Graph_from_mc_statistical_error_fex1426,Graph_from_mc_statistical_error_fey1426);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1426 = new TH1F("Graph_Graph_from_mc_statistical_error1426","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1426->SetMinimum(0.07726218);
   Graph_Graph_from_mc_statistical_error1426->SetMaximum(2.096984);
   Graph_Graph_from_mc_statistical_error1426->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1426->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1426);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
