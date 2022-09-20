void ZPt_VbbHcc_18()
{
//=========Macro generated from canvas: ZPt_VbbHcc_18/ZPt_VbbHcc_18
//=========  (Tue Sep 20 12:29:20 2022) by ROOT version 6.14/09
   TCanvas *ZPt_VbbHcc_18 = new TCanvas("ZPt_VbbHcc_18", "ZPt_VbbHcc_18",0,0,600,600);
   ZPt_VbbHcc_18->SetHighLightColor(2);
   ZPt_VbbHcc_18->Range(0,0,1,1);
   ZPt_VbbHcc_18->SetFillColor(0);
   ZPt_VbbHcc_18->SetFillStyle(4000);
   ZPt_VbbHcc_18->SetBorderMode(0);
   ZPt_VbbHcc_18->SetBorderSize(2);
   ZPt_VbbHcc_18->SetFrameFillStyle(1000);
   ZPt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-1549.192,1562.903,1547653);
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
   st->SetMaximum(1326412);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0.01);
   st_stack_11->SetMaximum(1392732);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetLabelSize(0.035);
   st_stack_11->GetXaxis()->SetTitleSize(0.035);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.05);
   st_stack_11->GetYaxis()->SetTitleSize(0.057);
   st_stack_11->GetYaxis()->SetTitleOffset(1.2);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetLabelSize(0.035);
   st_stack_11->GetZaxis()->SetTitleSize(0.035);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_ZPt_stack_1 = new TH1D("VbbHcc_ZPt_stack_1","",40,0,2000);
   VbbHcc_ZPt_stack_1->SetBinContent(2,438113);
   VbbHcc_ZPt_stack_1->SetBinContent(3,510484.9);
   VbbHcc_ZPt_stack_1->SetBinContent(4,302326.4);
   VbbHcc_ZPt_stack_1->SetBinContent(5,111298.9);
   VbbHcc_ZPt_stack_1->SetBinContent(6,44564.83);
   VbbHcc_ZPt_stack_1->SetBinContent(7,16244.67);
   VbbHcc_ZPt_stack_1->SetBinContent(8,7170.66);
   VbbHcc_ZPt_stack_1->SetBinContent(9,3690.413);
   VbbHcc_ZPt_stack_1->SetBinContent(10,1904.267);
   VbbHcc_ZPt_stack_1->SetBinContent(11,944.9779);
   VbbHcc_ZPt_stack_1->SetBinContent(12,569.8511);
   VbbHcc_ZPt_stack_1->SetBinContent(13,434.682);
   VbbHcc_ZPt_stack_1->SetBinContent(14,228.9014);
   VbbHcc_ZPt_stack_1->SetBinContent(15,115.0713);
   VbbHcc_ZPt_stack_1->SetBinContent(16,82.40483);
   VbbHcc_ZPt_stack_1->SetBinContent(17,62.65155);
   VbbHcc_ZPt_stack_1->SetBinContent(18,31.97021);
   VbbHcc_ZPt_stack_1->SetBinContent(19,34.50355);
   VbbHcc_ZPt_stack_1->SetBinContent(20,13.85451);
   VbbHcc_ZPt_stack_1->SetBinContent(21,11.82066);
   VbbHcc_ZPt_stack_1->SetBinContent(22,7.783009);
   VbbHcc_ZPt_stack_1->SetBinContent(23,6.67615);
   VbbHcc_ZPt_stack_1->SetBinContent(24,3.280174);
   VbbHcc_ZPt_stack_1->SetBinContent(25,3.430744);
   VbbHcc_ZPt_stack_1->SetBinContent(26,2.170216);
   VbbHcc_ZPt_stack_1->SetBinContent(27,0.8974561);
   VbbHcc_ZPt_stack_1->SetBinContent(28,0.9309769);
   VbbHcc_ZPt_stack_1->SetBinContent(29,1.404415);
   VbbHcc_ZPt_stack_1->SetBinContent(30,1.10396);
   VbbHcc_ZPt_stack_1->SetBinContent(32,0.535842);
   VbbHcc_ZPt_stack_1->SetBinContent(33,0.3426945);
   VbbHcc_ZPt_stack_1->SetBinContent(37,0.295293);
   VbbHcc_ZPt_stack_1->SetBinError(2,13183.75);
   VbbHcc_ZPt_stack_1->SetBinError(3,15448.51);
   VbbHcc_ZPt_stack_1->SetBinError(4,9943.346);
   VbbHcc_ZPt_stack_1->SetBinError(5,4569.817);
   VbbHcc_ZPt_stack_1->SetBinError(6,1702.799);
   VbbHcc_ZPt_stack_1->SetBinError(7,710.395);
   VbbHcc_ZPt_stack_1->SetBinError(8,307.9986);
   VbbHcc_ZPt_stack_1->SetBinError(9,408.8121);
   VbbHcc_ZPt_stack_1->SetBinError(10,114.524);
   VbbHcc_ZPt_stack_1->SetBinError(11,72.0466);
   VbbHcc_ZPt_stack_1->SetBinError(12,53.08025);
   VbbHcc_ZPt_stack_1->SetBinError(13,43.81326);
   VbbHcc_ZPt_stack_1->SetBinError(14,28.17989);
   VbbHcc_ZPt_stack_1->SetBinError(15,14.25231);
   VbbHcc_ZPt_stack_1->SetBinError(16,8.339337);
   VbbHcc_ZPt_stack_1->SetBinError(17,9.892488);
   VbbHcc_ZPt_stack_1->SetBinError(18,4.126583);
   VbbHcc_ZPt_stack_1->SetBinError(19,4.071378);
   VbbHcc_ZPt_stack_1->SetBinError(20,2.188207);
   VbbHcc_ZPt_stack_1->SetBinError(21,1.847861);
   VbbHcc_ZPt_stack_1->SetBinError(22,1.447039);
   VbbHcc_ZPt_stack_1->SetBinError(23,1.339552);
   VbbHcc_ZPt_stack_1->SetBinError(24,0.9223214);
   VbbHcc_ZPt_stack_1->SetBinError(25,0.9529445);
   VbbHcc_ZPt_stack_1->SetBinError(26,0.7495722);
   VbbHcc_ZPt_stack_1->SetBinError(27,0.4635282);
   VbbHcc_ZPt_stack_1->SetBinError(28,0.4877072);
   VbbHcc_ZPt_stack_1->SetBinError(29,0.6288236);
   VbbHcc_ZPt_stack_1->SetBinError(30,0.5527335);
   VbbHcc_ZPt_stack_1->SetBinError(32,0.3790361);
   VbbHcc_ZPt_stack_1->SetBinError(33,0.2767108);
   VbbHcc_ZPt_stack_1->SetBinError(37,0.295293);
   VbbHcc_ZPt_stack_1->SetEntries(20172);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZPt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_1->SetLineColor(ci);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_1,"");
   
   TH1D *VbbHcc_ZPt_stack_2 = new TH1D("VbbHcc_ZPt_stack_2","",40,0,2000);
   VbbHcc_ZPt_stack_2->SetBinContent(2,5129.456);
   VbbHcc_ZPt_stack_2->SetBinContent(3,4136.023);
   VbbHcc_ZPt_stack_2->SetBinContent(4,2022.999);
   VbbHcc_ZPt_stack_2->SetBinContent(5,1025.205);
   VbbHcc_ZPt_stack_2->SetBinContent(6,538.4705);
   VbbHcc_ZPt_stack_2->SetBinContent(7,301.4325);
   VbbHcc_ZPt_stack_2->SetBinContent(8,188.344);
   VbbHcc_ZPt_stack_2->SetBinContent(9,110.4567);
   VbbHcc_ZPt_stack_2->SetBinContent(10,69.42802);
   VbbHcc_ZPt_stack_2->SetBinContent(11,39.24649);
   VbbHcc_ZPt_stack_2->SetBinContent(12,24.67931);
   VbbHcc_ZPt_stack_2->SetBinContent(13,15.26531);
   VbbHcc_ZPt_stack_2->SetBinContent(14,13.89516);
   VbbHcc_ZPt_stack_2->SetBinContent(15,9.176162);
   VbbHcc_ZPt_stack_2->SetBinContent(16,4.674712);
   VbbHcc_ZPt_stack_2->SetBinContent(17,4.637592);
   VbbHcc_ZPt_stack_2->SetBinContent(18,2.513833);
   VbbHcc_ZPt_stack_2->SetBinContent(19,1.576733);
   VbbHcc_ZPt_stack_2->SetBinContent(20,1.867051);
   VbbHcc_ZPt_stack_2->SetBinContent(21,1.030511);
   VbbHcc_ZPt_stack_2->SetBinContent(22,1.385365);
   VbbHcc_ZPt_stack_2->SetBinContent(23,0.2862576);
   VbbHcc_ZPt_stack_2->SetBinContent(24,0.2522055);
   VbbHcc_ZPt_stack_2->SetBinContent(25,0.04923427);
   VbbHcc_ZPt_stack_2->SetBinContent(26,0.2101913);
   VbbHcc_ZPt_stack_2->SetBinError(2,32.77988);
   VbbHcc_ZPt_stack_2->SetBinError(3,36.04984);
   VbbHcc_ZPt_stack_2->SetBinError(4,22.37);
   VbbHcc_ZPt_stack_2->SetBinError(5,15.87067);
   VbbHcc_ZPt_stack_2->SetBinError(6,11.56154);
   VbbHcc_ZPt_stack_2->SetBinError(7,9.505706);
   VbbHcc_ZPt_stack_2->SetBinError(8,7.509555);
   VbbHcc_ZPt_stack_2->SetBinError(9,5.994624);
   VbbHcc_ZPt_stack_2->SetBinError(10,4.444698);
   VbbHcc_ZPt_stack_2->SetBinError(11,3.286215);
   VbbHcc_ZPt_stack_2->SetBinError(12,2.583197);
   VbbHcc_ZPt_stack_2->SetBinError(13,2.054437);
   VbbHcc_ZPt_stack_2->SetBinError(14,1.940118);
   VbbHcc_ZPt_stack_2->SetBinError(15,1.734034);
   VbbHcc_ZPt_stack_2->SetBinError(16,1.131973);
   VbbHcc_ZPt_stack_2->SetBinError(17,1.188463);
   VbbHcc_ZPt_stack_2->SetBinError(18,0.7999627);
   VbbHcc_ZPt_stack_2->SetBinError(19,0.7217488);
   VbbHcc_ZPt_stack_2->SetBinError(20,0.7805558);
   VbbHcc_ZPt_stack_2->SetBinError(21,0.5074667);
   VbbHcc_ZPt_stack_2->SetBinError(22,0.646936);
   VbbHcc_ZPt_stack_2->SetBinError(23,0.2862576);
   VbbHcc_ZPt_stack_2->SetBinError(24,0.2522055);
   VbbHcc_ZPt_stack_2->SetBinError(25,0.04923427);
   VbbHcc_ZPt_stack_2->SetBinError(26,0.2101913);
   VbbHcc_ZPt_stack_2->SetEntries(157315);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZPt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_2->SetLineColor(ci);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_2,"");
   
   TH1D *VbbHcc_ZPt_stack_3 = new TH1D("VbbHcc_ZPt_stack_3","",40,0,2000);
   VbbHcc_ZPt_stack_3->SetBinContent(2,95989.28);
   VbbHcc_ZPt_stack_3->SetBinContent(3,78366.38);
   VbbHcc_ZPt_stack_3->SetBinContent(4,27440.84);
   VbbHcc_ZPt_stack_3->SetBinContent(5,10704.59);
   VbbHcc_ZPt_stack_3->SetBinContent(6,4915.159);
   VbbHcc_ZPt_stack_3->SetBinContent(7,2465.225);
   VbbHcc_ZPt_stack_3->SetBinContent(8,1342.558);
   VbbHcc_ZPt_stack_3->SetBinContent(9,776.6452);
   VbbHcc_ZPt_stack_3->SetBinContent(10,467.944);
   VbbHcc_ZPt_stack_3->SetBinContent(11,297.9929);
   VbbHcc_ZPt_stack_3->SetBinContent(12,195.9153);
   VbbHcc_ZPt_stack_3->SetBinContent(13,125.2091);
   VbbHcc_ZPt_stack_3->SetBinContent(14,80.11078);
   VbbHcc_ZPt_stack_3->SetBinContent(15,52.42181);
   VbbHcc_ZPt_stack_3->SetBinContent(16,35.99431);
   VbbHcc_ZPt_stack_3->SetBinContent(17,25.48939);
   VbbHcc_ZPt_stack_3->SetBinContent(18,17.9661);
   VbbHcc_ZPt_stack_3->SetBinContent(19,11.27618);
   VbbHcc_ZPt_stack_3->SetBinContent(20,9.139868);
   VbbHcc_ZPt_stack_3->SetBinContent(21,5.531459);
   VbbHcc_ZPt_stack_3->SetBinContent(22,4.000065);
   VbbHcc_ZPt_stack_3->SetBinContent(23,2.779479);
   VbbHcc_ZPt_stack_3->SetBinContent(24,2.768844);
   VbbHcc_ZPt_stack_3->SetBinContent(25,0.5251381);
   VbbHcc_ZPt_stack_3->SetBinContent(26,0.7563947);
   VbbHcc_ZPt_stack_3->SetBinContent(27,0.6366227);
   VbbHcc_ZPt_stack_3->SetBinContent(28,0.4104098);
   VbbHcc_ZPt_stack_3->SetBinContent(29,0.3078066);
   VbbHcc_ZPt_stack_3->SetBinContent(30,0.3986244);
   VbbHcc_ZPt_stack_3->SetBinContent(31,0.2179958);
   VbbHcc_ZPt_stack_3->SetBinContent(32,0.09587127);
   VbbHcc_ZPt_stack_3->SetBinContent(33,0.3988904);
   VbbHcc_ZPt_stack_3->SetBinContent(34,0.0682033);
   VbbHcc_ZPt_stack_3->SetBinContent(35,0.1002096);
   VbbHcc_ZPt_stack_3->SetBinContent(36,0.03773098);
   VbbHcc_ZPt_stack_3->SetBinContent(38,0.07318711);
   VbbHcc_ZPt_stack_3->SetBinContent(40,0.07089243);
   VbbHcc_ZPt_stack_3->SetBinError(2,92.1571);
   VbbHcc_ZPt_stack_3->SetBinError(3,82.20711);
   VbbHcc_ZPt_stack_3->SetBinError(4,48.36759);
   VbbHcc_ZPt_stack_3->SetBinError(5,30.11894);
   VbbHcc_ZPt_stack_3->SetBinError(6,20.04054);
   VbbHcc_ZPt_stack_3->SetBinError(7,14.11247);
   VbbHcc_ZPt_stack_3->SetBinError(8,11.00703);
   VbbHcc_ZPt_stack_3->SetBinError(9,7.94345);
   VbbHcc_ZPt_stack_3->SetBinError(10,6.513086);
   VbbHcc_ZPt_stack_3->SetBinError(11,4.873909);
   VbbHcc_ZPt_stack_3->SetBinError(12,4.030209);
   VbbHcc_ZPt_stack_3->SetBinError(13,3.45773);
   VbbHcc_ZPt_stack_3->SetBinError(14,2.623855);
   VbbHcc_ZPt_stack_3->SetBinError(15,2.183426);
   VbbHcc_ZPt_stack_3->SetBinError(16,1.690357);
   VbbHcc_ZPt_stack_3->SetBinError(17,1.468335);
   VbbHcc_ZPt_stack_3->SetBinError(18,1.176527);
   VbbHcc_ZPt_stack_3->SetBinError(19,0.9397348);
   VbbHcc_ZPt_stack_3->SetBinError(20,0.9899206);
   VbbHcc_ZPt_stack_3->SetBinError(21,0.646952);
   VbbHcc_ZPt_stack_3->SetBinError(22,0.552285);
   VbbHcc_ZPt_stack_3->SetBinError(23,0.465977);
   VbbHcc_ZPt_stack_3->SetBinError(24,0.4828452);
   VbbHcc_ZPt_stack_3->SetBinError(25,0.1907983);
   VbbHcc_ZPt_stack_3->SetBinError(26,0.234936);
   VbbHcc_ZPt_stack_3->SetBinError(27,0.2144426);
   VbbHcc_ZPt_stack_3->SetBinError(28,0.1720651);
   VbbHcc_ZPt_stack_3->SetBinError(29,0.1579186);
   VbbHcc_ZPt_stack_3->SetBinError(30,0.1697379);
   VbbHcc_ZPt_stack_3->SetBinError(31,0.128088);
   VbbHcc_ZPt_stack_3->SetBinError(32,0.09587127);
   VbbHcc_ZPt_stack_3->SetBinError(33,0.1814419);
   VbbHcc_ZPt_stack_3->SetBinError(34,0.0682033);
   VbbHcc_ZPt_stack_3->SetBinError(35,0.1002096);
   VbbHcc_ZPt_stack_3->SetBinError(36,0.03773098);
   VbbHcc_ZPt_stack_3->SetBinError(38,0.07318711);
   VbbHcc_ZPt_stack_3->SetBinError(40,0.07089243);
   VbbHcc_ZPt_stack_3->SetEntries(3233690);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZPt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_3->SetLineColor(ci);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_3,"");
   
   TH1D *VbbHcc_ZPt_stack_4 = new TH1D("VbbHcc_ZPt_stack_4","",40,0,2000);
   VbbHcc_ZPt_stack_4->SetBinContent(2,2199.81);
   VbbHcc_ZPt_stack_4->SetBinContent(3,2990.594);
   VbbHcc_ZPt_stack_4->SetBinContent(4,2554.687);
   VbbHcc_ZPt_stack_4->SetBinContent(5,1466.105);
   VbbHcc_ZPt_stack_4->SetBinContent(6,788.4704);
   VbbHcc_ZPt_stack_4->SetBinContent(7,430.906);
   VbbHcc_ZPt_stack_4->SetBinContent(8,246.8657);
   VbbHcc_ZPt_stack_4->SetBinContent(9,149.8299);
   VbbHcc_ZPt_stack_4->SetBinContent(10,80.29469);
   VbbHcc_ZPt_stack_4->SetBinContent(11,46.44923);
   VbbHcc_ZPt_stack_4->SetBinContent(12,28.35502);
   VbbHcc_ZPt_stack_4->SetBinContent(13,17.84179);
   VbbHcc_ZPt_stack_4->SetBinContent(14,14.43767);
   VbbHcc_ZPt_stack_4->SetBinContent(15,7.562885);
   VbbHcc_ZPt_stack_4->SetBinContent(16,7.858339);
   VbbHcc_ZPt_stack_4->SetBinContent(17,3.694284);
   VbbHcc_ZPt_stack_4->SetBinContent(18,2.371468);
   VbbHcc_ZPt_stack_4->SetBinContent(19,3.09589);
   VbbHcc_ZPt_stack_4->SetBinContent(20,1.801059);
   VbbHcc_ZPt_stack_4->SetBinContent(21,1.470192);
   VbbHcc_ZPt_stack_4->SetBinContent(22,0.7502272);
   VbbHcc_ZPt_stack_4->SetBinContent(23,0.8013354);
   VbbHcc_ZPt_stack_4->SetBinContent(24,0.3409573);
   VbbHcc_ZPt_stack_4->SetBinContent(26,0.1949556);
   VbbHcc_ZPt_stack_4->SetBinContent(27,0.2156063);
   VbbHcc_ZPt_stack_4->SetBinContent(28,0.200688);
   VbbHcc_ZPt_stack_4->SetBinContent(29,0.2153088);
   VbbHcc_ZPt_stack_4->SetBinContent(32,0.1351551);
   VbbHcc_ZPt_stack_4->SetBinError(2,35.62038);
   VbbHcc_ZPt_stack_4->SetBinError(3,40.66319);
   VbbHcc_ZPt_stack_4->SetBinError(4,35.6345);
   VbbHcc_ZPt_stack_4->SetBinError(5,23.5836);
   VbbHcc_ZPt_stack_4->SetBinError(6,13.45821);
   VbbHcc_ZPt_stack_4->SetBinError(7,7.831661);
   VbbHcc_ZPt_stack_4->SetBinError(8,7.116719);
   VbbHcc_ZPt_stack_4->SetBinError(9,4.481362);
   VbbHcc_ZPt_stack_4->SetBinError(10,2.981996);
   VbbHcc_ZPt_stack_4->SetBinError(11,2.399522);
   VbbHcc_ZPt_stack_4->SetBinError(12,1.769824);
   VbbHcc_ZPt_stack_4->SetBinError(13,1.586229);
   VbbHcc_ZPt_stack_4->SetBinError(14,1.48407);
   VbbHcc_ZPt_stack_4->SetBinError(15,0.9099276);
   VbbHcc_ZPt_stack_4->SetBinError(16,1.087424);
   VbbHcc_ZPt_stack_4->SetBinError(17,0.6270317);
   VbbHcc_ZPt_stack_4->SetBinError(18,0.5370366);
   VbbHcc_ZPt_stack_4->SetBinError(19,0.9755169);
   VbbHcc_ZPt_stack_4->SetBinError(20,0.4487441);
   VbbHcc_ZPt_stack_4->SetBinError(21,0.3882427);
   VbbHcc_ZPt_stack_4->SetBinError(22,0.2893787);
   VbbHcc_ZPt_stack_4->SetBinError(23,0.3066371);
   VbbHcc_ZPt_stack_4->SetBinError(24,0.1971619);
   VbbHcc_ZPt_stack_4->SetBinError(26,0.1378719);
   VbbHcc_ZPt_stack_4->SetBinError(27,0.1524567);
   VbbHcc_ZPt_stack_4->SetBinError(28,0.14192);
   VbbHcc_ZPt_stack_4->SetBinError(29,0.1526563);
   VbbHcc_ZPt_stack_4->SetBinError(32,0.1351551);
   VbbHcc_ZPt_stack_4->SetEntries(45812);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZPt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_4->SetLineColor(ci);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_4,"");
   
   TH1D *VbbHcc_ZPt_stack_5 = new TH1D("VbbHcc_ZPt_stack_5","",40,0,2000);
   VbbHcc_ZPt_stack_5->SetBinContent(2,444.0879);
   VbbHcc_ZPt_stack_5->SetBinContent(3,666.2838);
   VbbHcc_ZPt_stack_5->SetBinContent(4,591.0666);
   VbbHcc_ZPt_stack_5->SetBinContent(5,444.5324);
   VbbHcc_ZPt_stack_5->SetBinContent(6,249.0928);
   VbbHcc_ZPt_stack_5->SetBinContent(7,159.1451);
   VbbHcc_ZPt_stack_5->SetBinContent(8,90.79309);
   VbbHcc_ZPt_stack_5->SetBinContent(9,63.90027);
   VbbHcc_ZPt_stack_5->SetBinContent(10,43.26171);
   VbbHcc_ZPt_stack_5->SetBinContent(11,27.33996);
   VbbHcc_ZPt_stack_5->SetBinContent(12,18.68252);
   VbbHcc_ZPt_stack_5->SetBinContent(13,13.94328);
   VbbHcc_ZPt_stack_5->SetBinContent(14,7.115251);
   VbbHcc_ZPt_stack_5->SetBinContent(15,5.647834);
   VbbHcc_ZPt_stack_5->SetBinContent(16,5.111748);
   VbbHcc_ZPt_stack_5->SetBinContent(17,2.919823);
   VbbHcc_ZPt_stack_5->SetBinContent(18,2.085517);
   VbbHcc_ZPt_stack_5->SetBinContent(19,2.123656);
   VbbHcc_ZPt_stack_5->SetBinContent(20,1.852993);
   VbbHcc_ZPt_stack_5->SetBinContent(21,1.083363);
   VbbHcc_ZPt_stack_5->SetBinContent(22,0.7247062);
   VbbHcc_ZPt_stack_5->SetBinContent(23,0.2131911);
   VbbHcc_ZPt_stack_5->SetBinContent(24,0.1362608);
   VbbHcc_ZPt_stack_5->SetBinContent(25,0.03747276);
   VbbHcc_ZPt_stack_5->SetBinContent(26,0.1436714);
   VbbHcc_ZPt_stack_5->SetBinContent(27,0.1511826);
   VbbHcc_ZPt_stack_5->SetBinContent(28,0.1558107);
   VbbHcc_ZPt_stack_5->SetBinContent(29,0.005636395);
   VbbHcc_ZPt_stack_5->SetBinContent(30,0.2818792);
   VbbHcc_ZPt_stack_5->SetBinContent(31,0.001420188);
   VbbHcc_ZPt_stack_5->SetBinContent(32,0.07390995);
   VbbHcc_ZPt_stack_5->SetBinContent(33,0.1408982);
   VbbHcc_ZPt_stack_5->SetBinContent(34,0.001390929);
   VbbHcc_ZPt_stack_5->SetBinContent(35,0.001376803);
   VbbHcc_ZPt_stack_5->SetBinContent(36,0.0006412949);
   VbbHcc_ZPt_stack_5->SetBinContent(37,0.001186633);
   VbbHcc_ZPt_stack_5->SetBinContent(38,0.0006917467);
   VbbHcc_ZPt_stack_5->SetBinContent(39,0.0002826728);
   VbbHcc_ZPt_stack_5->SetBinContent(41,0.0009676273);
   VbbHcc_ZPt_stack_5->SetBinError(2,29.25274);
   VbbHcc_ZPt_stack_5->SetBinError(3,35.79623);
   VbbHcc_ZPt_stack_5->SetBinError(4,32.10591);
   VbbHcc_ZPt_stack_5->SetBinError(5,25.73109);
   VbbHcc_ZPt_stack_5->SetBinError(6,13.35511);
   VbbHcc_ZPt_stack_5->SetBinError(7,6.003028);
   VbbHcc_ZPt_stack_5->SetBinError(8,3.981029);
   VbbHcc_ZPt_stack_5->SetBinError(9,3.7989);
   VbbHcc_ZPt_stack_5->SetBinError(10,2.953317);
   VbbHcc_ZPt_stack_5->SetBinError(11,1.950374);
   VbbHcc_ZPt_stack_5->SetBinError(12,1.613491);
   VbbHcc_ZPt_stack_5->SetBinError(13,1.748904);
   VbbHcc_ZPt_stack_5->SetBinError(14,0.973322);
   VbbHcc_ZPt_stack_5->SetBinError(15,0.8633199);
   VbbHcc_ZPt_stack_5->SetBinError(16,0.79972);
   VbbHcc_ZPt_stack_5->SetBinError(17,0.7187614);
   VbbHcc_ZPt_stack_5->SetBinError(18,0.5063311);
   VbbHcc_ZPt_stack_5->SetBinError(19,0.5159308);
   VbbHcc_ZPt_stack_5->SetBinError(20,0.4895922);
   VbbHcc_ZPt_stack_5->SetBinError(21,0.3529631);
   VbbHcc_ZPt_stack_5->SetBinError(22,0.3239466);
   VbbHcc_ZPt_stack_5->SetBinError(23,0.1685231);
   VbbHcc_ZPt_stack_5->SetBinError(24,0.1075464);
   VbbHcc_ZPt_stack_5->SetBinError(25,0.01924399);
   VbbHcc_ZPt_stack_5->SetBinError(26,0.1373449);
   VbbHcc_ZPt_stack_5->SetBinError(27,0.1428586);
   VbbHcc_ZPt_stack_5->SetBinError(28,0.1495103);
   VbbHcc_ZPt_stack_5->SetBinError(29,0.001276986);
   VbbHcc_ZPt_stack_5->SetBinError(30,0.2004128);
   VbbHcc_ZPt_stack_5->SetBinError(31,0.000635823);
   VbbHcc_ZPt_stack_5->SetBinError(32,0.0708103);
   VbbHcc_ZPt_stack_5->SetBinError(33,0.1397764);
   VbbHcc_ZPt_stack_5->SetBinError(34,0.0006360441);
   VbbHcc_ZPt_stack_5->SetBinError(35,0.0007158522);
   VbbHcc_ZPt_stack_5->SetBinError(36,0.0004537374);
   VbbHcc_ZPt_stack_5->SetBinError(37,0.000603505);
   VbbHcc_ZPt_stack_5->SetBinError(38,0.0004918344);
   VbbHcc_ZPt_stack_5->SetBinError(39,0.0002826728);
   VbbHcc_ZPt_stack_5->SetBinError(41,0.0005642539);
   VbbHcc_ZPt_stack_5->SetEntries(10641);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZPt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_5->SetLineColor(ci);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_5,"");
   
   TH1D *VbbHcc_ZPt_stack_6 = new TH1D("VbbHcc_ZPt_stack_6","",40,0,2000);
   VbbHcc_ZPt_stack_6->SetBinContent(2,13.20339);
   VbbHcc_ZPt_stack_6->SetBinContent(3,7.278289);
   VbbHcc_ZPt_stack_6->SetBinContent(4,2.956005);
   VbbHcc_ZPt_stack_6->SetBinContent(5,3.497301);
   VbbHcc_ZPt_stack_6->SetBinContent(6,3.668887);
   VbbHcc_ZPt_stack_6->SetBinContent(7,1.803493);
   VbbHcc_ZPt_stack_6->SetBinContent(8,0.5565291);
   VbbHcc_ZPt_stack_6->SetBinContent(9,0.6208502);
   VbbHcc_ZPt_stack_6->SetBinContent(18,0.6602175);
   VbbHcc_ZPt_stack_6->SetBinError(2,2.102162);
   VbbHcc_ZPt_stack_6->SetBinError(3,1.616951);
   VbbHcc_ZPt_stack_6->SetBinError(4,1.012461);
   VbbHcc_ZPt_stack_6->SetBinError(5,1.114192);
   VbbHcc_ZPt_stack_6->SetBinError(6,1.13773);
   VbbHcc_ZPt_stack_6->SetBinError(7,0.8173354);
   VbbHcc_ZPt_stack_6->SetBinError(8,0.4020809);
   VbbHcc_ZPt_stack_6->SetBinError(9,0.4397131);
   VbbHcc_ZPt_stack_6->SetBinError(18,0.4674993);
   VbbHcc_ZPt_stack_6->SetEntries(105);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZPt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_6->SetLineColor(ci);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_6,"");
   
   TH1D *VbbHcc_ZPt_stack_7 = new TH1D("VbbHcc_ZPt_stack_7","",40,0,2000);
   VbbHcc_ZPt_stack_7->SetBinContent(2,34.78574);
   VbbHcc_ZPt_stack_7->SetBinContent(3,29.02446);
   VbbHcc_ZPt_stack_7->SetBinContent(4,15.6592);
   VbbHcc_ZPt_stack_7->SetBinContent(5,9.609246);
   VbbHcc_ZPt_stack_7->SetBinContent(6,4.794813);
   VbbHcc_ZPt_stack_7->SetBinContent(7,3.288617);
   VbbHcc_ZPt_stack_7->SetBinContent(8,2.475957);
   VbbHcc_ZPt_stack_7->SetBinContent(9,1.47312);
   VbbHcc_ZPt_stack_7->SetBinContent(10,0.5241886);
   VbbHcc_ZPt_stack_7->SetBinContent(13,0.2242351);
   VbbHcc_ZPt_stack_7->SetBinError(2,2.918076);
   VbbHcc_ZPt_stack_7->SetBinError(3,2.70601);
   VbbHcc_ZPt_stack_7->SetBinError(4,1.990914);
   VbbHcc_ZPt_stack_7->SetBinError(5,1.579051);
   VbbHcc_ZPt_stack_7->SetBinError(6,1.115869);
   VbbHcc_ZPt_stack_7->SetBinError(7,0.8464173);
   VbbHcc_ZPt_stack_7->SetBinError(8,0.7958699);
   VbbHcc_ZPt_stack_7->SetBinError(9,0.6112157);
   VbbHcc_ZPt_stack_7->SetBinError(10,0.3752949);
   VbbHcc_ZPt_stack_7->SetBinError(13,0.2242351);
   VbbHcc_ZPt_stack_7->SetEntries(427);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZPt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_7->SetLineColor(ci);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_7,"");
   
   TH1D *VbbHcc_ZPt_stack_8 = new TH1D("VbbHcc_ZPt_stack_8","",40,0,2000);
   VbbHcc_ZPt_stack_8->SetBinContent(2,239.4212);
   VbbHcc_ZPt_stack_8->SetBinContent(3,113.8347);
   VbbHcc_ZPt_stack_8->SetBinContent(4,40.39785);
   VbbHcc_ZPt_stack_8->SetBinContent(5,26.13399);
   VbbHcc_ZPt_stack_8->SetBinContent(6,10.04254);
   VbbHcc_ZPt_stack_8->SetBinContent(7,8.115389);
   VbbHcc_ZPt_stack_8->SetBinContent(8,2.584496);
   VbbHcc_ZPt_stack_8->SetBinContent(9,1.074855);
   VbbHcc_ZPt_stack_8->SetBinContent(10,0.2785274);
   VbbHcc_ZPt_stack_8->SetBinContent(11,0.7646622);
   VbbHcc_ZPt_stack_8->SetBinContent(15,0.2399952);
   VbbHcc_ZPt_stack_8->SetBinError(2,7.790379);
   VbbHcc_ZPt_stack_8->SetBinError(3,6.360607);
   VbbHcc_ZPt_stack_8->SetBinError(4,3.100381);
   VbbHcc_ZPt_stack_8->SetBinError(5,2.521918);
   VbbHcc_ZPt_stack_8->SetBinError(6,1.597071);
   VbbHcc_ZPt_stack_8->SetBinError(7,1.382101);
   VbbHcc_ZPt_stack_8->SetBinError(8,0.7945841);
   VbbHcc_ZPt_stack_8->SetBinError(9,0.5390646);
   VbbHcc_ZPt_stack_8->SetBinError(10,0.2785274);
   VbbHcc_ZPt_stack_8->SetBinError(11,0.4468034);
   VbbHcc_ZPt_stack_8->SetBinError(15,0.2399952);
   VbbHcc_ZPt_stack_8->SetEntries(1875);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZPt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_8->SetLineColor(ci);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_8,"");
   
   TH1D *VbbHcc_ZPt_stack_9 = new TH1D("VbbHcc_ZPt_stack_9","",40,0,2000);
   VbbHcc_ZPt_stack_9->SetBinContent(2,135.7036);
   VbbHcc_ZPt_stack_9->SetBinContent(3,74.36419);
   VbbHcc_ZPt_stack_9->SetBinContent(4,33.6932);
   VbbHcc_ZPt_stack_9->SetBinContent(5,17.80861);
   VbbHcc_ZPt_stack_9->SetBinContent(6,9.548939);
   VbbHcc_ZPt_stack_9->SetBinContent(7,5.257081);
   VbbHcc_ZPt_stack_9->SetBinContent(8,2.927694);
   VbbHcc_ZPt_stack_9->SetBinContent(9,1.475406);
   VbbHcc_ZPt_stack_9->SetBinContent(10,0.6194605);
   VbbHcc_ZPt_stack_9->SetBinContent(11,0.2632548);
   VbbHcc_ZPt_stack_9->SetBinContent(12,0.1766507);
   VbbHcc_ZPt_stack_9->SetBinContent(13,0.09186139);
   VbbHcc_ZPt_stack_9->SetBinContent(14,0.02340599);
   VbbHcc_ZPt_stack_9->SetBinContent(15,0.008446066);
   VbbHcc_ZPt_stack_9->SetBinContent(16,0.01059467);
   VbbHcc_ZPt_stack_9->SetBinContent(17,0.00720792);
   VbbHcc_ZPt_stack_9->SetBinContent(18,0.0108034);
   VbbHcc_ZPt_stack_9->SetBinContent(21,0.002971343);
   VbbHcc_ZPt_stack_9->SetBinError(2,0.6536401);
   VbbHcc_ZPt_stack_9->SetBinError(3,0.4826038);
   VbbHcc_ZPt_stack_9->SetBinError(4,0.3404578);
   VbbHcc_ZPt_stack_9->SetBinError(5,0.2631787);
   VbbHcc_ZPt_stack_9->SetBinError(6,0.2009652);
   VbbHcc_ZPt_stack_9->SetBinError(7,0.12517);
   VbbHcc_ZPt_stack_9->SetBinError(8,0.09555261);
   VbbHcc_ZPt_stack_9->SetBinError(9,0.07032821);
   VbbHcc_ZPt_stack_9->SetBinError(10,0.0434242);
   VbbHcc_ZPt_stack_9->SetBinError(11,0.02664739);
   VbbHcc_ZPt_stack_9->SetBinError(12,0.03445919);
   VbbHcc_ZPt_stack_9->SetBinError(13,0.01608146);
   VbbHcc_ZPt_stack_9->SetBinError(14,0.007909997);
   VbbHcc_ZPt_stack_9->SetBinError(15,0.004339927);
   VbbHcc_ZPt_stack_9->SetBinError(16,0.005367997);
   VbbHcc_ZPt_stack_9->SetBinError(17,0.004192729);
   VbbHcc_ZPt_stack_9->SetBinError(18,0.005477551);
   VbbHcc_ZPt_stack_9->SetBinError(21,0.002971343);
   VbbHcc_ZPt_stack_9->SetEntries(111628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZPt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_9->SetLineColor(ci);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_9,"");
   
   TH1D *VbbHcc_ZPt_stack_10 = new TH1D("VbbHcc_ZPt_stack_10","",40,0,2000);
   VbbHcc_ZPt_stack_10->SetBinContent(2,15.39285);
   VbbHcc_ZPt_stack_10->SetBinContent(3,13.76981);
   VbbHcc_ZPt_stack_10->SetBinContent(4,8.347413);
   VbbHcc_ZPt_stack_10->SetBinContent(5,4.386574);
   VbbHcc_ZPt_stack_10->SetBinContent(6,2.2069);
   VbbHcc_ZPt_stack_10->SetBinContent(7,1.087715);
   VbbHcc_ZPt_stack_10->SetBinContent(8,0.5933039);
   VbbHcc_ZPt_stack_10->SetBinContent(9,0.2926374);
   VbbHcc_ZPt_stack_10->SetBinContent(10,0.1515125);
   VbbHcc_ZPt_stack_10->SetBinContent(11,0.1024355);
   VbbHcc_ZPt_stack_10->SetBinContent(12,0.05291796);
   VbbHcc_ZPt_stack_10->SetBinContent(13,0.04322769);
   VbbHcc_ZPt_stack_10->SetBinContent(14,0.0237993);
   VbbHcc_ZPt_stack_10->SetBinContent(15,0.01660185);
   VbbHcc_ZPt_stack_10->SetBinContent(16,0.007612856);
   VbbHcc_ZPt_stack_10->SetBinContent(17,0.003181943);
   VbbHcc_ZPt_stack_10->SetBinContent(18,0.004593341);
   VbbHcc_ZPt_stack_10->SetBinContent(19,0.004583699);
   VbbHcc_ZPt_stack_10->SetBinContent(20,0.001951641);
   VbbHcc_ZPt_stack_10->SetBinContent(21,0.001982967);
   VbbHcc_ZPt_stack_10->SetBinContent(22,0.002011466);
   VbbHcc_ZPt_stack_10->SetBinContent(23,0.00327746);
   VbbHcc_ZPt_stack_10->SetBinContent(24,0.001980558);
   VbbHcc_ZPt_stack_10->SetBinContent(25,0.0006467411);
   VbbHcc_ZPt_stack_10->SetBinContent(26,0.000625931);
   VbbHcc_ZPt_stack_10->SetBinContent(27,0.0006520115);
   VbbHcc_ZPt_stack_10->SetBinError(2,0.09982155);
   VbbHcc_ZPt_stack_10->SetBinError(3,0.09437724);
   VbbHcc_ZPt_stack_10->SetBinError(4,0.07339129);
   VbbHcc_ZPt_stack_10->SetBinError(5,0.05314315);
   VbbHcc_ZPt_stack_10->SetBinError(6,0.03768528);
   VbbHcc_ZPt_stack_10->SetBinError(7,0.02643498);
   VbbHcc_ZPt_stack_10->SetBinError(8,0.01950528);
   VbbHcc_ZPt_stack_10->SetBinError(9,0.01363917);
   VbbHcc_ZPt_stack_10->SetBinError(10,0.009817559);
   VbbHcc_ZPt_stack_10->SetBinError(11,0.008117461);
   VbbHcc_ZPt_stack_10->SetBinError(12,0.005835076);
   VbbHcc_ZPt_stack_10->SetBinError(13,0.005292866);
   VbbHcc_ZPt_stack_10->SetBinError(14,0.003918742);
   VbbHcc_ZPt_stack_10->SetBinError(15,0.003263324);
   VbbHcc_ZPt_stack_10->SetBinError(16,0.002162086);
   VbbHcc_ZPt_stack_10->SetBinError(17,0.001425214);
   VbbHcc_ZPt_stack_10->SetBinError(18,0.001738003);
   VbbHcc_ZPt_stack_10->SetBinError(19,0.001736139);
   VbbHcc_ZPt_stack_10->SetBinError(20,0.001126793);
   VbbHcc_ZPt_stack_10->SetBinError(21,0.00114682);
   VbbHcc_ZPt_stack_10->SetBinError(22,0.001162718);
   VbbHcc_ZPt_stack_10->SetBinError(23,0.001468033);
   VbbHcc_ZPt_stack_10->SetBinError(24,0.001145441);
   VbbHcc_ZPt_stack_10->SetBinError(25,0.0006467411);
   VbbHcc_ZPt_stack_10->SetBinError(26,0.000625931);
   VbbHcc_ZPt_stack_10->SetBinError(27,0.0006520115);
   VbbHcc_ZPt_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZPt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_10->SetLineColor(ci);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_10,"");
   
   TH1D *VbbHcc_ZPt_stack_11 = new TH1D("VbbHcc_ZPt_stack_11","",40,0,2000);
   VbbHcc_ZPt_stack_11->SetBinContent(2,2.771552);
   VbbHcc_ZPt_stack_11->SetBinContent(3,1.979111);
   VbbHcc_ZPt_stack_11->SetBinContent(4,1.137678);
   VbbHcc_ZPt_stack_11->SetBinContent(5,0.6008297);
   VbbHcc_ZPt_stack_11->SetBinContent(6,0.3166071);
   VbbHcc_ZPt_stack_11->SetBinContent(7,0.2147388);
   VbbHcc_ZPt_stack_11->SetBinContent(8,0.09833299);
   VbbHcc_ZPt_stack_11->SetBinContent(9,0.05544807);
   VbbHcc_ZPt_stack_11->SetBinContent(10,0.02684635);
   VbbHcc_ZPt_stack_11->SetBinContent(11,0.0183928);
   VbbHcc_ZPt_stack_11->SetBinContent(12,0.006963696);
   VbbHcc_ZPt_stack_11->SetBinContent(13,0.009819848);
   VbbHcc_ZPt_stack_11->SetBinContent(14,0.002407561);
   VbbHcc_ZPt_stack_11->SetBinContent(16,0.002471056);
   VbbHcc_ZPt_stack_11->SetBinError(2,0.08599878);
   VbbHcc_ZPt_stack_11->SetBinError(3,0.07251645);
   VbbHcc_ZPt_stack_11->SetBinError(4,0.05492317);
   VbbHcc_ZPt_stack_11->SetBinError(5,0.03925666);
   VbbHcc_ZPt_stack_11->SetBinError(6,0.02842501);
   VbbHcc_ZPt_stack_11->SetBinError(7,0.02414845);
   VbbHcc_ZPt_stack_11->SetBinError(8,0.01593742);
   VbbHcc_ZPt_stack_11->SetBinError(9,0.01171429);
   VbbHcc_ZPt_stack_11->SetBinError(10,0.008200151);
   VbbHcc_ZPt_stack_11->SetBinError(11,0.006690894);
   VbbHcc_ZPt_stack_11->SetBinError(12,0.004021882);
   VbbHcc_ZPt_stack_11->SetBinError(13,0.004914957);
   VbbHcc_ZPt_stack_11->SetBinError(14,0.002407561);
   VbbHcc_ZPt_stack_11->SetBinError(16,0.002471056);
   VbbHcc_ZPt_stack_11->SetEntries(3167);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZPt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_11->SetLineColor(ci);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_11,"");
   
   TH1D *VbbHcc_ZPt_stack_12 = new TH1D("VbbHcc_ZPt_stack_12","",40,0,2000);
   VbbHcc_ZPt_stack_12->SetBinContent(2,0.5606607);
   VbbHcc_ZPt_stack_12->SetBinContent(3,0.822923);
   VbbHcc_ZPt_stack_12->SetBinContent(4,0.589209);
   VbbHcc_ZPt_stack_12->SetBinContent(5,0.3725916);
   VbbHcc_ZPt_stack_12->SetBinContent(6,0.1942711);
   VbbHcc_ZPt_stack_12->SetBinContent(7,0.09818958);
   VbbHcc_ZPt_stack_12->SetBinContent(8,0.06448227);
   VbbHcc_ZPt_stack_12->SetBinContent(9,0.03226651);
   VbbHcc_ZPt_stack_12->SetBinContent(10,0.01198767);
   VbbHcc_ZPt_stack_12->SetBinContent(11,0.009327875);
   VbbHcc_ZPt_stack_12->SetBinContent(12,0.004992511);
   VbbHcc_ZPt_stack_12->SetBinContent(13,0.004115832);
   VbbHcc_ZPt_stack_12->SetBinContent(14,0.003813768);
   VbbHcc_ZPt_stack_12->SetBinContent(15,0.002503804);
   VbbHcc_ZPt_stack_12->SetBinContent(16,0.002162897);
   VbbHcc_ZPt_stack_12->SetBinContent(17,0.00219348);
   VbbHcc_ZPt_stack_12->SetBinContent(18,0.001264442);
   VbbHcc_ZPt_stack_12->SetBinContent(19,0.002267843);
   VbbHcc_ZPt_stack_12->SetBinContent(20,0.0001434803);
   VbbHcc_ZPt_stack_12->SetBinContent(21,0.0003009249);
   VbbHcc_ZPt_stack_12->SetBinContent(25,0.0004325912);
   VbbHcc_ZPt_stack_12->SetBinContent(26,0.0003200774);
   VbbHcc_ZPt_stack_12->SetBinContent(27,0.0005009433);
   VbbHcc_ZPt_stack_12->SetBinContent(29,0.0004272034);
   VbbHcc_ZPt_stack_12->SetBinError(2,0.01367046);
   VbbHcc_ZPt_stack_12->SetBinError(3,0.016943);
   VbbHcc_ZPt_stack_12->SetBinError(4,0.01397351);
   VbbHcc_ZPt_stack_12->SetBinError(5,0.01101662);
   VbbHcc_ZPt_stack_12->SetBinError(6,0.007925641);
   VbbHcc_ZPt_stack_12->SetBinError(7,0.005674035);
   VbbHcc_ZPt_stack_12->SetBinError(8,0.004811288);
   VbbHcc_ZPt_stack_12->SetBinError(9,0.003213937);
   VbbHcc_ZPt_stack_12->SetBinError(10,0.002029424);
   VbbHcc_ZPt_stack_12->SetBinError(11,0.001698769);
   VbbHcc_ZPt_stack_12->SetBinError(12,0.001271383);
   VbbHcc_ZPt_stack_12->SetBinError(13,0.001175088);
   VbbHcc_ZPt_stack_12->SetBinError(14,0.00110437);
   VbbHcc_ZPt_stack_12->SetBinError(15,0.0009008985);
   VbbHcc_ZPt_stack_12->SetBinError(16,0.0007992675);
   VbbHcc_ZPt_stack_12->SetBinError(17,0.0008604951);
   VbbHcc_ZPt_stack_12->SetBinError(18,0.0006167449);
   VbbHcc_ZPt_stack_12->SetBinError(19,0.0008176156);
   VbbHcc_ZPt_stack_12->SetBinError(20,0.0001434803);
   VbbHcc_ZPt_stack_12->SetBinError(21,0.0003009249);
   VbbHcc_ZPt_stack_12->SetBinError(25,0.0003321405);
   VbbHcc_ZPt_stack_12->SetBinError(26,0.0003200774);
   VbbHcc_ZPt_stack_12->SetBinError(27,0.0003748164);
   VbbHcc_ZPt_stack_12->SetBinError(29,0.0004272034);
   VbbHcc_ZPt_stack_12->SetEntries(9458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZPt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_12->SetLineColor(ci);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZPt__21 = new TH1D("VbbHcc_ZPt__21","",40,0,2000);
   VbbHcc_ZPt__21->SetBinContent(2,135179);
   VbbHcc_ZPt__21->SetBinContent(3,186230);
   VbbHcc_ZPt__21->SetBinContent(4,159214);
   VbbHcc_ZPt__21->SetBinContent(5,99304);
   VbbHcc_ZPt__21->SetBinContent(6,51259);
   VbbHcc_ZPt__21->SetBinContent(7,27239);
   VbbHcc_ZPt__21->SetBinContent(8,15170);
   VbbHcc_ZPt__21->SetBinContent(9,8508);
   VbbHcc_ZPt__21->SetBinContent(10,4619);
   VbbHcc_ZPt__21->SetBinContent(11,2694);
   VbbHcc_ZPt__21->SetBinContent(12,1573);
   VbbHcc_ZPt__21->SetBinContent(13,1013);
   VbbHcc_ZPt__21->SetBinContent(14,608);
   VbbHcc_ZPt__21->SetBinContent(15,383);
   VbbHcc_ZPt__21->SetBinContent(16,250);
   VbbHcc_ZPt__21->SetBinContent(17,169);
   VbbHcc_ZPt__21->SetBinContent(18,119);
   VbbHcc_ZPt__21->SetBinContent(19,77);
   VbbHcc_ZPt__21->SetBinContent(20,49);
   VbbHcc_ZPt__21->SetBinContent(21,50);
   VbbHcc_ZPt__21->SetBinContent(22,24);
   VbbHcc_ZPt__21->SetBinContent(23,14);
   VbbHcc_ZPt__21->SetBinContent(24,8);
   VbbHcc_ZPt__21->SetBinContent(25,9);
   VbbHcc_ZPt__21->SetBinContent(26,6);
   VbbHcc_ZPt__21->SetBinContent(27,4);
   VbbHcc_ZPt__21->SetBinContent(28,4);
   VbbHcc_ZPt__21->SetBinContent(29,1);
   VbbHcc_ZPt__21->SetBinContent(30,2);
   VbbHcc_ZPt__21->SetBinContent(31,2);
   VbbHcc_ZPt__21->SetBinContent(35,1);
   VbbHcc_ZPt__21->SetBinContent(41,1);
   VbbHcc_ZPt__21->SetEntries(693783);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt__21->SetLineColor(ci);
   VbbHcc_ZPt__21->SetLineWidth(2);
   VbbHcc_ZPt__21->SetMarkerStyle(20);
   VbbHcc_ZPt__21->SetMarkerSize(1.2);
   VbbHcc_ZPt__21->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt__21->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt__21->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__21->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__21->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt__21->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt__21->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__21->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__21->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt__21->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt__21->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt__21->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__21->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__21->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZPt__21->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZPt_fx1021[40] = {
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
   Double_t Graph_from_VbbHcc_ZPt_fy1021[40] = {
   0,
   542317.5,
   596885.3,
   335038.8,
   125001.7,
   51086.8,
   19621.25,
   9048.521,
   4796.27,
   2566.808,
   1357.165,
   837.7248,
   607.3148,
   344.5137,
   190.1476,
   136.0668,
   99.40522,
   57.58401,
   52.58286,
   28.51757,
   20.94144,
   14.64538,
   10.75969,
   6.780422,
   4.043668,
   3.476375,
   1.902021,
   1.697885,
   1.933594,
   1.784464,
   0.219416,
   0.8407783,
   0.8824832,
   0.06959422,
   0.1015864,
   0.03837228,
   0.2964796,
   0.07387885,
   0.0002826728,
   0.07089243};
   Double_t Graph_from_VbbHcc_ZPt_fex1021[40] = {
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
   Double_t Graph_from_VbbHcc_ZPt_fey1021[40] = {
   0,
   13184.2,
   15448.87,
   9943.605,
   4570.078,
   1703.064,
   710.6696,
   308.3968,
   408.9764,
   114.8728,
   72.3535,
   53.34946,
   44.06137,
   28.42366,
   14.57852,
   8.689378,
   10.1163,
   4.45154,
   4.381548,
   2.611232,
   2.089494,
   1.733825,
   1.488592,
   1.09447,
   0.9732945,
   0.8361259,
   0.5518117,
   0.55674,
   0.6660805,
   0.6119564,
   0.1280896,
   0.4196912,
   0.3592039,
   0.06820626,
   0.1002121,
   0.03773371,
   0.2952936,
   0.07318876,
   0.0002826728,
   0.07089243};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_ZPt_fx1021,Graph_from_VbbHcc_ZPt_fy1021,Graph_from_VbbHcc_ZPt_fex1021,Graph_from_VbbHcc_ZPt_fey1021);
   gre->SetName("Graph_from_VbbHcc_ZPt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZPt1021 = new TH1F("Graph_Graph_from_VbbHcc_ZPt1021","",100,0,2200);
   Graph_Graph_from_VbbHcc_ZPt1021->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZPt1021->SetMaximum(673567.6);
   Graph_Graph_from_VbbHcc_ZPt1021->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZPt1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZPt1021->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZPt1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZPt1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZPt1021);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZPt","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZPt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZPt","MC unc. (stat.)","fl");

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
   ZPt_VbbHcc_18->cd();
  
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
   
   TH1D *data_mc_ratio__22 = new TH1D("data_mc_ratio__22","",40,0,2000);
   data_mc_ratio__22->SetBinContent(2,0.2492618);
   data_mc_ratio__22->SetBinContent(3,0.312003);
   data_mc_ratio__22->SetBinContent(4,0.4752107);
   data_mc_ratio__22->SetBinContent(5,0.7944211);
   data_mc_ratio__22->SetBinContent(6,1.003371);
   data_mc_ratio__22->SetBinContent(7,1.38824);
   data_mc_ratio__22->SetBinContent(8,1.676517);
   data_mc_ratio__22->SetBinContent(9,1.773878);
   data_mc_ratio__22->SetBinContent(10,1.799511);
   data_mc_ratio__22->SetBinContent(11,1.985021);
   data_mc_ratio__22->SetBinContent(12,1.877705);
   data_mc_ratio__22->SetBinContent(13,1.667998);
   data_mc_ratio__22->SetBinContent(14,1.764807);
   data_mc_ratio__22->SetBinContent(15,2.014225);
   data_mc_ratio__22->SetBinContent(16,1.837333);
   data_mc_ratio__22->SetBinContent(17,1.700112);
   data_mc_ratio__22->SetBinContent(18,2.066546);
   data_mc_ratio__22->SetBinContent(19,1.464355);
   data_mc_ratio__22->SetBinContent(20,1.718239);
   data_mc_ratio__22->SetBinContent(21,2.38761);
   data_mc_ratio__22->SetBinContent(22,1.638742);
   data_mc_ratio__22->SetBinContent(23,1.301153);
   data_mc_ratio__22->SetBinContent(24,1.179868);
   data_mc_ratio__22->SetBinContent(25,2.225702);
   data_mc_ratio__22->SetBinContent(26,1.725936);
   data_mc_ratio__22->SetBinContent(27,2.103027);
   data_mc_ratio__22->SetBinContent(28,2.355872);
   data_mc_ratio__22->SetBinContent(29,0.5171717);
   data_mc_ratio__22->SetBinContent(30,1.120785);
   data_mc_ratio__22->SetBinContent(31,9.115107);
   data_mc_ratio__22->SetBinContent(35,9.84384);
   data_mc_ratio__22->SetBinContent(41,1033.456);
   data_mc_ratio__22->SetBinError(2,0.0006779553);
   data_mc_ratio__22->SetBinError(3,0.0007229928);
   data_mc_ratio__22->SetBinError(4,0.001190956);
   data_mc_ratio__22->SetBinError(5,0.002520968);
   data_mc_ratio__22->SetBinError(6,0.004431762);
   data_mc_ratio__22->SetBinError(7,0.008411414);
   data_mc_ratio__22->SetBinError(8,0.01361179);
   data_mc_ratio__22->SetBinError(9,0.01923137);
   data_mc_ratio__22->SetBinError(10,0.02647772);
   data_mc_ratio__22->SetBinError(11,0.03824426);
   data_mc_ratio__22->SetBinError(12,0.04734379);
   data_mc_ratio__22->SetBinError(13,0.05240719);
   data_mc_ratio__22->SetBinError(14,0.07157236);
   data_mc_ratio__22->SetBinError(15,0.1029221);
   data_mc_ratio__22->SetBinError(16,0.1162031);
   data_mc_ratio__22->SetBinError(17,0.1307778);
   data_mc_ratio__22->SetBinError(18,0.1894399);
   data_mc_ratio__22->SetBinError(19,0.1668788);
   data_mc_ratio__22->SetBinError(20,0.2454627);
   data_mc_ratio__22->SetBinError(21,0.337659);
   data_mc_ratio__22->SetBinError(22,0.3345067);
   data_mc_ratio__22->SetBinError(23,0.3477477);
   data_mc_ratio__22->SetBinError(24,0.4171462);
   data_mc_ratio__22->SetBinError(25,0.7419007);
   data_mc_ratio__22->SetBinError(26,0.7046104);
   data_mc_ratio__22->SetBinError(27,1.051513);
   data_mc_ratio__22->SetBinError(28,1.177936);
   data_mc_ratio__22->SetBinError(29,0.5171717);
   data_mc_ratio__22->SetBinError(30,0.7925145);
   data_mc_ratio__22->SetBinError(31,6.445354);
   data_mc_ratio__22->SetBinError(35,9.84384);
   data_mc_ratio__22->SetBinError(41,1196.33);
   data_mc_ratio__22->SetMinimum(0.4);
   data_mc_ratio__22->SetMaximum(1.6);
   data_mc_ratio__22->SetEntries(14.83834);
   data_mc_ratio__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__22->SetLineColor(ci);
   data_mc_ratio__22->SetLineWidth(2);
   data_mc_ratio__22->SetMarkerStyle(20);
   data_mc_ratio__22->SetMarkerSize(1.2);
   data_mc_ratio__22->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__22->GetXaxis()->SetRange(7,30);
   data_mc_ratio__22->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__22->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__22->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__22->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__22->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__22->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1022[40] = {
   0,
   0.02431085,
   0.02588248,
   0.02967897,
   0.03656012,
   0.03333667,
   0.03621939,
   0.03408257,
   0.08526968,
   0.04475317,
   0.05331226,
   0.06368376,
   0.07255112,
   0.08250373,
   0.07666953,
   0.06386113,
   0.1017683,
   0.07730514,
   0.08332655,
   0.09156572,
   0.09977794,
   0.1183871,
   0.1383489,
   0.1614162,
   0.2406959,
   0.2405166,
   0.2901187,
   0.327902,
   0.344478,
   0.3429357,
   0.5837753,
   0.4991699,
   0.4070377,
   0.9800563,
   0.9864721,
   0.9833586,
   0.9959997,
   0.9906591,
   1,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1022,Graph_from_mc_statistical_error_fy1022,Graph_from_mc_statistical_error_fex1022,Graph_from_mc_statistical_error_fey1022);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1022 = new TH1F("Graph_Graph_from_mc_statistical_error1022","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1022->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1022->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1022->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1022->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1022);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   ZPt_VbbHcc_18->cd();
   ZPt_VbbHcc_18->Modified();
   ZPt_VbbHcc_18->cd();
   ZPt_VbbHcc_18->SetSelected(ZPt_VbbHcc_18);
}
