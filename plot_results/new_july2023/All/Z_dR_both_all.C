void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Mon Jul 24 10:12:09 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(0,0,1,1);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1626.585,6.314516,1625258);
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
   st->SetMaximum(1392924);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0.3);
   st_stack_212->SetMaximum(1462570);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetLabelSize(0.035);
   st_stack_212->GetXaxis()->SetTitleSize(0.035);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetLabelSize(0.05);
   st_stack_212->GetYaxis()->SetTitleSize(0.057);
   st_stack_212->GetYaxis()->SetTitleOffset(1.2);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetLabelSize(0.035);
   st_stack_212->GetZaxis()->SetTitleSize(0.035);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(2,181.1887);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,566010.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,585836.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,442630.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,349879.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,282545.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,247707.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,248335.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,237993.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,216574.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,208972.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,228442.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,269732.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,282479.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,287706);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,259447.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,259382.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,209649.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,191908.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,151665.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,155613.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,109117.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,95377.18);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,73858.68);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,71568.54);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,68402.76);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,64084.75);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,69268.06);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(30,42998.14);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(31,29691.53);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(2,45.41941);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,8572.532);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,10913.48);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,24521.36);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,9037.758);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,7593.225);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,6574.819);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,8178.889);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,8123.37);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,7470.244);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,6926.146);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,7638);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,24721.61);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,16060.25);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,16795.43);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,13166.22);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,22525.39);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,6849.364);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,7166.431);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,6254.283);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,18723.73);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,4903.225);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,5595.34);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,3818.145);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,4125.874);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,3837.761);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,3527.929);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,4595.139);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(30,3060.312);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(31,2944.99);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.5395626);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,1068.467);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,1904.34);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,2175.086);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,2460.021);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,2717.427);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,2921.109);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,3157.784);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,3291.271);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,3555.925);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,3784.579);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,4008.038);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,4120.584);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,4216.475);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,4188.408);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,3906.994);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,3551.295);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,3200.002);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,2813.145);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,2387.237);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,1992.553);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,1638.034);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,1327.363);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,1076.098);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,916.8287);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,686.2776);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,541.636);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,418.2179);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(30,262.1745);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(31,250.0816);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.3143844);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,15.20136);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,19.45294);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,20.86499);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,22.42137);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,23.24793);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,24.60532);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,28.37145);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,25.82509);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,29.45014);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,27.40129);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,28.24954);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,28.34251);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,28.99764);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,28.80786);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,27.76864);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,27.20728);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,25.06237);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,23.88922);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,21.75084);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,19.9735);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,18.14408);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,16.39305);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,14.77393);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,13.79733);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,12.01285);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,10.99044);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,9.508132);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(30,7.308324);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(31,7.252003);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(2,10.07588);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(3,16282.42);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(4,30558.66);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(5,35742.6);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(6,40909.06);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(7,44483.14);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(8,47390.39);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(9,50719.88);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(10,54670.99);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(11,60041.02);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(12,66106.1);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(13,72771.24);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(14,78897.92);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(15,83257.19);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(16,84855.39);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(17,81384.58);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(18,75306.76);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(19,66662.81);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(20,56830.83);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(21,46798.76);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(22,37490.85);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(23,29406.61);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(24,22803.95);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(25,17529.93);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(26,13527.98);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(27,10372.04);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(28,7774.375);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(29,5647.345);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(30,3438.71);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(31,2910.936);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(2,0.8323716);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(3,34.81653);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(4,47.5636);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(5,51.76385);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(6,55.57934);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(7,57.60833);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(8,59.41647);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(9,61.49307);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(10,63.97275);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(11,67.04134);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(12,70.34168);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(13,74.40616);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(14,77.0742);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(15,79.15472);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(16,80.00678);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(17,79.21083);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(18,75.99354);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(19,71.66737);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(20,65.84019);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(21,59.42527);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(22,53.15927);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(23,47.09154);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(24,41.08867);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(25,35.97972);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(26,31.83157);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(27,28.05826);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(28,23.84118);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(29,20.32354);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(30,16.11475);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(31,15.16852);
   VbbHcc_both_Z_dR_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(2,1.253485);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(3,3880.008);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(4,5637.327);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(5,5101.558);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(6,4305.915);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(7,3110.891);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(8,2252.589);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(9,1791.675);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(10,1584.61);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(11,1538.505);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(12,1527.655);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(13,1588.151);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(14,1768.242);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(15,1899.32);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(16,1912.276);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(17,1799.347);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(18,1682.138);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(19,1534.706);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(20,1303.367);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(21,1078.903);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(22,904.1463);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(23,804.5889);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(24,672.7043);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(25,655.7526);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(26,655.0382);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(27,659.2558);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(28,650.1617);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(29,557.8421);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(30,360.5068);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(31,218.8258);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(2,0.3345995);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(3,30.51612);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(4,37.57856);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(5,46.29423);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(6,55.12053);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(7,48.18674);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(8,41.60084);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(9,36.48321);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(10,33.3456);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(11,31.42665);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(12,29.9698);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(13,29.73892);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(14,31.62869);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(15,34.55985);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(16,32.40933);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(17,33.28771);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(18,31.50884);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(19,31.26215);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(20,29.36847);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(21,25.02048);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(22,21.60826);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(23,21.57635);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(24,18.49828);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(25,20.54712);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(26,18.87191);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(27,22.40426);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(28,19.22007);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(29,14.42642);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(30,10.65668);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(31,9.233429);
   VbbHcc_both_Z_dR_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(2,1.217457);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(3,2914.179);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(4,2739.19);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(5,1831.602);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(6,1468.32);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(7,1241.66);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(8,1088.411);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(9,976.0842);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(10,957.8426);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(11,970.3291);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(12,975.0912);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(13,1025.203);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(14,1125.645);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(15,1285.797);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(16,1265.133);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(17,1211.455);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(18,1026.137);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(19,1003.426);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(20,861.962);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(21,703.9186);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(22,576.0651);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(23,486.6379);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(24,415.2785);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(25,354.9187);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(26,316.3385);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(27,324.2406);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(28,275.1525);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(29,316.5442);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(30,205.7147);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(31,136.8304);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(2,0.3731283);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(3,58.77628);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(4,58.61652);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(5,45.49042);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(6,44.10547);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(7,43.03334);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(8,35.13246);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(9,35.80043);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(10,38.43914);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(11,37.09831);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(12,36.80986);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(13,40.51599);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(14,40.90005);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(15,45.6568);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(16,47.35979);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(17,47.56601);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(18,38.67401);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(19,45.20693);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(20,37.21151);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(21,29.28162);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(22,23.91403);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(23,32.13131);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(24,22.3595);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(25,21.65004);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(26,17.02666);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(27,22.94895);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(28,15.27118);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(29,32.01729);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(30,17.44459);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(31,11.1016);
   VbbHcc_both_Z_dR_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(3,11.512);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(4,10.38685);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(5,7.586565);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(6,5.098366);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(7,6.673821);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(8,5.959098);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(9,6.386208);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(10,5.922664);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(11,5.900075);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(12,7.676978);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(13,7.326518);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(14,9.001459);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(15,9.597537);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(16,8.296199);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(17,9.193566);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(18,7.101604);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(19,7.349091);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(20,6.923136);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(21,2.349062);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(22,3.987119);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(23,3.075396);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(24,2.496354);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(25,2.481258);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(26,2.328881);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(27,1.008092);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(28,0.843978);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(29,1.363783);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(30,1.607745);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(31,0.5466434);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(3,1.556955);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(4,1.432903);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(5,1.26164);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(6,0.9566523);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(7,1.147549);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(8,1.071823);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(9,1.163869);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(10,1.086018);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(11,0.968218);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(12,1.27497);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(13,1.17826);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(14,1.360121);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(15,1.367001);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(16,1.155255);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(17,1.359552);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(18,1.207177);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(19,1.12078);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(20,1.247514);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(21,0.5904278);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(22,0.9123101);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(23,0.791796);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(24,0.6567815);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(25,0.6723138);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(26,0.6809523);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(27,0.4318724);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(28,0.2759333);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(29,0.4640921);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(30,0.6969186);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(31,0.3061962);
   VbbHcc_both_Z_dR_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(3,22.87831);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(4,35.55072);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(5,28.44847);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(6,19.55004);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(7,16.90074);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(8,10.4416);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(9,9.341129);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(10,6.721911);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(11,5.164425);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(12,8.195215);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(13,6.226305);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(14,9.326495);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(15,10.05147);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(16,7.552165);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(17,10.82915);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(18,7.50029);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(19,7.137463);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(20,7.336773);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(21,3.985294);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(22,4.600018);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(23,3.40286);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(24,2.404699);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(25,2.925251);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(26,2.674799);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(27,3.259574);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(28,2.758077);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(29,2.486354);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(30,2.293632);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(31,1.460642);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(3,1.759186);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(4,1.914187);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(5,1.724228);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(6,1.352832);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(7,1.401415);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(8,1.184822);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(9,1.228518);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(10,1.085887);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(11,0.8892508);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(12,1.266053);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(13,1.107526);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(14,1.336498);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(15,1.339921);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(16,1.088774);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(17,1.376958);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(18,1.186713);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(19,1.074212);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(20,1.231966);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(21,0.6555963);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(22,0.9161955);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(23,0.7866309);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(24,0.6305644);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(25,0.6736492);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(26,0.6794011);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(27,0.5780012);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(28,0.4340428);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(29,0.5213077);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(30,0.7216623);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(31,0.3837777);
   VbbHcc_both_Z_dR_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(3,35.5402);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(4,53.79448);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(5,49.93439);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(6,31.20449);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(7,21.89425);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(8,15.63549);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(9,12.59459);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(10,9.805497);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(11,8.139263);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(12,9.060131);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(13,12.17818);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(14,10.91188);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(15,13.89683);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(16,16.64584);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(17,12.98213);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(18,14.23662);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(19,9.255245);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(20,6.753745);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(21,7.264213);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(22,4.722612);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(23,3.816343);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(24,3.309749);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(25,4.842748);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(26,3.662762);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(27,5.408155);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(28,6.355157);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(29,4.317841);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(30,1.238588);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(31,0.5499168);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(3,2.739262);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(4,3.439802);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(5,3.259725);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(6,2.573957);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(7,2.162599);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(8,1.813567);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(9,1.663364);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(10,1.441173);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(11,1.34205);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(12,1.402188);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(13,1.852557);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(14,1.513742);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(15,1.702201);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(16,1.861422);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(17,1.632046);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(18,1.75019);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(19,1.42307);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(20,1.209528);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(21,1.266712);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(22,0.9832488);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(23,0.9230046);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(24,0.8092271);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(25,1.047068);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(26,0.8741974);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(27,1.078149);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(28,1.153952);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(29,1.00244);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(30,0.4915209);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(31,0.3219484);
   VbbHcc_both_Z_dR_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(2,0.002368554);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(3,9.932091);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(4,21.9608);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(5,26.30123);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(6,26.29905);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(7,22.35079);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(8,15.33687);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(9,10.98742);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(10,8.680591);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(11,8.002034);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(12,8.039061);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(13,8.697708);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(14,9.884665);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(15,10.76035);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(16,11.40746);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(17,11.09068);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(18,9.348516);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(19,7.92039);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(20,6.130645);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(21,4.733532);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(22,3.907373);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(23,3.399742);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(24,3.333038);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(25,3.589108);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(26,3.851805);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(27,3.545564);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(28,3.316398);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(29,2.338179);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(30,1.345728);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(31,0.8450022);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(2,0.002368554);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(3,0.1467038);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(4,0.2138692);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(5,0.2420964);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(6,0.2405168);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(7,0.2216978);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(8,0.2036029);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(9,0.1497025);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(10,0.130655);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(11,0.1283323);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(12,0.1341841);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(13,0.1396164);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(14,0.1534926);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(15,0.1521076);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(16,0.1528035);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(17,0.161889);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(18,0.1399688);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(19,0.1352131);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(20,0.1126763);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(21,0.0992008);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(22,0.08862909);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(23,0.1331755);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(24,0.08773472);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(25,0.08542975);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(26,0.08946698);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(27,0.08572009);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(28,0.0835299);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(29,0.06971255);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(30,0.06552504);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(31,0.04198291);
   VbbHcc_both_Z_dR_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(2,0.004376029);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(3,8.268615);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(4,16.53153);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(5,20.02336);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(6,20.65712);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(7,18.1295);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(8,13.25514);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(9,9.170765);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(10,6.668416);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(11,5.945045);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(12,5.854075);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(13,5.91583);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(14,6.050808);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(15,6.486707);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(16,6.618861);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(17,6.182672);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(18,5.447086);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(19,4.828325);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(20,4.070389);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(21,3.443388);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(22,2.943189);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(23,2.611085);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(24,2.846414);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(25,2.862625);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(26,2.98409);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(27,2.88391);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(28,2.437131);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(29,1.877532);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(30,1.131955);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(31,0.6943851);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(2,0.001502756);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(3,0.06486559);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(4,0.09174355);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(5,0.1010964);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(6,0.1027793);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(7,0.09639577);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(8,0.08243968);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(9,0.06848722);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(10,0.05833867);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(11,0.05515913);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(12,0.05471746);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(13,0.05499024);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(14,0.05563774);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(15,0.0575798);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(16,0.05825361);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(17,0.05633273);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(18,0.05284143);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(19,0.04977096);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(20,0.04566548);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(21,0.04186929);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(22,0.03875023);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(23,0.03655325);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(24,0.03818513);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(25,0.038297);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(26,0.03908616);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(27,0.03839615);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(28,0.03531823);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(29,0.03100225);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(30,0.0239729);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(31,0.01882581);
   VbbHcc_both_Z_dR_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(3,0.7353743);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(4,1.109921);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(5,0.9796654);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(6,0.7100302);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(7,0.3628277);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(8,0.2352495);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(9,0.1315803);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(10,0.1859952);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(11,0.1130596);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(12,0.157337);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(13,0.1547904);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(14,0.1883062);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(15,0.1983993);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(16,0.1905388);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(17,0.1999265);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(18,0.1877234);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(19,0.1156835);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(20,0.1110268);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(21,0.07298955);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(22,0.08631995);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(23,0.05317355);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(24,0.06350837);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(25,0.0708077);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(26,0.05481383);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(27,0.1127603);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(28,0.1059013);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(29,0.09312869);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(30,0.04395326);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(31,0.03848677);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(3,0.04757899);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(4,0.05389916);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(5,0.05023544);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(6,0.04232157);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(7,0.03071561);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(8,0.0242993);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(9,0.01924708);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(10,0.02934825);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(11,0.0174703);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(12,0.01946544);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(13,0.0195776);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(14,0.02234598);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(15,0.02301949);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(16,0.02236971);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(17,0.0225696);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(18,0.02235316);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(19,0.01775985);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(20,0.0164239);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(21,0.01360223);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(22,0.01517401);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(23,0.01161822);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(24,0.01302959);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(25,0.01347832);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(26,0.01176403);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(27,0.02559729);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(28,0.01616092);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(29,0.01561725);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(30,0.01049589);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(31,0.01058562);
   VbbHcc_both_Z_dR_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(3,0.2687095);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(4,0.569146);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(5,0.5444433);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(6,0.3629778);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(7,0.1941619);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(8,0.1122893);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(9,0.06808694);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(10,0.06610913);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(11,0.05674069);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(12,0.070565);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(13,0.07831142);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(14,0.07808905);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(15,0.08321158);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(16,0.09184262);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(17,0.09275674);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(18,0.06958843);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(19,0.06426865);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(20,0.05391552);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(21,0.04729293);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(22,0.04015337);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(23,0.0302736);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(24,0.02730615);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(25,0.02933136);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(26,0.03510697);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(27,0.04592859);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(28,0.04999244);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(29,0.0460916);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(30,0.02403455);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(31,0.01400863);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(3,0.009371417);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(4,0.01402714);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(5,0.01336794);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(6,0.01080229);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(7,0.008057614);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(8,0.006130648);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(9,0.004876717);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(10,0.004709677);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(11,0.004366826);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(12,0.004851417);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(13,0.005064105);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(14,0.00508001);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(15,0.005221187);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(16,0.005512788);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(17,0.006549342);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(18,0.004750247);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(19,0.004619928);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(20,0.004190086);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(21,0.003931609);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(22,0.003595089);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(23,0.003138168);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(24,0.003029869);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(25,0.003084381);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(26,0.003345323);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(27,0.00386795);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(28,0.004016495);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(29,0.00385593);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(30,0.002812942);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(31,0.002161171);
   VbbHcc_both_Z_dR_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_all__423 = new TH1D("VbbHcc_both_Z_dR_all__423","",30,0,6);
   VbbHcc_both_Z_dR_all__423->SetBinContent(2,186);
   VbbHcc_both_Z_dR_all__423->SetBinContent(3,386149);
   VbbHcc_both_Z_dR_all__423->SetBinContent(4,427050);
   VbbHcc_both_Z_dR_all__423->SetBinContent(5,308945);
   VbbHcc_both_Z_dR_all__423->SetBinContent(6,263151);
   VbbHcc_both_Z_dR_all__423->SetBinContent(7,234555);
   VbbHcc_both_Z_dR_all__423->SetBinContent(8,217219);
   VbbHcc_both_Z_dR_all__423->SetBinContent(9,207701);
   VbbHcc_both_Z_dR_all__423->SetBinContent(10,204376);
   VbbHcc_both_Z_dR_all__423->SetBinContent(11,205386);
   VbbHcc_both_Z_dR_all__423->SetBinContent(12,211241);
   VbbHcc_both_Z_dR_all__423->SetBinContent(13,221815);
   VbbHcc_both_Z_dR_all__423->SetBinContent(14,234516);
   VbbHcc_both_Z_dR_all__423->SetBinContent(15,248316);
   VbbHcc_both_Z_dR_all__423->SetBinContent(16,256088);
   VbbHcc_both_Z_dR_all__423->SetBinContent(17,243228);
   VbbHcc_both_Z_dR_all__423->SetBinContent(18,226092);
   VbbHcc_both_Z_dR_all__423->SetBinContent(19,203265);
   VbbHcc_both_Z_dR_all__423->SetBinContent(20,177845);
   VbbHcc_both_Z_dR_all__423->SetBinContent(21,152664);
   VbbHcc_both_Z_dR_all__423->SetBinContent(22,128270);
   VbbHcc_both_Z_dR_all__423->SetBinContent(23,106012);
   VbbHcc_both_Z_dR_all__423->SetBinContent(24,88139);
   VbbHcc_both_Z_dR_all__423->SetBinContent(25,75034);
   VbbHcc_both_Z_dR_all__423->SetBinContent(26,64917);
   VbbHcc_both_Z_dR_all__423->SetBinContent(27,57626);
   VbbHcc_both_Z_dR_all__423->SetBinContent(28,53820);
   VbbHcc_both_Z_dR_all__423->SetBinContent(29,52533);
   VbbHcc_both_Z_dR_all__423->SetBinContent(30,34839);
   VbbHcc_both_Z_dR_all__423->SetBinContent(31,25214);
   VbbHcc_both_Z_dR_all__423->SetEntries(5316221);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all__423->SetLineColor(ci);
   VbbHcc_both_Z_dR_all__423->SetLineWidth(2);
   VbbHcc_both_Z_dR_all__423->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_all__423->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__423->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fx1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fy1423[30] = {
   0,
   194.2818,
   590245.1,
   626815.6,
   487615.2,
   399126.3,
   334184.7,
   301421.2,
   305029.7,
   298535.9,
   282713.8,
   281405.3,
   307875.3,
   355690.2,
   373189.4,
   379978,
   347800.2,
   340993.1,
   282086.7,
   253748.8,
   202655.9,
   196597,
   141469.6,
   120611,
   93492.19,
   87000.32,
   80460.83,
   73341.94,
   76220.53,
   47272.94};
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fex1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fey1423[30] = {
   0,
   45.43089,
   8572.873,
   10913.82,
   24521.51,
   9038.233,
   7593.754,
   6575.359,
   8179.329,
   8123.823,
   7470.762,
   6926.72,
   7638.581,
   24721.8,
   16060.58,
   16795.74,
   13166.62,
   22525.59,
   6850.006,
   7166.93,
   6254.722,
   18723.85,
   4903.638,
   5595.59,
   3818.46,
   4126.098,
   3838.016,
   3528.113,
   4595.328,
   3060.431};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_all_fx1423,Graph_from_VbbHcc_both_Z_dR_all_fy1423,Graph_from_VbbHcc_both_Z_dR_all_fex1423,Graph_from_VbbHcc_both_Z_dR_all_fey1423);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_all1423 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_all1423","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMaximum(701502.4);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_all1423);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__424 = new TH1D("data_mc_ratio__424","",30,0,6);
   data_mc_ratio__424->SetBinContent(2,0.9573722);
   data_mc_ratio__424->SetBinContent(3,0.654218);
   data_mc_ratio__424->SetBinContent(4,0.6813009);
   data_mc_ratio__424->SetBinContent(5,0.6335837);
   data_mc_ratio__424->SetBinContent(6,0.6593177);
   data_mc_ratio__424->SetBinContent(7,0.7018724);
   data_mc_ratio__424->SetBinContent(8,0.7206494);
   data_mc_ratio__424->SetBinContent(9,0.6809206);
   data_mc_ratio__424->SetBinContent(10,0.6845944);
   data_mc_ratio__424->SetBinContent(11,0.7264804);
   data_mc_ratio__424->SetBinContent(12,0.7506647);
   data_mc_ratio__424->SetBinContent(13,0.7204703);
   data_mc_ratio__424->SetBinContent(14,0.6593265);
   data_mc_ratio__424->SetBinContent(15,0.6653887);
   data_mc_ratio__424->SetBinContent(16,0.6739548);
   data_mc_ratio__424->SetBinContent(17,0.6993326);
   data_mc_ratio__424->SetBinContent(18,0.6630399);
   data_mc_ratio__424->SetBinContent(19,0.7205764);
   data_mc_ratio__424->SetBinContent(20,0.7008703);
   data_mc_ratio__424->SetBinContent(21,0.7533164);
   data_mc_ratio__424->SetBinContent(22,0.6524515);
   data_mc_ratio__424->SetBinContent(23,0.7493625);
   data_mc_ratio__424->SetBinContent(24,0.730771);
   data_mc_ratio__424->SetBinContent(25,0.8025697);
   data_mc_ratio__424->SetBinContent(26,0.7461697);
   data_mc_ratio__424->SetBinContent(27,0.7161994);
   data_mc_ratio__424->SetBinContent(28,0.7338229);
   data_mc_ratio__424->SetBinContent(29,0.6892238);
   data_mc_ratio__424->SetBinContent(30,0.7369756);
   data_mc_ratio__424->SetBinContent(31,0.7591754);
   data_mc_ratio__424->SetBinError(2,0.07019794);
   data_mc_ratio__424->SetBinError(3,0.001052798);
   data_mc_ratio__424->SetBinError(4,0.001042556);
   data_mc_ratio__424->SetBinError(5,0.001139891);
   data_mc_ratio__424->SetBinError(6,0.001285264);
   data_mc_ratio__424->SetBinError(7,0.001449225);
   data_mc_ratio__424->SetBinError(8,0.001546234);
   data_mc_ratio__424->SetBinError(9,0.001494091);
   data_mc_ratio__424->SetBinError(10,0.001514323);
   data_mc_ratio__424->SetBinError(11,0.001603018);
   data_mc_ratio__424->SetBinError(12,0.001633266);
   data_mc_ratio__424->SetBinError(13,0.001529751);
   data_mc_ratio__424->SetBinError(14,0.001361489);
   data_mc_ratio__424->SetBinError(15,0.001335282);
   data_mc_ratio__424->SetBinError(16,0.001331791);
   data_mc_ratio__424->SetBinError(17,0.001418002);
   data_mc_ratio__424->SetBinError(18,0.001394431);
   data_mc_ratio__424->SetBinError(19,0.001598265);
   data_mc_ratio__424->SetBinError(20,0.001661946);
   data_mc_ratio__424->SetBinError(21,0.001928009);
   data_mc_ratio__424->SetBinError(22,0.001821737);
   data_mc_ratio__424->SetBinError(23,0.002301518);
   data_mc_ratio__424->SetBinError(24,0.002461485);
   data_mc_ratio__424->SetBinError(25,0.002929906);
   data_mc_ratio__424->SetBinError(26,0.002928589);
   data_mc_ratio__424->SetBinError(27,0.002983491);
   data_mc_ratio__424->SetBinError(28,0.003163147);
   data_mc_ratio__424->SetBinError(29,0.003007074);
   data_mc_ratio__424->SetBinError(30,0.003948392);
   data_mc_ratio__424->SetBinError(31,0.06748872);
   data_mc_ratio__424->SetMinimum(0.4);
   data_mc_ratio__424->SetMaximum(1.6);
   data_mc_ratio__424->SetEntries(5276.169);
   data_mc_ratio__424->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__424->SetLineColor(ci);
   data_mc_ratio__424->SetLineWidth(2);
   data_mc_ratio__424->SetMarkerStyle(20);
   data_mc_ratio__424->SetMarkerSize(1.2);
   data_mc_ratio__424->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__424->GetXaxis()->SetRange(1,30);
   data_mc_ratio__424->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__424->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__424->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__424->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__424->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__424->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__424->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__424->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__424->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__424->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__424->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__424->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__424->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__424->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__424->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__424->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__424->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1424[30] = {
   0,
   0.2338402,
   0.01452426,
   0.01741154,
   0.05028865,
   0.02264505,
   0.02272323,
   0.02181452,
   0.02681486,
   0.02721222,
   0.02642518,
   0.02461475,
   0.02481063,
   0.06950375,
   0.04303599,
   0.04420188,
   0.03785685,
   0.06605879,
   0.02428334,
   0.02824419,
   0.03086376,
   0.09523975,
   0.03466214,
   0.04639371,
   0.04084256,
   0.04742624,
   0.04770043,
   0.04810498,
   0.06028989,
   0.06473961};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1424,Graph_from_mc_statistical_error_fy1424,Graph_from_mc_statistical_error_fex1424,Graph_from_mc_statistical_error_fey1424);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1424 = new TH1F("Graph_Graph_from_mc_statistical_error1424","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1424->SetMinimum(0.7193918);
   Graph_Graph_from_mc_statistical_error1424->SetMaximum(1.280608);
   Graph_Graph_from_mc_statistical_error1424->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1424->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1424);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
