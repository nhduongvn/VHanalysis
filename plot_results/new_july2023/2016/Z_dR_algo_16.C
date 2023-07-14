void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Fri Jul 14 13:38:19 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(0,0,1,1);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-169.5107,6.314516,169351.1);
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
   st->SetMaximum(145142);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0.01);
   st_stack_113->SetMaximum(152399.1);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetLabelSize(0.035);
   st_stack_113->GetXaxis()->SetTitleSize(0.035);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetLabelSize(0.05);
   st_stack_113->GetYaxis()->SetTitleSize(0.057);
   st_stack_113->GetYaxis()->SetTitleOffset(1.2);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetLabelSize(0.035);
   st_stack_113->GetZaxis()->SetTitleSize(0.035);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,0.1954295);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,46588.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,49359.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,63085.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,29705.14);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,29135.06);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,16586.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,17120.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,18725.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,15326.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,13718.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,8054.113);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,11738.81);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,10933.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,6295.706);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,4071.041);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,6966.206);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,5868.499);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,7716.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,5646.851);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,5062.93);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,6319.433);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,7265.343);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,5867.547);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,4852.974);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,2236.643);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,6213.116);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,6654.207);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,5478.845);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,3373.619);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,0.1954295);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,3574.798);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,4160.488);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,22770.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,3528.237);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,3476.675);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,1753.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,2348.883);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,2742.844);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,2877.038);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,2317.935);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,1191.548);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,2293.105);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,2174.865);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,1030.348);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,800.0802);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,2289.015);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,1704.752);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,1983.385);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,1085.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1064.428);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,1782.115);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,2388.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,1128.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,991.4385);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,525.4876);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,1768.376);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,2509.642);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,2264.293);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,856.1197);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(15710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.04592541);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,60.97439);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,117.8433);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,141.9899);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,148.3067);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,173.197);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,159.6054);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,157.3102);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,157.2784);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,149.8689);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,126.5081);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,116.1097);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,100.0872);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,83.80269);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,77.11488);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,72.28284);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,60.94264);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,61.02793);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,49.36949);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,56.21719);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,51.33962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,49.36451);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,46.46798);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,40.81319);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,38.39181);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,31.35029);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,27.97611);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,23.4225);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,12.97067);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,11.36781);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.04592541);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,3.320532);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,4.680491);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,5.003993);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,4.861001);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,5.354531);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,5.039222);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,4.896777);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,4.852234);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,4.809648);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,4.345214);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,4.212305);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,3.948491);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,3.475598);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,3.318297);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,3.317014);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,3.026391);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,2.974197);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,2.422068);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.829037);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.672626);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,2.690286);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,2.673999);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,2.444129);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,2.451044);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,2.17637);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,2.086804);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,2.000344);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,1.531007);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,1.435812);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(39281);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,0.7010365);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,640.6943);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,1289.517);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,1622.002);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,1859.493);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,1989.627);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,2020.117);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,1897.38);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,1763.454);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,1563.858);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,1413.657);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,1221.769);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,1065.634);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,942.8868);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,830.8431);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,737.8032);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,673.0018);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,649.0781);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,628.7723);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,622.5674);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,604.9246);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,568.6132);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,537.023);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,482.7152);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,430.8952);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,359.0623);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,287.6537);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,208.5475);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,128.1863);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,107.1259);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.2160235);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,6.539052);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,9.253231);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,10.36793);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,11.0799);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,11.42401);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,11.48503);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,11.10394);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,10.67305);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,10.03375);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,9.521525);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,8.827292);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,8.220308);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,7.74182);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,7.249587);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,6.836285);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,6.532938);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,6.425193);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,6.331575);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,6.308494);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,6.231702);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,6.04448);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,5.878895);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,5.592155);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,5.294024);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,4.840428);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,4.332498);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,3.689638);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,2.897788);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,2.628858);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(446835);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.2271861);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,253.6833);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,375.0765);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,328.8671);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,306.6672);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,237.8815);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,134.7212);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,95.59681);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,92.38488);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,75.42765);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,59.42368);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,57.73261);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,49.64732);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,47.65979);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,47.79062);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,30.9306);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,39.33716);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,33.0931);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,28.35013);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,29.14496);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,15.2909);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,18.55798);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,33.2355);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,23.62974);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,29.83633);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,40.788);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,40.66313);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,36.11847);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,20.63117);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,12.08314);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.1314577);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,8.006428);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,10.45445);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,13.36874);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,19.47502);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,19.78055);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,13.61093);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,9.830391);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,9.808023);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,8.306303);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,6.699446);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,6.770492);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,6.633206);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,7.06917);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,6.290481);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,4.539066);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,6.725323);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,7.152222);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,4.520426);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,4.671064);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,1.659614);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,1.8827);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,6.680411);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,3.543398);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,4.665227);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,7.542725);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,6.469674);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,4.56995);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,1.89072);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,1.419684);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(15848);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.073996);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,211.36);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,189.7433);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,121.5986);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,125.897);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,100.125);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,90.99022);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,49.38579);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,64.21562);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,37.96766);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,55.14726);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,33.02623);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,22.38916);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,30.77136);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,39.3093);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,15.73769);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,32.18197);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,27.00026);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,21.83581);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,11.92656);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,8.679145);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,16.02519);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,12.59502);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,13.76164);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,11.68485);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,22.93642);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,10.02686);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,20.07315);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,11.05607);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,6.121161);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.073996);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,20.33367);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,18.60449);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,12.19198);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,19.3178);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,16.63709);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,15.35747);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,5.290543);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,13.02322);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,7.773401);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,11.20024);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,7.636546);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,3.493729);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,6.691646);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,12.17233);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,2.955461);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,9.868127);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,7.598908);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,8.004997);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,2.509262);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,2.022061);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,3.449806);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,2.605312);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,2.898056);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,2.378482);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,7.208505);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,2.008755);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,7.720037);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,2.575578);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,0.997161);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(9338);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,0.4571435);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,1.007183);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,0.2816805);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,0.2678604);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,0.3760897);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,0.1794383);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,0.2715598);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,0.0941619);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,0.09021234);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.2511946);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,0.0941619);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,0.09679534);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.1805573);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.1799049);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.2683122);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,0.153582);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.09209069);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.1812293);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,0.1993032);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,0.08735924);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(27,0.09561468);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.09013394);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.09139225);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.2045442);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.3037984);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.163013);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.1555939);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.1717653);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.1269041);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.1568221);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.0941619);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.09021234);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.145316);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.0941619);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.09679534);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.1277085);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.1272248);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.1551384);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.1097284);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.09209069);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.1281498);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.1409434);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,0.08735924);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(27,0.09561468);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.09013394);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.09139225);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,3.835005);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,8.284798);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,5.379758);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,3.578837);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,2.388276);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,1.300911);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,0.7353208);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,0.2102512);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,0.323887);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,0.4320907);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,0.1788065);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,0.139531);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,0.2527359);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,0.1259932);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,0.1340994);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,0.1338629);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,0.2126613);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,0.1359978);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,0.1351055);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.07496634);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,0.2082397);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.07085605);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,0.2035055);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.4641778);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,0.07065601);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,0.5607953);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,0.4062136);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,0.5622125);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.3411587);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,0.5150837);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,0.750756);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,0.6076591);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,0.4947186);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.4058944);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.3028107);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.2221374);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.1216648);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.1453098);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.1678854);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.1061481);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.09866329);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.1282009);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.08920073);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.09483247);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.09465537);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.1229879);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.09625616);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.09558181);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.07496634);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.120385);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.07085605);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.1121925);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.1758321);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.07065601);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.1987426);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.1658627);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.1989323);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.1529038);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,4.062184);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,4.957235);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,5.079143);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,3.565473);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,2.720315);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,0.4921375);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,0.7337938);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,0.6004195);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,0.5566701);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,0.5942218);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,0.2049825);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,0.2110638);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,0.6125112);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,0.3823475);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,0.3631451);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,0.1735375);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,0.4033942);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.5720498);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,0.5484667);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.1274866);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,0.5663996);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,1.291031);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,0.5604654);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.1946085);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,0.8804148);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,0.9795468);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,0.9981605);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,0.8358368);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,0.7276917);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,0.2986812);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,0.3670177);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,0.3471574);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,0.3219364);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,0.3438186);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,0.2049825);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.2110638);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.3541071);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.2703863);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.2569602);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.1735375);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.2860252);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.3302814);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.3199732);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.1274866);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.3270144);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.4905827);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.3245293);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.1946085);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,1.014042);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,2.130227);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,2.155561);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,2.182789);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,1.598687);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,1.056131);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,0.7270051);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,0.4482049);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,0.3114715);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,0.2507974);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,0.221429);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,0.2152045);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,0.1790805);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,0.1573771);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,0.1705536);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,0.1610592);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,0.1405798);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,0.09199333);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.09833201);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.1360351);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.1406356);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.1371265);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.1926362);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.2207437);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,0.2348249);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,0.2400498);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,0.2161285);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.1241512);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.06980283);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.03954648);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.05721349);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.05806057);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.05764433);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.04956347);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.04041354);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.03285861);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.02587893);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.02168834);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.01954766);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.01820196);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.01779765);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.0164134);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.01503048);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.01600822);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.01540679);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.01425693);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.01183779);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.01206375);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.01417219);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.01441804);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.01421591);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.01734001);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.01815276);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.01877957);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.0191053);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.01805319);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.01352655);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.01052172);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.000430251);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,0.3394207);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,0.6874869);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,0.8520894);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,0.8449319);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,0.7158446);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,0.4687088);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,0.3012113);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,0.19985);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,0.1525233);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,0.1251605);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,0.10958);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.08854859);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.07491148);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.07527256);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.06346802);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.05354978);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.06057707);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.0580403);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.06419427);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.06748673);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.06333677);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.08584134);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.07861684);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.09935105);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.09171003);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.1011245);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.06964821);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.04827746);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.03237085);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.000430251);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.0113592);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.0162287);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.01808153);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.01799688);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.01660316);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.01342348);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.01071545);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.008754742);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.007630998);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.006896524);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.006427382);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.0057967);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.005312608);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.005354965);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.004916495);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.004489089);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.004813614);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.004687768);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.004940932);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.00506464);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.004915575);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.005719175);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.00548784);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.006183358);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.005947269);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.006231974);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.005188795);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.004295631);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.003523632);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08932174);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1332446);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.1198849);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.1025244);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.06377484);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.019477);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.01826822);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.01201595);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.003231239);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.006248312);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.005658066);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.003235426);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.003212378);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.002909205);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.009398196);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.00619578);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.009092556);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.002942833);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.01173647);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.003925006);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.008973165);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01618392);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01971382);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01927902);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01739334);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.01362864);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.007553179);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.007478789);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.006014168);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.003231239);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.004423717);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.004005088);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.003235426);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.003212378);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.002909205);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.005435447);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.004389195);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.005255584);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.002942833);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.005873132);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.002775398);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.005184625);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01754263);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.04313937);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.04714015);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.04684553);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02165251);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.012308);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.005524121);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.002671571);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.002597312);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.001577604);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.001745313);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.0008003017);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.002390556);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.002055348);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.0003675785);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.001616366);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.000863308);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.0003629994);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.0007429422);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.00223206);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.0008020869);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.0008325012);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.001450121);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.001801839);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.002538378);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.002704525);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.005009544);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.003446366);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001130638);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.002564206);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.004074952);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.004260671);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.004269405);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002910864);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.002159819);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.001477774);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.0009825636);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.0009836887);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.0007901548);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.0008033036);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.0005661946);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.0009773246);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.0008880933);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.0003675785);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.00080893);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.0005591229);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.0003629994);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.0005253507);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.0009147248);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.0005685684);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0005101965);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.0007346403);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.0008167139);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.0009735689);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001023844);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.00137415);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.001149656);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0006527854);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__225 = new TH1D("VbbHcc_algo_Z_dR__225","",30,0,6);
   VbbHcc_algo_Z_dR__225->SetBinContent(2,13);
   VbbHcc_algo_Z_dR__225->SetBinContent(3,11272);
   VbbHcc_algo_Z_dR__225->SetBinContent(4,11923);
   VbbHcc_algo_Z_dR__225->SetBinContent(5,8475);
   VbbHcc_algo_Z_dR__225->SetBinContent(6,7541);
   VbbHcc_algo_Z_dR__225->SetBinContent(7,6651);
   VbbHcc_algo_Z_dR__225->SetBinContent(8,5857);
   VbbHcc_algo_Z_dR__225->SetBinContent(9,5482);
   VbbHcc_algo_Z_dR__225->SetBinContent(10,4941);
   VbbHcc_algo_Z_dR__225->SetBinContent(11,4595);
   VbbHcc_algo_Z_dR__225->SetBinContent(12,4112);
   VbbHcc_algo_Z_dR__225->SetBinContent(13,3732);
   VbbHcc_algo_Z_dR__225->SetBinContent(14,3152);
   VbbHcc_algo_Z_dR__225->SetBinContent(15,2984);
   VbbHcc_algo_Z_dR__225->SetBinContent(16,2859);
   VbbHcc_algo_Z_dR__225->SetBinContent(17,2367);
   VbbHcc_algo_Z_dR__225->SetBinContent(18,2115);
   VbbHcc_algo_Z_dR__225->SetBinContent(19,1960);
   VbbHcc_algo_Z_dR__225->SetBinContent(20,1851);
   VbbHcc_algo_Z_dR__225->SetBinContent(21,1742);
   VbbHcc_algo_Z_dR__225->SetBinContent(22,1654);
   VbbHcc_algo_Z_dR__225->SetBinContent(23,1563);
   VbbHcc_algo_Z_dR__225->SetBinContent(24,1564);
   VbbHcc_algo_Z_dR__225->SetBinContent(25,1449);
   VbbHcc_algo_Z_dR__225->SetBinContent(26,1378);
   VbbHcc_algo_Z_dR__225->SetBinContent(27,1334);
   VbbHcc_algo_Z_dR__225->SetBinContent(28,1313);
   VbbHcc_algo_Z_dR__225->SetBinContent(29,1438);
   VbbHcc_algo_Z_dR__225->SetBinContent(30,1014);
   VbbHcc_algo_Z_dR__225->SetBinContent(31,702);
   VbbHcc_algo_Z_dR__225->SetEntries(107033);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__225->SetLineColor(ci);
   VbbHcc_algo_Z_dR__225->SetLineWidth(2);
   VbbHcc_algo_Z_dR__225->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__225->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__225->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__225->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__225->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__225->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__225->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__225->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__225->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__225->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__225->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__225->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__225->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__225->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__225->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__225->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__225->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1225[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1225[30] = {
   0,
   1.244004,
   47764.7,
   51349.31,
   65313.89,
   32156.09,
   31643.78,
   18995.5,
   19322.8,
   20804.14,
   17155.16,
   15374.29,
   9483.956,
   12977.31,
   12039.47,
   7291.308,
   4929.045,
   7772.559,
   6639.476,
   8444.776,
   6367.36,
   5743.848,
   6972.979,
   7895.709,
   6428.952,
   5364.79,
   2691.851,
   6581.635,
   6943.728,
   5652.625};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1225[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1225[30] = {
   0,
   0.3312472,
   3574.873,
   4160.556,
   22770.93,
   3528.365,
   3476.794,
   1754.145,
   2348.941,
   2742.918,
   2877.082,
   2317.995,
   1191.632,
   2293.135,
   2174.903,
   1030.47,
   800.1347,
   2289.058,
   1704.799,
   1983.418,
   1085.885,
   1064.452,
   1782.132,
   2388.19,
   1128.615,
   991.4695,
   525.6181,
   1768.396,
   2509.661,
   2264.297};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1225,Graph_from_VbbHcc_algo_Z_dR_fy1225,Graph_from_VbbHcc_algo_Z_dR_fex1225,Graph_from_VbbHcc_algo_Z_dR_fey1225);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1225 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1225","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMaximum(96893.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1225);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__226 = new TH1D("data_mc_ratio__226","",30,0,6);
   data_mc_ratio__226->SetBinContent(2,10.45013);
   data_mc_ratio__226->SetBinContent(3,0.2359902);
   data_mc_ratio__226->SetBinContent(4,0.232194);
   data_mc_ratio__226->SetBinContent(5,0.129758);
   data_mc_ratio__226->SetBinContent(6,0.2345123);
   data_mc_ratio__226->SetBinContent(7,0.2101835);
   data_mc_ratio__226->SetBinContent(8,0.3083362);
   data_mc_ratio__226->SetBinContent(9,0.2837063);
   data_mc_ratio__226->SetBinContent(10,0.2375008);
   data_mc_ratio__226->SetBinContent(11,0.2678494);
   data_mc_ratio__226->SetBinContent(12,0.2674595);
   data_mc_ratio__226->SetBinContent(13,0.3935067);
   data_mc_ratio__226->SetBinContent(14,0.2428855);
   data_mc_ratio__226->SetBinContent(15,0.2478515);
   data_mc_ratio__226->SetBinContent(16,0.3921107);
   data_mc_ratio__226->SetBinContent(17,0.4802147);
   data_mc_ratio__226->SetBinContent(18,0.2721111);
   data_mc_ratio__226->SetBinContent(19,0.295204);
   data_mc_ratio__226->SetBinContent(20,0.2191888);
   data_mc_ratio__226->SetBinContent(21,0.2735828);
   data_mc_ratio__226->SetBinContent(22,0.2879603);
   data_mc_ratio__226->SetBinContent(23,0.224151);
   data_mc_ratio__226->SetBinContent(24,0.1980823);
   data_mc_ratio__226->SetBinContent(25,0.2253867);
   data_mc_ratio__226->SetBinContent(26,0.25686);
   data_mc_ratio__226->SetBinContent(27,0.4955698);
   data_mc_ratio__226->SetBinContent(28,0.1994945);
   data_mc_ratio__226->SetBinContent(29,0.2070934);
   data_mc_ratio__226->SetBinContent(30,0.1793857);
   data_mc_ratio__226->SetBinContent(31,0.1999509);
   data_mc_ratio__226->SetBinError(2,2.898344);
   data_mc_ratio__226->SetBinError(3,0.002222764);
   data_mc_ratio__226->SetBinError(4,0.002126465);
   data_mc_ratio__226->SetBinError(5,0.001409497);
   data_mc_ratio__226->SetBinError(6,0.002700544);
   data_mc_ratio__226->SetBinError(7,0.002577242);
   data_mc_ratio__226->SetBinError(8,0.004028904);
   data_mc_ratio__226->SetBinError(9,0.00383177);
   data_mc_ratio__226->SetBinError(10,0.003378762);
   data_mc_ratio__226->SetBinError(11,0.003951372);
   data_mc_ratio__226->SetBinError(12,0.004170916);
   data_mc_ratio__226->SetBinError(13,0.006441415);
   data_mc_ratio__226->SetBinError(14,0.004326219);
   data_mc_ratio__226->SetBinError(15,0.004537244);
   data_mc_ratio__226->SetBinError(16,0.007333337);
   data_mc_ratio__226->SetBinError(17,0.009870437);
   data_mc_ratio__226->SetBinError(18,0.005916858);
   data_mc_ratio__226->SetBinError(19,0.006667979);
   data_mc_ratio__226->SetBinError(20,0.005094658);
   data_mc_ratio__226->SetBinError(21,0.006554879);
   data_mc_ratio__226->SetBinError(22,0.007080514);
   data_mc_ratio__226->SetBinError(23,0.005669714);
   data_mc_ratio__226->SetBinError(24,0.005008725);
   data_mc_ratio__226->SetBinError(25,0.005920986);
   data_mc_ratio__226->SetBinError(26,0.006919456);
   data_mc_ratio__226->SetBinError(27,0.01356835);
   data_mc_ratio__226->SetBinError(28,0.005505523);
   data_mc_ratio__226->SetBinError(29,0.005461183);
   data_mc_ratio__226->SetBinError(30,0.005633376);
   data_mc_ratio__226->SetBinError(31,0.04933876);
   data_mc_ratio__226->SetMinimum(0.4);
   data_mc_ratio__226->SetMaximum(1.6);
   data_mc_ratio__226->SetEntries(19.85606);
   data_mc_ratio__226->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__226->SetLineColor(ci);
   data_mc_ratio__226->SetLineWidth(2);
   data_mc_ratio__226->SetMarkerStyle(20);
   data_mc_ratio__226->SetMarkerSize(1.2);
   data_mc_ratio__226->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__226->GetXaxis()->SetRange(1,30);
   data_mc_ratio__226->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__226->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__226->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__226->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__226->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__226->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__226->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__226->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__226->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__226->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__226->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__226->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__226->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__226->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1226[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1226[30] = {
   0,
   0.266275,
   0.0748434,
   0.08102457,
   0.3486384,
   0.1097262,
   0.1098729,
   0.09234532,
   0.1215632,
   0.1318448,
   0.1677094,
   0.1507708,
   0.1256472,
   0.1767035,
   0.1806478,
   0.1413286,
   0.1623306,
   0.294505,
   0.2567671,
   0.2348692,
   0.1705392,
   0.1853204,
   0.2555768,
   0.3024668,
   0.175552,
   0.1848105,
   0.1952627,
   0.2686864,
   0.3614285,
   0.4005744};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1226,Graph_from_mc_statistical_error_fy1226,Graph_from_mc_statistical_error_fex1226,Graph_from_mc_statistical_error_fey1226);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1226 = new TH1F("Graph_Graph_from_mc_statistical_error1226","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1226->SetMinimum(0.5193107);
   Graph_Graph_from_mc_statistical_error1226->SetMaximum(1.480689);
   Graph_Graph_from_mc_statistical_error1226->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1226->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1226);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
