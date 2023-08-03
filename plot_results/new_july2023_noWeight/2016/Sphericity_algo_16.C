void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug  3 10:21:26 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(0,0,1,1);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3212.875,1.052419,3209672);
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
   st->SetMaximum(2750841);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(0.01);
   st_stack_153->SetMaximum(2888383);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetRange(1,25);
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetLabelSize(0.035);
   st_stack_153->GetXaxis()->SetTitleSize(0.035);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Events/0.04");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetLabelSize(0.05);
   st_stack_153->GetYaxis()->SetTitleSize(0.057);
   st_stack_153->GetYaxis()->SetTitleOffset(1.2);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetLabelSize(0.035);
   st_stack_153->GetZaxis()->SetTitleSize(0.035);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,1097340);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,1061694);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,605614.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,347826.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,156581.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,62804.89);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,23630.39);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,5558.33);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1378.922);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,1214.569);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,357.6516);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,209.2587);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,452.7389);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,436.9069);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,57.93991);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,61.01364);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,335.6889);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,96.00884);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,28.08319);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,11.75927);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,27275.05);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,27984.64);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,24614.51);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,22649.24);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,7201.355);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,4034.845);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,3346.297);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,953.8508);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,302.8815);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,395.9272);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,80.09707);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,61.33952);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,274.0651);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,273.9342);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,26.46939);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,26.7001);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,270.1824);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,40.64289);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,22.96885);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,8.315057);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,7929.863);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,7736.14);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,4318.391);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,2386.311);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,1240.131);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,574.2636);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,235.8693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,101.9053);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,49.57024);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,31.91061);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,17.15576);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,13.91401);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,9.049533);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,5.879297);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,3.399035);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,3.445243);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,2.75884);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.765476);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.8281293);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.269396);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.04373405);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,32.63137);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,31.96205);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,24.03188);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,18.02594);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,12.9846);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,8.901481);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,5.71301);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.654123);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.585154);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,2.144436);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.541015);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.531434);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,1.138887);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.8227723);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6714454);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.7151477);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.6444457);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.5070782);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.3134842);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.1101655);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.04373405);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,124975.1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,130112.7);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,67969.3);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,36442.45);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,19235.67);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,9239.284);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,4048.423);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1804.329);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,900.6094);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,480.3534);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,275.8195);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,170.2216);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,100.3595);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,73.72271);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,48.81531);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,32.47066);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,20.54658);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,13.02575);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,8.883477);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,3.323842);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,1.53813);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.374493);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,88.26298);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,90.37476);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,65.28501);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,47.76047);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,34.64032);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,23.89438);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,15.68124);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,10.35778);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,7.26786);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,5.269496);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.980446);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,3.136029);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.396167);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,2.054952);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.677699);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.375757);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.077612);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.8669303);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.7247175);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.4483573);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.3020262);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1549237);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,4818.865);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,4789.026);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2664.401);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1548.582);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,808.0966);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,337.8183);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,100.3237);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,43.27671);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,10.3713);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,6.174944);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,3.336654);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,3.841518);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,2.488542);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,1.039088);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,4.16615);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.7924526);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.4229053);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.647575);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.1448776);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,58.72173);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,66.87947);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,47.90257);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,35.09661);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,24.51463);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,14.43316);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.74694);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,5.946853);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.382459);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.096083);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.6473535);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.8619374);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.6418903);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.3688423);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,2.733421);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.3405168);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.1731806);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.3246354);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.1027791);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,2650.756);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,2304.793);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,1383.146);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,789.0743);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,341.2042);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,166.9385);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,64.51197);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,11.62868);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,10.87706);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,4.365744);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,3.320967);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,9.355286);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.9495643);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,1.124291);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.6092824);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.2054878);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.09023364);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(18,0.0002136538);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.146767);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,65.07313);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,64.2862);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,51.66594);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,35.80145);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,18.005);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,13.38075);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,11.5999);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.655564);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,6.153535);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.111562);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.553512);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,6.266336);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.5297261);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.5513944);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.2715373);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.1186792);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.06335267);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(18,0.0002136538);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.146767);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,27.27697);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,21.63346);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,11.55576);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,8.330897);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,4.568556);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,2.284278);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.8062158);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,1.914468);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.704955);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.24609);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,1.058025);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.7835009);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.5540188);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.3291362);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(9,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(10,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(11,0.1343693);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,42.31475);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,39.58829);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,21.37549);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,11.56022);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,6.761636);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.508349);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,1.63588);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.4362346);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.148206);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.077846);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.526821);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.122827);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.8587286);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.5230269);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.4223823);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.2181173);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(9,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,51.55992);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,49.37105);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,28.94165);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,15.56526);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.45791);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,3.891314);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.9728286);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(10,0.4864143);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,3.54115);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.465169);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.653077);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.945657);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.594816);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.9728286);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.4864143);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(10,0.3439469);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,30.11425);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,30.79711);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.02462);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,10.88993);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,6.710376);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,3.187566);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.865589);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2088405);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.07831519);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.04396642);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.02473111);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.01648741);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.006869754);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002747902);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(19,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.2034097);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.205703);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1529412);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1223202);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.0960194);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.06617823);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03448589);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.0169392);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.0103731);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.007772239);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.005829179);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.004759505);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.003072247);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.00194306);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(19,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,12.3107);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,12.43459);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,7.004458);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,4.261824);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.421467);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.140019);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.3823934);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1374897);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.04905233);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.03544657);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01539599);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01002529);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.008235063);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.004296554);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.004654601);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002148277);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002506323);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001074139);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001432185);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.06639127);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.06672448);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.05007913);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.03906315);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.02944481);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02020345);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01170105);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.007016244);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004190823);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.003562515);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002347866);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001894602);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001717129);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001240308);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001290954);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0008770305);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0009473012);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0006201542);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0007160924);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.3035858);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.3336709);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1531604);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.09572526);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.09846027);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03282009);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.01094003);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02881509);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.03020914);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.02046692);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01618052);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01641004);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.009474344);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.005470015);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1279012);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1211131);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.06645145);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.0450155);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02322228);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.0125043);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.005001722);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.001429063);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0003572658);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0003572658);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.006759787);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.006577962);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.004872457);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.004010299);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002880369);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.002113613);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001336766);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007145317);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0003572658);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0003572658);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__305 = new TH1D("VbbHcc_algo_Sphericity__305","",25,0,1);
   VbbHcc_algo_Sphericity__305->SetBinContent(1,291978);
   VbbHcc_algo_Sphericity__305->SetBinContent(2,254247);
   VbbHcc_algo_Sphericity__305->SetBinContent(3,144572);
   VbbHcc_algo_Sphericity__305->SetBinContent(4,81643);
   VbbHcc_algo_Sphericity__305->SetBinContent(5,43504);
   VbbHcc_algo_Sphericity__305->SetBinContent(6,19759);
   VbbHcc_algo_Sphericity__305->SetBinContent(7,7499);
   VbbHcc_algo_Sphericity__305->SetBinContent(8,2858);
   VbbHcc_algo_Sphericity__305->SetBinContent(9,1216);
   VbbHcc_algo_Sphericity__305->SetBinContent(10,675);
   VbbHcc_algo_Sphericity__305->SetBinContent(11,380);
   VbbHcc_algo_Sphericity__305->SetBinContent(12,264);
   VbbHcc_algo_Sphericity__305->SetBinContent(13,148);
   VbbHcc_algo_Sphericity__305->SetBinContent(14,113);
   VbbHcc_algo_Sphericity__305->SetBinContent(15,88);
   VbbHcc_algo_Sphericity__305->SetBinContent(16,61);
   VbbHcc_algo_Sphericity__305->SetBinContent(17,41);
   VbbHcc_algo_Sphericity__305->SetBinContent(18,24);
   VbbHcc_algo_Sphericity__305->SetBinContent(19,23);
   VbbHcc_algo_Sphericity__305->SetBinContent(20,8);
   VbbHcc_algo_Sphericity__305->SetBinContent(21,3);
   VbbHcc_algo_Sphericity__305->SetEntries(849128);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__305->SetLineColor(ci);
   VbbHcc_algo_Sphericity__305->SetLineWidth(2);
   VbbHcc_algo_Sphericity__305->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__305->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__305->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1305[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1305[25] = {
   1237879,
   1206791,
   682036.1,
   389043.7,
   178237.4,
   73136.25,
   28084.2,
   7520.631,
   2350.721,
   1738.074,
   657.7025,
   406.6177,
   565.7106,
   518.6793,
   114.9357,
   97.92963,
   359.5113,
   111.4489,
   38.08925,
   15.3525,
   1.53813,
   0.4182271,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1305[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1305[25] = {
   27275.35,
   27984.96,
   24614.71,
   22649.35,
   7201.514,
   4034.974,
   3346.366,
   953.9341,
   303.0454,
   395.9713,
   80.22885,
   61.76348,
   274.0792,
   273.9439,
   26.67283,
   26.74752,
   270.1854,
   40.65659,
   22.98312,
   8.327865,
   0.3020262,
   0.1609783,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1305,Graph_from_VbbHcc_algo_Sphericity_fy1305,Graph_from_VbbHcc_algo_Sphericity_fex1305,Graph_from_VbbHcc_algo_Sphericity_fey1305);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1305 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1305","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMaximum(1391669);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1305);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algo_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__306 = new TH1D("data_mc_ratio__306","",25,0,1);
   data_mc_ratio__306->SetBinContent(1,0.2358697);
   data_mc_ratio__306->SetBinContent(2,0.2106802);
   data_mc_ratio__306->SetBinContent(3,0.2119712);
   data_mc_ratio__306->SetBinContent(4,0.2098556);
   data_mc_ratio__306->SetBinContent(5,0.244079);
   data_mc_ratio__306->SetBinContent(6,0.270167);
   data_mc_ratio__306->SetBinContent(7,0.2670185);
   data_mc_ratio__306->SetBinContent(8,0.3800213);
   data_mc_ratio__306->SetBinContent(9,0.5172881);
   data_mc_ratio__306->SetBinContent(10,0.3883608);
   data_mc_ratio__306->SetBinContent(11,0.5777688);
   data_mc_ratio__306->SetBinContent(12,0.6492585);
   data_mc_ratio__306->SetBinContent(13,0.2616179);
   data_mc_ratio__306->SetBinContent(14,0.217861);
   data_mc_ratio__306->SetBinContent(15,0.7656454);
   data_mc_ratio__306->SetBinContent(16,0.6228963);
   data_mc_ratio__306->SetBinContent(17,0.1140437);
   data_mc_ratio__306->SetBinContent(18,0.2153453);
   data_mc_ratio__306->SetBinContent(19,0.603845);
   data_mc_ratio__306->SetBinContent(20,0.5210876);
   data_mc_ratio__306->SetBinContent(21,1.95042);
   data_mc_ratio__306->SetBinError(1,0.0004365128);
   data_mc_ratio__306->SetBinError(2,0.0004178262);
   data_mc_ratio__306->SetBinError(3,0.000557487);
   data_mc_ratio__306->SetBinError(4,0.000734448);
   data_mc_ratio__306->SetBinError(5,0.001170215);
   data_mc_ratio__306->SetBinError(6,0.001921984);
   data_mc_ratio__306->SetBinError(7,0.003083469);
   data_mc_ratio__306->SetBinError(8,0.007108481);
   data_mc_ratio__306->SetBinError(9,0.01483425);
   data_mc_ratio__306->SetBinError(10,0.01494801);
   data_mc_ratio__306->SetBinError(11,0.02963892);
   data_mc_ratio__306->SetBinError(12,0.0399591);
   data_mc_ratio__306->SetBinError(13,0.02150486);
   data_mc_ratio__306->SetBinError(14,0.02049464);
   data_mc_ratio__306->SetBinError(15,0.08161807);
   data_mc_ratio__306->SetBinError(16,0.0797537);
   data_mc_ratio__306->SetBinError(17,0.01781063);
   data_mc_ratio__306->SetBinError(18,0.04395717);
   data_mc_ratio__306->SetBinError(19,0.1259104);
   data_mc_ratio__306->SetBinError(20,0.1842323);
   data_mc_ratio__306->SetBinError(21,1.126076);
   data_mc_ratio__306->SetMinimum(0.4);
   data_mc_ratio__306->SetMaximum(1.6);
   data_mc_ratio__306->SetEntries(48.63126);
   data_mc_ratio__306->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__306->SetLineColor(ci);
   data_mc_ratio__306->SetLineWidth(2);
   data_mc_ratio__306->SetMarkerStyle(20);
   data_mc_ratio__306->SetMarkerSize(1.2);
   data_mc_ratio__306->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__306->GetXaxis()->SetRange(1,25);
   data_mc_ratio__306->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__306->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__306->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__306->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__306->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__306->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__306->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__306->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__306->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__306->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__306->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__306->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__306->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__306->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__306->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__306->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__306->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1306[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1306[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1306[25] = {
   0.02203395,
   0.02318956,
   0.03609004,
   0.05821801,
   0.04040406,
   0.05517064,
   0.1191548,
   0.1268423,
   0.128916,
   0.2278218,
   0.1219835,
   0.1518957,
   0.4844867,
   0.5281566,
   0.2320673,
   0.27313,
   0.7515352,
   0.3648002,
   0.6034017,
   0.5424434,
   0.1963593,
   0.3849064,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1306,Graph_from_mc_statistical_error_fy1306,Graph_from_mc_statistical_error_fex1306,Graph_from_mc_statistical_error_fey1306);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1306 = new TH1F("Graph_Graph_from_mc_statistical_error1306","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1306->SetMinimum(0.09815777);
   Graph_Graph_from_mc_statistical_error1306->SetMaximum(1.901842);
   Graph_Graph_from_mc_statistical_error1306->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1306->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1306->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1306);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
