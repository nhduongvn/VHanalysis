void Z_dR_VbbHcc_18()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_18/Z_dR_VbbHcc_18
//=========  (Tue Nov 22 09:15:08 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_18 = new TCanvas("Z_dR_VbbHcc_18", "Z_dR_VbbHcc_18",0,0,600,600);
   Z_dR_VbbHcc_18->SetHighLightColor(2);
   Z_dR_VbbHcc_18->Range(0,0,1,1);
   Z_dR_VbbHcc_18->SetFillColor(0);
   Z_dR_VbbHcc_18->SetFillStyle(4000);
   Z_dR_VbbHcc_18->SetBorderMode(0);
   Z_dR_VbbHcc_18->SetBorderSize(2);
   Z_dR_VbbHcc_18->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-6505.742,10.52419,6499246);
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
   st->SetMaximum(5570162);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",50,0,10);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(5848671);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetRange(1,50);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetLabelSize(0.035);
   st_stack_19->GetXaxis()->SetTitleSize(0.035);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetLabelSize(0.035);
   st_stack_19->GetZaxis()->SetTitleSize(0.035);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",50,0,10);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,1630.667);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,1762638);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,2361931);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,1728349);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,1558576);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,1409090);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,1363559);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,1320809);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,1325887);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,1435363);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,1516722);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,1640384);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,1770881);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,1881384);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,1997713);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,1242028);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,829226.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,586405.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,385385.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,283972.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,221940);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,128566.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,91958.41);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,49291.58);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,32434.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,11113.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,5356.393);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1248.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,1630.667);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,90255.14);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,96070.36);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,56550.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,53736.09);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,58706.97);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,49240.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,48045.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,49704.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,85000.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,52198.73);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,56309.93);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,56348.93);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,57259.62);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,58900.97);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,48393.15);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,37740.44);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,36740.59);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,25898.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,22234.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,19896.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,15002.38);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,12810.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,9204.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,7298.557);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,4197.483);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,3118.421);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1248.5);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(16133);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",50,0,10);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,2.488111);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,4540.157);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,8477.44);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,9960.147);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,12247.54);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,14184.46);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,16218.81);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,18310.27);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,20158.93);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,21819.08);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,23662.15);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,25345.24);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,27155);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,28430.13);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,27552.47);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,15217.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,9397.627);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,6057.109);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,3956.348);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,2504.194);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,1594.989);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,942.3614);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,549.7656);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,264.8668);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,120.1952);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,49.71848);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,10.35593);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.8989778);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.7023534);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,30.83294);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,40.64795);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,44.62964);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,52.05634);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,52.02694);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,58.11205);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,65.62076);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,64.70461);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,68.49437);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,69.57298);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,73.371);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,74.8957);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,77.24853);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,77.67187);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,55.96282);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,44.91999);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,36.32722);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,29.77066);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,23.44319);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,19.16352);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,14.61035);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,11.16417);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,7.587048);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,5.441032);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,3.222044);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.388034);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.428903);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(3753295);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",50,0,10);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,40.54704);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,60801.65);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,118852.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,142228.9);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,173512.6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,203204);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,231249.3);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,259355.6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,287615);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,318418.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,350843);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,385087);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,418902.3);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,449211.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,440223.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,232594.2);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,132768.6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,79041.41);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,46799.34);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,27150.62);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,15262.62);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,8270.879);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,4255.458);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,1986.801);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,832.3095);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,296.8493);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,69.76523);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,3.650227);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,1.733369);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,71.49977);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,99.83525);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,108.7919);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,120.8923);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,130.3636);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,139.2607);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,147.2555);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,154.8316);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,163.7618);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,171.097);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,179.3703);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,187.6493);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,194.7894);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,192.7124);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,140.5071);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,106.1049);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,81.64942);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,62.87667);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,48.18676);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,36.3199);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,26.66636);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,18.46561);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,12.66218);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,8.832662);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,4.942545);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,2.268646);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,0.5026271);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(6.525334e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",50,0,10);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(2,1.647513);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,2131.83);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,5306.995);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,7795.28);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,7690.027);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,6311.46);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,5008.352);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,4261.644);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,3800.017);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,3543.081);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,3472.395);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,3520.182);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,3936.542);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,3955.801);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,4057.626);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,2124.092);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,1309.609);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,881.5527);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,610.6667);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,451.4722);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,266.0604);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,193.5558);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,101.1566);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,58.57795);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,33.4125);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,9.750879);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,3.386211);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(2,1.175141);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,37.37655);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,58.60387);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,69.6087);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,70.15083);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,62.42265);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,55.49403);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,56.46046);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,54.10057);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,47.47026);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,45.36626);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,46.17637);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,53.2555);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,50.31636);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,49.25145);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,37.14616);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,36.35037);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,22.55656);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,18.89718);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,17.61666);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,12.36532);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,10.79007);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,7.543404);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,5.735645);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,4.270185);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,2.354805);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,1.410971);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(129105);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",50,0,10);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(2,2.361694);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,3720.554);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,3726.221);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,2752.212);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,2376.94);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,2060.482);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,1906.18);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,2050.898);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,1915.938);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,1993.766);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,2167.333);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,2383.667);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,2662.727);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,3073.377);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,2949.494);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,1875.574);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,1187.92);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,802.2411);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,593.0758);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,392.8964);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,244.9099);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,189.6428);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,120.7676);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,55.17017);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,23.7323);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,15.34297);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(2,2.361694);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,98.53741);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,97.81991);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,91.04788);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,78.66814);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,76.71637);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,73.37567);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,76.55834);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,71.50858);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,71.92821);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,73.53701);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,77.81154);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,82.89082);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,96.61238);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,86.95126);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,72.21485);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,55.07076);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,45.21343);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,38.68985);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,32.11309);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,24.48427);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,22.0214);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,19.91083);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,12.07904);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,7.936018);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,5.886048);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(17149);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",50,0,10);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(2,0.5277893);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,52.70313);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,71.18361);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(5,54.5405);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(6,57.78004);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,59.09911);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(8,61.44981);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,66.92287);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,69.04206);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,82.80417);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,86.2597);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,97.05989);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,97.69543);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(15,113.207);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,132.7703);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,69.11257);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(18,48.00456);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(19,36.90903);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,17.47626);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,13.6303);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,10.52326);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(23,5.960135);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(24,2.478834);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,2.795431);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(26,2.277637);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(27,0.6064276);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(2,0.3824353);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,4.612562);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,5.201501);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(5,4.578294);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(6,4.682621);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,4.690716);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(8,5.09323);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,5.17124);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,5.804553);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,5.663888);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,5.899595);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,6.169292);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,6.085225);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(15,6.676884);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,7.118408);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,5.125935);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(18,4.372307);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(19,3.781925);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,2.513738);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,2.270356);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,1.965178);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(23,1.433332);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(24,0.9416155);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.99815);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(26,0.9445176);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(27,0.4309678);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(3629);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",50,0,10);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,97.62243);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,166.662);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,189.5837);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,216.2008);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,209.3488);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,200.2138);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,184.9283);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,169.2921);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,152.4861);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,142.9715);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,148.5947);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,145.5722);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,148.3928);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,143.8521);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,69.43787);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,37.2062);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,25.8307);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(20,14.97986);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,10.86546);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,7.014826);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(23,5.638112);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,1.673974);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,1.120562);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,0.9750969);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,0.7120303);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,4.895389);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,6.938599);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,6.757454);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,7.283067);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,7.119616);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,7.376559);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,6.986117);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,6.407289);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,6.997438);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,5.946773);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,6.118056);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,5.996839);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,5.987603);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,5.942785);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,4.288908);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,2.957116);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,2.514394);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(20,1.84778);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,1.622267);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,1.289944);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(23,1.179848);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.6428158);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.564328);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.4916306);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.4130746);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(10826);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",50,0,10);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,63.49773);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,125.6089);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,145.4084);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,170.1014);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,178.7611);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,178.2162);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,184.9291);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,175.0642);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,169.3805);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,148.9156);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,160.188);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,181.2366);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,188.7702);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,175.6293);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,74.96853);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,33.07844);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,19.61634);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,11.95734);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,4.884965);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,5.503888);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,2.523294);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,1.304189);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.674016);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.2214053);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.8498345);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,3.962659);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,5.514864);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,6.372422);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,7.257495);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,6.735019);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,7.816995);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,6.718453);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,6.556606);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,11.34804);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,6.072376);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,6.697894);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,6.920401);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,6.856971);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,6.754461);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,4.268742);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,2.799728);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,2.76867);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,1.692822);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,1.13457);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,1.162881);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.7009246);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.5490563);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3505841);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.2214053);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.5089014);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(10313);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",50,0,10);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(2,0.01351217);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,14.40705);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,33.90676);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,45.28229);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,56.36748);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,64.91231);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,67.31623);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,66.8634);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,65.3267);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,62.63729);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,61.33559);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,60.46357);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,62.49132);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,64.9457);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,62.01127);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,19.79042);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,7.415037);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,3.259797);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.611742);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.963039);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.5620109);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.3666834);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.1992762);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.08715552);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.04352786);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.02304589);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.01063771);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(2,0.006093054);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.234316);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.3639953);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.3945838);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.4178786);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.4490454);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.4641321);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.4389421);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.4598891);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.4492283);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.4284045);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.4240805);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.4350657);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.449536);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.445639);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.2404167);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.1777345);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.1021132);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.06616879);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.05339434);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03864424);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.03138464);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.02341414);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.01535207);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.01123972);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.008056207);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.005344965);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(326928);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",50,0,10);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(2,0.00660658);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,6.277178);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,13.44137);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,18.57292);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,23.12043);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,24.78704);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,23.141);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,19.16462);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,15.47185);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,13.04543);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,11.78217);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,11.74098);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,12.05104);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,12.77651);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,12.20643);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,4.915535);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,2.262878);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,1.152279);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.6312126);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.3623373);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.2087449);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.1163202);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.06479694);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.02822698);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.00726582);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.005942201);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.001185065);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(2,0.00209386);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.06310362);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.09235198);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.1086858);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.121369);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.125788);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.1215752);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.1106512);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.09941817);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.09123988);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.08671071);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.08651371);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.08766132);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.09026485);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.08828614);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.05590613);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.03790652);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02704688);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01996088);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01511096);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01144264);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.00854596);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.006376582);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.004117364);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.002109487);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.001888268);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.0008455747);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",50,0,10);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.429176);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.74394);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,1.090049);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,1.20921);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,1.266344);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,1.178793);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,1.067442);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.9627003);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.7849379);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.7820752);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.7580041);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.7468561);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.924293);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.7962596);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.2896472);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.1223826);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.06497053);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.04088759);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(21,0.02408494);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.01796038);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.00355944);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(24,0.01212997);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.002061483);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.03380674);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.04413181);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.05467432);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.05777041);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.0591098);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.055725);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.05336928);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.05050216);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.04531797);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.04522955);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.044987);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.04369626);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.04883978);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.04622935);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.02889333);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.01782165);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.01282375);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.01003508);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(21,0.007357819);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.006568205);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.002613715);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(24,0.00567027);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.002061483);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",50,0,10);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,3736.025);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,7866.594);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,11473.48);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,12595.03);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,10214.76);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,6823.926);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,4900.005);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,4104.177);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,3639.719);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,3330.167);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,3625.456);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,3746.974);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,4202.088);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,4080.627);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,1909.011);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,1038.983);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,534.3973);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,292.7034);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,215.542);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,92.33726);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,75.0481);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,43.32992);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,29.97782);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,8.060054);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,164.8787);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,234.7369);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,282.8973);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,300.2239);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,268.343);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,218.6155);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,185.3806);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,169.0906);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,161.1618);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,151.9298);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,159.7715);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,161.3719);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,170.5233);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,169.1434);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,116.5582);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,84.26436);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,60.14624);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,45.49695);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,38.91847);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,25.70127);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,23.11248);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,17.73917);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,14.52363);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,7.398425);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(14113);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__37 = new TH1D("VbbHcc_tags_Z_dR__37","",50,0,10);
   VbbHcc_tags_Z_dR__37->SetBinContent(2,718);
   VbbHcc_tags_Z_dR__37->SetBinContent(3,1072242);
   VbbHcc_tags_Z_dR__37->SetBinContent(4,1129989);
   VbbHcc_tags_Z_dR__37->SetBinContent(5,802559);
   VbbHcc_tags_Z_dR__37->SetBinContent(6,702216);
   VbbHcc_tags_Z_dR__37->SetBinContent(7,644065);
   VbbHcc_tags_Z_dR__37->SetBinContent(8,613933);
   VbbHcc_tags_Z_dR__37->SetBinContent(9,604003);
   VbbHcc_tags_Z_dR__37->SetBinContent(10,611627);
   VbbHcc_tags_Z_dR__37->SetBinContent(11,637520);
   VbbHcc_tags_Z_dR__37->SetBinContent(12,680029);
   VbbHcc_tags_Z_dR__37->SetBinContent(13,744236);
   VbbHcc_tags_Z_dR__37->SetBinContent(14,827450);
   VbbHcc_tags_Z_dR__37->SetBinContent(15,905435);
   VbbHcc_tags_Z_dR__37->SetBinContent(16,925024);
   VbbHcc_tags_Z_dR__37->SetBinContent(17,543066);
   VbbHcc_tags_Z_dR__37->SetBinContent(18,343093);
   VbbHcc_tags_Z_dR__37->SetBinContent(19,232664);
   VbbHcc_tags_Z_dR__37->SetBinContent(20,159239);
   VbbHcc_tags_Z_dR__37->SetBinContent(21,108409);
   VbbHcc_tags_Z_dR__37->SetBinContent(22,71771);
   VbbHcc_tags_Z_dR__37->SetBinContent(23,45634);
   VbbHcc_tags_Z_dR__37->SetBinContent(24,27119);
   VbbHcc_tags_Z_dR__37->SetBinContent(25,15169);
   VbbHcc_tags_Z_dR__37->SetBinContent(26,7266);
   VbbHcc_tags_Z_dR__37->SetBinContent(27,2950);
   VbbHcc_tags_Z_dR__37->SetBinContent(28,711);
   VbbHcc_tags_Z_dR__37->SetBinContent(29,53);
   VbbHcc_tags_Z_dR__37->SetEntries(1.245819e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__37->SetLineColor(ci);
   VbbHcc_tags_Z_dR__37->SetLineWidth(2);
   VbbHcc_tags_Z_dR__37->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__37->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__37->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__37->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__37->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__37->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1037[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1037[50] = {
   0,
   1678.259,
   1837804,
   2506573,
   1903014,
   1767522,
   1645603,
   1625297,
   1610211,
   1643976,
   1785258,
   1900649,
   2060825,
   2227784,
   2370786,
   2477105,
   1495987,
   975057,
   673808.9,
   437684.2,
   314717.5,
   239424.8,
   138253,
   97034.62,
   51691.68,
   33455.27,
   11486.96,
   5439.912,
   1253.049,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1037[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1037[50] = {
   0,
   1630.67,
   90255.39,
   96070.77,
   56550.99,
   53737.19,
   58707.84,
   49241.64,
   48046.39,
   49704.72,
   85000.4,
   52199.35,
   56310.57,
   56349.61,
   57260.36,
   58901.67,
   48393.59,
   37740.77,
   36740.78,
   25898.67,
   22234.19,
   19896.94,
   15002.44,
   12810.77,
   9204.703,
   7298.573,
   4197.492,
   3118.422,
   1248.5,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Z_dR_fx1037,Graph_from_VbbHcc_tags_Z_dR_fy1037,Graph_from_VbbHcc_tags_Z_dR_fex1037,Graph_from_VbbHcc_tags_Z_dR_fey1037);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1037 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1037","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMaximum(2862908);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",50,0,10);
   data_mc_ratio__38->SetBinContent(2,0.4278243);
   data_mc_ratio__38->SetBinContent(3,0.5834367);
   data_mc_ratio__38->SetBinContent(4,0.4508103);
   data_mc_ratio__38->SetBinContent(5,0.4217305);
   data_mc_ratio__38->SetBinContent(6,0.3972883);
   data_mc_ratio__38->SetBinContent(7,0.3913854);
   data_mc_ratio__38->SetBinContent(8,0.377736);
   data_mc_ratio__38->SetBinContent(9,0.375108);
   data_mc_ratio__38->SetBinContent(10,0.3720413);
   data_mc_ratio__38->SetBinContent(11,0.3571024);
   data_mc_ratio__38->SetBinContent(12,0.3577877);
   data_mc_ratio__38->SetBinContent(13,0.361135);
   data_mc_ratio__38->SetBinContent(14,0.3714228);
   data_mc_ratio__38->SetBinContent(15,0.3819134);
   data_mc_ratio__38->SetBinContent(16,0.3734295);
   data_mc_ratio__38->SetBinContent(17,0.3630152);
   data_mc_ratio__38->SetBinContent(18,0.3518697);
   data_mc_ratio__38->SetBinContent(19,0.3452967);
   data_mc_ratio__38->SetBinContent(20,0.3638216);
   data_mc_ratio__38->SetBinContent(21,0.3444644);
   data_mc_ratio__38->SetBinContent(22,0.2997643);
   data_mc_ratio__38->SetBinContent(23,0.3300761);
   data_mc_ratio__38->SetBinContent(24,0.2794776);
   data_mc_ratio__38->SetBinContent(25,0.2934515);
   data_mc_ratio__38->SetBinContent(26,0.2171855);
   data_mc_ratio__38->SetBinContent(27,0.256813);
   data_mc_ratio__38->SetBinContent(28,0.1307006);
   data_mc_ratio__38->SetBinContent(29,0.04229683);
   data_mc_ratio__38->SetBinError(2,0.01596626);
   data_mc_ratio__38->SetBinError(3,0.0005634395);
   data_mc_ratio__38->SetBinError(4,0.0004240887);
   data_mc_ratio__38->SetBinError(5,0.0004707568);
   data_mc_ratio__38->SetBinError(6,0.0004741005);
   data_mc_ratio__38->SetBinError(7,0.0004876854);
   data_mc_ratio__38->SetBinError(8,0.0004820897);
   data_mc_ratio__38->SetBinError(9,0.0004826549);
   data_mc_ratio__38->SetBinError(10,0.0004757161);
   data_mc_ratio__38->SetBinError(11,0.0004472454);
   data_mc_ratio__38->SetBinError(12,0.0004338721);
   data_mc_ratio__38->SetBinError(13,0.0004186145);
   data_mc_ratio__38->SetBinError(14,0.0004083172);
   data_mc_ratio__38->SetBinError(15,0.000401362);
   data_mc_ratio__38->SetBinError(16,0.0003882685);
   data_mc_ratio__38->SetBinError(17,0.0004926046);
   data_mc_ratio__38->SetBinError(18,0.0006007253);
   data_mc_ratio__38->SetBinError(19,0.0007158596);
   data_mc_ratio__38->SetBinError(20,0.0009117249);
   data_mc_ratio__38->SetBinError(21,0.001046193);
   data_mc_ratio__38->SetBinError(22,0.001118936);
   data_mc_ratio__38->SetBinError(23,0.001545147);
   data_mc_ratio__38->SetBinError(24,0.00169711);
   data_mc_ratio__38->SetBinError(25,0.002382636);
   data_mc_ratio__38->SetBinError(26,0.002547904);
   data_mc_ratio__38->SetBinError(27,0.004728311);
   data_mc_ratio__38->SetBinError(28,0.004901657);
   data_mc_ratio__38->SetBinError(29,0.005809917);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(457.8375);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__38->GetXaxis()->SetRange(1,50);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1038[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1038[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1038[50] = {
   0,
   0.9716438,
   0.04911047,
   0.03832754,
   0.02971654,
   0.03040255,
   0.03567558,
   0.03029702,
   0.02983857,
   0.03023445,
   0.04761239,
   0.02746395,
   0.02732429,
   0.02529401,
   0.02415248,
   0.02377843,
   0.03234894,
   0.03870622,
   0.054527,
   0.05917204,
   0.07064809,
   0.0831031,
   0.1085144,
   0.1320226,
   0.1780693,
   0.2181591,
   0.3654138,
   0.5732487,
   0.9963696,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,11);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.003267332);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(2.195644);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_18->cd();
   Z_dR_VbbHcc_18->Modified();
   Z_dR_VbbHcc_18->cd();
   Z_dR_VbbHcc_18->SetSelected(Z_dR_VbbHcc_18);
}
