void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Aug 22 09:20:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(0,0,1,1);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-49.22618,6.314516,49186.95);
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
   st->SetMaximum(42155.56);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(44263.33);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetRange(1,30);
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
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,10465.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,12757.77);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,13044.62);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,7138.094);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,7032.956);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,11463.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,8801.511);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,8532.061);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,5495.808);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,9036.005);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,7855.338);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,14038.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,14342.48);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,11293.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,13987.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,10156.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,12515.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,7649.81);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,7384.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,4469.291);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,3534.089);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,4734.706);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,2935.067);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,1616.397);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,1984.682);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,2037.724);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1378.193);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,1185.896);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,468.8857);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1166.151);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1544.832);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,2912.969);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,1011.357);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1033.909);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,2678.969);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,1431.999);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,1435.376);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,779.0952);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,1695.599);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1170.624);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,2017.832);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,1889.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,1411.477);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1864.416);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,1383.107);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1796.065);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1257.245);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1293.154);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,969.2142);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,757.8404);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,1184.956);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,818.8921);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,562.893);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,524.1366);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,671.1206);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,451.1549);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,543.6201);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,112.5126);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,29.9502);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,43.94011);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,40.6262);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,50.71888);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,44.23617);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,51.80113);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,54.39998);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,56.55497);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,58.34471);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,62.89775);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,70.59763);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,67.42849);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,78.44416);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,71.03608);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,70.87704);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,60.72119);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,53.74746);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,47.76645);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,42.1578);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,34.15456);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,27.80961);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,22.74721);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,20.9658);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,16.51875);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,12.49103);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,11.45627);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,8.569522);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,6.705119);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,3.939468);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,2.272589);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.948512);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,2.871849);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,3.244975);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.858121);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,3.24781);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,3.318791);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,3.461091);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,3.289838);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,3.551555);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,3.916256);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,3.553061);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,4.125312);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,3.668369);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,3.732906);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,3.449141);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,3.172252);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.946585);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,2.834713);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,2.64536);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,2.288887);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,2.105245);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.977893);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.835498);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.574487);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.570477);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,1.308612);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,1.207451);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.8153391);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.2415736);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,526.1411);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,827.6733);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,869.9465);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,941.1996);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,984.0868);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,1030.217);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,1068.118);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,1148.028);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,1245.354);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,1328.838);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,1440.611);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,1535.43);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,1625.404);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,1630.83);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,1550.679);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,1432.294);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,1277.452);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,1105.484);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,937.9981);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,773.2787);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,634.7205);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,502.0202);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,397.3989);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,327.7834);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,269.8249);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,199.3356);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,160.2988);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,105.1027);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,93.66706);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1414939);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,6.557968);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,8.078884);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,8.450655);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,8.862727);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,9.02982);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,9.33068);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,9.36578);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,9.698268);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,10.45076);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,10.74849);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,11.50237);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,11.67265);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,11.35376);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,11.42855);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,11.60633);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,11.84039);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,10.20293);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,10.39969);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,8.863503);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,7.836363);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,7.208216);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,6.422882);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,5.519775);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,5.052021);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,5.772716);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,5.145354);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,4.177243);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,3.322723);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,2.747523);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,135.2881);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,241.1157);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,212.7629);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,192.4497);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,153.6374);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,122.0695);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,122.2002);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,108.3483);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,116.6317);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,138.024);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,153.9306);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,187.3955);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,218.9854);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,188.3912);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,184.8299);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,175.4865);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,158.7253);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,143.6604);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,101.4306);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,89.08267);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,64.97633);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,51.02688);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,57.09402);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,53.5914);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,33.82594);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,29.11034);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,33.42262);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,18.10409);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,12.12865);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,5.009633);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,8.9872);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,9.913141);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,14.56324);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,10.03443);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,6.483329);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,8.677892);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,7.237394);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,6.115693);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,7.961528);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,13.30641);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,10.71348);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,18.29664);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,10.78483);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,11.60333);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,12.69114);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,12.86841);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,8.276281);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,7.428888);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,5.61463);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,5.040037);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,6.022751);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,6.457864);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,7.637075);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,3.383376);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,3.077307);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,5.602782);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,4.263174);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,1.8507);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,28.66073);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,33.25775);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,26.9945);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,11.77065);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,9.457195);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,21.60866);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,8.748005);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,7.15091);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,14.92896);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,15.50616);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,7.72763);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,12.86627);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,12.45426);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,19.13922);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,10.98076);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,13.18445);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,7.856493);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,8.533993);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,8.973677);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,10.3072);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,5.921472);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,4.416373);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,5.080678);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,10.2031);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.49226);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,3.72386);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,2.596488);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,2.249406);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,1.582228);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,3.82405);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,5.560921);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,9.687995);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,1.577293);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,1.348873);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,5.175626);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,2.279762);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,1.215492);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,3.562067);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,3.868906);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.141994);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,3.833827);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,2.544975);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,4.961656);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,2.664556);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,2.984045);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,2.321983);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,1.504387);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,2.389871);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,3.560729);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,2.610422);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,1.024498);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,2.640154);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,4.167638);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.4729098);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,1.066118);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.8511885);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.7635695);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.6262978);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,0.4278565);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,0.6225638);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.4278565);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.9254399);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,2.956588);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,1.702794);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.8133779);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,0.3478356);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.7819011);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,1.332672);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.6134716);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,1.283695);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3354616);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.9264231);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,0.4394432);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,0.4536609);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.3759891);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.5970329);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,1.153195);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.8692755);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.5811439);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.3478356);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.5567977);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,1.031898);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.4372219);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.7481876);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.3354616);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.6575834);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.4394432);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.4536609);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.3759891);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.684492);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,4.088689);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,8.555307);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,2.000815);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,2.66528);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,1.534448);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.74282);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.8446285);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.500722);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.670057);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,2.961411);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,5.099549);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,6.472084);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,5.4327);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,5.177201);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,3.445087);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,3.742285);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,1.788706);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.605611);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,1.444903);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,1.771644);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.4333972);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.8392061);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.267111);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.28983);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,0.5468343);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.2961522);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.867901);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.1539);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.690456);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.7666781);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.9283377);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.6918065);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.7189934);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.4880409);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.686982);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.3697543);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.9634147);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,1.231155);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,1.414708);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,1.306325);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.228804);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,1.009293);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,1.102942);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.7497552);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.7351006);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.6584071);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.8028779);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.4333972);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.4846649);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.267111);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.28983);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.3866726);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.2961522);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,2.577383);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,4.690821);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,4.91934);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,3.891039);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,2.630343);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.610423);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,1.266434);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.35826);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.693895);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,2.163509);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,3.008809);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,3.984106);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,4.412496);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,5.085057);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,4.758027);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,4.13475);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,3.513475);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,2.31593);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.487916);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,1.008515);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.8708883);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.5342556);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.3996709);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.4945392);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.5292664);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.5852086);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.4924026);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.3010958);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.138735);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.09122655);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.1336921);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.1286923);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.1188005);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.1034039);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.07420637);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.06435871);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.06662587);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.07822199);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.09205515);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.1031035);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.1145813);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.1245414);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.1435604);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.1274117);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.125006);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.116801);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.08861224);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.07058938);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.0581709);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.1293218);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.04738507);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.03562438);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.03964048);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.04196415);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.04913831);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.0400772);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.03228282);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.02029164);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.6885285);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.446581);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.683325);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,1.593454);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.277465);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.9264807);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.761006);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.7289978);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.752875);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.9292918);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,1.064989);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.193581);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.251819);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.329343);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.235546);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.11159);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.9233211);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.7269482);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.587578);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.4363856);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.3305957);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.2628365);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.2352863);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.2278307);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.2388342);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1915361);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1423539);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.09798091);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.05147202);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.02031428);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.02893615);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.03085959);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.02977381);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.02660046);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.02266001);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.02060164);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.0202163);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.02045326);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.02272025);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.02425711);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.02567505);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.0263525);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.02711902);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.02613258);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02479958);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02259196);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.02001954);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01804854);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01557701);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01354371);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.01202294);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.01142501);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.01117923);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.01155988);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.01038507);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.009035477);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.007465671);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.005448418);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.02745516);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.03031646);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02401802);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.009685329);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.006923072);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.004693953);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.002141222);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.004379837);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.003399939);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002299241);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.01149612);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.007386181);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.004208021);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.004715082);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.00201936);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.008857804);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.007028554);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.002234631);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.007758758);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.002219202);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.00281116);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.008044565);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.008515717);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.008040779);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.004595253);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.004002936);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.003319966);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.002141222);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.00309707);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002595079);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002299241);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.005144843);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.004298464);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.003070892);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.003352817);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.00201936);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.004428947);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.004096342);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.002234631);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.004506257);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.002219202);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.00281116);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.007506066);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.01360453);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.01602375);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.009359619);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.0067125);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.00233035);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.002242611);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.000893882);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.001918944);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.002077518);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.00360918);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.001205541);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.00277231);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001675136);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.003215805);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.003510906);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001494715);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.002251944);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.0009496798);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.00126812);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.001400792);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0004906537);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0008562139);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.00103652);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.003441491);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0003261252);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0003203421);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.001575402);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.002143321);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.00228463);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001711281);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.001541891);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0008889209);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0008540318);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0005669511);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0007948985);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0008549361);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.001067827);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0006066112);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0009092641);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.000716523);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.001002019);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.001111048);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0006879418);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0008218306);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0005485326);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.00064286);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0006389049);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0003563206);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0004953759);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0006025541);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.001044792);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0003261252);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0003203421);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
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
   
   TH1D *VbbHcc_tags_Z_dR__51 = new TH1D("VbbHcc_tags_Z_dR__51","",30,0,6);
   VbbHcc_tags_Z_dR__51->SetBinContent(2,13);
   VbbHcc_tags_Z_dR__51->SetBinContent(3,16223);
   VbbHcc_tags_Z_dR__51->SetBinContent(4,18970);
   VbbHcc_tags_Z_dR__51->SetBinContent(5,14608);
   VbbHcc_tags_Z_dR__51->SetBinContent(6,13060);
   VbbHcc_tags_Z_dR__51->SetBinContent(7,12067);
   VbbHcc_tags_Z_dR__51->SetBinContent(8,11506);
   VbbHcc_tags_Z_dR__51->SetBinContent(9,11400);
   VbbHcc_tags_Z_dR__51->SetBinContent(10,11267);
   VbbHcc_tags_Z_dR__51->SetBinContent(11,11974);
   VbbHcc_tags_Z_dR__51->SetBinContent(12,12840);
   VbbHcc_tags_Z_dR__51->SetBinContent(13,13894);
   VbbHcc_tags_Z_dR__51->SetBinContent(14,15290);
   VbbHcc_tags_Z_dR__51->SetBinContent(15,16691);
   VbbHcc_tags_Z_dR__51->SetBinContent(16,17497);
   VbbHcc_tags_Z_dR__51->SetBinContent(17,17101);
   VbbHcc_tags_Z_dR__51->SetBinContent(18,15713);
   VbbHcc_tags_Z_dR__51->SetBinContent(19,14102);
   VbbHcc_tags_Z_dR__51->SetBinContent(20,12349);
   VbbHcc_tags_Z_dR__51->SetBinContent(21,10339);
   VbbHcc_tags_Z_dR__51->SetBinContent(22,8403);
   VbbHcc_tags_Z_dR__51->SetBinContent(23,6582);
   VbbHcc_tags_Z_dR__51->SetBinContent(24,5558);
   VbbHcc_tags_Z_dR__51->SetBinContent(25,4544);
   VbbHcc_tags_Z_dR__51->SetBinContent(26,3724);
   VbbHcc_tags_Z_dR__51->SetBinContent(27,3184);
   VbbHcc_tags_Z_dR__51->SetBinContent(28,2851);
   VbbHcc_tags_Z_dR__51->SetBinContent(29,2655);
   VbbHcc_tags_Z_dR__51->SetBinContent(30,1806);
   VbbHcc_tags_Z_dR__51->SetBinContent(31,1363);
   VbbHcc_tags_Z_dR__51->SetEntries(307603);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__51->SetLineColor(ci);
   VbbHcc_tags_Z_dR__51->SetLineWidth(2);
   VbbHcc_tags_Z_dR__51->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__51->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1037[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1037[30] = {
   0,
   0.2415736,
   11192.25,
   13917.6,
   14211.85,
   8342.55,
   8231.308,
   12692.78,
   10059.96,
   9855.076,
   6935.021,
   10586.37,
   9535.859,
   15853.37,
   16290.25,
   13214.45,
   15816.52,
   11847.1,
   14021.49,
   8960.096,
   8478.923,
   5379.008,
   4270.499,
   5315.713,
   3416.676,
   2026.496,
   2303.808,
   2282.796,
   1584.265,
   1318.752};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1037[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1037[30] = {
   0,
   0.1414939,
   1166.189,
   1544.893,
   2913.017,
   1011.507,
   1034.002,
   2679,
   1432.062,
   1435.432,
   779.2047,
   1695.66,
   1170.764,
   2017.902,
   1889.989,
   1411.579,
   1864.495,
   1383.223,
   1796.144,
   1257.319,
   1293.211,
   969.2725,
   757.8998,
   1184.991,
   818.943,
   562.9863,
   524.1822,
   671.1502,
   451.2119,
   543.6489};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1037,Graph_from_VbbHcc_tags_Z_dR_fy1037,Graph_from_VbbHcc_tags_Z_dR_fex1037,Graph_from_VbbHcc_tags_Z_dR_fey1037);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1037 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1037","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMaximum(19998.27);
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
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__52 = new TH1D("data_mc_ratio__52","",30,0,6);
   data_mc_ratio__52->SetBinContent(2,53.81382);
   data_mc_ratio__52->SetBinContent(3,1.449486);
   data_mc_ratio__52->SetBinContent(4,1.363022);
   data_mc_ratio__52->SetBinContent(5,1.027875);
   data_mc_ratio__52->SetBinContent(6,1.565469);
   data_mc_ratio__52->SetBinContent(7,1.465988);
   data_mc_ratio__52->SetBinContent(8,0.9064994);
   data_mc_ratio__52->SetBinContent(9,1.133205);
   data_mc_ratio__52->SetBinContent(10,1.143269);
   data_mc_ratio__52->SetBinContent(11,1.726599);
   data_mc_ratio__52->SetBinContent(12,1.21288);
   data_mc_ratio__52->SetBinContent(13,1.457027);
   data_mc_ratio__52->SetBinContent(14,0.9644634);
   data_mc_ratio__52->SetBinContent(15,1.0246);
   data_mc_ratio__52->SetBinContent(16,1.324081);
   data_mc_ratio__52->SetBinContent(17,1.081212);
   data_mc_ratio__52->SetBinContent(18,1.326316);
   data_mc_ratio__52->SetBinContent(19,1.005742);
   data_mc_ratio__52->SetBinContent(20,1.378222);
   data_mc_ratio__52->SetBinContent(21,1.219377);
   data_mc_ratio__52->SetBinContent(22,1.562184);
   data_mc_ratio__52->SetBinContent(23,1.541272);
   data_mc_ratio__52->SetBinContent(24,1.045579);
   data_mc_ratio__52->SetBinContent(25,1.329948);
   data_mc_ratio__52->SetBinContent(26,1.837655);
   data_mc_ratio__52->SetBinContent(27,1.38206);
   data_mc_ratio__52->SetBinContent(28,1.248907);
   data_mc_ratio__52->SetBinContent(29,1.675856);
   data_mc_ratio__52->SetBinContent(30,1.369476);
   data_mc_ratio__52->SetBinContent(31,2.348407);
   data_mc_ratio__52->SetBinError(2,14.92527);
   data_mc_ratio__52->SetBinError(3,0.01138016);
   data_mc_ratio__52->SetBinError(4,0.009896217);
   data_mc_ratio__52->SetBinError(5,0.008504423);
   data_mc_ratio__52->SetBinError(6,0.01369849);
   data_mc_ratio__52->SetBinError(7,0.01334538);
   data_mc_ratio__52->SetBinError(8,0.008450946);
   data_mc_ratio__52->SetBinError(9,0.01061344);
   data_mc_ratio__52->SetBinError(10,0.01077071);
   data_mc_ratio__52->SetBinError(11,0.01577872);
   data_mc_ratio__52->SetBinError(12,0.01070373);
   data_mc_ratio__52->SetBinError(13,0.01236101);
   data_mc_ratio__52->SetBinError(14,0.007799774);
   data_mc_ratio__52->SetBinError(15,0.007930733);
   data_mc_ratio__52->SetBinError(16,0.01000997);
   data_mc_ratio__52->SetBinError(17,0.00826799);
   data_mc_ratio__52->SetBinError(18,0.01058077);
   data_mc_ratio__52->SetBinError(19,0.008469274);
   data_mc_ratio__52->SetBinError(20,0.01240233);
   data_mc_ratio__52->SetBinError(21,0.01199219);
   data_mc_ratio__52->SetBinError(22,0.01704178);
   data_mc_ratio__52->SetBinError(23,0.01899767);
   data_mc_ratio__52->SetBinError(24,0.01402483);
   data_mc_ratio__52->SetBinError(25,0.01972947);
   data_mc_ratio__52->SetBinError(26,0.03011336);
   data_mc_ratio__52->SetBinError(27,0.0244929);
   data_mc_ratio__52->SetBinError(28,0.02339007);
   data_mc_ratio__52->SetBinError(29,0.03252404);
   data_mc_ratio__52->SetBinError(30,0.0322252);
   data_mc_ratio__52->SetBinError(31,0.459889);
   data_mc_ratio__52->SetMinimum(0.4);
   data_mc_ratio__52->SetMaximum(1.6);
   data_mc_ratio__52->SetEntries(6.735725);
   data_mc_ratio__52->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__52->SetLineColor(ci);
   data_mc_ratio__52->SetLineWidth(2);
   data_mc_ratio__52->SetMarkerStyle(20);
   data_mc_ratio__52->SetMarkerSize(1.2);
   data_mc_ratio__52->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__52->GetXaxis()->SetRange(1,30);
   data_mc_ratio__52->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__52->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__52->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__52->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__52->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__52->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__52->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__52->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__52->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__52->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__52->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__52->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__52->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__52->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1038[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[30] = {
   0,
   0.5857174,
   0.1041962,
   0.1110028,
   0.204971,
   0.1212468,
   0.1256182,
   0.2110649,
   0.1423526,
   0.1456541,
   0.1123579,
   0.1601739,
   0.1227749,
   0.1272853,
   0.1160196,
   0.1068209,
   0.1178828,
   0.1167563,
   0.1280994,
   0.1403243,
   0.1525206,
   0.1801954,
   0.1774734,
   0.2229223,
   0.23969,
   0.2778127,
   0.2275286,
   0.2940036,
   0.2848084,
   0.4122448};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.2971392);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.702861);
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
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
