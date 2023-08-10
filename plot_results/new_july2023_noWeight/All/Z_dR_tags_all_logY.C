void Z_dR_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Thu Aug 10 12:31:14 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(0,0,1,1);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.35198,6.314516,12.43498);
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
   st->SetMaximum(3.541488e+10);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0.04589941);
   st_stack_20->SetMaximum(1.13838e+11);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetLabelSize(0.035);
   st_stack_20->GetXaxis()->SetTitleSize(0.035);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetLabelSize(0.035);
   st_stack_20->GetZaxis()->SetTitleSize(0.035);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,31400.91);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,33969.74);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,27107.08);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,19960.35);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,21269.59);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,25615.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,17823.24);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,18541.35);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,21815.66);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,21774.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,25778.01);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,29689.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,51590.97);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,49209.57);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,33586.54);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,29003.52);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,27262.65);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,22219.36);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,17424.43);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,12130.24);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,13214.27);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,10634.32);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,8433.581);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,6586.56);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,6186.365);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,5361.366);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,3331.166);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(30,2772.751);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(31,2413.645);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,2044.235);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,2621.609);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,2612.489);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,1706.382);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,2249.197);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,3278.189);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,1707.545);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,1766.205);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,2513.615);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,2436.768);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,2693.055);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,2326.225);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,15210.51);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,15115.71);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,2492.319);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,2861.447);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,2267.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,1970.352);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,2138.982);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,1376.58);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,1994.041);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,2123.832);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,1806.426);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,1121.561);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,989.7699);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,980.369);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,627.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(30,620.0848);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(31,617.9652);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(30262);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.04712387);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,77.5625);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,107.5775);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,101.4349);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,115.9812);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,106.7421);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,121.8347);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,135.4028);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,139.1851);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,151.5875);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,157.5087);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,173.9689);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,174.3858);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,181.6263);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,181.9731);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,161.2772);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,154.423);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,131.4998);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,117.084);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,98.94932);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,84.77207);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,72.03466);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,55.32808);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,45.99005);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,39.43471);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,28.80336);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,25.78742);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,19.19523);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(30,13.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(31,9.787716);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.04712387);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,3.468816);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,4.127771);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,4.009062);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,4.39191);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,4.033554);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,4.347432);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,4.660591);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,4.80677);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,4.970489);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,5.067593);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,5.312001);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,5.299098);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,5.437326);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,5.378105);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,4.966862);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,5.019542);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,4.542467);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,4.192419);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,3.95696);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,3.697601);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,3.414964);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,3.011226);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,2.653449);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,2.545984);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,2.175534);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,2.060221);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,1.759106);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(30,1.509327);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(31,1.256057);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(36361);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(2,0.8277142);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(3,1175.91);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(4,1830.704);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(5,1946.228);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(6,2117.808);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(7,2237.578);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(8,2351.487);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(9,2455.529);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(10,2592.475);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(11,2800.448);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(12,3006.089);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(13,3257.882);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(14,3424.556);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(15,3604.872);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(16,3664.241);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(17,3442.531);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(18,3175.515);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(19,2833.179);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(20,2418.126);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(21,2039.496);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(22,1676.169);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(23,1362.184);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(24,1083.716);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(25,850.2591);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(26,694.8528);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(27,555.0038);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(28,423.3523);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(29,322.7161);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(30,213.1102);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(31,185.6268);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(2,0.2204065);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(3,8.490408);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(4,10.64285);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(5,10.99397);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(6,11.47958);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(7,11.79138);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(8,12.08594);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(9,12.33778);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(10,12.67338);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(11,13.17227);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(12,13.66117);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(13,14.23599);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(14,14.61122);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(15,15.01114);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(16,15.13827);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(17,14.68444);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(18,14.11327);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(19,13.32423);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(20,12.29466);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(21,11.28643);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(22,10.21356);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(23,9.204087);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(24,8.19893);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(25,7.245264);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(26,6.556036);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(27,5.851996);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(28,5.109883);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(29,4.445292);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(30,3.619605);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(31,3.375204);
   VbbHcc_tags_Z_dR_all_stack_3->SetEntries(965144);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(3,303.0913);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(4,501.157);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(5,478.815);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(6,444.4091);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(7,366.6323);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(8,298.68);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(9,266.381);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(10,255.5799);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(11,286.2755);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(12,317.147);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(13,345.7617);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(14,434.7994);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(15,428.6023);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(16,418.4827);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(17,430.6213);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(18,373.0227);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(19,323.086);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(20,289.9982);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(21,216.7779);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(22,178.6001);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(23,152.1489);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(24,112.2708);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(25,108.3347);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(26,97.00023);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(27,76.23789);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(28,64.437);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(29,56.54466);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(30,33.05713);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(31,23.89985);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(3,6.424506);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(4,12.17121);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(5,13.21946);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(6,16.84326);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(7,15.69415);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(8,12.35083);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(9,11.26354);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(10,10.72655);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(11,11.8578);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(12,12.32941);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(13,14.87227);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(14,16.53937);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(15,15.99432);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(16,14.5452);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(17,16.62006);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(18,14.21953);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(19,13.45062);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(20,11.92839);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(21,10.97164);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(22,8.833938);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(23,10.20301);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(24,7.847152);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(25,8.270831);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(26,8.684118);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(27,5.032384);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(28,4.514719);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(29,5.212523);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(30,3.543403);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(31,2.208598);
   VbbHcc_tags_Z_dR_all_stack_4->SetEntries(50664);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(3,76.5615);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(4,78.56685);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(5,48.74483);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(6,33.28577);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(7,30.70268);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(8,39.24941);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(9,25.36779);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(10,20.50514);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(11,32.65103);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(12,31.87907);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(13,25.68738);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(14,33.18086);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(15,31.24185);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(16,33.29442);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(17,27.77009);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(18,29.08538);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(19,20.08231);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(20,20.63563);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(21,18.49531);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(22,17.26481);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(23,16.18493);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(24,18.70624);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(25,8.98544);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(26,16.14087);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(27,5.311505);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(28,7.393357);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(29,6.444342);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(30,4.752987);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(31,2.330988);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(3,8.260478);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(4,7.379938);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(5,11.299);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(6,3.039488);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(7,7.043986);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(8,5.432734);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(9,3.459069);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(10,2.345187);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(11,7.625115);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(12,4.363153);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(13,2.818309);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(14,4.841825);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(15,3.613669);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(16,4.875608);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(17,3.373081);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(18,3.584966);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(19,2.822636);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(20,2.921993);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(21,2.818253);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(22,3.421175);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(23,3.595809);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(24,6.419149);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(25,2.350495);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(26,4.210139);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(27,0.8633644);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(28,1.536896);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(29,1.082557);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(30,0.9397358);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(31,0.6459252);
   VbbHcc_tags_Z_dR_all_stack_5->SetEntries(8033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(3,0.4496752);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(9,1.082654);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(10,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(11,0.2687386);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(12,0.2687386);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(20,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(3,0.3427432);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(4,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(9,0.6349631);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(10,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(11,0.1900269);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(12,0.1900269);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(16,0.3153059);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(17,0.3153059);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(20,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(22,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(25,0.1343693);
   VbbHcc_tags_Z_dR_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(3,1.078716);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(4,1.215453);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(6,0.3271759);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(9,1.191713);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(10,0.6701599);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(15,0.3271759);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(16,0.7515404);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(17,0.6424818);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(18,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(19,0.2181173);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(20,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(3,0.4274042);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(4,0.5362827);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(5,0.2181173);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(6,0.1888951);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(8,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(9,0.6442608);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(10,0.4776297);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(13,0.1542322);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(15,0.1888951);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(16,0.3833966);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(17,0.3675584);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(18,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(19,0.1542322);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(20,0.4520427);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(21,0.1542322);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(29,0.1090586);
   VbbHcc_tags_Z_dR_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(3,5.3264);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(4,11.82854);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(5,15.31403);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(6,5.927363);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(7,4.50046);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(8,3.129577);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(9,5.131479);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(10,2.33756);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(11,3.859199);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(12,4.542594);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(13,6.988776);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(14,9.993786);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(15,12.36755);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(16,10.49022);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(17,12.74535);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(18,8.530452);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(19,7.820867);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(20,5.424778);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(21,2.653181);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(22,2.876352);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(23,2.399956);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(24,1.012902);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(25,1.019054);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(26,1.324657);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(27,0.7758471);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(28,1.282298);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(29,1.045243);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(30,0.5226215);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(31,0.2432072);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(3,1.192458);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(4,1.746835);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(5,2.013948);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(6,1.238019);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(7,1.0935);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(8,0.9051687);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(9,1.149521);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(10,0.7803906);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(11,0.9983885);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(12,1.072536);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(13,1.347631);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(14,1.624202);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(15,1.807198);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(16,1.661717);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(17,1.824142);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(18,1.487894);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(19,1.430498);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(20,1.185502);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(21,0.8402407);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(22,0.8690266);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(23,0.8011749);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(24,0.5064512);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(25,0.5103871);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(26,0.5937311);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(27,0.4487152);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(28,0.5741008);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(29,0.5238742);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(30,0.370435);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(31,0.2432072);
   VbbHcc_tags_Z_dR_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(3,5.518044);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(4,10.74394);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(5,10.93592);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(6,8.915463);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(7,6.29804);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(8,4.138724);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(9,3.251497);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(10,3.389834);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(11,4.077161);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(12,5.073246);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(13,6.833515);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(14,8.831226);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(15,10.40848);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(16,11.63684);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(17,11.0422);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(18,9.353249);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(19,7.319472);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(20,5.273854);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(21,3.467357);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(22,2.348625);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(23,1.649863);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(24,1.125652);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(25,0.9860739);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(26,1.127367);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(27,1.135768);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(28,1.248188);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(29,1.03008);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(30,0.5595838);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(31,0.2974888);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(3,0.1013547);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(4,0.1412532);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(5,0.1421027);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(6,0.1278797);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(7,0.1065486);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(8,0.08570499);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(9,0.07630977);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(10,0.0780721);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(11,0.08598075);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(12,0.09594428);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(13,0.1118324);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(14,0.1278087);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(15,0.1379679);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(16,0.1461772);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(17,0.1423386);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(18,0.1309143);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(19,0.1165982);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(20,0.09838425);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(21,0.07954203);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(22,0.065603);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(23,0.05509454);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(24,0.04514472);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(25,0.04213309);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(26,0.04529357);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(27,0.0458402);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(28,0.04832288);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(29,0.04372193);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(30,0.03264345);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(31,0.02341866);
   VbbHcc_tags_Z_dR_all_stack_9->SetEntries(84585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(3,1.962883);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(4,4.19816);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(5,4.990705);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(6,4.747055);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(7,3.865537);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(8,2.804705);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(9,2.295505);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(10,2.155886);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(11,2.257178);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(12,2.817024);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(13,3.187973);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(14,3.569873);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(15,3.75877);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(16,4.018845);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(17,3.768352);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(18,3.350863);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(19,2.77596);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(20,2.244859);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(21,1.750716);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(22,1.292163);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(23,0.9978671);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(24,0.8158146);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(25,0.6953587);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(26,0.6939899);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(27,0.7131533);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(28,0.5844846);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(29,0.4380212);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(30,0.2847138);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(31,0.1587827);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(3,0.0306592);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(4,0.04483769);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(5,0.04888714);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(6,0.04767886);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(7,0.04302478);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(8,0.03664859);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(9,0.03315529);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(10,0.03213117);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(11,0.03287734);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(12,0.03672899);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(13,0.03907249);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(14,0.04134663);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(15,0.04242644);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(16,0.04386967);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(17,0.04248048);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(18,0.04005825);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(19,0.0364603);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(20,0.03278749);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(21,0.02895487);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(22,0.02487553);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(23,0.02186);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(24,0.01976557);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(25,0.01824812);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(26,0.01823015);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(27,0.01848014);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(28,0.01673017);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(29,0.01448309);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(30,0.01167664);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(31,0.008719976);
   VbbHcc_tags_Z_dR_all_stack_10->SetEntries(147270);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(3,0.05289693);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(4,0.05316694);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(5,0.06098741);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(6,0.03927611);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(7,0.02019856);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(8,0.01245278);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(9,0.007745777);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(10,0.007475761);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(11,0.01160179);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(12,0.01992854);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(13,0.005436264);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(14,0.01569407);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(15,0.01819281);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(16,0.01044703);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(17,0.01160179);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(18,0.00659102);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(19,0.01341831);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(20,0.008407537);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(23,0.01114254);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(27,0.003856013);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(29,0.01048078);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(3,0.01058579);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(4,0.01082713);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(5,0.01103079);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(6,0.009261292);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(7,0.006556201);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(8,0.004779556);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(9,0.004487719);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(10,0.003869347);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(11,0.005274079);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(12,0.006149471);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(13,0.003189589);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(14,0.005989401);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(15,0.006555338);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(16,0.004778372);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(17,0.005274079);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(18,0.003893142);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(19,0.005540201);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(20,0.004246701);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(22,0.002275762);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(23,0.005051211);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(26,0.002234813);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(27,0.002770611);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(28,0.001580251);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(29,0.005255463);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(3,0.01538969);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(4,0.02630674);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(5,0.02986785);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(6,0.02141755);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(7,0.01002936);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(8,0.005187506);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(9,0.004472975);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(10,0.003988879);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(11,0.003193235);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(12,0.005660327);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(13,0.00653613);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(14,0.00393127);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(15,0.00721622);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(16,0.005452721);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(17,0.008737334);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(18,0.006386133);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(19,0.00375777);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(20,0.003526997);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(21,0.002593585);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(22,0.002593921);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(23,0.002478367);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(25,0.002144268);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(26,0.001463842);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(27,0.00250187);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(28,0.004068702);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(29,0.001072134);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(30,0.00127974);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(31,0.0005648715);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(3,0.002082838);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(4,0.002714499);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(5,0.002918299);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(6,0.00250829);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(7,0.001655525);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(8,0.001218161);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(9,0.001108439);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(10,0.001060537);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(11,0.0009390978);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(12,0.001268054);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(13,0.00135954);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(14,0.001042542);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(15,0.001447334);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(16,0.001250944);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(17,0.001628504);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(18,0.001357605);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(19,0.001063921);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(20,0.001029481);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(21,0.0008840812);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(22,0.0008380431);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(23,0.0008401846);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(25,0.0007792731);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(26,0.0006634166);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(27,0.000809705);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(28,0.001096164);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(29,0.0005510293);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(30,0.0005888407);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(31,0.0004132058);
   VbbHcc_tags_Z_dR_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_all__54 = new TH1D("VbbHcc_tags_Z_dR_all__54","",30,0,6);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(2,15);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(3,26072);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(4,30365);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(5,23177);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(6,20770);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(7,19099);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(8,18477);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(9,18211);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(10,18185);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(11,19035);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(12,20146);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(13,21932);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(14,23714);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(15,25982);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(16,26754);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(17,25929);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(18,23890);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(19,21386);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(20,18668);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(21,15562);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(22,12740);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(23,10131);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(24,8360);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(25,6886);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(26,5719);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(27,4964);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(28,4378);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(29,4017);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(30,2691);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(31,2056);
   VbbHcc_tags_Z_dR_all__54->SetEntries(479340);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all__54->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all__54->SetLineWidth(2);
   VbbHcc_tags_Z_dR_all__54->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_all__54->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all__54->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__54->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__54->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fx1039[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fy1039[30] = {
   0,
   0.8748381,
   33048.44,
   36516.26,
   29714.07,
   22691.81,
   24026.07,
   28437.41,
   20718.88,
   21558.11,
   25097.43,
   25300.15,
   29598.69,
   33779.54,
   55864.2,
   53534.79,
   37677.28,
   32756.92,
   30588.65,
   25079.06,
   19806.38,
   14093.7,
   14821.89,
   11907.41,
   9449.989,
   7437.139,
   6854.353,
   5885.457,
   3738.7,
   3038.54};
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fex1039[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fey1039[30] = {
   0,
   0.2253879,
   2044.282,
   2621.673,
   2612.574,
   1706.513,
   2249.297,
   3278.242,
   1707.637,
   1766.291,
   2513.694,
   2436.847,
   2693.141,
   2326.341,
   15210.53,
   15115.73,
   2492.426,
   2861.524,
   2268.046,
   1970.434,
   2139.045,
   1376.656,
   1994.095,
   2123.875,
   1806.463,
   1121.625,
   989.8028,
   980.3962,
   627.641,
   620.1081};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_all_fx1039,Graph_from_VbbHcc_tags_Z_dR_all_fy1039,Graph_from_VbbHcc_tags_Z_dR_all_fex1039,Graph_from_VbbHcc_tags_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_all1039","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMinimum(78.1822);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMaximum(78182.2);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_all1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__55 = new TH1D("data_mc_ratio__55","",30,0,6);
   data_mc_ratio__55->SetBinContent(2,17.14603);
   data_mc_ratio__55->SetBinContent(3,0.7889025);
   data_mc_ratio__55->SetBinContent(4,0.8315474);
   data_mc_ratio__55->SetBinContent(5,0.7800007);
   data_mc_ratio__55->SetBinContent(6,0.9153084);
   data_mc_ratio__55->SetBinContent(7,0.7949281);
   data_mc_ratio__55->SetBinContent(8,0.6497427);
   data_mc_ratio__55->SetBinContent(9,0.8789567);
   data_mc_ratio__55->SetBinContent(10,0.8435341);
   data_mc_ratio__55->SetBinContent(11,0.7584443);
   data_mc_ratio__55->SetBinContent(12,0.7962799);
   data_mc_ratio__55->SetBinContent(13,0.7409788);
   data_mc_ratio__55->SetBinContent(14,0.7020225);
   data_mc_ratio__55->SetBinContent(15,0.4650921);
   data_mc_ratio__55->SetBinContent(16,0.4997498);
   data_mc_ratio__55->SetBinContent(17,0.6881867);
   data_mc_ratio__55->SetBinContent(18,0.7293115);
   data_mc_ratio__55->SetBinContent(19,0.6991481);
   data_mc_ratio__55->SetBinContent(20,0.7443659);
   data_mc_ratio__55->SetBinContent(21,0.7857066);
   data_mc_ratio__55->SetBinContent(22,0.9039499);
   data_mc_ratio__55->SetBinContent(23,0.6835163);
   data_mc_ratio__55->SetBinContent(24,0.702084);
   data_mc_ratio__55->SetBinContent(25,0.7286781);
   data_mc_ratio__55->SetBinContent(26,0.7689785);
   data_mc_ratio__55->SetBinContent(27,0.7242114);
   data_mc_ratio__55->SetBinContent(28,0.7438675);
   data_mc_ratio__55->SetBinContent(29,1.074438);
   data_mc_ratio__55->SetBinContent(30,0.8856227);
   data_mc_ratio__55->SetBinContent(31,0.7799719);
   data_mc_ratio__55->SetBinError(2,4.427086);
   data_mc_ratio__55->SetBinError(3,0.004885805);
   data_mc_ratio__55->SetBinError(4,0.004771999);
   data_mc_ratio__55->SetBinError(5,0.005123496);
   data_mc_ratio__55->SetBinError(6,0.006351103);
   data_mc_ratio__55->SetBinError(7,0.005752049);
   data_mc_ratio__55->SetBinError(8,0.004779976);
   data_mc_ratio__55->SetBinError(9,0.006513292);
   data_mc_ratio__55->SetBinError(10,0.006255269);
   data_mc_ratio__55->SetBinError(11,0.005497273);
   data_mc_ratio__55->SetBinError(12,0.00561011);
   data_mc_ratio__55->SetBinError(13,0.005003416);
   data_mc_ratio__55->SetBinError(14,0.00455878);
   data_mc_ratio__55->SetBinError(15,0.002885378);
   data_mc_ratio__55->SetBinError(16,0.003055331);
   data_mc_ratio__55->SetBinError(17,0.004273792);
   data_mc_ratio__55->SetBinError(18,0.004718511);
   data_mc_ratio__55->SetBinError(19,0.004780842);
   data_mc_ratio__55->SetBinError(20,0.005448006);
   data_mc_ratio__55->SetBinError(21,0.006298363);
   data_mc_ratio__55->SetBinError(22,0.008008656);
   data_mc_ratio__55->SetBinError(23,0.006790828);
   data_mc_ratio__55->SetBinError(24,0.007678668);
   data_mc_ratio__55->SetBinError(25,0.008781167);
   data_mc_ratio__55->SetBinError(26,0.01016844);
   data_mc_ratio__55->SetBinError(27,0.01027897);
   data_mc_ratio__55->SetBinError(28,0.01124237);
   data_mc_ratio__55->SetBinError(29,0.01695236);
   data_mc_ratio__55->SetBinError(30,0.0170723);
   data_mc_ratio__55->SetBinError(31,0.1836633);
   data_mc_ratio__55->SetMinimum(0.4);
   data_mc_ratio__55->SetMaximum(1.6);
   data_mc_ratio__55->SetEntries(37.54808);
   data_mc_ratio__55->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__55->SetLineColor(ci);
   data_mc_ratio__55->SetLineWidth(2);
   data_mc_ratio__55->SetMarkerStyle(20);
   data_mc_ratio__55->SetMarkerSize(1.2);
   data_mc_ratio__55->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__55->GetXaxis()->SetRange(1,30);
   data_mc_ratio__55->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__55->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__55->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__55->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__55->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__55->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__55->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__55->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__55->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__55->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__55->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__55->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__55->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__55->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__55->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__55->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__55->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1040[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1040[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1040[30] = {
   0,
   0.2576338,
   0.06185715,
   0.07179467,
   0.08792378,
   0.07520392,
   0.09361902,
   0.1152792,
   0.08241935,
   0.08193163,
   0.1001574,
   0.09631749,
   0.09098852,
   0.06886834,
   0.2722769,
   0.2823533,
   0.06615197,
   0.08735632,
   0.07414665,
   0.07856888,
   0.1079978,
   0.09767878,
   0.1345372,
   0.1783658,
   0.1911603,
   0.150814,
   0.144405,
   0.1665795,
   0.1678768,
   0.204081};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.661176);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.338824);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
