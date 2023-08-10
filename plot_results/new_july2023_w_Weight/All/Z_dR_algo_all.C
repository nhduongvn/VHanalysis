void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Thu Aug 10 12:24:03 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(0,0,1,1);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1452.932,6.314516,1451779);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1244243);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0.3);
   st_stack_116->SetMaximum(1306456);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetLabelSize(0.035);
   st_stack_116->GetXaxis()->SetTitleSize(0.035);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetLabelSize(0.035);
   st_stack_116->GetZaxis()->SetTitleSize(0.035);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,129.5497);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,384736.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,481375.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,378024);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,375262.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,385531.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,372464.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,364968.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,397028.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,395110);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,367145.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,335819.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,333806.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,294186.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,315898.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,256765.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,260221.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,204858.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,160530.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,154878);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,138708.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,134382.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,110230.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,109946.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,133925.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,99971.36);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(28,80012.46);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(29,76366.41);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(30,49531.99);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(31,44921.02);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,35.36453);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,9533.725);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,21164.79);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,9842.658);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,10367.47);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,10071.49);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,10180.67);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,9898.598);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,24474.56);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,11935.05);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,24504.38);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,9855.557);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,10583.04);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,9766.891);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,23625.44);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,20280.42);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,28505.08);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,9071.472);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,6657.02);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,6281.347);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,6180.757);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,6634.409);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,5121.129);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,5838.639);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,26071.38);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,6144.701);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(28,4724.904);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(29,5201.358);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(30,3419.023);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(31,2877.586);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,1.472524);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,1764.622);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,2930.463);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,3248.412);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,3337.417);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,3275.808);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,3100.735);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,2876.41);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,2674.933);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,2437.615);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,2210.641);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,1995.725);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,1836.405);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,1676.444);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,1545.383);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,1353.358);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,1204.876);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,1092.59);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,997.7059);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,977.8599);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,921.7002);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,902.5861);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,868.1805);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,789.0281);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,747.5197);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,653.3078);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,571.559);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(29,466.8309);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(30,329.1976);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(31,251.1779);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.6290076);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,18.85307);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,23.74772);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,24.45211);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,24.83839);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,24.66591);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,23.90656);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,23.15718);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,22.48196);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,21.5154);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,20.49388);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,19.49411);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,18.81216);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,17.38057);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,16.70706);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,20.22678);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,14.91549);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,14.20221);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,13.45054);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,14.20594);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,13.17037);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,12.96291);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,13.27564);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,11.95108);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,11.62546);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,10.89469);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,10.20601);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(29,9.111595);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(30,7.760432);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(31,6.710819);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(2,23.31597);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(3,36861.43);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(4,70987.54);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(5,83333.37);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(6,84577.69);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(7,75718.4);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(8,63595.04);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(9,52252.14);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(10,43097.44);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(11,36367.08);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(12,31681.35);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(13,28384.91);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(14,25873.2);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(15,23962.22);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(16,22273.39);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(17,19973.1);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(18,18293.59);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(19,16901.21);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(20,15837.1);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(21,14949.83);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(22,14457.22);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(23,14206.38);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(24,14218.7);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(25,14262.98);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(26,14120.89);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(27,13345.4);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(28,11771.31);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(29,9285.984);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(30,5693.569);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(31,4057.253);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(2,1.370496);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(3,55.26938);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(4,76.17014);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(5,82.10623);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(6,82.64551);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(7,77.58927);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(8,70.72322);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(9,63.40279);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(10,57.78108);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(11,53.03759);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(12,49.60488);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(13,47.31314);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(14,44.74869);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(15,43.09661);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(16,41.49289);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(17,39.38454);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(18,37.67613);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(19,36.12741);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(20,34.96157);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(21,33.93734);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(22,33.44663);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(23,33.20705);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(24,33.59017);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(25,33.41641);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(26,33.78086);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(27,32.54593);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(28,31.01409);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(29,27.08849);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(30,21.22347);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(31,18.2699);
   VbbHcc_algo_Z_dR_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(2,2.304519);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(3,2177.215);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(4,3234.78);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(5,3013.153);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(6,2671.343);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(7,2328.348);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(8,2112.475);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(9,2040.659);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(10,1918.474);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(11,1830.495);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(12,1672.503);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(13,1550.662);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(14,1469.965);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(15,1340.672);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(16,1260.159);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(17,1104.067);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(18,979.6914);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(19,929.3186);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(20,878.0058);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(21,795.4423);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(22,746.0265);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(23,672.0693);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(24,604.962);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(25,565.7757);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(26,546.8158);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(27,497.652);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(28,463.0046);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(29,379.1106);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(30,296.3755);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(31,218.9874);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(2,0.623093);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(3,28.09796);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(4,43.46549);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(5,45.45303);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(6,49.29527);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(7,46.87309);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(8,40.46072);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(9,39.55708);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(10,38.62683);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(11,37.46734);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(12,33.91504);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(13,34.63748);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(14,33.70715);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(15,31.92966);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(16,32.33512);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(17,31.42204);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(18,25.75885);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(19,27.46641);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(20,27.98664);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(21,23.90086);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(22,26.65183);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(23,23.32507);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(24,21.10487);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(25,21.00115);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(26,23.9733);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(27,19.98497);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(28,17.75538);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(29,15.27549);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(30,15.2452);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(31,11.7566);
   VbbHcc_algo_Z_dR_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(2,0.3231906);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(3,977.1999);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(4,1216.673);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(5,1011.365);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(6,949.3646);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(7,828.1721);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(8,883.8607);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(9,846.7645);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(10,797.2494);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(11,734.7004);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(12,747.9437);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(13,589.6924);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(14,627.3232);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(15,570.3724);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(16,581.5678);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(17,447.8887);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(18,414.897);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(19,382.2135);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(20,323.5665);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(21,307.0506);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(22,257.6429);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(23,266.051);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(24,230.4785);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(25,230.5018);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(26,179.1685);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(27,226.9744);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(28,168.0143);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(29,192.9646);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(30,112.4106);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(31,82.19241);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(2,0.2088367);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(3,29.4363);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(4,43.09665);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(5,41.81996);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(6,44.47929);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(7,39.90445);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(8,46.3337);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(9,42.82266);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(10,41.98619);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(11,37.31678);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(12,43.16797);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(13,34.37545);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(14,43.81894);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(15,32.47405);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(16,35.29435);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(17,29.13952);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(18,29.68885);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(19,27.58827);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(20,23.24135);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(21,24.24607);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(22,18.06859);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(23,19.32473);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(24,20.48511);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(25,18.59735);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(26,12.35313);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(27,22.19582);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(28,14.86424);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(29,20.13649);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(30,13.40768);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(31,9.909518);
   VbbHcc_algo_Z_dR_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(3,11.89857);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(4,14.64037);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(5,11.00826);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(6,10.96373);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(7,8.418637);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(8,7.961854);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(9,8.400538);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(10,6.559737);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(11,4.473686);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(12,5.983632);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(13,8.832107);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(14,7.126298);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(15,4.547338);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(16,4.715714);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(17,3.256859);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(18,2.913758);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(19,3.348998);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(20,3.357733);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(21,3.353514);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(22,3.382404);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(23,2.700356);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(24,2.219244);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(25,1.644464);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(26,2.299343);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(27,1.162391);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(28,2.007857);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(29,2.163104);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(30,1.725557);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(31,0.6946086);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(3,1.837111);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(4,2.066692);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(5,1.739105);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(6,2.780954);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(7,1.565106);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(8,1.455529);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(9,1.999126);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(10,1.505543);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(11,1.204619);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(12,1.164728);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(13,1.577727);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(14,1.475791);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(15,1.027295);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(16,1.009728);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(17,0.8317697);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(18,0.8400885);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(19,0.8400628);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(20,1.074589);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(21,1.130448);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(22,0.8716827);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(23,0.9958704);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(24,0.8721792);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(25,0.5806927);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(26,0.9340688);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(27,0.4113274);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(28,0.8091435);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(29,0.8389588);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(30,0.7829579);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(31,0.4375123);
   VbbHcc_algo_Z_dR_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(2,0.1309176);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(3,16.87029);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(4,22.53543);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(5,18.08891);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(6,16.18608);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(7,11.69293);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(8,8.237857);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(9,9.641138);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(10,7.860239);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(11,6.886172);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(12,6.49172);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(13,8.530202);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(14,8.779967);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(15,5.856697);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(16,5.817848);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(17,4.989434);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(18,5.033961);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(19,3.668819);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(20,5.822701);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(21,5.21935);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(22,2.838446);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(23,3.320648);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(24,2.766176);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(25,2.757399);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(26,3.086312);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(27,2.565942);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(28,4.079779);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(29,2.799057);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(30,2.015694);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(31,0.9719543);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(2,0.1309176);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(3,1.942863);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(4,2.23768);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(5,1.923643);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(6,2.873355);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(7,1.649603);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(8,1.423103);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(9,2.011843);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(10,1.532025);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(11,1.298137);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(12,1.144463);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(13,1.520113);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(14,1.50483);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(15,1.068477);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(16,1.032546);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(17,0.9121558);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(18,0.9533139);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(19,0.8213566);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(20,1.187557);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(21,1.209506);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(22,0.7964553);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(23,1.014196);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(24,0.8956156);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(25,0.6625882);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(26,0.966555);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(27,0.548053);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(28,0.9353146);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(29,0.8665729);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(30,0.78817);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(31,0.4606946);
   VbbHcc_algo_Z_dR_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(3,44.55577);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(4,63.4829);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(5,62.44345);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(6,34.49291);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(7,21.8423);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(8,21.26207);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(9,14.76426);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(10,14.58758);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(11,18.34835);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(12,15.64252);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(13,19.35006);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(14,17.96854);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(15,13.75814);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(16,13.0596);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(17,9.911138);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(18,10.12291);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(19,8.464764);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(20,10.59471);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(21,7.840151);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(22,6.23717);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(23,2.617393);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(24,3.572149);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(25,2.978099);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(26,4.081701);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(27,4.630854);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(28,5.105333);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(29,8.778343);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(30,2.767548);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(31,2.315514);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(3,3.626168);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(4,4.357857);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(5,4.30781);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(6,3.188774);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(7,2.46436);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(8,2.542797);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(9,2.089365);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(10,2.010795);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(11,2.332704);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(12,2.092434);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(13,2.402853);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(14,2.304289);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(15,2.001975);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(16,1.927533);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(17,1.670994);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(18,1.782545);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(19,1.574811);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(20,1.734836);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(21,1.489778);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(22,1.35615);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(23,0.83207);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(24,0.9768852);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(25,0.9208128);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(26,1.110035);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(27,1.151786);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(28,1.230462);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(29,1.621785);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(30,0.8999118);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(31,0.80133);
   VbbHcc_algo_Z_dR_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(2,0.0158565);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(3,28.14969);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(4,47.67945);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(5,42.95764);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(6,31.00654);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(7,19.62517);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(8,12.76222);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(9,10.06563);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(10,9.102241);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(11,8.891957);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(12,9.007161);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(13,8.601341);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(14,8.336644);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(15,7.733137);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(16,6.881805);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(17,6.398501);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(18,5.854846);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(19,5.554395);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(20,4.818116);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(21,4.458546);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(22,3.7405);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(23,3.200688);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(24,2.973167);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(25,2.912084);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(26,3.513432);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(27,4.035836);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(28,4.515182);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(29,4.260385);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(30,2.706257);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(31,1.533762);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(2,0.005773037);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(3,0.2573333);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(4,0.3510058);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(5,0.3165753);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(6,0.2621993);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(7,0.2173183);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(8,0.1633562);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(9,0.1447321);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(10,0.1398066);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(11,0.1373079);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(12,0.1383763);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(13,0.1367838);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(14,0.1383983);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(15,0.1277902);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(16,0.1259134);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(17,0.118206);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(18,0.1134187);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(19,0.1114342);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(20,0.1083352);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(21,0.1042586);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(22,0.0901043);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(23,0.08024105);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(24,0.07763828);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(25,0.07641314);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(26,0.08722679);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(27,0.0925373);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(28,0.100908);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(29,0.1009547);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(30,0.07714959);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(31,0.05780979);
   VbbHcc_algo_Z_dR_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(2,0.004535798);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(3,7.072042);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(4,15.73455);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(5,18.90638);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(6,17.6187);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(7,12.48435);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(8,8.783539);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(9,6.867017);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(10,6.156032);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(11,6.074823);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(12,5.910534);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(13,5.820866);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(14,5.278168);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(15,4.849387);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(16,4.39823);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(17,3.871736);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(18,3.573479);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(19,3.412374);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(20,3.162573);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(21,2.974357);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(22,2.641135);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(23,2.344161);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(24,2.102259);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(25,2.134434);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(26,2.247002);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(27,2.4859);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(28,2.427385);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(29,1.818875);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(30,1.153511);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(31,0.7307434);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(2,0.001560514);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(3,0.06048988);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(4,0.0902618);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(5,0.09897319);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(6,0.09560028);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(7,0.0804377);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(8,0.06739887);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(9,0.05958836);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(10,0.0563516);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(11,0.05593536);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(12,0.05526856);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(13,0.05481);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(14,0.05208339);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(15,0.04995542);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(16,0.04757609);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(17,0.04458905);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(18,0.04283404);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(19,0.04199138);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(20,0.04038471);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(21,0.03914683);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(22,0.03686148);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(23,0.03466982);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(24,0.03291136);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(25,0.0332311);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(26,0.03412965);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(27,0.03593143);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(28,0.03550743);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(29,0.03070389);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(30,0.02443304);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(31,0.01949538);
   VbbHcc_algo_Z_dR_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(3,0.2421356);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(4,0.3815631);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(5,0.2733634);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(6,0.2360862);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(7,0.1489223);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(8,0.1008466);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(9,0.09081684);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(10,0.09153236);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(11,0.07960068);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(12,0.07397572);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(13,0.1112214);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(14,0.08903932);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(15,0.08100591);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(16,0.06439788);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(17,0.05704826);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(18,0.0573277);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(19,0.05638392);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(20,0.0534373);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(21,0.04007065);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(22,0.05908555);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(23,0.04349495);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(24,0.02614232);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(25,0.02350675);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(26,0.03264811);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(27,0.02418605);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(28,0.03720522);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(29,0.02882486);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(30,0.01328711);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(31,0.003403051);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(3,0.026263);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(4,0.03320484);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(5,0.02781541);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(6,0.02463148);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(7,0.02001178);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(8,0.01610327);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(9,0.01585891);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(10,0.01583744);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(11,0.01472895);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(12,0.01351944);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(13,0.01753493);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(14,0.01535804);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(15,0.01505862);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(16,0.01311742);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(17,0.01248876);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(18,0.01343972);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(19,0.01214129);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(20,0.01201461);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(21,0.01019574);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(22,0.01282549);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(23,0.01084954);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(24,0.008245238);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(25,0.007211588);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(26,0.00945477);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(27,0.007813023);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(28,0.009842016);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(29,0.009073057);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(30,0.00564965);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(31,0.00245134);
   VbbHcc_algo_Z_dR_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(3,0.06556734);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(4,0.1302967);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(5,0.1380149);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(6,0.1110269);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(7,0.0781389);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(8,0.05057585);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(9,0.04516829);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(10,0.04296108);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(11,0.04662229);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(12,0.05084543);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(13,0.04029205);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(14,0.04658943);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(15,0.03939281);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(16,0.03605662);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(17,0.02954762);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(18,0.03276889);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(19,0.0231379);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(20,0.02640326);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(21,0.02152671);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(22,0.02297513);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(23,0.01854065);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(24,0.01151637);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(25,0.01416409);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(26,0.01515157);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(27,0.01711718);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(28,0.01670316);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(29,0.01159862);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(30,0.006248);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(31,0.005202543);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(3,0.005858854);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(4,0.006622305);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(5,0.006903818);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(6,0.006075467);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(7,0.005063398);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(8,0.004083574);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(9,0.003824778);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(10,0.003685295);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(11,0.003865594);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(12,0.004144898);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(13,0.00363942);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(14,0.005280538);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(15,0.003560888);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(16,0.003447927);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(17,0.00318432);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(18,0.003297415);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(19,0.002782718);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(20,0.002966338);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(21,0.002620494);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(22,0.002801251);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(23,0.002542942);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(24,0.001954499);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(25,0.00218636);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(26,0.00228808);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(27,0.002372585);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(28,0.002285631);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(29,0.001963368);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(30,0.001408762);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(31,0.001329541);
   VbbHcc_algo_Z_dR_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_all__318 = new TH1D("VbbHcc_algo_Z_dR_all__318","",30,0,6);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(2,118);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(3,176026);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(4,230331);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(5,199076);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(6,189841);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(7,184016);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(8,178931);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(9,175072);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(10,169093);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(11,162901);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(12,154744);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(13,147192);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(14,139008);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(15,131317);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(16,124323);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(17,105409);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(18,93393);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(19,84922);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(20,77373);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(21,70256);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(22,64586);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(23,59679);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(24,55554);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(25,50623);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(26,46856);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(27,42180);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(28,38690);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(29,34368);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(30,24245);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(31,21519);
   VbbHcc_algo_Z_dR_all__318->SetEntries(3231671);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all__318->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all__318->SetLineWidth(2);
   VbbHcc_algo_Z_dR_all__318->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_all__318->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__318->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fx1231[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fy1231[30] = {
   0,
   157.1172,
   426625.5,
   559909.6,
   468784.1,
   466908.8,
   467756.4,
   442216,
   423034.2,
   445560.8,
   436524.7,
   403501.1,
   368391.9,
   363661,
   321773.2,
   341593.8,
   279672.7,
   281142.6,
   224188.5,
   178594.3,
   171932.1,
   155110.1,
   150443.8,
   126166.4,
   125806.8,
   149535.3,
   114709.6,
   93004.55,
   86711.16,
   55973.93};
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fex1231[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fey1231[30] = {
   0,
   35.403,
   9533.991,
   21165.03,
   9843.226,
   10368.04,
   10072,
   10181.13,
   9899,
   24474.7,
   11935.3,
   24504.5,
   9855.811,
   10583.3,
   9767.108,
   23625.53,
   20280.52,
   28505.13,
   9071.639,
   6657.225,
   6281.547,
   6180.945,
   6634.575,
   5121.341,
   5838.814,
   26071.42,
   6144.869,
   4725.074,
   5201.499,
   3419.158};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_all_fx1231,Graph_from_VbbHcc_algo_Z_dR_all_fy1231,Graph_from_VbbHcc_algo_Z_dR_all_fex1231,Graph_from_VbbHcc_algo_Z_dR_all_fey1231);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_all1231 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_all1231","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMaximum(639182.1);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_all1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__319 = new TH1D("data_mc_ratio__319","",30,0,6);
   data_mc_ratio__319->SetBinContent(2,0.7510317);
   data_mc_ratio__319->SetBinContent(3,0.4126007);
   data_mc_ratio__319->SetBinContent(4,0.4113718);
   data_mc_ratio__319->SetBinContent(5,0.4246645);
   data_mc_ratio__319->SetBinContent(6,0.4065911);
   data_mc_ratio__319->SetBinContent(7,0.3934014);
   data_mc_ratio__319->SetBinContent(8,0.4046235);
   data_mc_ratio__319->SetBinContent(9,0.4138483);
   data_mc_ratio__319->SetBinContent(10,0.379506);
   data_mc_ratio__319->SetBinContent(11,0.3731771);
   data_mc_ratio__319->SetBinContent(12,0.3835033);
   data_mc_ratio__319->SetBinContent(13,0.3995528);
   data_mc_ratio__319->SetBinContent(14,0.3822461);
   data_mc_ratio__319->SetBinContent(15,0.4081043);
   data_mc_ratio__319->SetBinContent(16,0.3639498);
   data_mc_ratio__319->SetBinContent(17,0.3769013);
   data_mc_ratio__319->SetBinContent(18,0.3321909);
   data_mc_ratio__319->SetBinContent(19,0.3787974);
   data_mc_ratio__319->SetBinContent(20,0.4332333);
   data_mc_ratio__319->SetBinContent(21,0.4086264);
   data_mc_ratio__319->SetBinContent(22,0.4163882);
   data_mc_ratio__319->SetBinContent(23,0.3966863);
   data_mc_ratio__319->SetBinContent(24,0.4403234);
   data_mc_ratio__319->SetBinContent(25,0.4023868);
   data_mc_ratio__319->SetBinContent(26,0.313344);
   data_mc_ratio__319->SetBinContent(27,0.3677111);
   data_mc_ratio__319->SetBinContent(28,0.4160012);
   data_mc_ratio__319->SetBinContent(29,0.3963504);
   data_mc_ratio__319->SetBinContent(30,0.4331481);
   data_mc_ratio__319->SetBinContent(31,0.4344035);
   data_mc_ratio__319->SetBinError(2,0.06913807);
   data_mc_ratio__319->SetBinError(3,0.0009834257);
   data_mc_ratio__319->SetBinError(4,0.0008571529);
   data_mc_ratio__319->SetBinError(5,0.0009517799);
   data_mc_ratio__319->SetBinError(6,0.0009331746);
   data_mc_ratio__319->SetBinError(7,0.0009170818);
   data_mc_ratio__319->SetBinError(8,0.0009565515);
   data_mc_ratio__319->SetBinError(9,0.0009890832);
   data_mc_ratio__319->SetBinError(10,0.0009229026);
   data_mc_ratio__319->SetBinError(11,0.0009245983);
   data_mc_ratio__319->SetBinError(12,0.0009749048);
   data_mc_ratio__319->SetBinError(13,0.001041435);
   data_mc_ratio__319->SetBinError(14,0.001025234);
   data_mc_ratio__319->SetBinError(15,0.001126187);
   data_mc_ratio__319->SetBinError(16,0.001032205);
   data_mc_ratio__319->SetBinError(17,0.001160884);
   data_mc_ratio__319->SetBinError(18,0.001087003);
   data_mc_ratio__319->SetBinError(19,0.001299861);
   data_mc_ratio__319->SetBinError(20,0.001557497);
   data_mc_ratio__319->SetBinError(21,0.001541646);
   data_mc_ratio__319->SetBinError(22,0.001638435);
   data_mc_ratio__319->SetBinError(23,0.001623815);
   data_mc_ratio__319->SetBinError(24,0.00186816);
   data_mc_ratio__319->SetBinError(25,0.001788421);
   data_mc_ratio__319->SetBinError(26,0.001447567);
   data_mc_ratio__319->SetBinError(27,0.001790414);
   data_mc_ratio__319->SetBinError(28,0.002114926);
   data_mc_ratio__319->SetBinError(29,0.002137973);
   data_mc_ratio__319->SetBinError(30,0.002781796);
   data_mc_ratio__319->SetBinError(31,0.0254085);
   data_mc_ratio__319->SetMinimum(0.4);
   data_mc_ratio__319->SetMaximum(1.6);
   data_mc_ratio__319->SetEntries(3087.326);
   data_mc_ratio__319->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__319->SetLineColor(ci);
   data_mc_ratio__319->SetLineWidth(2);
   data_mc_ratio__319->SetMarkerStyle(20);
   data_mc_ratio__319->SetMarkerSize(1.2);
   data_mc_ratio__319->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__319->GetXaxis()->SetRange(1,30);
   data_mc_ratio__319->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__319->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__319->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__319->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__319->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__319->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__319->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__319->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__319->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__319->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__319->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__319->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__319->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__319->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__319->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__319->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__319->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1232[30] = {
   0,
   0.2253286,
   0.02234745,
   0.0378008,
   0.02099735,
   0.0222057,
   0.02153258,
   0.02302298,
   0.0234,
   0.05493011,
   0.02734164,
   0.0607297,
   0.0267536,
   0.0291021,
   0.03035401,
   0.06916266,
   0.07251518,
   0.1013903,
   0.04046434,
   0.03727569,
   0.03653505,
   0.03984877,
   0.04410001,
   0.04059197,
   0.04641095,
   0.1743496,
   0.05356891,
   0.05080476,
   0.0599865,
   0.06108484};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0.7296056);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(1.270394);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
