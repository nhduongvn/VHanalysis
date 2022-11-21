void Z_pt_VbbHcc_16()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_16/Z_pt_VbbHcc_16
//=========  (Mon Nov 21 13:06:13 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_16 = new TCanvas("Z_pt_VbbHcc_16", "Z_pt_VbbHcc_16",0,0,600,600);
   Z_pt_VbbHcc_16->SetHighLightColor(2);
   Z_pt_VbbHcc_16->Range(0,0,1,1);
   Z_pt_VbbHcc_16->SetFillColor(0);
   Z_pt_VbbHcc_16->SetFillStyle(4000);
   Z_pt_VbbHcc_16->SetBorderMode(0);
   Z_pt_VbbHcc_16->SetBorderSize(2);
   Z_pt_VbbHcc_16->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-2981.677,1562.903,2978705);
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
   st->SetMaximum(2552892);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(0.01);
   st_stack_9->SetMaximum(2680537);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetLabelSize(0.035);
   st_stack_9->GetXaxis()->SetTitleSize(0.035);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.05);
   st_stack_9->GetYaxis()->SetTitleSize(0.057);
   st_stack_9->GetYaxis()->SetTitleOffset(1.2);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetLabelSize(0.035);
   st_stack_9->GetZaxis()->SetTitleSize(0.035);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,281564.5);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1101588);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,513574.7);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,10751.04);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,19553.6);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,38875.42);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,26616.71);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,3855.231);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(1415);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,1766.028);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,4682.347);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,2820.135);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,1079.87);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,508.9221);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,253.8211);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,148.6353);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,81.181);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,54.62241);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,32.67971);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,23.03648);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,15.88592);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,9.819885);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,9.248814);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,3.974947);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(16,5.103163);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(17,1.752435);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(18,2.192659);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(19,1.90662);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(20,2.226926);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(21,0.5127863);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(22,0.3754461);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(23,0.0571919);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(24,0.5622247);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(25,0.5794322);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(26,0.2743799);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(27,0.3359613);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(28,0.3223642);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(34,0.04688589);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(38,0.0461064);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,14.77109);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,23.9236);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,19.5598);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,12.44267);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,8.957351);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,6.498666);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,5.200403);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,3.911764);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,3.34416);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,2.653055);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,2.254089);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,1.961827);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,1.449213);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,1.528563);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,1.156196);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(16,1.167568);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(17,0.6068343);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(18,0.7558632);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(19,0.6721398);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(20,0.7878139);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(21,0.3342141);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(22,0.291504);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(23,0.0571919);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(24,0.3975534);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(25,0.4100714);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(26,0.2743799);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(27,0.2914671);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(28,0.3223642);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(34,0.04688589);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(38,0.0461064);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(198303);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_3 = new TH1D("VbbHcc_algo_Z_pt_stack_3","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(1,14459.25);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(2,39896.62);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(3,28299.82);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(4,8073.157);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(5,3524.477);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(6,1753.123);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(7,941.797);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(8,540.9965);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(9,329.5647);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(10,206.8232);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(11,139.7474);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(12,97.31484);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(13,64.28268);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(14,38.79988);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(15,31.78107);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(16,19.39193);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(17,17.06666);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(18,9.414763);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(19,8.642049);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(20,6.151077);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(21,4.871864);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(22,2.499551);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(23,2.618602);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(24,2.17062);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(25,1.292147);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(26,1.026242);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(27,0.6660832);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(28,0.6350158);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(29,0.418817);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(30,0.2883534);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(31,0.1895004);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(32,0.19391);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(34,0.05087775);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(36,0.1241447);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(37,0.07901158);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(41,0.06844373);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(1,29.6725);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(2,49.87764);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(3,42.37391);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(4,22.51875);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(5,14.9204);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(6,10.57023);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(7,7.781928);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(8,5.933893);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(9,4.641905);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(10,3.722596);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(11,3.049119);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(12,2.569908);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(13,2.088585);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(14,1.621765);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(15,1.476503);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(16,1.153093);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(17,1.078221);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(18,0.7923652);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(19,0.7645766);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(20,0.6553749);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(21,0.5708196);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(22,0.4010198);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(23,0.4214833);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(24,0.3772123);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(25,0.3016055);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(26,0.2693865);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(27,0.2118157);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(28,0.2131577);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(29,0.1702444);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(30,0.1443468);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(31,0.1106823);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(32,0.1134201);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(34,0.05087775);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(36,0.08852882);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(37,0.07901158);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(41,0.06844373);
   VbbHcc_algo_Z_pt_stack_3->SetEntries(1672354);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_4 = new TH1D("VbbHcc_algo_Z_pt_stack_4","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(1,130.7763);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(2,425.8657);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(3,1102.277);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(4,1318.788);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(5,641.913);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(6,133.7941);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(7,6.429642);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(1,6.164754);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(2,11.16518);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(3,18.11804);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(4,19.84645);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(5,13.86699);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(6,6.318431);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(7,1.40676);
   VbbHcc_algo_Z_pt_stack_4->SetEntries(12883);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_5 = new TH1D("VbbHcc_algo_Z_pt_stack_5","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(1,62.40852);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(2,215.9387);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(3,450.5323);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(4,549.1667);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(5,248.9773);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(6,51.81099);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(7,5.372088);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(1,8.190628);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(2,15.27015);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(3,22.17712);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(4,24.49527);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(5,16.55135);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(6,7.547556);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(7,2.433494);
   VbbHcc_algo_Z_pt_stack_5->SetEntries(1481);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_6 = new TH1D("VbbHcc_algo_Z_pt_stack_6","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(1,8.801975);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(2,18.9688);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(3,10.73177);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(4,3.826878);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(5,2.689362);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(6,2.315699);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(7,1.018864);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(8,0.7097375);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(9,0.1855824);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(10,0.3705972);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(12,0.2000222);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(13,0.1395901);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(14,0.08895914);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(19,0.08958188);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(1,0.8972203);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(2,1.319221);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(3,0.9840824);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(4,0.5879706);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(5,0.500132);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(6,0.453392);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(7,0.3022211);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(8,0.2511001);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(9,0.1312738);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(10,0.1853219);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(12,0.1415006);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(13,0.101825);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(14,0.08895914);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(19,0.08958188);
   VbbHcc_algo_Z_pt_stack_6->SetEntries(557);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_7 = new TH1D("VbbHcc_algo_Z_pt_stack_7","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(1,26.47069);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(2,67.59888);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(3,44.30282);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(4,20.97122);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(5,12.26422);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(6,6.40021);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(7,4.278223);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(8,2.446464);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(9,1.100328);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(10,0.8038981);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(11,0.3930893);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(12,0.2588387);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(13,0.1357428);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(15,0.0628458);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(19,0.06684071);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(28,0.02562574);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(1,1.344053);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(2,2.151084);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(3,1.741346);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(4,1.19558);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(5,0.9130658);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(6,0.6583171);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(7,0.5379864);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(8,0.414072);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(9,0.2761979);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(10,0.2331807);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(11,0.1611571);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(12,0.1297412);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(13,0.09599321);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(15,0.0628458);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(19,0.06684071);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(28,0.02562574);
   VbbHcc_algo_Z_pt_stack_7->SetEntries(2794);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_8 = new TH1D("VbbHcc_algo_Z_pt_stack_8","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(1,36.4965);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(2,65.51999);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(3,37.69575);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(4,21.66443);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(5,10.07654);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(6,6.181465);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(7,2.650231);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(8,1.180281);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(9,0.3655292);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(10,0.5994853);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(16,0.1881969);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(1,2.649673);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(2,3.553674);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(3,2.692661);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(4,2.046254);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(5,1.401753);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(6,1.094352);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(7,0.6948349);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(8,0.4599044);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(9,0.2585969);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(10,0.3464959);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(16,0.1881969);
   VbbHcc_algo_Z_pt_stack_8->SetEntries(966);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_9 = new TH1D("VbbHcc_algo_Z_pt_stack_9","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(1,5.456905);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(2,16.52637);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(3,12.56618);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(4,7.327947);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(5,4.213857);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(6,2.530501);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(7,1.518487);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(8,0.884242);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(9,0.5439931);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(10,0.2665286);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(11,0.1672493);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(12,0.08825266);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(13,0.04403199);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(14,0.01968842);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(15,0.0122298);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(16,0.008188906);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(17,0.002997377);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(18,0.002888945);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(19,0.00331879);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(20,0.005968864);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(21,0.001473581);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(22,0.001659436);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(23,0.0009858775);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(35,0.001461468);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(1,0.0906846);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(2,0.158941);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(3,0.1385979);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(4,0.1056988);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(5,0.08057527);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(6,0.06247342);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(7,0.04866805);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(8,0.03683407);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(9,0.02901121);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(10,0.02019975);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(11,0.01604274);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(12,0.01158934);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(13,0.008059044);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(14,0.005330997);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(15,0.004329715);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(16,0.003463167);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(17,0.002120949);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(18,0.002042903);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(19,0.002346739);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(20,0.002985951);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(21,0.001473581);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(22,0.001659436);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(23,0.0009858775);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(35,0.001461468);
   VbbHcc_algo_Z_pt_stack_9->SetEntries(37196);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_10 = new TH1D("VbbHcc_algo_Z_pt_stack_10","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(1,0.7761676);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(2,3.185641);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(3,4.271506);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(4,2.714951);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(5,1.491822);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(6,0.8630166);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(7,0.5180027);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(8,0.3150103);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(9,0.2059449);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(10,0.145305);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(11,0.08737522);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(12,0.06352091);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(13,0.03360825);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(14,0.02468915);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(15,0.0164817);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(16,0.01691077);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(17,0.008264381);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(18,0.008724619);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(19,0.006685215);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(20,0.004241419);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(21,0.003789361);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(22,0.003334224);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(23,0.002140571);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(24,0.002218045);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(25,0.002900305);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(26,0.0004278116);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(27,0.0007775441);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(28,0.000375936);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(29,0.001531226);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(30,0.0008006528);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(33,0.000388509);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(34,0.001155623);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(41,0.0003762123);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(1,0.01721664);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(2,0.03494593);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(3,0.04052154);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(4,0.0322743);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(5,0.02391858);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(6,0.0181712);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(7,0.01404886);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(8,0.01095836);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(9,0.008861041);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(10,0.007458605);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(11,0.005796024);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(12,0.004920272);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(13,0.003598825);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(14,0.003048067);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(15,0.002520332);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(16,0.002543539);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(17,0.001805541);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(18,0.001816084);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(19,0.001625885);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(20,0.001286991);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(21,0.001200706);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(22,0.001117667);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(23,0.00087771);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(24,0.0009123805);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(25,0.001097339);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(26,0.000374063);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(27,0.0005498306);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(28,0.000375936);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(29,0.0007657898);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(30,0.000567165);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(33,0.000388509);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(34,0.000667321);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(41,0.0003762123);
   VbbHcc_algo_Z_pt_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_11 = new TH1D("VbbHcc_algo_Z_pt_stack_11","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(1,0.135925);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(2,0.5174338);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(3,0.4528779);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(4,0.202739);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(5,0.07363401);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(6,0.04861644);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(7,0.02512141);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(8,0.02320665);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(9,0.01074598);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(10,0.003091844);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(12,0.001563217);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(1,0.01434678);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(2,0.02875791);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(3,0.02663336);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(4,0.01799683);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(5,0.01056456);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(6,0.008694409);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(7,0.006156);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(8,0.006061709);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(9,0.004062123);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(10,0.002186726);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(12,0.001563217);
   VbbHcc_algo_Z_pt_stack_11->SetEntries(1085);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_12 = new TH1D("VbbHcc_algo_Z_pt_stack_12","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(1,366.213);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(2,1820.411);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(3,3224.133);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(4,1765.245);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(5,644.354);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(6,318.4493);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(7,152.366);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(8,102.7535);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(9,62.08623);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(10,50.75344);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(11,12.06977);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(12,17.26055);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(13,5.701325);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(14,8.442849);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(15,8.707498);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(17,4.0777);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(19,10.90477);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(22,4.284517);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(23,7.859611);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(25,4.381892);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(1,38.52778);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(2,85.90497);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(3,114.3056);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(4,84.65465);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(5,50.7894);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(6,35.94353);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(7,24.6512);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(8,20.19416);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(9,16.05265);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(10,14.27455);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(11,6.968681);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(12,8.447978);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(13,4.45921);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(14,5.974308);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(15,6.161122);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(17,4.0777);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(19,6.50257);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(22,4.284517);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(23,5.567084);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(25,4.381892);
   VbbHcc_algo_Z_pt_stack_12->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_pt__17 = new TH1D("VbbHcc_algo_Z_pt__17","",40,0,2000);
   VbbHcc_algo_Z_pt__17->SetBinContent(1,13066);
   VbbHcc_algo_Z_pt__17->SetBinContent(2,32836);
   VbbHcc_algo_Z_pt__17->SetBinContent(3,56473);
   VbbHcc_algo_Z_pt__17->SetBinContent(4,51526);
   VbbHcc_algo_Z_pt__17->SetBinContent(5,37143);
   VbbHcc_algo_Z_pt__17->SetBinContent(6,35962);
   VbbHcc_algo_Z_pt__17->SetBinContent(7,32367);
   VbbHcc_algo_Z_pt__17->SetBinContent(8,21805);
   VbbHcc_algo_Z_pt__17->SetBinContent(9,13223);
   VbbHcc_algo_Z_pt__17->SetBinContent(10,7618);
   VbbHcc_algo_Z_pt__17->SetBinContent(11,4569);
   VbbHcc_algo_Z_pt__17->SetBinContent(12,2887);
   VbbHcc_algo_Z_pt__17->SetBinContent(13,1888);
   VbbHcc_algo_Z_pt__17->SetBinContent(14,1309);
   VbbHcc_algo_Z_pt__17->SetBinContent(15,783);
   VbbHcc_algo_Z_pt__17->SetBinContent(16,536);
   VbbHcc_algo_Z_pt__17->SetBinContent(17,358);
   VbbHcc_algo_Z_pt__17->SetBinContent(18,260);
   VbbHcc_algo_Z_pt__17->SetBinContent(19,203);
   VbbHcc_algo_Z_pt__17->SetBinContent(20,144);
   VbbHcc_algo_Z_pt__17->SetBinContent(21,102);
   VbbHcc_algo_Z_pt__17->SetBinContent(22,67);
   VbbHcc_algo_Z_pt__17->SetBinContent(23,70);
   VbbHcc_algo_Z_pt__17->SetBinContent(24,44);
   VbbHcc_algo_Z_pt__17->SetBinContent(25,39);
   VbbHcc_algo_Z_pt__17->SetBinContent(26,20);
   VbbHcc_algo_Z_pt__17->SetBinContent(27,25);
   VbbHcc_algo_Z_pt__17->SetBinContent(28,16);
   VbbHcc_algo_Z_pt__17->SetBinContent(29,6);
   VbbHcc_algo_Z_pt__17->SetBinContent(30,7);
   VbbHcc_algo_Z_pt__17->SetBinContent(31,6);
   VbbHcc_algo_Z_pt__17->SetBinContent(32,3);
   VbbHcc_algo_Z_pt__17->SetBinContent(33,4);
   VbbHcc_algo_Z_pt__17->SetBinContent(34,2);
   VbbHcc_algo_Z_pt__17->SetBinContent(35,5);
   VbbHcc_algo_Z_pt__17->SetBinContent(36,1);
   VbbHcc_algo_Z_pt__17->SetBinContent(37,1);
   VbbHcc_algo_Z_pt__17->SetBinContent(38,1);
   VbbHcc_algo_Z_pt__17->SetBinContent(39,1);
   VbbHcc_algo_Z_pt__17->SetEntries(315376);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt__17->SetLineColor(ci);
   VbbHcc_algo_Z_pt__17->SetLineWidth(2);
   VbbHcc_algo_Z_pt__17->SetMarkerStyle(20);
   VbbHcc_algo_Z_pt__17->SetMarkerSize(1.2);
   VbbHcc_algo_Z_pt__17->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt__17->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__17->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__17->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__17->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__17->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__17->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__17->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__17->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt__17->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__17->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__17->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__17->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__17->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__17->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_pt_fx1017[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fy1017[40] = {
   298427.3,
   1148801,
   549581.6,
   23593.97,
   5599.453,
   2529.338,
   1264.609,
   730.49,
   448.6855,
   292.4453,
   175.5014,
   131.0735,
   80.15686,
   56.62488,
   44.55507,
   24.70839,
   22.90806,
   11.61904,
   21.61986,
   8.388213,
   5.389913,
   7.164508,
   10.53853,
   2.735063,
   6.256371,
   1.301049,
   1.002822,
   0.9833817,
   0.4203482,
   0.289154,
   0.1895004,
   0.19391,
   0.000388509,
   0.09891926,
   0.001461468,
   0.1241447,
   0.07901158,
   0.0461064,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fex1017[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fey1017[40] = {
   19553.67,
   38875.55,
   26617.01,
   3856.376,
   57.89397,
   39.30176,
   26.53396,
   21.41879,
   17.04639,
   14.99561,
   7.935164,
   9.047571,
   5.134844,
   6.377063,
   6.440516,
   1.65175,
   4.261274,
   1.09507,
   6.582725,
   1.024782,
   0.6614663,
   4.313106,
   5.583309,
   0.5480316,
   4.411361,
   0.3845173,
   0.3603044,
   0.3873134,
   0.1702461,
   0.1443479,
   0.1106823,
   0.1134201,
   0.000388509,
   0.06919015,
   0.001461468,
   0.08852882,
   0.07901158,
   0.0461064,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_Z_pt_fx1017,Graph_from_VbbHcc_algo_Z_pt_fy1017,Graph_from_VbbHcc_algo_Z_pt_fex1017,Graph_from_VbbHcc_algo_Z_pt_fey1017);
   gre->SetName("Graph_from_VbbHcc_algo_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_pt1017 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_pt1017","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->SetMaximum(1306445);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_pt1017);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_pt","MC unc. (stat.)","fl");

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
   Z_pt_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__18 = new TH1D("data_mc_ratio__18","",40,0,2000);
   data_mc_ratio__18->SetBinContent(1,0.04378285);
   data_mc_ratio__18->SetBinContent(2,0.02858283);
   data_mc_ratio__18->SetBinContent(3,0.1027563);
   data_mc_ratio__18->SetBinContent(4,2.183863);
   data_mc_ratio__18->SetBinContent(5,6.633327);
   data_mc_ratio__18->SetBinContent(6,14.21795);
   data_mc_ratio__18->SetBinContent(7,25.59447);
   data_mc_ratio__18->SetBinContent(8,29.84983);
   data_mc_ratio__18->SetBinContent(9,29.47053);
   data_mc_ratio__18->SetBinContent(10,26.04932);
   data_mc_ratio__18->SetBinContent(11,26.03398);
   data_mc_ratio__18->SetBinContent(12,22.02581);
   data_mc_ratio__18->SetBinContent(13,23.55382);
   data_mc_ratio__18->SetBinContent(14,23.11705);
   data_mc_ratio__18->SetBinContent(15,17.57376);
   data_mc_ratio__18->SetBinContent(16,21.69304);
   data_mc_ratio__18->SetBinContent(17,15.62769);
   data_mc_ratio__18->SetBinContent(18,22.37707);
   data_mc_ratio__18->SetBinContent(19,9.389515);
   data_mc_ratio__18->SetBinContent(20,17.16695);
   data_mc_ratio__18->SetBinContent(21,18.92424);
   data_mc_ratio__18->SetBinContent(22,9.351654);
   data_mc_ratio__18->SetBinContent(23,6.642292);
   data_mc_ratio__18->SetBinContent(24,16.08738);
   data_mc_ratio__18->SetBinContent(25,6.233645);
   data_mc_ratio__18->SetBinContent(26,15.37221);
   data_mc_ratio__18->SetBinContent(27,24.92965);
   data_mc_ratio__18->SetBinContent(28,16.27039);
   data_mc_ratio__18->SetBinContent(29,14.27388);
   data_mc_ratio__18->SetBinContent(30,24.20855);
   data_mc_ratio__18->SetBinContent(31,31.6622);
   data_mc_ratio__18->SetBinContent(32,15.47109);
   data_mc_ratio__18->SetBinContent(33,10295.77);
   data_mc_ratio__18->SetBinContent(34,20.21851);
   data_mc_ratio__18->SetBinContent(35,3421.217);
   data_mc_ratio__18->SetBinContent(36,8.055117);
   data_mc_ratio__18->SetBinContent(37,12.65637);
   data_mc_ratio__18->SetBinContent(38,21.68897);
   data_mc_ratio__18->SetBinError(1,0.0003830299);
   data_mc_ratio__18->SetBinError(2,0.0001577358);
   data_mc_ratio__18->SetBinError(3,0.0004324025);
   data_mc_ratio__18->SetBinError(4,0.009620822);
   data_mc_ratio__18->SetBinError(5,0.03441858);
   data_mc_ratio__18->SetBinError(6,0.07497476);
   data_mc_ratio__18->SetBinError(7,0.142264);
   data_mc_ratio__18->SetBinError(8,0.2021454);
   data_mc_ratio__18->SetBinError(9,0.2562849);
   data_mc_ratio__18->SetBinError(10,0.298453);
   data_mc_ratio__18->SetBinError(11,0.3851501);
   data_mc_ratio__18->SetBinError(12,0.4099289);
   data_mc_ratio__18->SetBinError(13,0.5420762);
   data_mc_ratio__18->SetBinError(14,0.6389437);
   data_mc_ratio__18->SetBinError(15,0.6280348);
   data_mc_ratio__18->SetBinError(16,0.9369966);
   data_mc_ratio__18->SetBinError(17,0.8259489);
   data_mc_ratio__18->SetBinError(18,1.387767);
   data_mc_ratio__18->SetBinError(19,0.6590147);
   data_mc_ratio__18->SetBinError(20,1.430579);
   data_mc_ratio__18->SetBinError(21,1.873779);
   data_mc_ratio__18->SetBinError(22,1.142486);
   data_mc_ratio__18->SetBinError(23,0.7939057);
   data_mc_ratio__18->SetBinError(24,2.425264);
   data_mc_ratio__18->SetBinError(25,0.9981821);
   data_mc_ratio__18->SetBinError(26,3.43733);
   data_mc_ratio__18->SetBinError(27,4.98593);
   data_mc_ratio__18->SetBinError(28,4.067597);
   data_mc_ratio__18->SetBinError(29,5.827288);
   data_mc_ratio__18->SetBinError(30,9.149972);
   data_mc_ratio__18->SetBinError(31,12.92604);
   data_mc_ratio__18->SetBinError(32,8.93224);
   data_mc_ratio__18->SetBinError(33,5147.886);
   data_mc_ratio__18->SetBinError(34,14.29665);
   data_mc_ratio__18->SetBinError(35,1530.015);
   data_mc_ratio__18->SetBinError(36,8.055117);
   data_mc_ratio__18->SetBinError(37,12.65637);
   data_mc_ratio__18->SetBinError(38,21.68897);
   data_mc_ratio__18->SetMinimum(0.4);
   data_mc_ratio__18->SetMaximum(1.6);
   data_mc_ratio__18->SetEntries(1.397635);
   data_mc_ratio__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__18->SetLineColor(ci);
   data_mc_ratio__18->SetLineWidth(2);
   data_mc_ratio__18->SetMarkerStyle(20);
   data_mc_ratio__18->SetMarkerSize(1.2);
   data_mc_ratio__18->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__18->GetXaxis()->SetRange(7,30);
   data_mc_ratio__18->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__18->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__18->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__18->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__18->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__18->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__18->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__18->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1018[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1018[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1018[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1018[40] = {
   0.06552238,
   0.0338401,
   0.04843141,
   0.1634475,
   0.01033922,
   0.01553836,
   0.02098195,
   0.02932113,
   0.03799185,
   0.05127664,
   0.04521425,
   0.0690267,
   0.06405994,
   0.1126195,
   0.1445518,
   0.06684976,
   0.1860164,
   0.09424796,
   0.3044758,
   0.1221693,
   0.122723,
   0.60201,
   0.5297996,
   0.2003726,
   0.705099,
   0.295544,
   0.3592905,
   0.3938587,
   0.4050122,
   0.4992077,
   0.584074,
   0.5849109,
   1,
   0.6994609,
   1,
   0.71311,
   1,
   1,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1018,Graph_from_mc_statistical_error_fy1018,Graph_from_mc_statistical_error_fex1018,Graph_from_mc_statistical_error_fey1018);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1018 = new TH1F("Graph_Graph_from_mc_statistical_error1018","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1018->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1018->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1018->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1018->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1018);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_16->cd();
   Z_pt_VbbHcc_16->Modified();
   Z_pt_VbbHcc_16->cd();
   Z_pt_VbbHcc_16->SetSelected(Z_pt_VbbHcc_16);
}
