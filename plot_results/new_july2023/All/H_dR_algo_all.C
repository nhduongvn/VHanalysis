void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Mon Jul 24 10:11:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(0,0,1,1);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-169.202,6.525,169332.8);
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
   st->SetMaximum(145126.3);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0.3);
   st_stack_120->SetMaximum(152382.6);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetLabelSize(0.035);
   st_stack_120->GetXaxis()->SetTitleSize(0.035);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetLabelSize(0.035);
   st_stack_120->GetZaxis()->SetTitleSize(0.035);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,47024.83);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,45760.98);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,39612.66);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,30856.58);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,27963.11);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,36396.61);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,29005.38);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,37097.76);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,43355.22);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,61230.89);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,41329.56);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,36086.08);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,39344.17);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,36903.06);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,37005.03);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,33960.55);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,28659.17);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,28863.49);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,22612.06);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,21820.37);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,16755.58);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,12909.55);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,11180);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,11459.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,9142.374);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,9347.812);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(29,5424.075);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(30,3144.512);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(31,2119.454);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,3311.908);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,3211.552);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,4048.979);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,2784.202);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,3040.262);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,4191.606);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,2352.131);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,3481.079);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,5718.121);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,22731.95);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,4073.95);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,3231.656);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,3187.593);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,2957.305);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,3464.625);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,2661.692);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,2513.764);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,2898.438);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,2028.781);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,2052.01);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,1761.754);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,1582.811);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,1418.572);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,1489.674);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,1383.086);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,2057.487);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(29,941.1555);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(30,678.4234);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(31,579.349);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,0.05467641);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,189.4354);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,244.6129);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,172.8032);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,145.3551);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,134.2142);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,149.1868);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,170.1418);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,217.0422);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,246.1737);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,286.5312);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,328.839);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,338.1094);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,350.1492);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,363.8943);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,343.6836);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,319.3675);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,310.7666);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,274.5544);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,233.3756);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,190.9189);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,141.7656);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,111.0511);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,78.71754);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,68.07736);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,50.32892);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,41.34811);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,33.11951);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(30,21.14561);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(31,14.15089);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.05467641);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,7.01166);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,7.698162);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,6.164254);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,5.321638);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,4.922408);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,6.943012);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,5.388636);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,6.664796);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,6.50188);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,7.284519);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,7.506748);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,7.605499);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,7.542587);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,7.753831);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,7.227951);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,6.948962);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,7.447902);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,6.53208);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,6.063762);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,5.437485);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,4.666278);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,4.030348);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,3.391088);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,3.270526);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,3.067782);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,2.760916);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,2.576714);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(30,1.986273);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(31,1.591164);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(2,0.8674243);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(3,1695.383);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(4,3053.716);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(5,3186.194);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(6,2957.332);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(7,2786.332);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(8,2748.587);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(9,2811.547);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(10,2968.616);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(11,3168.601);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(12,3387.376);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(13,3525.326);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(14,3441.456);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(15,3321.081);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(16,3146.43);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(17,2929.332);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(18,2776.373);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(19,2679.462);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(20,2506.521);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(21,2233.769);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(22,1919.516);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(23,1598.657);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(24,1322.269);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(25,1077.389);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(26,881.933);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(27,710.863);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(28,578.2593);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(29,430.8953);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(30,259.2928);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(31,199.2066);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(2,0.2523013);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(3,11.00927);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(4,15.09502);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(5,15.01455);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(6,14.47013);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(7,14.13591);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(8,13.89427);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(9,14.19114);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(10,14.8331);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(11,15.3167);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(12,15.4702);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(13,16.06362);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(14,15.68199);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(15,15.44117);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(16,14.93524);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(17,14.61314);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(18,13.91813);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(19,14.5115);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(20,13.36666);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(21,12.56352);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(22,11.59175);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(23,10.64934);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(24,9.829594);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(25,8.68861);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(26,7.852524);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(27,7.082542);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(28,6.355531);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(29,5.432129);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(30,4.261535);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(31,3.644694);
   VbbHcc_algo_H_dR_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(3,293.0904);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(4,328.7286);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(5,314.4737);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(6,291.882);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(7,266.7712);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(8,260.9029);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(9,272.8123);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(10,272.7886);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(11,261.027);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(12,264.7167);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(13,284.4083);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(14,256.3914);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(15,269.7369);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(16,256.715);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(17,223.9293);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(18,211.0686);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(19,230.0351);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(20,211.2328);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(21,177.281);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(22,153.9102);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(23,146.1458);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(24,126.8487);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(25,83.93271);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(26,80.13997);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(27,61.43651);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(28,49.48514);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(29,41.92246);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(30,29.55235);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(31,17.41269);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(3,12.06241);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(4,12.37436);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(5,15.8622);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(6,16.2073);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(7,14.74785);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(8,13.75818);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(9,16.87774);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(10,14.95497);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(11,14.7587);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(12,14.19324);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(13,14.01943);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(14,12.84036);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(15,14.48778);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(16,13.54147);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(17,10.91745);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(18,9.887007);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(19,13.71388);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(20,12.68587);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(21,9.816987);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(22,9.727522);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(23,12.83159);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(24,11.77868);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(25,7.476624);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(26,9.47449);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(27,7.247334);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(28,7.325892);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(29,6.866449);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(30,5.893949);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(31,3.479418);
   VbbHcc_algo_H_dR_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(2,0.2185277);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(3,164.4167);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(4,233.102);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(5,200.1756);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(6,203.0447);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(7,136.8782);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(8,115.2634);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(9,155.0818);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(10,146.6596);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(11,111.8);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(12,131.3764);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(13,138.3093);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(14,136.4981);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(15,144.8403);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(16,114.8869);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(17,121.1601);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(18,117.8747);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(19,96.14983);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(20,104.0687);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(21,86.8971);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(22,79.32195);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(23,46.70702);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(24,41.79246);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(25,51.71068);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(26,26.19482);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(27,28.10081);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(28,32.92591);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(29,23.77038);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(30,16.96418);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(31,5.841092);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(2,0.160841);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(3,11.1884);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(4,17.77327);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(5,21.21943);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(6,26.3213);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(7,14.64908);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(8,11.40696);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(9,18.25546);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(10,18.38725);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(11,11.95035);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(12,15.43635);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(13,13.67977);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(14,14.33176);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(15,15.56191);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(16,11.10339);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(17,16.78125);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(18,15.11538);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(19,9.184788);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(20,13.2714);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(21,11.37588);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(22,13.21687);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(23,5.537664);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(24,4.808558);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(25,11.41037);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(26,4.067884);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(27,9.32905);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(28,10.54302);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(29,4.56109);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(30,6.007862);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(31,1.77145);
   VbbHcc_algo_H_dR_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(3,0.6315644);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(4,0.8838522);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(5,0.7991644);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(6,0.3614694);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(7,0.520392);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(8,0.3197901);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(9,0.4176305);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(10,0.3508782);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(12,0.6458753);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(13,0.5043385);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(14,0.4120417);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(15,1.520661);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(16,1.04721);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(17,0.2701499);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(18,0.3419907);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(19,0.4067482);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(20,0.3596096);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(21,0.3396787);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(22,0.7074024);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(23,0.5298112);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(26,0.08949604);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(27,0.2486027);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(28,0.5166607);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(3,0.2387907);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(4,0.3680936);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(5,0.4475198);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(6,0.1807901);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(7,0.4343513);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(8,0.1631289);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(9,0.2162487);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(10,0.1781352);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(12,0.4048922);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(13,0.2898659);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(14,0.2653684);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(15,0.6250976);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(16,0.4247249);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(17,0.156111);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(18,0.2681048);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(19,0.2652978);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(20,0.2850761);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(21,0.2653228);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(22,0.3604394);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(23,0.2801931);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(26,0.08949604);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(27,0.2486027);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(28,0.3204811);
   VbbHcc_algo_H_dR_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(3,4.550135);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(4,6.241961);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(5,4.665483);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(6,2.29863);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(7,2.112192);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(8,1.477381);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(9,0.5525853);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(10,0.1447908);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(11,1.016049);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(12,1.462316);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(13,1.113747);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(14,0.9481192);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(15,2.025201);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(16,1.45353);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(17,0.4934242);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(18,0.5231953);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(19,0.8043033);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(20,0.5532083);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(21,0.5948532);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(22,0.8422911);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(23,0.6957581);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(24,0.3589284);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(25,0.481536);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(26,0.2017788);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(27,0.5998956);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(28,0.7778768);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(29,0.4839979);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(30,0.3468042);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(31,0.1987961);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(3,0.5580494);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(4,0.703597);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(5,0.6737261);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(6,0.4017838);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(7,0.5403561);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(8,0.323101);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(9,0.2238807);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(10,0.102419);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(11,0.2615684);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(12,0.4645679);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(13,0.3484206);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(14,0.3182802);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(15,0.6452267);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(16,0.4493798);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(17,0.1867309);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(18,0.2867283);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(19,0.3045541);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(20,0.3055701);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(21,0.293543);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(22,0.365952);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(23,0.2940643);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(24,0.1606303);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(25,0.1824057);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(26,0.1164998);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(27,0.2942188);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(28,0.345343);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(29,0.1833804);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(30,0.1554527);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(31,0.1147834);
   VbbHcc_algo_H_dR_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(3,6.118096);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(4,11.35409);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(5,12.29223);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(6,7.370519);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(7,2.367162);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(8,2.737036);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(9,1.580527);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(10,2.760169);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(11,0.542992);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(12,1.812085);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(13,2.12682);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(14,0.8191524);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(15,2.14149);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(16,1.817186);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(17,0.9718983);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(18,0.8997039);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(19,1.738505);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(20,1.246147);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(21,0.8850283);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(22,1.169886);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(23,0.8584521);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(24,0.793564);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(25,0.8908681);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(26,0.8111948);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(27,1.28897);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(28,1.450917);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(29,1.394049);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(30,0.2701236);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(3,1.12058);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(4,1.567384);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(5,1.599782);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(6,1.225742);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(7,0.7192143);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(8,0.7738706);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(9,0.5910613);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(10,0.8071187);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(11,0.3184143);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(12,0.6058476);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(13,0.6879635);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(14,0.4126117);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(15,0.6812854);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(16,0.6093378);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(17,0.4966164);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(18,0.4079386);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(19,0.6186257);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(20,0.5229231);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(21,0.4438543);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(22,0.5302797);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(23,0.4305336);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(24,0.4029157);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(25,0.4538835);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(26,0.4078799);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(27,0.5341354);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(28,0.5500363);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(29,0.5727766);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(30,0.2701236);
   VbbHcc_algo_H_dR_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(2,0.005011951);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(3,4.691381);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(4,6.310375);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(5,4.911307);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(6,3.020711);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(7,1.62919);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(8,1.066571);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(9,0.9463239);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(10,0.9766007);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(11,1.051496);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(12,1.121171);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(13,1.105677);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(14,1.100651);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(15,0.9600976);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(16,0.8808865);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(17,0.8593129);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(18,0.8342117);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(19,0.7294797);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(20,0.7602198);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(21,0.6499366);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(22,0.5189288);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(23,0.3938913);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(24,0.3737852);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(25,0.3658279);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(26,0.4043258);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(27,0.5639479);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(28,0.5750749);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(29,0.5327557);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(30,0.3219845);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(31,0.167428);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(2,0.00307716);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(3,0.1001456);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(4,0.1197687);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(5,0.1020099);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(6,0.07884787);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(7,0.05723225);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(8,0.0493425);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(9,0.04289006);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(10,0.04489754);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(11,0.06000329);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(12,0.06156159);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(13,0.04747512);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(14,0.04772457);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(15,0.04364815);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(16,0.04322955);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(17,0.04178699);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(18,0.04147454);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(19,0.03952238);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(20,0.04192144);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(21,0.03577587);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(22,0.03131764);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(23,0.02772704);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(24,0.02649446);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(25,0.02626844);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(26,0.02798485);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(27,0.03526105);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(28,0.03410135);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(29,0.03313733);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(30,0.02651727);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(31,0.01942762);
   VbbHcc_algo_H_dR_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(3,1.277714);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(4,2.537782);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(5,2.677219);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(6,2.115169);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(7,1.412858);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(8,0.8851708);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(9,0.7308316);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(10,0.7012927);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(11,0.7541181);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(12,0.8787411);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(13,0.864528);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(14,0.8584336);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(15,0.7777528);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(16,0.6558383);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(17,0.6626839);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(18,0.5864671);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(19,0.6914091);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(20,0.6220771);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(21,0.5848898);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(22,0.4649729);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(23,0.410163);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(24,0.3530316);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(25,0.3104663);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(26,0.3068255);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(27,0.2864009);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(28,0.2998409);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(29,0.2736678);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(30,0.1434578);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(31,0.09552715);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(3,0.02557788);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(4,0.03606934);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(5,0.03717571);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(6,0.03307244);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(7,0.02698774);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(8,0.02136104);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(9,0.01927406);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(10,0.01893895);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(11,0.01963943);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(12,0.02113029);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(13,0.02097973);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(14,0.02090982);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(15,0.01990534);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(16,0.0182733);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(17,0.01838964);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(18,0.01728936);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(19,0.01876087);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(20,0.01778296);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(21,0.01727439);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(22,0.01540518);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(23,0.01437686);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(24,0.01337778);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(25,0.01251949);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(26,0.0124916);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(27,0.01209823);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(28,0.01241062);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(29,0.01187211);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(30,0.008583501);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(31,0.006979268);
   VbbHcc_algo_H_dR_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(3,0.0604754);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(4,0.1347889);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(5,0.2957933);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(6,0.3101129);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(7,0.1856715);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(8,0.1545572);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(9,0.09164333);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(10,0.015712);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(11,0.02776942);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(12,0.01727433);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(13,0.02082546);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(14,0.02139072);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(15,0.01543837);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(16,0.01804173);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(17,0.01454192);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(18,0.02396188);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(19,0.02014933);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(20,0.01016229);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(21,0.01762846);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(22,0.01128102);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(23,0.01474745);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(24,0.0229785);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(25,0.01350241);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(26,0.03451431);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(27,0.03475586);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(28,0.03944871);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(29,0.03378347);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(30,0.01128534);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(31,0.008885458);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(3,0.01209454);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(4,0.01921137);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(5,0.02834577);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(6,0.02827818);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(7,0.022187);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(8,0.01978625);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(9,0.01563897);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(10,0.006468472);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(11,0.008295552);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(12,0.00669184);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(13,0.007399773);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(14,0.007386949);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(15,0.005546636);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(16,0.006728483);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(17,0.006047276);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(18,0.007974183);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(19,0.007420519);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(20,0.004616151);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(21,0.006808719);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(22,0.004902585);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(23,0.005859149);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(24,0.00789523);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(25,0.007207545);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(26,0.009110648);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(27,0.009423389);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(28,0.01010885);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(29,0.009452854);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(30,0.005242043);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(31,0.005659535);
   VbbHcc_algo_H_dR_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(3,0.01027493);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(4,0.04311385);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(5,0.07890099);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(6,0.1180543);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(7,0.1093157);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(8,0.05727383);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(9,0.03115474);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(10,0.01454032);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(11,0.01411801);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(12,0.01144782);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(13,0.01011276);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(14,0.00885621);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(15,0.007209282);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(16,0.004908515);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(17,0.00621463);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(18,0.008919533);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(19,0.004372858);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(20,0.006532404);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(21,0.004460031);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(22,0.00591515);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(23,0.005127404);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(24,0.008974916);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(25,0.01454915);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(26,0.01898108);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(27,0.01797173);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(28,0.01135029);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(29,0.005188313);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(30,0.002508724);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(31,0.002388391);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(3,0.001857751);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(4,0.003733452);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(5,0.005075112);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(6,0.006486758);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(7,0.006259253);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(8,0.004359476);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(9,0.003232062);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(10,0.002205342);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(11,0.002190329);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(12,0.001941118);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(13,0.001857758);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(14,0.001715026);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(15,0.001525749);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(16,0.001266623);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(17,0.001447123);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(18,0.001819835);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(19,0.0011967);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(20,0.001476025);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(21,0.001205548);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(22,0.001471034);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(23,0.001315208);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(24,0.001791886);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(25,0.002183405);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(26,0.002496196);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(27,0.002406802);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(28,0.001931808);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(29,0.001281801);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(30,0.0009008178);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(31,0.0009810589);
   VbbHcc_algo_H_dR_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_all__239 = new TH1D("VbbHcc_algo_H_dR_all__239","",30,0,6);
   VbbHcc_algo_H_dR_all__239->SetBinContent(2,7);
   VbbHcc_algo_H_dR_all__239->SetBinContent(3,18990);
   VbbHcc_algo_H_dR_all__239->SetBinContent(4,21958);
   VbbHcc_algo_H_dR_all__239->SetBinContent(5,17603);
   VbbHcc_algo_H_dR_all__239->SetBinContent(6,16758);
   VbbHcc_algo_H_dR_all__239->SetBinContent(7,16723);
   VbbHcc_algo_H_dR_all__239->SetBinContent(8,17202);
   VbbHcc_algo_H_dR_all__239->SetBinContent(9,17931);
   VbbHcc_algo_H_dR_all__239->SetBinContent(10,18645);
   VbbHcc_algo_H_dR_all__239->SetBinContent(11,19773);
   VbbHcc_algo_H_dR_all__239->SetBinContent(12,21825);
   VbbHcc_algo_H_dR_all__239->SetBinContent(13,23219);
   VbbHcc_algo_H_dR_all__239->SetBinContent(14,24397);
   VbbHcc_algo_H_dR_all__239->SetBinContent(15,24800);
   VbbHcc_algo_H_dR_all__239->SetBinContent(16,24508);
   VbbHcc_algo_H_dR_all__239->SetBinContent(17,23025);
   VbbHcc_algo_H_dR_all__239->SetBinContent(18,21730);
   VbbHcc_algo_H_dR_all__239->SetBinContent(19,20223);
   VbbHcc_algo_H_dR_all__239->SetBinContent(20,18079);
   VbbHcc_algo_H_dR_all__239->SetBinContent(21,15585);
   VbbHcc_algo_H_dR_all__239->SetBinContent(22,12684);
   VbbHcc_algo_H_dR_all__239->SetBinContent(23,10452);
   VbbHcc_algo_H_dR_all__239->SetBinContent(24,8423);
   VbbHcc_algo_H_dR_all__239->SetBinContent(25,6709);
   VbbHcc_algo_H_dR_all__239->SetBinContent(26,5068);
   VbbHcc_algo_H_dR_all__239->SetBinContent(27,4149);
   VbbHcc_algo_H_dR_all__239->SetBinContent(28,3348);
   VbbHcc_algo_H_dR_all__239->SetBinContent(29,2877);
   VbbHcc_algo_H_dR_all__239->SetBinContent(30,1808);
   VbbHcc_algo_H_dR_all__239->SetBinContent(31,1348);
   VbbHcc_algo_H_dR_all__239->SetEntries(439876);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all__239->SetLineColor(ci);
   VbbHcc_algo_H_dR_all__239->SetLineWidth(2);
   VbbHcc_algo_H_dR_all__239->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_all__239->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__239->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fx1239[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fy1239[30] = {
   0,
   1.14564,
   49384.49,
   49648.64,
   43512.03,
   34469.78,
   31295.64,
   39677.25,
   32419.31,
   40707.83,
   47146.23,
   65306.84,
   45612.19,
   40262.7,
   43437.42,
   40790.86,
   40626.41,
   37388.46,
   31979.98,
   31963.42,
   25346.46,
   24167.76,
   18691.76,
   14513.43,
   12473.83,
   12517.31,
   9996.144,
   10053.5,
   5956.506,
   3472.563};
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fex1239[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fey1239[30] = {
   0,
   0.3041788,
   3311.975,
   3211.67,
   4049.098,
   2784.417,
   3040.371,
   4191.673,
   2352.311,
   3481.198,
   5718.177,
   22731.97,
   4074.036,
   3231.76,
   3187.711,
   2957.405,
   3464.721,
   2661.799,
   2513.871,
   2898.534,
   2028.885,
   2052.116,
   1761.848,
   1582.898,
   1418.668,
   1489.734,
   1383.158,
   2057.539,
   941.211,
   678.4919};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_all_fx1239,Graph_from_VbbHcc_algo_H_dR_all_fy1239,Graph_from_VbbHcc_algo_H_dR_all_fex1239,Graph_from_VbbHcc_algo_H_dR_all_fey1239);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_all1239 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_all1239","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMaximum(96842.69);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_all1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__240 = new TH1D("data_mc_ratio__240","",30,0,6);
   data_mc_ratio__240->SetBinContent(2,6.11012);
   data_mc_ratio__240->SetBinContent(3,0.3845337);
   data_mc_ratio__240->SetBinContent(4,0.4422679);
   data_mc_ratio__240->SetBinContent(5,0.4045548);
   data_mc_ratio__240->SetBinContent(6,0.4861649);
   data_mc_ratio__240->SetBinContent(7,0.5343556);
   data_mc_ratio__240->SetBinContent(8,0.4335482);
   data_mc_ratio__240->SetBinContent(9,0.5530963);
   data_mc_ratio__240->SetBinContent(10,0.45802);
   data_mc_ratio__240->SetBinContent(11,0.4193973);
   data_mc_ratio__240->SetBinContent(12,0.3341917);
   data_mc_ratio__240->SetBinContent(13,0.5090525);
   data_mc_ratio__240->SetBinContent(14,0.6059454);
   data_mc_ratio__240->SetBinContent(15,0.5709363);
   data_mc_ratio__240->SetBinContent(16,0.6008209);
   data_mc_ratio__240->SetBinContent(17,0.5667495);
   data_mc_ratio__240->SetBinContent(18,0.5811954);
   data_mc_ratio__240->SetBinContent(19,0.6323643);
   data_mc_ratio__240->SetBinContent(20,0.5656153);
   data_mc_ratio__240->SetBinContent(21,0.6148788);
   data_mc_ratio__240->SetBinContent(22,0.5248315);
   data_mc_ratio__240->SetBinContent(23,0.5591767);
   data_mc_ratio__240->SetBinContent(24,0.5803591);
   data_mc_ratio__240->SetBinContent(25,0.537846);
   data_mc_ratio__240->SetBinContent(26,0.4048792);
   data_mc_ratio__240->SetBinContent(27,0.41506);
   data_mc_ratio__240->SetBinContent(28,0.3330183);
   data_mc_ratio__240->SetBinContent(29,0.4830013);
   data_mc_ratio__240->SetBinContent(30,0.5206528);
   data_mc_ratio__240->SetBinContent(31,0.5720254);
   data_mc_ratio__240->SetBinError(2,2.309408);
   data_mc_ratio__240->SetBinError(3,0.002790435);
   data_mc_ratio__240->SetBinError(4,0.00298462);
   data_mc_ratio__240->SetBinError(5,0.003049187);
   data_mc_ratio__240->SetBinError(6,0.003755541);
   data_mc_ratio__240->SetBinError(7,0.004132123);
   data_mc_ratio__240->SetBinError(8,0.003305582);
   data_mc_ratio__240->SetBinError(9,0.004130461);
   data_mc_ratio__240->SetBinError(10,0.00335431);
   data_mc_ratio__240->SetBinError(11,0.002982561);
   data_mc_ratio__240->SetBinError(12,0.002262135);
   data_mc_ratio__240->SetBinError(13,0.003340726);
   data_mc_ratio__240->SetBinError(14,0.003879406);
   data_mc_ratio__240->SetBinError(15,0.003625449);
   data_mc_ratio__240->SetBinError(16,0.003837877);
   data_mc_ratio__240->SetBinError(17,0.003735006);
   data_mc_ratio__240->SetBinError(18,0.003942687);
   data_mc_ratio__240->SetBinError(19,0.004446769);
   data_mc_ratio__240->SetBinError(20,0.004206627);
   data_mc_ratio__240->SetBinError(21,0.004925339);
   data_mc_ratio__240->SetBinError(22,0.004660063);
   data_mc_ratio__240->SetBinError(23,0.005469522);
   data_mc_ratio__240->SetBinError(24,0.006323586);
   data_mc_ratio__240->SetBinError(25,0.006566426);
   data_mc_ratio__240->SetBinError(26,0.005687314);
   data_mc_ratio__240->SetBinError(27,0.006443758);
   data_mc_ratio__240->SetBinError(28,0.005755398);
   data_mc_ratio__240->SetBinError(29,0.009004889);
   data_mc_ratio__240->SetBinError(30,0.01224472);
   data_mc_ratio__240->SetBinError(31,0.1414979);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(50.50174);
   data_mc_ratio__240->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__240->SetLineColor(ci);
   data_mc_ratio__240->SetLineWidth(2);
   data_mc_ratio__240->SetMarkerStyle(20);
   data_mc_ratio__240->SetMarkerSize(1.2);
   data_mc_ratio__240->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__240->GetXaxis()->SetRange(1,31);
   data_mc_ratio__240->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__240->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__240->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__240->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__240->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__240->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__240->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__240->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1240[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1240[30] = {
   0,
   0.2655099,
   0.06706507,
   0.06468798,
   0.09305699,
   0.08077848,
   0.09714997,
   0.1056442,
   0.07255896,
   0.08551668,
   0.121286,
   0.3480795,
   0.08931902,
   0.08026684,
   0.07338628,
   0.07250166,
   0.08528247,
   0.07119307,
   0.07860765,
   0.09068285,
   0.08004607,
   0.08491132,
   0.09425797,
   0.1090644,
   0.1137316,
   0.1190139,
   0.1383691,
   0.2046589,
   0.1580139,
   0.1953865};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0.5823046);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(1.417695);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
