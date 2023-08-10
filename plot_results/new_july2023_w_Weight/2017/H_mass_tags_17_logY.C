void H_mass_tags_17_logY()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Thu Aug 10 12:19:52 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(0,0,1,1);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetFillStyle(4000);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetFrameFillStyle(1000);
   H_mass_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.852967,315.7258,11.77235);
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
   st->SetMaximum(6.079892e+09);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",40,0,400);
   st_stack_6->SetMinimum(0.001450969);
   st_stack_6->SetMaximum(2.040885e+10);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetRange(1,30);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetLabelSize(0.035);
   st_stack_6->GetXaxis()->SetTitleSize(0.035);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/10.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetLabelSize(0.05);
   st_stack_6->GetYaxis()->SetTitleSize(0.057);
   st_stack_6->GetYaxis()->SetTitleOffset(1.2);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetLabelSize(0.035);
   st_stack_6->GetZaxis()->SetTitleSize(0.035);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,226.1793);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,570.8692);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,4138.703);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,6235.04);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,6059.047);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,6645.497);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,4715.827);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,3541.694);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,4608.227);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,4739.375);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,4465.279);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,3843.121);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,4034.934);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,4259.606);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,4227.79);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,2968.17);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,3656.702);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,2660.902);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,3149.275);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,3087.786);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,3079.265);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,2968.486);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,24929.2);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,1621.053);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2604.308);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3626.902);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2267.007);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,2539.975);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,3106.293);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2325.276);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,2063.406);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,2208.888);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,1875.36);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,2771.958);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,2898.211);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,2768.99);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1731.704);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,1501.545);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,87557.54);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,212.4949);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,271.8968);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,968.6492);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1205.949);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,1132.203);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,1241.411);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,910.2555);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,828.4909);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,1000.8);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,937.2557);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,919.9885);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,858.3437);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,903.4216);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,979.6669);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,938.8402);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,670.0897);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,922.7224);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,652.0191);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,815.859);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,740.0495);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,685.7502);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,792.8894);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,21678.44);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,426.6073);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,752.6888);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,963.6776);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,679.7938);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,745.652);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,815.4561);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,692.741);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,666.4902);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,657.7335);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,520.6591);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,758.4295);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,820.9588);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,817.1439);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,555.6405);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,491.134);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,15683.35);
   VbbHcc_tags_H_mass_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.1103051);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,3.978072);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,11.03408);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,14.03735);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,19.65192);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,26.48805);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,29.56591);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,26.90475);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,25.97203);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,22.08031);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,21.2799);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,20.80386);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,19.99622);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,20.0731);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,21.23329);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,16.8212);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,19.43976);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,18.17925);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,17.47274);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,13.24782);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,14.70931);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,16.13571);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,14.93932);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,14.10959);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,11.66528);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,13.82049);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,13.66694);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,12.26496);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,9.921729);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,13.32919);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,6.755693);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,11.83569);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,6.736233);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,9.849657);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,9.483921);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,8.407378);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,10.23857);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,7.848038);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,387.6827);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.07972306);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.8879777);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.446061);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,1.731185);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.957371);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,2.356645);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,2.512709);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,2.349629);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,2.231808);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,1.984699);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,2.010037);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,1.857638);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,1.972756);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,2.034673);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,2.088);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.720675);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,1.979901);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.909448);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.828968);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.480616);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.743707);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.819189);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.761828);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.668775);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.328072);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.698847);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.548427);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.516629);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.370555);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.630603);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.046654);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.6124);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,1.086683);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.335735);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,1.389205);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.224408);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.465468);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,1.146739);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,8.699357);
   VbbHcc_tags_H_mass_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(2,0.02957921);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,7.760837);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,84.99594);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,202.7135);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,302.8164);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,390.0233);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,514.6365);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,615.7139);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,604.2598);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,583.2386);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,558.5908);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,564.6397);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,529.0092);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,512.1359);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,468.8959);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,442.6984);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,425.7384);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,394.9124);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,374.8792);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,343.3082);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,333.6617);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,319.7805);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,310.8509);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,300.0351);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,302.5731);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,282.341);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,267.9993);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,266.8107);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,262.4844);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,251.7228);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,248.1504);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,235.0616);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,235.3959);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,228.1291);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,221.7754);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,223.3022);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,206.5359);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,205.4711);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,205.5875);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,7755.266);
   VbbHcc_tags_H_mass_stack_3->SetBinError(2,0.02957921);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.7574822);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,2.465998);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,3.840627);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,4.713979);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,5.347231);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,6.174158);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,6.763569);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,6.715169);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,6.588599);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,6.443277);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,6.467059);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,6.265704);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,6.161649);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,5.898616);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,5.703661);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,5.597171);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,5.409611);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,5.260001);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,5.035447);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,4.968354);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,4.850579);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,4.793361);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,4.697256);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,4.733562);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,4.561123);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,4.464063);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,4.44486);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,4.408586);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,4.338541);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,4.300535);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,4.17969);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,4.181748);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,4.139471);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,4.053517);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,4.093487);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,3.920118);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,3.901501);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,3.919004);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,24.01205);
   VbbHcc_tags_H_mass_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,0.7624181);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,10.99689);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,17.09076);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,47.87142);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,60.57221);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,75.49062);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,102.4958);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,98.7889);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,90.13308);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,50.83728);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,59.33342);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,50.22954);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,44.79944);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,51.94527);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,45.74986);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,47.02216);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,48.3084);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,43.32585);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,42.7065);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,30.51703);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,31.44556);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,40.96431);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,30.49721);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,30.91748);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,25.81746);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,32.01602);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,29.97247);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,30.69076);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,26.99521);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,26.59616);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,27.23373);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,24.13938);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,34.74619);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,31.02346);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,31.55488);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,30.17645);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,19.9743);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,27.20041);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,1100.72);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,0.5076137);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,4.216083);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,2.985344);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,5.898997);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,6.838);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,4.489396);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,7.100779);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,5.990489);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,8.478015);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,4.857554);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,6.576223);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,6.313647);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,4.713047);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,6.574747);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,5.388764);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,5.301876);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,5.791883);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,5.066157);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,5.298427);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,2.837962);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,4.47926);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,4.817504);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,4.316553);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,4.349187);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,2.622259);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,3.651483);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,2.974023);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,2.920222);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,2.698715);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,3.570136);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,4.105782);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,4.003882);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,4.843488);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,4.44516);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,4.979344);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,4.243266);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,2.278285);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,5.023548);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,21.69616);
   VbbHcc_tags_H_mass_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,0.4101537);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,2.881128);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,3.923517);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,6.802453);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,3.80718);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,7.071697);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,14.6413);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,11.24524);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.838087);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,6.206617);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,3.605394);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,5.919948);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.437886);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,4.082419);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,5.258767);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,3.201552);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,2.197495);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,5.67062);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.022698);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,4.955036);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,1.913932);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,2.80719);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,2.166063);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,2.860784);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,2.549498);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,4.773636);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,1.454832);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,1.560392);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,2.508513);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,3.268051);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,2.569431);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,3.811475);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,0.7320606);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,1.576406);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,2.777471);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,2.325987);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,2.278203);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,120.0791);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,0.191644);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,1.542997);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,1.586167);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,1.995993);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,0.8793438);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,1.920452);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,8.24912);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,5.792407);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,2.175683);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,1.952147);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,1.540162);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,1.868197);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.234556);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,1.465996);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,1.573141);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.062009);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,0.5048322);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,1.509033);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,0.493203);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,1.677476);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,0.529168);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,0.7157199);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,0.5881117);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,0.6825364);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.723265);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,1.881609);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,0.4281924);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,0.6057926);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.6638243);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,0.9893121);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,1.523071);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,1.862899);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,0.2773487);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,0.491547);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,1.471067);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,1.412357);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,1.02227);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,7.248801);
   VbbHcc_tags_H_mass_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(4,0.3983715);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(6,0.3608682);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.2466832);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(10,0.3402984);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.268632);
   VbbHcc_tags_H_mass_stack_6->SetBinError(4,0.3983715);
   VbbHcc_tags_H_mass_stack_6->SetBinError(6,0.3608682);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.2466832);
   VbbHcc_tags_H_mass_stack_6->SetBinError(10,0.3402984);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.268632);
   VbbHcc_tags_H_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2891015);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.3138408);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.2655071);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(17,0.3503188);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(31,0.4906992);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(32,0.3136654);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(35,0.1957868);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.2572919);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(37,0.2891015);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(40,0.2751033);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,3.666418);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.2891015);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.3138408);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.2655071);
   VbbHcc_tags_H_mass_stack_7->SetBinError(17,0.3503188);
   VbbHcc_tags_H_mass_stack_7->SetBinError(31,0.3569944);
   VbbHcc_tags_H_mass_stack_7->SetBinError(32,0.3136654);
   VbbHcc_tags_H_mass_stack_7->SetBinError(35,0.1957868);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.2572919);
   VbbHcc_tags_H_mass_stack_7->SetBinError(37,0.2891015);
   VbbHcc_tags_H_mass_stack_7->SetBinError(40,0.2751033);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,1.027587);
   VbbHcc_tags_H_mass_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.8875649);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.5962065);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,0.4547637);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,3.163765);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,3.690724);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,3.167818);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,0.514404);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,1.189468);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.6016457);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.3872143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(16,0.5015835);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.5359121);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(18,0.3035869);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.5838673);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.6951595);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(21,0.3221285);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2302364);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(23,0.9242855);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,0.488858);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.3197276);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(26,0.898831);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,0.2809655);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(28,0.9505239);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.2845842);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,0.2443859);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(31,0.2660549);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(32,0.1879487);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(33,0.7953929);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(34,0.5044506);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,0.2786569);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.2196705);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.2185059);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,0.2838123);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,0.3217996);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,24.08606);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.5326616);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.42228);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.3254368);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.9676353);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,1.046155);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.9313807);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.3536236);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.5566593);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.4263536);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.3872143);
   VbbHcc_tags_H_mass_stack_8->SetBinError(16,0.3548574);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.3852371);
   VbbHcc_tags_H_mass_stack_8->SetBinError(18,0.2910024);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.4129824);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.4933147);
   VbbHcc_tags_H_mass_stack_8->SetBinError(21,0.3221285);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2302364);
   VbbHcc_tags_H_mass_stack_8->SetBinError(23,0.5339428);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.3539026);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.2962739);
   VbbHcc_tags_H_mass_stack_8->SetBinError(26,0.5196809);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.2809655);
   VbbHcc_tags_H_mass_stack_8->SetBinError(28,0.5488406);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.2845842);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.2443859);
   VbbHcc_tags_H_mass_stack_8->SetBinError(31,0.2660549);
   VbbHcc_tags_H_mass_stack_8->SetBinError(32,0.1879487);
   VbbHcc_tags_H_mass_stack_8->SetBinError(33,0.4602539);
   VbbHcc_tags_H_mass_stack_8->SetBinError(34,0.366727);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.2786569);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.2196705);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.2185059);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.2838123);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.3217996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,2.676945);
   VbbHcc_tags_H_mass_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.005828237);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.04945792);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.2176029);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.3357443);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,0.7541172);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,1.605096);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,2.721724);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,2.866386);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,2.048395);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,1.888066);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,1.635458);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,1.037867);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.7935582);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.5275118);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.4962752);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.4839409);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.4350355);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.4930261);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.5016555);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.4884058);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.4456047);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.4866924);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.5303908);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.5264326);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.5492489);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.5406075);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.541671);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.559286);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.5983384);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.5689007);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.5440354);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.5582889);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.5637655);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.6136854);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.575677);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.5168296);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.5359176);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.5146251);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,21.7285);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.003393402);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.009733271);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.02081308);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.02574418);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.03859267);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.05656606);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.07397619);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.07593153);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.06417891);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.06164446);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.0571559);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.04514901);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.03970268);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.03210284);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.03138789);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.03090848);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.02943313);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.03118595);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.0313487);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.03084695);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.02949429);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.03120213);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.03260118);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.03208503);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.03304695);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.03272545);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.03251807);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.03331488);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.03438369);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.0335519);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.03292722);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.03355391);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.03338499);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.03497698);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.03395884);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.03193872);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.03327925);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.03162122);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.2088442);
   VbbHcc_tags_H_mass_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.002788394);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.02347574);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.07815725);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1469795);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.3781357);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.7771247);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,1.18047);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,1.112779);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.8897019);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.7957417);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.7141213);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.5450947);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.3907991);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.2969882);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.2838024);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.273694);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.2707454);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.2806271);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.2617849);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.284624);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.2906917);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.282268);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.2759755);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.2703437);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.2675338);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.2721597);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.2615344);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.2631032);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.2659251);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.2455466);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.2666383);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.2598334);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.2377836);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.2471872);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.2434173);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.2460142);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.2390238);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.2432652);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,7.985257);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.001142379);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.003227355);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.005895911);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.00813807);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01299468);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.01870628);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.02300826);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.02232459);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.01996759);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.01888993);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.01786558);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.01565308);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01323123);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.01153938);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.01127497);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.01111586);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.01101249);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.01123704);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.01082171);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.01129211);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.01141142);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.01126355);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.01112965);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.01102847);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.01094088);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.0110278);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.01084353);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.01088285);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.0109476);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.01048891);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.0109618);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.01082664);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.0103098);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.01052331);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.01050427);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.01051063);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.01035855);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.01044151);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.05982764);
   VbbHcc_tags_H_mass_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.002244052);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(6,0.001859968);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.001918637);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.003935131);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.004235866);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.005931472);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.01289175);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01530455);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01176258);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.008877709);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.007204083);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.001552233);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.001426177);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.006372965);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.002414608);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.002014015);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.001313021);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.00343171);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.001781134);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(28,0.001730288);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(30,0.001656612);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(34,0.001932967);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.001944105);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001241434);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.05093255);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.002244052);
   VbbHcc_tags_H_mass_stack_11->SetBinError(6,0.001859968);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.001918637);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002783179);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.003024806);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.003425408);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004619142);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005427491);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.004489483);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.004006981);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.0036132);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.001552233);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.001426177);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.003691299);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.002414608);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.002014015);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.001313021);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002455005);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.001781134);
   VbbHcc_tags_H_mass_stack_11->SetBinError(28,0.001730288);
   VbbHcc_tags_H_mass_stack_11->SetBinError(30,0.001316969);
   VbbHcc_tags_H_mass_stack_11->SetBinError(34,0.001932967);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.001944105);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001241434);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.00981382);
   VbbHcc_tags_H_mass_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(4,0.0002758581);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(5,0.0002621408);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0001784253);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.0005196939);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.001244881);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.001289812);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.003260249);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.003248198);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.004018555);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.004769192);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.002444989);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.002990327);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.0005651157);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.0006937246);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.002890053);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.0009903046);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(20,0.0008467561);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(21,0.0005065485);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.0008419769);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0006101112);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.000537764);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.001669758);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(26,0.0009230027);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0009103954);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(28,0.0004871682);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(29,0.0005984381);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0004707828);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.0005913522);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0004375067);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0009364699);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(35,0.000242069);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0003762606);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0009170831);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.001502031);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0004372647);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0004805637);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.02087355);
   VbbHcc_tags_H_mass_stack_12->SetBinError(4,0.0002758581);
   VbbHcc_tags_H_mass_stack_12->SetBinError(5,0.0002621408);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0001784253);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0003674791);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0005581103);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0005800351);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.0008941747);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.0009126818);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.0009767166);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.00107887);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.0007834254);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0008477862);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0003452081);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0004023953);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0008792141);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0005006039);
   VbbHcc_tags_H_mass_stack_12->SetBinError(20,0.000437341);
   VbbHcc_tags_H_mass_stack_12->SetBinError(21,0.0003583768);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.0004490616);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0003677072);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0003804632);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0006354125);
   VbbHcc_tags_H_mass_stack_12->SetBinError(26,0.0004693881);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0004594617);
   VbbHcc_tags_H_mass_stack_12->SetBinError(28,0.0003565919);
   VbbHcc_tags_H_mass_stack_12->SetBinError(29,0.0003539831);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0003347031);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0003507699);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.000309659);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0004811632);
   VbbHcc_tags_H_mass_stack_12->SetBinError(35,0.000242069);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0002695797);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0004636259);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0006143361);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0003157656);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0003410819);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.002241381);
   VbbHcc_tags_H_mass_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__15 = new TH1D("VbbHcc_tags_H_mass__15","",40,0,400);
   VbbHcc_tags_H_mass__15->SetBinContent(3,23);
   VbbHcc_tags_H_mass__15->SetBinContent(4,330);
   VbbHcc_tags_H_mass__15->SetBinContent(5,972);
   VbbHcc_tags_H_mass__15->SetBinContent(6,1425);
   VbbHcc_tags_H_mass__15->SetBinContent(7,1588);
   VbbHcc_tags_H_mass__15->SetBinContent(15,1340);
   VbbHcc_tags_H_mass__15->SetBinContent(16,1330);
   VbbHcc_tags_H_mass__15->SetBinContent(17,1252);
   VbbHcc_tags_H_mass__15->SetBinContent(18,1178);
   VbbHcc_tags_H_mass__15->SetBinContent(19,1098);
   VbbHcc_tags_H_mass__15->SetBinContent(20,1101);
   VbbHcc_tags_H_mass__15->SetBinContent(21,988);
   VbbHcc_tags_H_mass__15->SetBinContent(22,1023);
   VbbHcc_tags_H_mass__15->SetBinContent(23,971);
   VbbHcc_tags_H_mass__15->SetBinContent(24,966);
   VbbHcc_tags_H_mass__15->SetBinContent(25,909);
   VbbHcc_tags_H_mass__15->SetBinContent(26,914);
   VbbHcc_tags_H_mass__15->SetBinContent(27,840);
   VbbHcc_tags_H_mass__15->SetBinContent(28,809);
   VbbHcc_tags_H_mass__15->SetBinContent(29,802);
   VbbHcc_tags_H_mass__15->SetBinContent(30,735);
   VbbHcc_tags_H_mass__15->SetBinContent(31,788);
   VbbHcc_tags_H_mass__15->SetBinContent(32,717);
   VbbHcc_tags_H_mass__15->SetBinContent(33,727);
   VbbHcc_tags_H_mass__15->SetBinContent(34,686);
   VbbHcc_tags_H_mass__15->SetBinContent(35,652);
   VbbHcc_tags_H_mass__15->SetBinContent(36,658);
   VbbHcc_tags_H_mass__15->SetBinContent(37,663);
   VbbHcc_tags_H_mass__15->SetBinContent(38,634);
   VbbHcc_tags_H_mass__15->SetBinContent(39,645);
   VbbHcc_tags_H_mass__15->SetBinContent(40,633);
   VbbHcc_tags_H_mass__15->SetBinContent(41,25419);
   VbbHcc_tags_H_mass__15->SetEntries(63782);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__15->SetLineColor(ci);
   VbbHcc_tags_H_mass__15->SetLineWidth(2);
   VbbHcc_tags_H_mass__15->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__15->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1011[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1011[40] = {
   0,
   0.02957921,
   234.8215,
   671.7219,
   4373.608,
   6605.13,
   6538.222,
   7271.471,
   5478.273,
   4294.099,
   5322.285,
   5380.614,
   5119.707,
   4448.629,
   4619.367,
   4806.286,
   4743.222,
   3464.081,
   4123.858,
   3100.955,
   3559.519,
   3468.239,
   3451.818,
   3339.612,
   25278.61,
   1972.518,
   2928.091,
   3945.053,
   2583.319,
   2847.939,
   3398.115,
   2617.177,
   2337.332,
   2484.153,
   2150.059,
   3036.677,
   3165.458,
   3017.653,
   1970.773,
   1745.814};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1011[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1011[40] = {
   0,
   0.02957921,
   212.4969,
   271.9425,
   968.6639,
   1205.975,
   1132.24,
   1241.438,
   910.3144,
   828.5848,
   1000.877,
   937.2952,
   920.0391,
   858.3933,
   903.459,
   979.7097,
   938.8766,
   670.1381,
   922.7593,
   652.0631,
   815.8953,
   740.0733,
   685.7865,
   792.9209,
   21678.44,
   426.6598,
   752.7087,
   963.6968,
   679.8193,
   745.6725,
   815.4736,
   692.7659,
   666.5176,
   657.7628,
   520.7027,
   758.4547,
   820.9855,
   817.1666,
   555.6627,
   491.1779};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1011,Graph_from_VbbHcc_tags_H_mass_fy1011,Graph_from_VbbHcc_tags_H_mass_fex1011,Graph_from_VbbHcc_tags_H_mass_fey1011);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1011 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1011","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetMinimum(51.65275);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetMaximum(51652.75);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1011);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",40,0,400);
   data_mc_ratio__16->SetBinContent(3,0.09794674);
   data_mc_ratio__16->SetBinContent(4,0.4912748);
   data_mc_ratio__16->SetBinContent(5,0.2222421);
   data_mc_ratio__16->SetBinContent(6,0.2157414);
   data_mc_ratio__16->SetBinContent(7,0.2428795);
   data_mc_ratio__16->SetBinContent(8,0.2249889);
   data_mc_ratio__16->SetBinContent(9,0.2940708);
   data_mc_ratio__16->SetBinContent(10,0.3707413);
   data_mc_ratio__16->SetBinContent(11,0.2899131);
   data_mc_ratio__16->SetBinContent(12,0.2953195);
   data_mc_ratio__16->SetBinContent(13,0.2881024);
   data_mc_ratio__16->SetBinContent(14,0.3329116);
   data_mc_ratio__16->SetBinContent(15,0.290083);
   data_mc_ratio__16->SetBinContent(16,0.2767209);
   data_mc_ratio__16->SetBinContent(17,0.2639556);
   data_mc_ratio__16->SetBinContent(18,0.3400613);
   data_mc_ratio__16->SetBinContent(19,0.2662556);
   data_mc_ratio__16->SetBinContent(20,0.3550519);
   data_mc_ratio__16->SetBinContent(21,0.2775656);
   data_mc_ratio__16->SetBinContent(22,0.2949624);
   data_mc_ratio__16->SetBinContent(23,0.2813011);
   data_mc_ratio__16->SetBinContent(24,0.2892551);
   data_mc_ratio__16->SetBinContent(25,0.03595926);
   data_mc_ratio__16->SetBinContent(26,0.4633672);
   data_mc_ratio__16->SetBinContent(27,0.2868763);
   data_mc_ratio__16->SetBinContent(28,0.2050669);
   data_mc_ratio__16->SetBinContent(29,0.3104533);
   data_mc_ratio__16->SetBinContent(30,0.2580814);
   data_mc_ratio__16->SetBinContent(31,0.2318933);
   data_mc_ratio__16->SetBinContent(32,0.2739593);
   data_mc_ratio__16->SetBinContent(33,0.3110384);
   data_mc_ratio__16->SetBinContent(34,0.2761505);
   data_mc_ratio__16->SetBinContent(35,0.3032475);
   data_mc_ratio__16->SetBinContent(36,0.2166842);
   data_mc_ratio__16->SetBinContent(37,0.2094483);
   data_mc_ratio__16->SetBinContent(38,0.2100971);
   data_mc_ratio__16->SetBinContent(39,0.3272828);
   data_mc_ratio__16->SetBinContent(40,0.3625816);
   data_mc_ratio__16->SetBinContent(41,0.262108);
   data_mc_ratio__16->SetBinError(3,0.02042331);
   data_mc_ratio__16->SetBinError(4,0.02704379);
   data_mc_ratio__16->SetBinError(5,0.00712842);
   data_mc_ratio__16->SetBinError(6,0.005715129);
   data_mc_ratio__16->SetBinError(7,0.006094886);
   data_mc_ratio__16->SetBinError(8,0.005562492);
   data_mc_ratio__16->SetBinError(9,0.007326627);
   data_mc_ratio__16->SetBinError(10,0.009291791);
   data_mc_ratio__16->SetBinError(11,0.007380484);
   data_mc_ratio__16->SetBinError(12,0.007408497);
   data_mc_ratio__16->SetBinError(13,0.007501549);
   data_mc_ratio__16->SetBinError(14,0.008650702);
   data_mc_ratio__16->SetBinError(15,0.007924464);
   data_mc_ratio__16->SetBinError(16,0.007587806);
   data_mc_ratio__16->SetBinError(17,0.007459826);
   data_mc_ratio__16->SetBinError(18,0.009907968);
   data_mc_ratio__16->SetBinError(19,0.008035215);
   data_mc_ratio__16->SetBinError(20,0.01070036);
   data_mc_ratio__16->SetBinError(21,0.008830538);
   data_mc_ratio__16->SetBinError(22,0.009222078);
   data_mc_ratio__16->SetBinError(23,0.009027381);
   data_mc_ratio__16->SetBinError(24,0.009306631);
   data_mc_ratio__16->SetBinError(25,0.001192693);
   data_mc_ratio__16->SetBinError(26,0.01532683);
   data_mc_ratio__16->SetBinError(27,0.009898173);
   data_mc_ratio__16->SetBinError(28,0.00720977);
   data_mc_ratio__16->SetBinError(29,0.01096249);
   data_mc_ratio__16->SetBinError(30,0.009519476);
   data_mc_ratio__16->SetBinError(31,0.008260856);
   data_mc_ratio__16->SetBinError(32,0.0102312);
   data_mc_ratio__16->SetBinError(33,0.01153578);
   data_mc_ratio__16->SetBinError(34,0.01054348);
   data_mc_ratio__16->SetBinError(35,0.01187609);
   data_mc_ratio__16->SetBinError(36,0.008447231);
   data_mc_ratio__16->SetBinError(37,0.0081343);
   data_mc_ratio__16->SetBinError(38,0.00834402);
   data_mc_ratio__16->SetBinError(39,0.01288675);
   data_mc_ratio__16->SetBinError(40,0.01441132);
   data_mc_ratio__16->SetBinError(41,0.04241977);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetEntries(553.4657);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__16->GetXaxis()->SetRange(1,30);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1012[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1012[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1012[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1012[40] = {
   0,
   1,
   0.9049296,
   0.4048439,
   0.2214794,
   0.1825816,
   0.1731724,
   0.1707272,
   0.1661681,
   0.1929589,
   0.188054,
   0.1741986,
   0.1797054,
   0.1929568,
   0.1955807,
   0.2038392,
   0.1979407,
   0.1934534,
   0.2237612,
   0.2102782,
   0.229215,
   0.2133859,
   0.198674,
   0.237429,
   0.8575803,
   0.2163021,
   0.2570647,
   0.2442798,
   0.2631573,
   0.2618288,
   0.2399782,
   0.2646997,
   0.2851617,
   0.2647836,
   0.2421807,
   0.2497647,
   0.2593575,
   0.2707954,
   0.2819517,
   0.2813461};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1012,Graph_from_mc_statistical_error_fy1012,Graph_from_mc_statistical_error_fex1012,Graph_from_mc_statistical_error_fey1012);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1012 = new TH1F("Graph_Graph_from_mc_statistical_error1012","",100,0,440);
   Graph_Graph_from_mc_statistical_error1012->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1012->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1012->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1012->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1012);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->SetSelected(H_mass_tags_17);
}
