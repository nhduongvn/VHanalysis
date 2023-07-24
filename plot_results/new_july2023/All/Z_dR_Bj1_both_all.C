void Z_dR_Bj1_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Mon Jul 24 10:12:21 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(0,0,1,1);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3195.101,6.314516,3192206);
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
   st->SetMaximum(2735872);
   
   TH1F *st_stack_248 = new TH1F("st_stack_248","",30,0,6);
   st_stack_248->SetMinimum(0.3);
   st_stack_248->SetMaximum(2872666);
   st_stack_248->SetDirectory(0);
   st_stack_248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_248->SetLineColor(ci);
   st_stack_248->GetXaxis()->SetRange(1,30);
   st_stack_248->GetXaxis()->SetLabelFont(42);
   st_stack_248->GetXaxis()->SetLabelSize(0.035);
   st_stack_248->GetXaxis()->SetTitleSize(0.035);
   st_stack_248->GetXaxis()->SetTitleFont(42);
   st_stack_248->GetYaxis()->SetTitle("Events/0.2");
   st_stack_248->GetYaxis()->SetLabelFont(42);
   st_stack_248->GetYaxis()->SetLabelSize(0.05);
   st_stack_248->GetYaxis()->SetTitleSize(0.057);
   st_stack_248->GetYaxis()->SetTitleOffset(1.2);
   st_stack_248->GetYaxis()->SetTitleFont(42);
   st_stack_248->GetZaxis()->SetLabelFont(42);
   st_stack_248->GetZaxis()->SetLabelSize(0.035);
   st_stack_248->GetZaxis()->SetTitleSize(0.035);
   st_stack_248->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_248);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,274728.1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,1126785);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,893777.4);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,678551.5);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,475130);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,381393.9);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,293796.3);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,236073.2);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,204919);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,182924.3);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,177548.1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,156691.2);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,157845.8);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,120254.3);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,107761.7);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,102912.8);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,69905.81);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,68734.81);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,61091.27);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,59782.1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,41608.49);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,33444.4);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,26339.67);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,19988.89);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,18874.17);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,12592.73);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(27,10275.89);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,5971.556);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(29,2430.598);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(30,1546.21);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(31,3323.682);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,4212.332);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,31696.15);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,13205.93);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,23901.98);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,10326.36);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,10087.17);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,8083.289);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,7034.621);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,6918.235);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,6292.017);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,15697.26);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,6500.097);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,20969.5);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,5181.038);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,4841.09);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,6039.139);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,3627.361);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,4625.941);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,3801.012);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,14704.1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,2956.123);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,2776.221);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,1906.837);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,1495.114);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,2264.253);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,1200.319);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(27,1134.178);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,881.5559);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(29,306.3198);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(30,439.9385);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(31,751.1259);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,1256.961);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,6373.012);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,8429.272);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,8043.94);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,6853.326);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,5667.784);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,4649.398);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,3968.423);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,3468.086);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,3027.082);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,2736.406);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,2462.317);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,2201.048);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,1945.647);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,1672.934);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,1439.973);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,1206.905);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,1003.201);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,804.6789);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,669.8065);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,551.307);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,407.4847);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,334.5857);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,249.5271);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,188.0837);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,139.8085);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,92.24686);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,58.15512);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,41.76344);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(30,30.84404);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(31,47.27618);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,14.9065);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,31.8602);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,36.33323);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,35.40819);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,32.60711);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,29.72579);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,26.92344);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,24.82704);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,23.29254);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,21.75079);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,20.61811);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,19.57481);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,18.60022);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,17.49084);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,16.17926);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,15.07852);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,13.7913);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,12.74426);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,11.33001);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,10.47261);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,9.599823);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,8.190301);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,7.554282);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,6.56132);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,5.757043);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,5.019858);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,4.003396);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,3.179855);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,2.741888);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(30,2.415969);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(31,2.909899);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(1,12258.94);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(2,84102.68);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(3,135086.8);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(4,139763.2);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(5,122213.7);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(6,98966.56);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(7,80192.97);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(8,67079.43);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(9,58480.97);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(10,52643.49);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(11,48445.93);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(12,44575.34);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(13,40154.73);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(14,34885.5);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(15,29820.01);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(16,24983.63);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(17,20202.11);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(18,16232.19);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(19,12898.3);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(20,10079);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(21,7747.863);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(22,5825.67);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(23,4330.515);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(24,3128.363);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(25,2208.336);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(26,1509.654);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(27,1000.104);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(28,632.34);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(29,414.3514);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(30,264.4374);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(31,449.406);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(1,27.8329);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(2,72.86544);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(3,92.52258);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(4,94.19818);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(5,88.08873);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(6,79.25354);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(7,71.33083);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(8,65.22884);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(9,60.92226);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(10,57.81554);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(11,55.48016);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(12,53.24995);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(13,50.54195);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(14,47.10181);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(15,43.52566);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(16,39.83085);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(17,35.80356);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(18,32.08254);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(19,28.57966);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(20,25.25723);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(21,22.13808);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(22,19.1804);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(23,16.52417);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(24,14.04664);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(25,11.78564);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(26,9.743936);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(27,7.920812);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(28,6.295628);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(29,5.095665);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(30,4.074281);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(31,5.299533);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(1,2684.04);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(2,8605.44);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(3,8917.331);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(4,6185.438);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(5,3766.937);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(6,2587.484);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(7,2088.969);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(8,1610.584);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(9,1472.287);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(10,1247.874);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(11,1116.404);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(12,1007.854);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(13,940.7497);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(14,876.5767);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(15,748.001);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(16,665.6617);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(17,556.7545);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(18,465.6989);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(19,405.6502);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(20,368.5199);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(21,304.369);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(22,260.537);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(23,223.8347);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(24,167.787);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(25,144.6206);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(26,97.46695);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(27,78.2017);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(28,40.49387);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(29,24.62338);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(30,18.55591);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(31,23.64819);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(1,19.15958);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(2,51.47322);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(3,63.18589);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(4,61.90523);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(5,48.40971);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(6,38.26754);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(7,34.88068);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(8,29.80623);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(9,30.64282);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(10,25.9289);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(11,24.1942);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(12,22.34818);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(13,23.21177);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(14,22.98701);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(15,20.25647);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(16,19.59958);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(17,16.06685);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(18,15.47726);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(19,13.71316);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(20,13.01072);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(21,11.45634);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(22,10.05651);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(23,9.735634);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(24,7.258304);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(25,7.88192);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(26,5.382687);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(27,5.743227);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(28,2.439481);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(29,4.254234);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(30,4.094509);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(31,3.467821);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(1,1620.753);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(2,5054.635);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(3,4016.534);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(4,2637.184);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(5,2077.856);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(6,1510.895);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(7,1231.056);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(8,1060.753);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(9,902.1004);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(10,831.1287);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(11,691.4577);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(12,673.6754);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(13,569.7557);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(14,565.6035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(15,485.0231);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(16,432.4826);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(17,339.0785);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(18,307.3416);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(19,253.4922);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(20,199.9458);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(21,193.066);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(22,180.9969);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(23,134.2958);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(24,104.6043);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(25,75.99258);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(26,65.06414);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(27,40.77432);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(28,22.57299);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(29,22.97154);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(30,12.93642);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(31,12.23287);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(1,29.65171);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(2,74.28182);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(3,70.16748);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(4,60.33204);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(5,57.25103);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(6,43.15507);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(7,40.68195);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(8,39.46315);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(9,35.05239);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(10,34.08881);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(11,31.67729);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(12,33.11602);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(13,25.38704);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(14,29.87618);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(15,24.68932);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(16,26.8849);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(17,21.28217);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(18,21.28917);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(19,16.16882);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(20,12.07406);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(21,17.1812);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(22,17.06469);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(23,16.68922);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(24,7.733544);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(25,6.446009);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(26,6.449585);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(27,4.6001);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(28,2.506716);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(29,6.631882);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(30,3.621712);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(31,2.305076);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(1,7.909271);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(2,23.46626);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(3,17.67748);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(4,14.37974);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(5,12.33987);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(6,9.316786);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(7,11.13927);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(8,7.243359);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(9,5.462392);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(10,5.870163);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(11,4.85565);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(12,5.956465);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(13,4.599788);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(14,3.940313);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(15,2.935647);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(16,1.320081);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(17,1.404486);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(18,1.95773);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(19,2.848214);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(20,1.412438);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(21,0.9217742);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(22,1.496843);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(23,0.2577581);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(24,1.295228);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(25,0.08591938);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(27,0.6640161);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(31,0.2016151);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(1,1.180592);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(2,2.02231);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(3,1.699587);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(4,1.584663);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(5,1.490254);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(6,1.268397);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(7,1.466797);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(8,1.088377);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(9,0.956094);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(10,1.049746);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(11,0.870297);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(12,1.052893);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(13,0.8775098);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(14,0.8379128);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(15,0.7544041);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(16,0.4148911);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(17,0.3794715);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(18,0.625301);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(19,0.7254138);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(20,0.5664133);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(21,0.4434258);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(22,0.5410065);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(23,0.1488167);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(24,0.5020352);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(25,0.08591938);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(26,0.2016151);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(27,0.4177081);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(28,0.08591938);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(31,0.2016151);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(1,15.7943);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(2,50.61693);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(3,45.38037);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(4,33.53535);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(5,17.26793);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(6,10.88251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(7,12.6722);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(8,7.371672);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(9,6.09272);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(10,7.140535);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(11,5.097891);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(12,5.913947);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(13,4.468449);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(14,3.96151);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(15,3.55828);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(16,1.881901);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(17,1.794468);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(18,2.608371);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(19,2.260279);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(20,2.1519);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(21,1.661236);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(22,1.745896);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(23,0.7645692);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.9708541);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(25,0.3822846);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(26,0.4564715);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(27,0.769239);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(31,0.2016151);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(1,1.350439);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(2,2.36325);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(3,2.1121);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(4,1.898371);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(5,1.552686);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(6,1.270117);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(7,1.474059);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(8,1.053898);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(9,0.948129);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(10,1.064567);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(11,0.8402832);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(12,1.031456);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(13,0.843831);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(14,0.8133113);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(15,0.7616941);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(16,0.4301582);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(17,0.377009);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(18,0.6459051);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(19,0.6783417);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(20,0.6002556);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(21,0.4859106);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(22,0.5450771);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(23,0.2207121);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(24,0.4689616);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(25,0.156067);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(26,0.2385091);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(27,0.4234104);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(31,0.2016151);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(1,19.90247);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(2,77.02818);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(3,73.43782);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(4,42.14351);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(5,24.45979);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(6,19.48005);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(7,15.01798);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(8,11.50439);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(9,8.001203);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(10,10.39231);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(11,6.371805);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(12,7.652677);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(13,7.569708);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(14,7.035929);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(15,5.615638);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(16,3.578765);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(17,4.102137);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(18,3.9597);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.515186);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(20,2.094822);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(21,1.369897);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(22,1.8501);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(23,1.350581);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.7516297);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.7175348);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(26,0.7709459);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(29,0.1867731);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(31,0.4121785);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(1,1.945501);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(2,3.820218);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(3,3.739939);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(4,2.820938);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(5,2.148864);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(6,1.922705);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(7,1.692939);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(8,1.475787);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(9,1.237038);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(10,1.403648);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(11,1.094563);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(12,1.212081);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(13,1.199053);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(14,1.142889);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(15,1.026732);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(16,0.8224302);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(17,0.8760797);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(18,0.8653701);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(19,0.5369459);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(20,0.6328918);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(21,0.5187796);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(22,0.5855784);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(23,0.5114135);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3764492);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(25,0.3587674);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(26,0.3863969);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(27,0.2060893);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(29,0.1867731);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(31,0.2914542);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(1,8.771392);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(2,37.89734);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(3,45.26017);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(4,37.3921);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(5,25.73821);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(6,16.32418);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(7,11.5864);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(8,8.828879);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(9,7.489361);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.889817);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(11,6.420792);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(12,6.149527);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(13,5.274664);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.53002);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(15,3.714454);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(16,3.242331);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(17,2.725272);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(18,2.133458);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(19,1.846793);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(20,1.570458);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(21,1.362196);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(22,1.085718);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.9932411);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.7234688);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.5173616);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.3753838);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.2084602);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.1038325);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.04248107);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.01126929);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.01540745);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(1,0.1244374);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2584999);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2813002);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(4,0.2549666);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(5,0.2110872);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1682681);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1420071);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1240126);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(9,0.114183);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1102141);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1067369);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(12,0.104315);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09630817);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(14,0.08924286);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(15,0.08045574);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(16,0.07575785);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(17,0.0693004);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(18,0.06127799);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(19,0.05718248);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(20,0.0525425);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(21,0.04924709);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(22,0.04373197);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(23,0.04192481);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(24,0.03613725);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(25,0.03025113);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(26,0.02588485);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01927389);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01348766);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(29,0.008540045);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(30,0.004331134);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(31,0.004946398);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(1,8.008945);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(2,30.18651);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(3,35.17858);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(4,28.57678);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(5,19.24693);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(6,12.27144);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(7,8.374419);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(8,6.308875);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(9,5.30827);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(10,4.636181);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(11,4.043484);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(12,3.669797);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(13,3.372764);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(14,3.00729);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(15,2.450181);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(16,2.087445);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(17,1.883491);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(18,1.617941);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(19,1.479691);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(20,1.27163);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(21,1.137486);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.9472209);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.8007576);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.6447125);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.5324696);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.3120901);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.2258547);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.1012924);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.04243331);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.02463869);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.01779461);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(1,0.06193004);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(2,0.120232);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(3,0.1297935);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(4,0.1169824);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(5,0.09600512);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(6,0.0766587);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(7,0.06332731);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(8,0.05496543);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(9,0.05041853);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(10,0.04711876);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(11,0.04400394);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(12,0.0419213);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(13,0.04018895);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(14,0.03794909);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(15,0.03425412);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(16,0.03161704);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(17,0.03003278);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(18,0.02783524);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(19,0.02661945);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(20,0.0246771);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(21,0.02333925);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(22,0.02129803);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01958232);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(24,0.01757101);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(25,0.01596839);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(26,0.01222514);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(27,0.01039988);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(28,0.006964696);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(29,0.004507826);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(30,0.003434967);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(31,0.002919161);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.3755736);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(2,1.541421);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(3,1.478416);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.8289497);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.4481905);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.2371755);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.234285);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.1459342);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.1251486);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.1363249);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.1252294);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.1363719);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.08174647);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.09199099);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.05539567);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.04921686);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.04779818);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.03044308);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.06149369);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.03067934);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(21,0.02135331);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(22,0.02636408);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.02566857);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.01634254);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.01206104);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.02366283);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.00659102);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(28,0.005010769);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(1,0.02860023);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(2,0.05878179);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(3,0.05818548);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(4,0.04350954);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(5,0.03185576);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(6,0.0230494);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(7,0.02305316);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(8,0.01834412);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(9,0.01673141);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(10,0.01761368);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(11,0.01696981);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(12,0.01770563);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(13,0.01346568);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(14,0.01444173);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(15,0.01091598);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(16,0.01015164);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(17,0.01079942);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(18,0.008379913);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(19,0.01127949);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(20,0.008402599);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(21,0.00692581);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(22,0.007786283);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(23,0.007612116);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(24,0.005942011);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(25,0.005487903);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(26,0.007611373);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(27,0.003893142);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(28,0.003557999);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(29,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.1638859);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.743033);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.709946);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.4152736);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.1934063);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.1225107);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.0893951);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.07270284);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.07044498);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.05328124);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.05767007);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.04481709);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.04321716);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.04142982);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.0365754);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.02388464);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.02529149);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.02247774);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.02412764);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.02110695);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.01588433);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.01639193);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.01254211);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.01175774);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.007896646);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(26,0.00518717);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.004149814);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.001487345);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(1,0.00695509);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(2,0.01473184);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(3,0.01443821);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(4,0.01108362);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(5,0.007583852);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(6,0.006060203);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(7,0.005133073);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(8,0.004642759);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(9,0.004550131);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(10,0.003933102);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(11,0.004174197);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(12,0.003666475);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(13,0.003545575);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(14,0.003488662);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(15,0.003320141);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(16,0.00264907);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(17,0.002736629);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(18,0.002602665);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(19,0.002656977);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(20,0.002478424);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(21,0.002192803);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(22,0.002204994);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(23,0.001919213);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(24,0.001849431);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(25,0.001503969);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(26,0.00125028);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(27,0.001090473);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0006243665);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all__495 = new TH1D("VbbHcc_both_Z_dR_Bj1_all__495","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(1,222848);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(2,856585);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(3,769655);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(4,571904);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(5,445995);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(6,352528);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(7,285622);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(8,237257);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(9,204125);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(10,180054);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(11,162539);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(12,148255);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(13,134685);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(14,119743);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(15,106892);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(16,94265);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(17,78138);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(18,66023);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(19,56378);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(20,47750);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(21,39987);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(22,33386);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(23,27000);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(24,22065);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(25,16898);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(26,12573);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(27,8670);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(28,5385);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(29,3460);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(30,2020);
   VbbHcc_both_Z_dR_Bj1_all__495->SetBinContent(31,3507);
   VbbHcc_both_Z_dR_Bj1_all__495->SetEntries(5316221);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all__495->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all__495->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1_all__495->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1_all__495->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1_all__495->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all__495->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__495->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__495->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__495->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__495->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__495->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__495->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__495->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all__495->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__495->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__495->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__495->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__495->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__495->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495[30] = {
   292609.7,
   1231143,
   1050446,
   835338.5,
   610141.5,
   490195.2,
   382017.8,
   309833.9,
   269275,
   240709,
   230565.2,
   205439.9,
   201737.5,
   158550.3,
   140506,
   130446.8,
   92222.64,
   86755.57,
   75463.43,
   71107.92,
   50411.59,
   40126.26,
   31367.11,
   23643.59,
   21493.46,
   14406.87,
   11489.3,
   6725.415,
   2934.581,
   1873.02};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495[30] = {
   4212.599,
   31696.38,
   13206.65,
   23902.35,
   10327.06,
   10087.69,
   8083.827,
   7035.141,
   6918.699,
   6292.467,
   15697.42,
   6500.468,
   20969.59,
   5181.419,
   4841.418,
   6039.381,
   3627.662,
   4626.144,
   3801.196,
   14704.13,
   2956.294,
   2776.37,
   1907.021,
   1495.232,
   2264.314,
   1200.398,
   1134.236,
   881.5911,
   306.4758,
   439.998};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMinimum(1289.72);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMaximum(1388980);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__496 = new TH1D("data_mc_ratio__496","",30,0,6);
   data_mc_ratio__496->SetBinContent(1,0.7615878);
   data_mc_ratio__496->SetBinContent(2,0.6957643);
   data_mc_ratio__496->SetBinContent(3,0.7326932);
   data_mc_ratio__496->SetBinContent(4,0.6846374);
   data_mc_ratio__496->SetBinContent(5,0.7309698);
   data_mc_ratio__496->SetBinContent(6,0.7191584);
   data_mc_ratio__496->SetBinContent(7,0.7476668);
   data_mc_ratio__496->SetBinContent(8,0.7657555);
   data_mc_ratio__496->SetBinContent(9,0.7580539);
   data_mc_ratio__496->SetBinContent(10,0.7480153);
   data_mc_ratio__496->SetBinContent(11,0.7049589);
   data_mc_ratio__496->SetBinContent(12,0.7216466);
   data_mc_ratio__496->SetBinContent(13,0.6676249);
   data_mc_ratio__496->SetBinContent(14,0.7552369);
   data_mc_ratio__496->SetBinContent(15,0.7607646);
   data_mc_ratio__496->SetBinContent(16,0.7226319);
   data_mc_ratio__496->SetBinContent(17,0.8472756);
   data_mc_ratio__496->SetBinContent(18,0.7610232);
   data_mc_ratio__496->SetBinContent(19,0.7470904);
   data_mc_ratio__496->SetBinContent(20,0.6715145);
   data_mc_ratio__496->SetBinContent(21,0.7932105);
   data_mc_ratio__496->SetBinContent(22,0.8320238);
   data_mc_ratio__496->SetBinContent(23,0.8607743);
   data_mc_ratio__496->SetBinContent(24,0.933234);
   data_mc_ratio__496->SetBinContent(25,0.7861926);
   data_mc_ratio__496->SetBinContent(26,0.8727089);
   data_mc_ratio__496->SetBinContent(27,0.7546153);
   data_mc_ratio__496->SetBinContent(28,0.8006941);
   data_mc_ratio__496->SetBinContent(29,1.179044);
   data_mc_ratio__496->SetBinContent(30,1.078472);
   data_mc_ratio__496->SetBinContent(31,0.9092337);
   data_mc_ratio__496->SetBinError(1,0.001613302);
   data_mc_ratio__496->SetBinError(2,0.000751756);
   data_mc_ratio__496->SetBinError(3,0.0008351685);
   data_mc_ratio__496->SetBinError(4,0.0009053137);
   data_mc_ratio__496->SetBinError(5,0.001094547);
   data_mc_ratio__496->SetBinError(6,0.001211233);
   data_mc_ratio__496->SetBinError(7,0.001398982);
   data_mc_ratio__496->SetBinError(8,0.001572102);
   data_mc_ratio__496->SetBinError(9,0.001677846);
   data_mc_ratio__496->SetBinError(10,0.001762825);
   data_mc_ratio__496->SetBinError(11,0.001748578);
   data_mc_ratio__496->SetBinError(12,0.001874217);
   data_mc_ratio__496->SetBinError(13,0.001819169);
   data_mc_ratio__496->SetBinError(14,0.002182519);
   data_mc_ratio__496->SetBinError(15,0.0023269);
   data_mc_ratio__496->SetBinError(16,0.00235365);
   data_mc_ratio__496->SetBinError(17,0.003031053);
   data_mc_ratio__496->SetBinError(18,0.002961763);
   data_mc_ratio__496->SetBinError(19,0.003146432);
   data_mc_ratio__496->SetBinError(20,0.003073043);
   data_mc_ratio__496->SetBinError(21,0.003966697);
   data_mc_ratio__496->SetBinError(22,0.004553586);
   data_mc_ratio__496->SetBinError(23,0.005238505);
   data_mc_ratio__496->SetBinError(24,0.006282588);
   data_mc_ratio__496->SetBinError(25,0.006047993);
   data_mc_ratio__496->SetBinError(26,0.007783053);
   data_mc_ratio__496->SetBinError(27,0.00810431);
   data_mc_ratio__496->SetBinError(28,0.01091123);
   data_mc_ratio__496->SetBinError(29,0.02004435);
   data_mc_ratio__496->SetBinError(30,0.02399569);
   data_mc_ratio__496->SetBinError(31,0.177736);
   data_mc_ratio__496->SetMinimum(0.4);
   data_mc_ratio__496->SetMaximum(1.6);
   data_mc_ratio__496->SetEntries(3538.989);
   data_mc_ratio__496->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__496->SetLineColor(ci);
   data_mc_ratio__496->SetLineWidth(2);
   data_mc_ratio__496->SetMarkerStyle(20);
   data_mc_ratio__496->SetMarkerSize(1.2);
   data_mc_ratio__496->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__496->GetXaxis()->SetRange(1,30);
   data_mc_ratio__496->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__496->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__496->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__496->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__496->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__496->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__496->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__496->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__496->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__496->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__496->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__496->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__496->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__496->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__496->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__496->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__496->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1496[30] = {
   0.01439665,
   0.0257455,
   0.01257241,
   0.02861397,
   0.01692567,
   0.02057892,
   0.02116086,
   0.02270617,
   0.0256938,
   0.02614139,
   0.06808234,
   0.0316417,
   0.1039449,
   0.03267998,
   0.03445701,
   0.04629767,
   0.03933591,
   0.05332389,
   0.05037136,
   0.2067861,
   0.05864314,
   0.06919086,
   0.06079684,
   0.06324049,
   0.105349,
   0.08332127,
   0.09872113,
   0.1310835,
   0.104436,
   0.2349137};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1496,Graph_from_mc_statistical_error_fy1496,Graph_from_mc_statistical_error_fex1496,Graph_from_mc_statistical_error_fey1496);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1496 = new TH1F("Graph_Graph_from_mc_statistical_error1496","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1496->SetMinimum(0.7181036);
   Graph_Graph_from_mc_statistical_error1496->SetMaximum(1.281896);
   Graph_Graph_from_mc_statistical_error1496->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1496->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1496->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1496);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
