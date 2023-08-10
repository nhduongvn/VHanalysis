void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Aug 10 12:31:15 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(0,0,1,1);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.845438,6.525,11.51099);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.592364e+09);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0.001475429);
   st_stack_23->SetMaximum(1.189459e+10);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,13268.22);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,10879.16);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,8289.997);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,6509.765);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,6120.14);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,7664.605);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,7739.811);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,7529.004);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,8484.903);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,9861.298);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,10059.26);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,11745.05);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,14115.46);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,12579.02);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,13215.94);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,15088.06);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,11729.45);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,9634.659);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,4883.086);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,4331.79);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,3883.28);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,2701.333);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2483.719);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,2852.703);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,2680.828);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1424.625);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,3239.344);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,1710.71);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,926.2048);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1580.506);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1342.575);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,1269.313);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,964.0724);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,1082.668);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,1263.331);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,1264.164);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1157.272);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1271.987);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1381.329);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1427.57);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1485.626);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,2205.207);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,1491.979);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,2079.864);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1750.189);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1486.592);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1378.023);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,705.198);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,600.7436);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,780.6535);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,565.9428);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,665.7067);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,1670.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,761.5001);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,404.2835);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1748.528);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,652.8565);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,389.5585);
   VbbHcc_tags_H_dR_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.05476569);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,46.71583);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,55.71943);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,48.48357);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,51.86707);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,49.69006);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,41.50807);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,49.00842);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,52.68893);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,57.72645);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,63.76921);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,60.61731);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,74.32034);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,79.38041);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,84.2457);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,72.32681);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,68.7014);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,55.39532);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,51.73672);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,42.44996);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,36.96909);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,28.74276);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,20.63009);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,22.67216);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,15.3657);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,12.96186);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,12.81379);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,8.884261);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,6.791385);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,7.745625);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.05476569);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,2.861136);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,3.121212);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,2.810524);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,3.040859);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,2.886751);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,2.548056);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.872872);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,3.056057);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,3.165809);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,3.341701);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,3.170191);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,3.563894);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,3.653945);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,3.818043);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,3.442973);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,3.370359);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,2.953754);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,2.885688);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.552263);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,2.497878);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,2.149671);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.743444);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.955406);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.618478);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,1.402522);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.484499);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.297065);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,1.054765);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,1.23647);
   VbbHcc_tags_H_dR_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.6370233);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,737.021);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,1034.27);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,1030.754);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,1061.071);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,1028.775);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,1020.115);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,1008.963);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,1040.613);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,1100.531);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,1188.692);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,1293.767);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,1399.46);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,1491.523);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,1547.607);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,1470.964);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,1347.115);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,1169.479);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,1014.178);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,860.0647);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,716.7571);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,579.9455);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,468.9202);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,375.3409);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,302.5904);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,251.0752);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,211.2664);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,166.9237);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,108.9538);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,92.48149);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.1961696);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,6.689022);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,7.964566);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,7.975124);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,8.108208);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,7.965439);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,7.937184);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,7.888182);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,8.00169);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,8.233152);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,8.555935);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,8.92901);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,9.303243);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,9.612686);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,9.800712);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,9.556656);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,9.138369);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,8.512194);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,7.918112);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,7.293092);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,6.656289);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,5.971061);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,5.372843);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,4.793478);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,4.304775);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,3.927763);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,3.597628);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,3.193579);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,2.5728);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,2.371912);
   VbbHcc_tags_H_dR_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,145.4029);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,179.7634);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,165.3125);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,161.2043);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,115.1247);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,102.1156);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,100.6894);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,106.4594);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,125.8281);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,149.6873);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,160.6364);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,185.6561);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,195.5894);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,222.892);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,200.1028);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,192.5936);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,157.6148);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,130.7656);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,106.7362);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,81.20971);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,64.35832);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,46.93149);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,48.53906);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,38.86061);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,29.30731);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,23.65159);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,21.11766);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,16.04922);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,11.37968);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,7.775983);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,6.823265);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,8.906695);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,11.19684);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,6.943535);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,5.348071);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,5.287924);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,7.670819);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,7.170488);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,9.38471);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,7.80473);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,10.06794);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,9.359);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,12.38637);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,10.08558);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,9.969454);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,9.442881);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,8.239005);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,7.805175);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,6.108011);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,7.018225);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,3.57467);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,6.642484);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,3.397396);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,2.968008);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,2.590425);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,2.260867);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,2.218628);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.601199);
   VbbHcc_tags_H_dR_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,14.10583);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,16.44483);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,11.4279);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,18.76681);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,10.09372);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,12.29709);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,13.42089);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,8.656007);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,18.13628);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,20.52421);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,13.01656);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,24.28666);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,14.43863);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,16.04997);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,18.29214);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,17.07208);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,16.4525);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,10.71944);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,6.776821);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,7.737454);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,7.95764);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,3.684156);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,8.431987);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.662104);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,3.936006);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,3.797861);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.99329);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,2.134875);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.8044326);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,2.573038);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,3.848369);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,2.512784);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,10.7547);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.437838);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,3.15612);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,2.567832);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,2.357608);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,4.377273);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,4.033131);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,2.529644);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,5.29678);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.221859);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,3.266407);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,3.365622);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,3.327148);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,3.355066);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,2.403246);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.122497);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,2.314714);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,2.372197);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.8301351);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,3.102997);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.5234348);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,2.150648);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,2.166505);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,0.6473528);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.6480185);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.2942929);
   VbbHcc_tags_H_dR_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.4520427);
   VbbHcc_tags_H_dR_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,1.062597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,1.416796);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,1.062597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,1.062597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.6134909);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.6134909);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.6134909);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,3.911801);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,3.073558);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,4.750044);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.676486);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.676486);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,1.117657);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,1.117657);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,2.235315);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,0.8382431);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.676486);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,1.9559);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.235315);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,4.191215);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,7.544187);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,5.308873);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,5.308873);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,3.911801);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,1.9559);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,3.073558);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.5588287);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.8382431);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.8382431);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.8382431);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,1.676486);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.2794144);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.045473);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.9267126);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.152055);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.6844226);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.6844226);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.5588287);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.5588287);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.7903031);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.4839599);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.6844226);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.7392609);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.7903031);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.082167);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.45188);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,1.217939);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.217939);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.045473);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.7392609);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.9267126);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.3951516);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.4839599);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.4839599);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.4839599);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.4839599);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.6844226);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.2794144);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.2794144);
   VbbHcc_tags_H_dR_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.002285779);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,2.761221);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,4.944139);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,4.434411);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,3.497241);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,2.112059);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.355467);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,1.117746);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,1.211463);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.476613);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,2.06863);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,3.040086);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,3.826393);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,4.697275);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,5.204718);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,4.994426);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,4.187546);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,3.040086);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,2.157775);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.417183);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,1.021743);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.6423038);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.4137259);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.4114402);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.4091544);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.4685846);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.5508727);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.4388695);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.2674361);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.1257178);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.002285779);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.0794452);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.1063071);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.1006781);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.08940872);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.06948166);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.05566235);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.05054621);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.05262258);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.05809656);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.06876358);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.08336044);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.09352159);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.1036192);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.1090726);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.1068464);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.0978356);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.08336044);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.0702296);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.05691543);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.04832679);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.03831663);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.03075201);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.03066694);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.03058163);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.03272737);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.03548483);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.03167268);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.02472448);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.01695179);
   VbbHcc_tags_H_dR_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.8858709);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.7163);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.967873);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.856991);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,1.439093);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,1.120752);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.9258126);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.8816979);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.9609852);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,1.164867);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,1.42419);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,1.62509);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.790222);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.881432);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.848645);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.679936);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,1.285884);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,1.09631);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.8113529);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.5866063);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.4256473);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.3851094);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.3105914);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.3135721);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.2903224);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.2289195);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.1746704);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.1174405);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.06855663);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.02298058);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.03198692);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.03425109);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.03327213);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.02929006);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.02584822);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.02349294);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.02292639);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.02393504);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.02635202);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.029138);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.03112537);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.03266851);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.03349039);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.03319728);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.03164624);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.02768705);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.02556481);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.02199281);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01870033);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01592945);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01515193);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01360725);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.01367239);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.01315577);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.011682);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.01020435);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.008367289);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.006392939);
   VbbHcc_tags_H_dR_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.01593033);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.009103048);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.01365457);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.0182061);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01137881);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.006827286);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.009103048);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.006827286);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.009103048);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.01137881);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.0060211);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.005574455);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.006436827);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.005088758);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.003941735);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.003941735);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002275762);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002275762);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003941735);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.004551524);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.005088758);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.003218413);
   VbbHcc_tags_H_dR_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.002996568);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.005693479);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.008989704);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.009589018);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.005993136);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.003296225);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.004794509);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.003595882);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.005393822);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.003595882);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.004195195);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.002397254);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.002996568);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.002996568);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.0008989704);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.005094166);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.002696911);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.002397254);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.001498284);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001498284);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001498284);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.001198627);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0005993136);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.003296225);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0002996568);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0005993136);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.000947598);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.001306174);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001641288);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.001695115);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001340106);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.0009938492);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.001198627);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.001038042);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.001271336);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.001038042);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.001121213);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0008475574);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.000947598);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.000947598);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.0005190208);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.001235517);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0008989704);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0008475574);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.000670053);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.000670053);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.000670053);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.0005993136);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0004237787);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.0009938492);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0002996568);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0004237787);
   VbbHcc_tags_H_dR_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__62 = new TH1D("VbbHcc_tags_H_dR__62","",30,0,6);
   VbbHcc_tags_H_dR__62->SetBinContent(2,13);
   VbbHcc_tags_H_dR__62->SetBinContent(3,14878);
   VbbHcc_tags_H_dR__62->SetBinContent(4,15769);
   VbbHcc_tags_H_dR__62->SetBinContent(5,11871);
   VbbHcc_tags_H_dR__62->SetBinContent(6,11200);
   VbbHcc_tags_H_dR__62->SetBinContent(7,10642);
   VbbHcc_tags_H_dR__62->SetBinContent(8,10696);
   VbbHcc_tags_H_dR__62->SetBinContent(9,10902);
   VbbHcc_tags_H_dR__62->SetBinContent(10,11343);
   VbbHcc_tags_H_dR__62->SetBinContent(11,12435);
   VbbHcc_tags_H_dR__62->SetBinContent(12,13554);
   VbbHcc_tags_H_dR__62->SetBinContent(13,15129);
   VbbHcc_tags_H_dR__62->SetBinContent(14,17248);
   VbbHcc_tags_H_dR__62->SetBinContent(15,18550);
   VbbHcc_tags_H_dR__62->SetBinContent(16,19949);
   VbbHcc_tags_H_dR__62->SetBinContent(17,19191);
   VbbHcc_tags_H_dR__62->SetBinContent(18,17678);
   VbbHcc_tags_H_dR__62->SetBinContent(19,16232);
   VbbHcc_tags_H_dR__62->SetBinContent(20,13964);
   VbbHcc_tags_H_dR__62->SetBinContent(21,11619);
   VbbHcc_tags_H_dR__62->SetBinContent(22,9137);
   VbbHcc_tags_H_dR__62->SetBinContent(23,7334);
   VbbHcc_tags_H_dR__62->SetBinContent(24,5754);
   VbbHcc_tags_H_dR__62->SetBinContent(25,4616);
   VbbHcc_tags_H_dR__62->SetBinContent(26,3637);
   VbbHcc_tags_H_dR__62->SetBinContent(27,2990);
   VbbHcc_tags_H_dR__62->SetBinContent(28,2546);
   VbbHcc_tags_H_dR__62->SetBinContent(29,2337);
   VbbHcc_tags_H_dR__62->SetBinContent(30,1644);
   VbbHcc_tags_H_dR__62->SetBinContent(31,1377);
   VbbHcc_tags_H_dR__62->SetEntries(314264);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__62->SetLineColor(ci);
   VbbHcc_tags_H_dR__62->SetLineWidth(2);
   VbbHcc_tags_H_dR__62->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__62->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1045[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1045[30] = {
   0,
   0.6940748,
   14220.1,
   12176.98,
   9559.019,
   7809.733,
   7330.131,
   8844.245,
   8915.066,
   8742.117,
   9791.478,
   11289.24,
   11594.53,
   13436.82,
   15907.07,
   14465.16,
   14990.49,
   16725.53,
   13137.35,
   10847.98,
   5904.421,
   5176.636,
   4565.917,
   3243.503,
   2940.269,
   3212.748,
   2979.709,
   1678.611,
   3439.161,
   1845.663};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1045[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1045[30] = {
   0,
   0.2036837,
   1580.545,
   1342.625,
   1269.376,
   964.2365,
   1082.725,
   1263.374,
   1264.206,
   1157.332,
   1272.045,
   1381.397,
   1427.625,
   1485.703,
   2205.252,
   1492.072,
   2079.917,
   1750.248,
   1486.654,
   1378.076,
   705.285,
   600.8213,
   780.7145,
   565.9832,
   665.7674,
   1670.65,
   761.5205,
   404.3169,
   1748.533,
   652.8667};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1045,Graph_from_VbbHcc_tags_H_dR_fy1045,Graph_from_VbbHcc_tags_H_dR_fex1045,Graph_from_VbbHcc_tags_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1045","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMinimum(20.32335);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMaximum(20323.35);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__63 = new TH1D("data_mc_ratio__63","",30,0,6);
   data_mc_ratio__63->SetBinContent(2,18.72997);
   data_mc_ratio__63->SetBinContent(3,1.046265);
   data_mc_ratio__63->SetBinContent(4,1.294985);
   data_mc_ratio__63->SetBinContent(5,1.241864);
   data_mc_ratio__63->SetBinContent(6,1.434108);
   data_mc_ratio__63->SetBinContent(7,1.451816);
   data_mc_ratio__63->SetBinContent(8,1.209374);
   data_mc_ratio__63->SetBinContent(9,1.222874);
   data_mc_ratio__63->SetBinContent(10,1.297512);
   data_mc_ratio__63->SetBinContent(11,1.269982);
   data_mc_ratio__63->SetBinContent(12,1.200612);
   data_mc_ratio__63->SetBinContent(13,1.304839);
   data_mc_ratio__63->SetBinContent(14,1.283637);
   data_mc_ratio__63->SetBinContent(15,1.166148);
   data_mc_ratio__63->SetBinContent(16,1.379107);
   data_mc_ratio__63->SetBinContent(17,1.280212);
   data_mc_ratio__63->SetBinContent(18,1.056947);
   data_mc_ratio__63->SetBinContent(19,1.235561);
   data_mc_ratio__63->SetBinContent(20,1.287244);
   data_mc_ratio__63->SetBinContent(21,1.967847);
   data_mc_ratio__63->SetBinContent(22,1.765046);
   data_mc_ratio__63->SetBinContent(23,1.606249);
   data_mc_ratio__63->SetBinContent(24,1.774008);
   data_mc_ratio__63->SetBinContent(25,1.569924);
   data_mc_ratio__63->SetBinContent(26,1.132053);
   data_mc_ratio__63->SetBinContent(27,1.003454);
   data_mc_ratio__63->SetBinContent(28,1.51673);
   data_mc_ratio__63->SetBinContent(29,0.6795262);
   data_mc_ratio__63->SetBinContent(30,0.890737);
   data_mc_ratio__63->SetBinContent(31,1.325555);
   data_mc_ratio__63->SetBinError(2,5.194759);
   data_mc_ratio__63->SetBinError(3,0.008577674);
   data_mc_ratio__63->SetBinError(4,0.01031247);
   data_mc_ratio__63->SetBinError(5,0.01139804);
   data_mc_ratio__63->SetBinError(6,0.01355105);
   data_mc_ratio__63->SetBinError(7,0.01407343);
   data_mc_ratio__63->SetBinError(8,0.01169365);
   data_mc_ratio__63->SetBinError(9,0.01171193);
   data_mc_ratio__63->SetBinError(10,0.01218281);
   data_mc_ratio__63->SetBinError(11,0.01138871);
   data_mc_ratio__63->SetBinError(12,0.01031262);
   data_mc_ratio__63->SetBinError(13,0.01060845);
   data_mc_ratio__63->SetBinError(14,0.009774012);
   data_mc_ratio__63->SetBinError(15,0.008562127);
   data_mc_ratio__63->SetBinError(16,0.009764216);
   data_mc_ratio__63->SetBinError(17,0.009241298);
   data_mc_ratio__63->SetBinError(18,0.007949443);
   data_mc_ratio__63->SetBinError(19,0.009697914);
   data_mc_ratio__63->SetBinError(20,0.01089321);
   data_mc_ratio__63->SetBinError(21,0.01825606);
   data_mc_ratio__63->SetBinError(22,0.01846521);
   data_mc_ratio__63->SetBinError(23,0.01875609);
   data_mc_ratio__63->SetBinError(24,0.02338679);
   data_mc_ratio__63->SetBinError(25,0.02310712);
   data_mc_ratio__63->SetBinError(26,0.01877133);
   data_mc_ratio__63->SetBinError(27,0.01835108);
   data_mc_ratio__63->SetBinError(28,0.03005931);
   data_mc_ratio__63->SetBinError(29,0.01405649);
   data_mc_ratio__63->SetBinError(30,0.02196841);
   data_mc_ratio__63->SetBinError(31,0.4983869);
   data_mc_ratio__63->SetMinimum(0.4);
   data_mc_ratio__63->SetMaximum(1.6);
   data_mc_ratio__63->SetEntries(51.98636);
   data_mc_ratio__63->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__63->SetLineColor(ci);
   data_mc_ratio__63->SetLineWidth(2);
   data_mc_ratio__63->SetMarkerStyle(20);
   data_mc_ratio__63->SetMarkerSize(1.2);
   data_mc_ratio__63->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__63->GetXaxis()->SetRange(1,31);
   data_mc_ratio__63->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__63->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__63->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__63->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__63->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__63->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__63->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__63->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__63->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__63->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__63->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__63->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__63->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__63->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1046[30] = {
   0,
   0.2934607,
   0.1111486,
   0.1102593,
   0.1327935,
   0.123466,
   0.1477088,
   0.142847,
   0.1418056,
   0.1323858,
   0.1299135,
   0.122364,
   0.1231292,
   0.1105695,
   0.1386334,
   0.1031494,
   0.1387491,
   0.1046453,
   0.1131624,
   0.1270353,
   0.1194503,
   0.116064,
   0.1709874,
   0.1744975,
   0.2264308,
   0.5200066,
   0.2555687,
   0.2408639,
   0.5084184,
   0.3537303};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.3759921);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.624008);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
