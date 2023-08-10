void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Thu Aug 10 12:23:16 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-173.5974,6.314516,173723.8);
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
   st->SetMaximum(148889.5);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0.3);
   st_stack_20->SetMaximum(156334);
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
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,33577.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,37754.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,31054.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,21691.73);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,23612.01);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,28453.06);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,19676.46);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,19983.22);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,22543.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,22912.24);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,28584.22);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,32931.24);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,62333.28);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,52443.54);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,37168.39);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,30774.45);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,29981.86);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,23662.47);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,19105.86);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,13534.62);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,14344.19);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,11726.33);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,9034.825);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,7284.844);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,6595.312);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,5656.378);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,3622.495);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(30,3207.563);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(31,2471.498);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,2240.012);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,3027.104);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,3400.98);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,1899.365);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,2607.026);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,3706.937);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,1942.152);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,2005.93);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,2404.577);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,2319.075);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,3159.742);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,2751.184);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,22022.97);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,15637.29);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,2845.354);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,3160.847);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,2554.719);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,2156.173);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,2369.791);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,1582.576);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,2164.113);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,2416.447);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,1938.465);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,1265.181);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,1054.675);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,1031.273);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,687.6937);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(30,782.1172);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(31,631.4753);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(29294);

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
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.06738933);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,75.82232);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,108.6055);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,99.7361);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,116.9295);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,108.2216);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,120.8284);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,137.7306);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,138.2598);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,152.3952);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,160.8959);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,173.9794);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,174.9594);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,184.6553);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,184.051);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,162.9761);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,154.6907);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,127.5386);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,118.8059);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,100.9292);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,83.1496);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,71.55738);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,54.96411);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,47.20755);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,38.58745);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,28.13694);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,27.12465);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,19.85376);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(30,14.16133);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(31,9.729781);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.06738933);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,3.791869);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,4.631255);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,4.481091);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,4.916045);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,4.518882);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,4.915895);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,5.261272);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,5.349298);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,5.520417);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,5.711914);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,6.010433);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,5.898505);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,6.267043);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,6.022511);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,5.644397);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,5.608116);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,4.997838);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,4.856889);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,4.464608);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,4.137012);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,3.750402);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,3.310419);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,3.044994);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,2.768561);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,2.391575);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,2.392115);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,2.019952);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(30,1.709577);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(31,1.368033);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(34591);

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
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(2,0.9236412);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(3,1283.544);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(4,1987.752);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(5,2128.721);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(6,2316.198);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(7,2446.561);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(8,2568.873);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(9,2687.659);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(10,2843.72);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(11,3070.432);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(12,3295.275);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(13,3571.344);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(14,3749.034);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(15,3934.288);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(16,3993.675);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(17,3760.124);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(18,3463.264);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(19,3066.928);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(20,2642.012);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(21,2217.907);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(22,1823.369);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(23,1486.544);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(24,1185.325);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(25,925.2819);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(26,756.8127);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(27,616.5167);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(28,466.0867);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(29,354.6888);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(30,233.3851);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(31,204.3893);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(2,0.2680712);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(3,10.31536);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(4,12.67344);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(5,13.22468);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(6,13.77925);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(7,14.169);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(8,14.66502);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(9,14.82841);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(10,15.2377);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(11,16.13049);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(12,16.75191);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(13,17.73034);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(14,17.88555);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(15,17.86915);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(16,18.03732);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(17,17.91262);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(18,17.83361);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(19,15.8726);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(20,15.27858);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(21,13.60231);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(22,12.1929);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(23,11.07332);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(24,9.922268);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(25,8.545281);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(26,7.740312);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(27,8.015678);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(28,7.198766);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(29,6.219865);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(30,4.662633);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(31,4.105375);
   VbbHcc_tags_Z_dR_all_stack_3->SetEntries(880955);

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
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(3,337.1889);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(4,556.4519);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(5,532.4064);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(6,491.2156);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(7,403.2071);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(8,333.113);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(9,306.1741);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(10,284.0865);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(11,318.644);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(12,348.7109);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(13,392.5816);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(14,481.5791);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(15,485.1149);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(16,460.4159);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(17,475.58);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(18,412.2828);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(19,372.113);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(20,326.9906);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(21,234.6112);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(22,199.8346);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(23,169.8067);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(24,122.0536);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(25,119.256);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(26,108.7634);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(27,84.2276);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(28,69.84615);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(29,64.15774);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(30,39.91213);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(31,26.31271);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(3,7.44309);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(4,13.74259);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(5,15.2579);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(6,19.47091);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(7,17.02432);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(8,13.35982);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(9,13.6731);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(10,12.25946);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(11,13.71227);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(12,13.83429);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(13,19.39027);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(14,18.62627);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(15,22.26363);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(16,16.0783);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(17,18.13414);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(18,15.68524);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(19,18.11094);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(20,13.62716);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(21,11.92449);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(22,9.91728);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(23,11.30341);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(24,8.362473);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(25,8.971507);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(26,9.786988);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(27,5.589305);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(28,4.900051);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(29,5.927197);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(30,5.650175);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(31,2.575987);
   VbbHcc_tags_Z_dR_all_stack_4->SetEntries(50972);

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
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(3,81.89243);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(4,83.07465);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(5,52.13184);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(6,38.25359);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(7,31.77027);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(8,43.53557);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(9,25.44247);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(10,22.01811);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(11,38.2052);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(12,36.42713);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(13,27.37287);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(14,36.14263);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(15,33.14442);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(16,38.14103);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(17,28.16213);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(18,32.62524);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(19,21.2312);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(20,20.1965);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(21,19.52086);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(22,19.60046);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(23,16.92725);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(24,20.75209);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(25,10.48182);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(26,18.80995);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(27,5.353736);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(28,8.520018);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(29,6.202089);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(30,5.1209);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(31,2.533679);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(3,9.149281);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(4,7.685105);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(5,10.66362);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(6,3.874005);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(7,6.157032);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(8,6.258645);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(9,3.360789);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(10,2.49129);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(11,9.30394);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(12,5.283403);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(13,2.888003);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(14,5.399421);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(15,3.840184);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(16,5.961955);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(17,3.589026);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(18,4.473252);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(19,3.01973);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(20,2.226831);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(21,3.018429);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(22,4.0889);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(23,3.98148);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(24,7.602633);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(25,2.99308);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(26,5.077519);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(27,0.8747016);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(28,1.891388);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(29,1.078127);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(30,1.054081);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(31,0.7080124);
   VbbHcc_tags_Z_dR_all_stack_5->SetEntries(7669);

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
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(3,0.4841378);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(7,0.139529);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(9,0.9818713);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(10,0.6599753);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(11,0.2956484);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(12,0.2678449);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(13,0.1440206);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(14,0.1552273);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(16,0.3402984);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(17,0.268632);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(20,0.4921557);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(21,0.1535887);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(22,0.1445668);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(25,0.1622891);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(3,0.4074993);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(4,0.5029805);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(7,0.139529);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(9,0.5754944);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(10,0.6599753);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(11,0.2096251);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(12,0.1893967);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(13,0.1440206);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(14,0.1552273);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(16,0.3402984);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(17,0.268632);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(20,0.4921557);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(21,0.1535887);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(22,0.1445668);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(25,0.1622891);
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
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(3,1.217273);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(4,1.308234);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(5,0.4860304);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(6,0.3513551);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(8,0.1075422);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(9,1.096411);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(10,0.8959395);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(11,0.3188021);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(13,0.1994566);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(14,0.1305552);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(15,0.3898338);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(16,0.8130938);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(17,0.6345094);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(18,0.1159231);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(19,0.2293137);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(20,0.4921557);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(21,0.2357897);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(24,0.1151045);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(29,0.1182308);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(3,0.505139);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(4,0.5881156);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(5,0.2433556);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(6,0.2029008);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(8,0.1075422);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(9,0.5867821);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(10,0.6807547);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(11,0.1856077);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(13,0.1437075);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(14,0.1305552);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(15,0.2250722);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(16,0.4144178);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(17,0.3419512);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(18,0.1159231);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(19,0.1621559);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(20,0.4921557);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(21,0.1667291);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(24,0.1151045);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(29,0.1182308);
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
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(3,5.52854);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(4,12.80613);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(5,17.66486);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(6,6.65474);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(7,4.817011);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(8,3.59702);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(9,5.635495);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(10,2.529347);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(11,4.332541);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(12,4.375196);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(13,7.924738);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(14,10.91206);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(15,14.15293);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(16,11.932);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(17,13.50801);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(18,9.44369);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(19,8.547695);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(20,5.659942);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(21,3.050495);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(22,3.243536);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(23,2.685974);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(24,1.222705);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(25,1.376043);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(26,1.427754);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(27,0.7618331);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(28,1.448645);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(29,1.166762);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(30,0.5480248);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(31,0.2916673);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(3,1.277317);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(4,1.948475);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(5,2.384965);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(6,1.407314);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(7,1.209393);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(8,1.048787);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(9,1.272508);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(10,0.8600511);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(11,1.139632);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(12,1.057814);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(13,1.550763);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(14,1.806409);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(15,2.099251);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(16,1.913597);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(17,1.992291);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(18,1.665745);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(19,1.607334);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(20,1.289963);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(21,0.9663717);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(22,0.987699);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(23,0.9234614);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(24,0.6147536);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(25,0.7122055);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(26,0.6396986);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(27,0.440953);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(28,0.6590709);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(29,0.5837912);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(30,0.3895565);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(31,0.2916673);
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
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(3,6.019934);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(4,11.40577);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(5,11.88466);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(6,9.72477);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(7,6.878429);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(8,4.563688);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(9,3.574666);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(10,3.717551);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(11,4.411748);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(12,5.558765);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(13,7.382799);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(14,9.580596);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(15,11.23184);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(16,12.59482);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(17,11.93685);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(18,10.14729);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(19,7.980951);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(20,5.709229);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(21,3.792637);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(22,2.510323);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(23,1.933428);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(24,1.282847);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(25,1.076185);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(26,1.212441);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(27,1.247345);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(28,1.337771);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(29,1.129452);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(30,0.6246818);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(31,0.3218592);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(3,0.1173724);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(4,0.1673268);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(5,0.1693511);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(6,0.1500344);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(7,0.1285542);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(8,0.09943851);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(9,0.08712271);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(10,0.0895033);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(11,0.100652);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(12,0.1154042);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(13,0.1334492);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(14,0.1525966);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(15,0.1611993);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(16,0.1807964);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(17,0.1654395);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(18,0.155958);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(19,0.140323);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(20,0.1137311);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(21,0.0959238);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(22,0.07519509);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(23,0.1231681);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(24,0.05658921);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(25,0.04806045);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(26,0.05087824);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(27,0.05320038);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(28,0.05885686);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(29,0.05082721);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(30,0.03910679);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(31,0.02620905);
   VbbHcc_tags_Z_dR_all_stack_9->SetEntries(83441);

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
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(3,2.072555);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(4,4.442899);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(5,5.290585);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(6,5.052586);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(7,4.084582);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(8,2.991382);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(9,2.429058);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(10,2.304573);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(11,2.395889);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(12,3.001922);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(13,3.414367);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(14,3.789271);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(15,4.006709);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(16,4.298466);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(17,4.015821);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(18,3.574899);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(19,2.969636);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(20,2.394449);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(21,1.868669);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(22,1.386672);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(23,1.060213);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(24,0.8599597);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(25,0.732555);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(26,0.7353836);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(27,0.7570916);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(28,0.6198616);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(29,0.4584223);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(30,0.2998132);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(31,0.1692886);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(3,0.03270302);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(4,0.04788777);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(5,0.0522965);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(6,0.05117027);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(7,0.04595947);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(8,0.03936741);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(9,0.03541176);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(10,0.03459626);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(11,0.03520551);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(12,0.03944176);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(13,0.04214475);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(14,0.04430329);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(15,0.04558851);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(16,0.04723107);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(17,0.04564781);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(18,0.0430829);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(19,0.03930087);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(20,0.0352158);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(21,0.03112883);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(22,0.02689585);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(23,0.02341949);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(24,0.02102576);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(25,0.01946091);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(26,0.0194784);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(27,0.01976617);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(28,0.01789917);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(29,0.01535863);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(30,0.01241006);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(31,0.009369812);
   VbbHcc_tags_Z_dR_all_stack_10->SetEntries(146904);

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
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(3,0.05764663);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(4,0.05228379);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(5,0.07021951);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(6,0.03875122);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(7,0.0188729);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(8,0.01519485);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(9,0.008576478);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(10,0.007628555);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(11,0.01341228);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(12,0.02204182);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(13,0.00607336);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(14,0.01904036);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(15,0.02134236);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(16,0.01067998);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(17,0.01066133);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(18,0.007341181);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(19,0.01314011);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(20,0.009070629);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(23,0.01465895);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(25,0.001948216);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(26,0.004058264);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(27,0.004186663);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(28,0.002416403);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(29,0.01251482);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(31,0.001370852);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(3,0.01228183);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(4,0.01177336);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(5,0.01328376);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(6,0.009832152);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(7,0.006668128);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(8,0.005892741);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(9,0.004954731);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(10,0.00403716);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(11,0.006048042);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(12,0.006846666);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(13,0.003704766);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(14,0.007311737);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(15,0.007663866);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(16,0.00499042);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(17,0.005414605);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(18,0.004274271);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(19,0.005969163);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(20,0.005046107);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(23,0.006674229);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(25,0.001948216);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(26,0.002872144);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(27,0.003139072);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(28,0.002416403);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(29,0.006278705);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(31,0.001370852);
   VbbHcc_tags_Z_dR_all_stack_11->SetEntries(187);

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
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(3,0.0173376);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(4,0.02999205);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(5,0.03328648);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(6,0.0232977);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(7,0.01159797);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(8,0.005921206);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(9,0.00516651);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(10,0.00426071);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(11,0.003609513);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(12,0.006422612);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(13,0.007330193);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(14,0.004103693);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(15,0.00743649);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(16,0.005662133);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(17,0.009123453);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(18,0.007212039);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(19,0.004238327);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(20,0.003579775);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(21,0.002964155);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(22,0.003018849);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(23,0.002434773);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(24,0.0004202124);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(25,0.002096271);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(26,0.001544935);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(27,0.002791154);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(28,0.004599299);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(29,0.001165685);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(30,0.001482959);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(31,0.00063551);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(3,0.002378721);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(4,0.003143194);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(5,0.003296369);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(6,0.002757891);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(7,0.001950735);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(8,0.001394172);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(9,0.001283456);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(10,0.001165964);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(11,0.001059264);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(12,0.001455008);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(13,0.001538081);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(14,0.00110469);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(15,0.001518542);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(16,0.001336401);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(17,0.001730602);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(18,0.001568531);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(19,0.001207473);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(20,0.001091143);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(21,0.0009969443);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(22,0.0009795351);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(23,0.0008537433);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(24,0.0004202124);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(25,0.0007674596);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(26,0.0006985608);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(27,0.0009318214);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(28,0.001241125);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(29,0.0006058545);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(30,0.0006783277);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(31,0.0004557359);
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
   VbbHcc_tags_Z_dR_all__54->SetBinContent(2,16);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(3,25785);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(4,30062);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(5,22916);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(6,20596);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(7,18933);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(8,18255);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(9,18000);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(10,18012);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(11,18819);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(12,19922);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(13,21657);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(14,23432);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(15,25680);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(16,26531);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(17,25684);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(18,23686);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(19,21228);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(20,18520);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(21,15400);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(22,12613);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(23,10059);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(24,8290);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(25,6818);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(26,5664);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(27,4932);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(28,4343);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(29,4008);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(30,2682);
   VbbHcc_tags_Z_dR_all__54->SetBinContent(31,2030);
   VbbHcc_tags_Z_dR_all__54->SetEntries(474602);

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
   0.9910306,
   35371.14,
   40521.33,
   33902.82,
   24676.17,
   26617.72,
   31530.69,
   22847.2,
   23281.42,
   26135.41,
   26766.78,
   32768.58,
   37397.54,
   67000.3,
   57149.82,
   41625.62,
   34860.61,
   33589.41,
   26785.24,
   21687.93,
   15667.86,
   16094.73,
   13112.9,
   10140.4,
   8211.199,
   7332.321,
   6231.369,
   4070.284,
   3501.616};
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
   0.2764118,
   2240.071,
   3027.175,
   3401.06,
   1899.526,
   2607.132,
   3706.999,
   1942.268,
   2006.034,
   2404.694,
   2319.19,
   3159.859,
   2751.318,
   22022.99,
   15637.31,
   2845.476,
   3160.945,
   2554.84,
   2156.278,
   2369.866,
   1582.665,
   2164.178,
   2416.496,
   1938.509,
   1265.256,
   1054.724,
   1031.315,
   687.7515,
   782.1542};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_all_fx1039,Graph_from_VbbHcc_tags_Z_dR_all_fy1039,Graph_from_VbbHcc_tags_Z_dR_all_fex1039,Graph_from_VbbHcc_tags_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_all1039","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMaximum(97925.61);
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
   data_mc_ratio__55->SetBinContent(2,16.14481);
   data_mc_ratio__55->SetBinContent(3,0.7289841);
   data_mc_ratio__55->SetBinContent(4,0.7418809);
   data_mc_ratio__55->SetBinContent(5,0.6759319);
   data_mc_ratio__55->SetBinContent(6,0.8346513);
   data_mc_ratio__55->SetBinContent(7,0.711293);
   data_mc_ratio__55->SetBinContent(8,0.5789597);
   data_mc_ratio__55->SetBinContent(9,0.7878428);
   data_mc_ratio__55->SetBinContent(10,0.773664);
   data_mc_ratio__55->SetBinContent(11,0.7200576);
   data_mc_ratio__55->SetBinContent(12,0.7442807);
   data_mc_ratio__55->SetBinContent(13,0.6609075);
   data_mc_ratio__55->SetBinContent(14,0.6265652);
   data_mc_ratio__55->SetBinContent(15,0.3832819);
   data_mc_ratio__55->SetBinContent(16,0.4642359);
   data_mc_ratio__55->SetBinContent(17,0.6170239);
   data_mc_ratio__55->SetBinContent(18,0.6794488);
   data_mc_ratio__55->SetBinContent(19,0.6319849);
   data_mc_ratio__55->SetBinContent(20,0.6914256);
   data_mc_ratio__55->SetBinContent(21,0.7100724);
   data_mc_ratio__55->SetBinContent(22,0.8050239);
   data_mc_ratio__55->SetBinContent(23,0.6249873);
   data_mc_ratio__55->SetBinContent(24,0.6322017);
   data_mc_ratio__55->SetBinContent(25,0.6723598);
   data_mc_ratio__55->SetBinContent(26,0.6897896);
   data_mc_ratio__55->SetBinContent(27,0.6726383);
   data_mc_ratio__55->SetBinContent(28,0.6969576);
   data_mc_ratio__55->SetBinContent(29,0.9846978);
   data_mc_ratio__55->SetBinContent(30,0.765932);
   data_mc_ratio__55->SetBinContent(31,0.7476295);
   data_mc_ratio__55->SetBinError(2,4.036202);
   data_mc_ratio__55->SetBinError(3,0.004539777);
   data_mc_ratio__55->SetBinError(4,0.004278832);
   data_mc_ratio__55->SetBinError(5,0.004465124);
   data_mc_ratio__55->SetBinError(6,0.005815856);
   data_mc_ratio__55->SetBinError(7,0.005169384);
   data_mc_ratio__55->SetBinError(8,0.004285065);
   data_mc_ratio__55->SetBinError(9,0.005872233);
   data_mc_ratio__55->SetBinError(10,0.00576463);
   data_mc_ratio__55->SetBinError(11,0.005248908);
   data_mc_ratio__55->SetBinError(12,0.005273152);
   data_mc_ratio__55->SetBinError(13,0.004490985);
   data_mc_ratio__55->SetBinError(14,0.004093187);
   data_mc_ratio__55->SetBinError(15,0.002391778);
   data_mc_ratio__55->SetBinError(16,0.002850112);
   data_mc_ratio__55->SetBinError(17,0.003850088);
   data_mc_ratio__55->SetBinError(18,0.004414798);
   data_mc_ratio__55->SetBinError(19,0.004337626);
   data_mc_ratio__55->SetBinError(20,0.005080717);
   data_mc_ratio__55->SetBinError(21,0.005721927);
   data_mc_ratio__55->SetBinError(22,0.007168026);
   data_mc_ratio__55->SetBinError(23,0.006231517);
   data_mc_ratio__55->SetBinError(24,0.0069435);
   data_mc_ratio__55->SetBinError(25,0.00814279);
   data_mc_ratio__55->SetBinError(26,0.009165476);
   data_mc_ratio__55->SetBinError(27,0.009577895);
   data_mc_ratio__55->SetBinError(28,0.01057576);
   data_mc_ratio__55->SetBinError(29,0.01555389);
   data_mc_ratio__55->SetBinError(30,0.01478975);
   data_mc_ratio__55->SetBinError(31,0.174669);
   data_mc_ratio__55->SetMinimum(0.4);
   data_mc_ratio__55->SetMaximum(1.6);
   data_mc_ratio__55->SetEntries(34.15304);
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
   0.2789135,
   0.06333046,
   0.07470572,
   0.1003179,
   0.07697813,
   0.09794722,
   0.117568,
   0.0850112,
   0.08616458,
   0.09200906,
   0.08664434,
   0.09642954,
   0.07356947,
   0.3286998,
   0.2736195,
   0.06835878,
   0.09067381,
   0.07606087,
   0.08050246,
   0.1092712,
   0.1010135,
   0.134465,
   0.1842838,
   0.1911669,
   0.154089,
   0.1438458,
   0.1655037,
   0.1689689,
   0.2233695};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.6055602);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.39444);
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
