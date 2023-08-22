void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Tue Aug 22 09:17:08 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-1.416448,6.314516,14.73194);
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
   st->SetMinimum(0.3);
   st->SetMaximum(3.621022e+12);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0.03978329);
   st_stack_116->SetMaximum(1.309485e+13);
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
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,100.5529);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,303765.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,383111.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,295769.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,293624.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,301690);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,291851.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,288894.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,299482);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,313031.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,284636.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,259576.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,255604.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,231263.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,251433.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,199345);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,201810.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,158438.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,124839.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,120703.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,109252.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,101803);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,85838.87);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,86904.16);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,112550.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,76787.19);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(28,62252.63);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(29,58594.61);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(30,39748.23);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(31,35334.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,21.92976);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,7216.367);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,20323.09);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,7771.584);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,8345.851);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,7904.924);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,7870.536);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,7879.598);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,14264.65);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,9674.394);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,17991.36);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,7646.054);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,7865.848);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,7586.792);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,21871.45);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,15834.29);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,21573.19);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,6940.937);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,5060.991);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,4878.521);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,4888.708);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,5001.223);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,4057.219);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,4561.309);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,25295.13);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,4762.656);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(28,3710.932);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(29,4053.951);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(30,2811.991);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(31,2390.221);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(333044);

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
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,1.293467);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,1481.303);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,2423.509);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,2647.604);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,2690.376);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,2629.168);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,2482.82);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,2312.421);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,2149.896);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,1973.397);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,1789.696);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,1617.417);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,1493.702);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,1367.666);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,1261.04);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,1105.512);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,981.2807);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,884.6008);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,807.7078);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,795.2424);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,745.3183);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,729.8136);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,697.7011);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,634.0173);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,599.7676);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,527.9288);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,465.2457);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(29,380.0105);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(30,269.6397);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(31,205.753);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.5575568);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,16.18834);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,20.05344);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,20.39082);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,20.59064);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,20.41386);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,19.71328);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,19.16303);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,18.60336);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,17.87914);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,17.10864);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,16.26936);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,15.80181);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,14.51494);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,13.98494);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,17.53293);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,12.55453);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,11.83724);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,11.18569);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,11.93668);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,10.94313);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,10.73433);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,11.0468);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,9.872841);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,9.577589);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,9.037615);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,8.500637);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(29,7.577132);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(30,6.482454);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(31,5.60625);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(631310);

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
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(2,19.48972);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(3,31006.27);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(4,58834.53);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(5,68116.73);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(6,68311.4);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(7,60542.89);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(8,50525.17);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(9,41420.03);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(10,34262.79);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(11,29043.08);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(12,25449.18);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(13,22914.29);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(14,21006.03);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(15,19511.34);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(16,18130.81);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(17,16279.67);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(18,14912.05);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(19,13720.63);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(20,12826.56);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(21,12060.36);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(22,11593.18);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(23,11355.31);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(24,11332.23);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(25,11378.27);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(26,11295.82);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(27,10753.42);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(28,9559.862);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(29,7590.841);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(30,4644.512);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(31,3318.691);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(2,1.153492);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(3,46.91171);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(4,63.88719);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(5,67.9544);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(6,67.77185);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(7,63.35364);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(8,57.19321);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(9,51.10083);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(10,46.77672);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(11,42.81657);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(12,40.3151);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(13,38.61519);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(14,36.67118);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(15,35.26269);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(16,34.07603);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(17,32.47129);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(18,31.03558);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(19,29.52734);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(20,28.81613);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(21,27.644);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(22,27.27169);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(23,27.01654);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(24,27.25218);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(25,27.19514);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(26,27.7364);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(27,26.63011);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(28,25.67454);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(29,22.54745);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(30,17.57271);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(31,15.30207);
   VbbHcc_algo_Z_dR_all_stack_3->SetEntries(1.291274e+07);

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
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(2,1.640829);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(3,1845.83);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(4,2696.387);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(5,2488.898);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(6,2185.195);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(7,1870.765);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(8,1721.132);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(9,1659.225);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(10,1561.698);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(11,1479.371);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(12,1355.511);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(13,1266.51);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(14,1198.55);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(15,1098.143);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(16,1029.851);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(17,904.9517);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(18,800.9774);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(19,761.8446);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(20,718.6828);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(21,649.2296);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(22,605.653);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(23,549.5817);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(24,504.428);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(25,456.3836);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(26,444.0748);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(27,409.6664);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(28,384.6521);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(29,321.9684);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(30,241.4483);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(31,180.8872);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(2,0.4515051);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(3,24.03645);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(4,36.59795);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(5,36.79387);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(6,39.84178);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(7,35.62694);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(8,31.21283);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(9,30.91799);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(10,30.01026);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(11,28.99716);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(12,25.63011);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(13,27.22372);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(14,26.31424);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(15,25.63043);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(16,26.47342);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(17,27.17886);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(18,20.77685);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(19,22.78623);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(20,22.26251);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(21,18.4312);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(22,21.31763);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(23,18.18702);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(24,17.2077);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(25,15.57459);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(26,19.87725);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(27,16.10054);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(28,14.04701);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(29,13.26978);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(30,13.23056);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(31,9.773986);
   VbbHcc_algo_Z_dR_all_stack_4->SetEntries(198969);

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
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(2,0.3082258);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(3,808.0808);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(4,1003.144);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(5,813.355);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(6,774.3175);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(7,687.6097);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(8,715.9284);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(9,699.78);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(10,644.1638);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(11,571.6562);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(12,600.365);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(13,477.3817);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(14,503.1702);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(15,463.9816);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(16,479.0854);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(17,356.8363);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(18,344.5911);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(19,317.6059);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(20,265.983);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(21,254.6029);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(22,213.2667);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(23,218.2116);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(24,188.8736);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(25,176.8485);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(26,151.1903);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(27,185.8955);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(28,137.0748);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(29,154.9954);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(30,90.61761);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(31,66.86317);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(2,0.1957764);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(3,23.33934);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(4,35.54961);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(5,33.9101);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(6,37.15671);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(7,34.77917);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(8,37.58977);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(9,36.63505);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(10,34.55865);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(11,28.2655);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(12,34.62275);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(13,29.56612);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(14,37.89105);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(15,26.85762);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(16,29.99575);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(17,22.56647);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(18,25.68546);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(19,25.41703);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(20,23.14442);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(21,20.58966);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(22,14.85012);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(23,16.31544);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(24,17.82697);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(25,13.8726);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(26,10.34832);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(27,17.82939);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(28,12.38527);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(29,17.63101);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(30,10.79961);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(31,7.864958);
   VbbHcc_algo_Z_dR_all_stack_5->SetEntries(95654);

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
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(3,10.27672);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(4,10.97712);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(5,9.505262);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(6,9.285453);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(7,6.840486);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(8,5.410783);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(9,6.542673);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(10,5.624918);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(11,3.090791);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(12,4.682725);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(13,7.738374);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(14,6.263372);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(15,3.825453);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(16,3.535872);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(17,2.77156);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(18,2.401434);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(19,2.596908);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(20,3.284227);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(21,2.492951);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(22,2.775315);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(23,1.919097);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(24,1.527739);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(25,1.367667);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(26,2.398931);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(27,0.6696198);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(28,1.752473);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(29,1.690437);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(30,1.62491);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(31,0.6717178);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(3,1.743294);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(4,1.790641);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(5,1.75213);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(6,2.929425);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(7,1.496438);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(8,1.196018);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(9,2.030394);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(10,1.496451);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(11,0.9795626);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(12,1.071572);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(13,1.592501);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(14,1.458718);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(15,0.9195476);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(16,0.7453801);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(17,0.8012106);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(18,0.7237659);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(19,0.7756338);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(20,1.209552);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(21,1.05752);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(22,0.8223188);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(23,0.8913227);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(24,0.7712944);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(25,0.489193);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(26,1.073135);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(27,0.2746321);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(28,0.8635799);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(29,0.8496952);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(30,0.817324);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(31,0.4643152);
   VbbHcc_algo_Z_dR_all_stack_6->SetEntries(653);

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
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(2,0.103133);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(3,13.72799);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(4,16.44336);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(5,14.60442);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(6,12.6412);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(7,8.738969);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(8,5.829171);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(9,7.324111);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(10,6.447516);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(11,4.871689);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(12,5.00859);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(13,7.248167);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(14,7.272217);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(15,4.459712);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(16,3.792516);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(17,3.973108);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(18,3.957621);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(19,2.964062);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(20,5.110888);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(21,3.884456);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(22,2.240021);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(23,2.344669);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(24,1.910629);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(25,2.057705);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(26,2.832559);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(27,1.884948);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(28,3.357891);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(29,2.392059);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(30,1.737756);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(31,0.7682012);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(2,0.103133);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(3,1.787142);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(4,1.877151);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(5,1.838351);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(6,2.963223);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(7,1.510781);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(8,1.170574);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(9,2.02702);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(10,1.496911);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(11,1.031356);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(12,1.035561);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(13,1.534064);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(14,1.457165);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(15,0.916027);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(16,0.6997411);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(17,0.8298803);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(18,0.786735);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(19,0.7582844);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(20,1.262134);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(21,1.099196);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(22,0.7533998);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(23,0.898141);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(24,0.7761949);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(25,0.5174103);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(26,1.078473);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(27,0.4035323);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(28,0.9324803);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(29,0.8732663);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(30,0.8131687);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(31,0.4637994);
   VbbHcc_algo_Z_dR_all_stack_7->SetEntries(1264);

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
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(3,38.23923);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(4,53.48366);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(5,51.74556);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(6,28.26935);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(7,16.32701);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(8,17.36392);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(9,11.76387);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(10,11.74585);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(11,15.50919);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(12,12.83118);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(13,15.8985);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(14,14.96137);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(15,11.35583);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(16,10.61785);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(17,8.350732);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(18,8.394789);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(19,6.948921);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(20,8.054621);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(21,6.508289);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(22,5.087979);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(23,2.116032);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(24,2.886322);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(25,2.502676);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(26,3.428687);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(27,3.57404);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(28,3.881761);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(29,7.204009);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(30,2.376565);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(31,1.954756);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(3,3.172143);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(4,3.751748);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(5,3.691329);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(6,2.705747);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(7,1.936246);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(8,2.165368);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(9,1.739987);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(10,1.679015);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(11,2.02513);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(12,1.769223);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(13,2.041612);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(14,1.973445);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(15,1.715383);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(16,1.641559);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(17,1.439762);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(18,1.5214);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(19,1.325197);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(20,1.383001);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(21,1.249543);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(22,1.131218);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(23,0.6757688);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(24,0.7867712);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(25,0.7917435);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(26,0.9528995);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(27,0.9526309);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(28,1.007319);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(29,1.367353);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(30,0.780365);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(31,0.6805);
   VbbHcc_algo_Z_dR_all_stack_8->SetEntries(1595);

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
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(2,0.0142111);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(3,24.307);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(4,40.17326);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(5,35.9874);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(6,25.15676);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(7,15.65155);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(8,10.09786);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(9,8.013512);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(10,7.297709);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(11,7.230097);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(12,7.42139);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(13,7.106284);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(14,6.854288);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(15,6.441776);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(16,5.734859);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(17,5.356547);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(18,4.896976);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(19,4.634439);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(20,3.986306);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(21,3.630724);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(22,3.037038);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(23,2.576397);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(24,2.383827);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(25,2.254438);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(26,2.814573);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(27,3.289286);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(28,3.747686);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(29,3.571522);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(30,2.259298);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(31,1.307437);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(2,0.005395594);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(3,0.2392464);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(4,0.3352214);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(5,0.299581);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(6,0.241972);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(7,0.1972685);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(8,0.1457742);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(9,0.1257476);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(10,0.1263159);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(11,0.1245324);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(12,0.126716);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(13,0.1253435);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(14,0.1263014);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(15,0.1174284);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(16,0.117814);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(17,0.1085047);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(18,0.1045765);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(19,0.1036952);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(20,0.09303743);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(21,0.0981043);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(22,0.08245931);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(23,0.0713713);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(24,0.06916923);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(25,0.06627673);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(26,0.0801463);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(27,0.08453946);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(28,0.09451431);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(29,0.09599249);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(30,0.07117591);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(31,0.05461492);
   VbbHcc_algo_Z_dR_all_stack_9->SetEntries(160336);

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
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(2,0.002693726);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(3,5.338696);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(4,11.54989);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(5,13.37781);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(6,12.27724);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(7,8.592221);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(8,6.162265);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(9,4.851085);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(10,4.411882);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(11,4.319533);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(12,4.256544);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(13,4.16369);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(14,3.813104);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(15,3.474662);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(16,3.179388);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(17,2.793248);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(18,2.567663);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(19,2.461102);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(20,2.283468);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(21,2.176313);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(22,1.907084);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(23,1.650457);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(24,1.481825);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(25,1.495224);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(26,1.586266);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(27,1.729804);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(28,1.759895);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(29,1.266775);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(30,0.8098084);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(31,0.5074421);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(2,0.001141533);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(3,0.04985834);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(4,0.0723045);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(5,0.07675804);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(6,0.07282414);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(7,0.06071258);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(8,0.05162642);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(9,0.04604211);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(10,0.04402549);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(11,0.04355348);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(12,0.04337349);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(13,0.0428737);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(14,0.04100674);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(15,0.03925534);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(16,0.0376145);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(17,0.03520248);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(18,0.03377007);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(19,0.03302864);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(20,0.03176997);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(21,0.03093345);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(22,0.02890246);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(23,0.02688579);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(24,0.02542809);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(25,0.02548095);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(26,0.02622399);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(27,0.02746543);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(28,0.02784976);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(29,0.02376116);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(30,0.01899002);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(31,0.01505211);
   VbbHcc_algo_Z_dR_all_stack_10->SetEntries(282471);

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
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(3,0.2104136);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(4,0.3178725);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(5,0.2240341);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(6,0.1780671);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(7,0.1127264);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(8,0.078898);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(9,0.07140783);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(10,0.07195579);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(11,0.0636161);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(12,0.05853257);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(13,0.1026234);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(14,0.073992);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(15,0.06524861);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(16,0.05057148);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(17,0.04306956);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(18,0.04513053);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(19,0.04588151);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(20,0.04202201);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(21,0.03402624);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(22,0.04496067);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(23,0.03187299);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(24,0.02024419);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(25,0.02024436);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(26,0.02375696);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(27,0.0195732);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(28,0.02850458);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(29,0.02222265);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(30,0.01141247);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(31,0.002542709);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(3,0.02165239);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(4,0.02691881);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(5,0.02225161);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(6,0.01859265);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(7,0.01496714);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(8,0.0123899);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(9,0.01230379);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(10,0.01229183);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(11,0.01184681);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(12,0.01052956);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(13,0.01628203);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(14,0.01243091);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(15,0.01178751);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(16,0.01000522);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(17,0.009918789);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(18,0.01101488);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(19,0.009840037);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(20,0.009466138);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(21,0.008394281);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(22,0.00983065);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(23,0.007995987);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(24,0.006350211);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(25,0.005983162);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(26,0.006864849);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(27,0.006270838);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(28,0.007526481);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(29,0.007032711);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(30,0.004777274);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(31,0.001798762);
   VbbHcc_algo_Z_dR_all_stack_11->SetEntries(1141);

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
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(3,0.05608337);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(4,0.1094903);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(5,0.1140832);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(6,0.08936045);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(7,0.06401089);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(8,0.04150592);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(9,0.03754216);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(10,0.03578949);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(11,0.03887838);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(12,0.04138363);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(13,0.0336141);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(14,0.03874705);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(15,0.03261987);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(16,0.02989072);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(17,0.02459403);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(18,0.0269622);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(19,0.01856385);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(20,0.02166407);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(21,0.01808377);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(22,0.01883888);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(23,0.01518817);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(24,0.009329308);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(25,0.01151713);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(26,0.01217339);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(27,0.01428987);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(28,0.01396821);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(29,0.009905238);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(30,0.005133286);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(31,0.004155585);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(3,0.005130513);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(4,0.005582558);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(5,0.005782764);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(6,0.004938691);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(7,0.004171953);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(8,0.003368585);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(9,0.003189947);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(10,0.003065649);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(11,0.003230451);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(12,0.003379794);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(13,0.003047357);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(14,0.004583168);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(15,0.002949391);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(16,0.002859326);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(17,0.002650498);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(18,0.002713374);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(19,0.002236753);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(20,0.00242183);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(21,0.002213465);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(22,0.002305742);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(23,0.002096843);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(24,0.001590258);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(25,0.001777754);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(26,0.001859442);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(27,0.00198662);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(28,0.00191197);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(29,0.00169471);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(30,0.00116733);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(31,0.001061214);
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
   VbbHcc_algo_Z_dR_all__318->SetBinContent(2,119);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(3,172428);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(4,225540);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(5,194804);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(6,185686);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(7,180204);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(8,175180);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(9,171438);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(10,165636);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(11,159486);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(12,151353);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(13,144015);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(14,135974);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(15,128530);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(16,121672);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(17,103177);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(18,91452);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(19,83015);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(20,75780);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(21,68733);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(22,63139);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(23,58361);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(24,54392);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(25,49479);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(26,45762);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(27,41359);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(28,37782);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(29,33625);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(30,23778);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(31,21041);
   VbbHcc_algo_Z_dR_all__318->SetEntries(3162969);

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
   123.4052,
   338999.5,
   448202.2,
   369961.7,
   367673.9,
   367476.7,
   347341.8,
   335024.5,
   338136.2,
   346134.4,
   313865.2,
   285894.2,
   279845.1,
   253734.2,
   272361.6,
   218015.2,
   218871.5,
   174143,
   139481.6,
   134481.7,
   122425,
   114666.6,
   98572.32,
   99559.4,
   125054.4,
   88675.29,
   72814,
   67058.59,
   45003.28};
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
   21.97291,
   7216.616,
   20323.26,
   7772.07,
   8346.33,
   7905.362,
   7870.921,
   7879.934,
   14264.81,
   9674.59,
   17991.46,
   7646.275,
   7866.085,
   7586.979,
   21871.52,
   15834.37,
   21573.24,
   6941.094,
   5061.188,
   4878.693,
   4888.865,
   5001.367,
   4057.402,
   4561.449,
   25295.16,
   4762.799,
   3711.078,
   4054.081,
   2812.105};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_all_fx1231,Graph_from_VbbHcc_algo_Z_dR_all_fy1231,Graph_from_VbbHcc_algo_Z_dR_all_fex1231,Graph_from_VbbHcc_algo_Z_dR_all_fey1231);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_all1231 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_all1231","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMinimum(515.378);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMaximum(515378);
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
   data_mc_ratio__319->SetBinContent(2,0.9643033);
   data_mc_ratio__319->SetBinContent(3,0.508638);
   data_mc_ratio__319->SetBinContent(4,0.5032104);
   data_mc_ratio__319->SetBinContent(5,0.5265517);
   data_mc_ratio__319->SetBinContent(6,0.505029);
   data_mc_ratio__319->SetBinContent(7,0.4903821);
   data_mc_ratio__319->SetBinContent(8,0.5043447);
   data_mc_ratio__319->SetBinContent(9,0.5117178);
   data_mc_ratio__319->SetBinContent(10,0.48985);
   data_mc_ratio__319->SetBinContent(11,0.4607633);
   data_mc_ratio__319->SetBinContent(12,0.4822229);
   data_mc_ratio__319->SetBinContent(13,0.5037353);
   data_mc_ratio__319->SetBinContent(14,0.4858902);
   data_mc_ratio__319->SetBinContent(15,0.5065537);
   data_mc_ratio__319->SetBinContent(16,0.4467297);
   data_mc_ratio__319->SetBinContent(17,0.4732559);
   data_mc_ratio__319->SetBinContent(18,0.4178342);
   data_mc_ratio__319->SetBinContent(19,0.4767058);
   data_mc_ratio__319->SetBinContent(20,0.5432974);
   data_mc_ratio__319->SetBinContent(21,0.5110955);
   data_mc_ratio__319->SetBinContent(22,0.515736);
   data_mc_ratio__319->SetBinContent(23,0.5089625);
   data_mc_ratio__319->SetBinContent(24,0.5517979);
   data_mc_ratio__319->SetBinContent(25,0.4969797);
   data_mc_ratio__319->SetBinContent(26,0.3659368);
   data_mc_ratio__319->SetBinContent(27,0.4664095);
   data_mc_ratio__319->SetBinContent(28,0.5188837);
   data_mc_ratio__319->SetBinContent(29,0.5014272);
   data_mc_ratio__319->SetBinContent(30,0.5283615);
   data_mc_ratio__319->SetBinContent(31,0.5379705);
   data_mc_ratio__319->SetBinError(2,0.08839754);
   data_mc_ratio__319->SetBinError(3,0.001224912);
   data_mc_ratio__319->SetBinError(4,0.00105959);
   data_mc_ratio__319->SetBinError(5,0.001193005);
   data_mc_ratio__319->SetBinError(6,0.001171998);
   data_mc_ratio__319->SetBinError(7,0.001155187);
   data_mc_ratio__319->SetBinError(8,0.001204995);
   data_mc_ratio__319->SetBinError(9,0.001235882);
   data_mc_ratio__319->SetBinError(10,0.00120361);
   data_mc_ratio__319->SetBinError(11,0.001153763);
   data_mc_ratio__319->SetBinError(12,0.001239517);
   data_mc_ratio__319->SetBinError(13,0.00132739);
   data_mc_ratio__319->SetBinError(14,0.001317681);
   data_mc_ratio__319->SetBinError(15,0.001412938);
   data_mc_ratio__319->SetBinError(16,0.001280706);
   data_mc_ratio__319->SetBinError(17,0.001473345);
   data_mc_ratio__319->SetBinError(18,0.00138168);
   data_mc_ratio__319->SetBinError(19,0.001654521);
   data_mc_ratio__319->SetBinError(20,0.001973605);
   data_mc_ratio__319->SetBinError(21,0.001949483);
   data_mc_ratio__319->SetBinError(22,0.002052478);
   data_mc_ratio__319->SetBinError(23,0.002106805);
   data_mc_ratio__319->SetBinError(24,0.002365988);
   data_mc_ratio__319->SetBinError(25,0.002234232);
   data_mc_ratio__319->SetBinError(26,0.00171062);
   data_mc_ratio__319->SetBinError(27,0.002293414);
   data_mc_ratio__319->SetBinError(28,0.002669485);
   data_mc_ratio__319->SetBinError(29,0.002734493);
   data_mc_ratio__319->SetBinError(30,0.003426443);
   data_mc_ratio__319->SetBinError(31,0.03308647);
   data_mc_ratio__319->SetMinimum(0.4);
   data_mc_ratio__319->SetMaximum(1.6);
   data_mc_ratio__319->SetEntries(3849.725);
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
   0.178055,
   0.02128799,
   0.04534396,
   0.02100777,
   0.02270036,
   0.02151255,
   0.02266045,
   0.02352047,
   0.04218659,
   0.02795039,
   0.05732225,
   0.02674512,
   0.02810871,
   0.02990129,
   0.08030324,
   0.07262967,
   0.0985658,
   0.03985858,
   0.0362857,
   0.03627774,
   0.03993354,
   0.0436166,
   0.04116168,
   0.04581635,
   0.2022733,
   0.05371056,
   0.05096655,
   0.06045581,
   0.06248668};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0.7572721);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(1.242728);
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
