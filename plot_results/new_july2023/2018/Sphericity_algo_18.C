void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Fri Jul 14 13:38:26 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(0,0,1,1);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-267.4227,1.052419,267165.3);
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
   st->SetMaximum(228973.3);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0.01);
   st_stack_155->SetMaximum(240422);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetLabelSize(0.035);
   st_stack_155->GetXaxis()->SetTitleSize(0.035);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Events/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetLabelSize(0.05);
   st_stack_155->GetYaxis()->SetTitleSize(0.057);
   st_stack_155->GetYaxis()->SetTitleOffset(1.2);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetLabelSize(0.035);
   st_stack_155->GetZaxis()->SetTitleSize(0.035);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,75884);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,63336.99);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,32830.29);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,16974.55);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,9133.038);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,4231.812);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,954.1668);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,221.0193);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,17.92345);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,3.188172);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,47.10475);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,7.893056);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,9.758322);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,35.14141);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,1.757754);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,4721.257);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,4332.711);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,2409.966);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,1512.42);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,1107.538);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,808.531);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,154.568);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,61.62451);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,13.09548);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,3.188172);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,30.03706);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,7.893056);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,9.758322);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,31.68916);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,1.757754);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,574.009);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,530.1948);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,309.5734);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,176.4644);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,89.87271);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,38.20042);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,12.94311);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,6.712462);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.929887);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.6680251);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.9474948);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,1.129007);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.4537417);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.1574942);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.06366777);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.3691208);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.1171809);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.2810381);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,10.75385);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,9.95657);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,7.95305);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,7.633104);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,4.400353);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,2.884108);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,1.747206);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,1.289633);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.2403504);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.3263978);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.5203524);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.5128318);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.3025186);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.09361803);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.06366777);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.3182628);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.08311648);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.3083901);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,6489.593);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,6423.405);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,3608.121);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,1970.945);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,1044.407);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,494.5796);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,216.6482);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,100.3917);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,48.71518);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,27.14369);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,16.9342);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,10.82007);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,6.243672);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,4.13894);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,5.160707);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,2.161515);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,1.37746);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,0.4954241);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,0.3420022);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,0.2477042);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.03959583);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,22.92815);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,22.5466);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,17.12651);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,12.67482);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,9.012312);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,6.262793);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,4.124051);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,3.326054);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,1.77569);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,1.309607);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,1.030245);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,0.8159289);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,0.6368178);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,0.507333);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,0.9792194);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.379747);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.2913488);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.1752732);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.1271471);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.148185);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.03959583);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,566.955);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,547.7882);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,285.9072);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,186.5805);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,92.82248);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,45.85894);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,10.4156);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,1.556225);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,1.047278);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,0.5700258);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,0.3259389);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,0.4687839);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.1030044);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.01344924);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,18.67617);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,22.94378);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,11.54012);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,12.6957);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,5.51896);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,3.975178);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,1.609531);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,0.6157686);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,0.5242405);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.5700258);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.1983209);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.2371504);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.1030044);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.01344924);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,324.0616);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,261.4379);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,130.2638);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,95.75112);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,45.66942);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,12.71642);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,3.424975);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,6.48118);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,0.3097578);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,0.1363766);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.3166256);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.1333172);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.1097513);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.4290945);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,25.05928);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,17.38122);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,12.64162);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,16.16093);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,12.72583);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,1.915817);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,0.9235762);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,3.792365);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.3097578);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.1363766);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3166256);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1333172);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.1097513);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.4290945);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,1.335381);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,0.7589859);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,0.179752);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,0.6772409);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,0.4837086);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.179752);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,7.826211);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,4.827406);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,3.307938);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,2.071466);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,0.9101439);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,1.006948);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.3993601);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,1.349616);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,1.080581);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,0.879925);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,0.7066311);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.46494);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.4896421);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.2851525);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,7.302414);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,5.951131);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,2.727357);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,2.452764);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,2.917809);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,0.9839157);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.4536892);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,1.336232);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,1.17328);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,0.7733502);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,0.7917298);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,0.8499438);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.4473543);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.3208257);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,4.369498);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,3.765629);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,2.093176);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,1.401961);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,0.922691);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,0.4499769);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.09128339);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.01085063);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.009077137);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.006621484);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.00530903);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.002407699);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(20,0.003348055);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.1256027);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1061386);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.07638273);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.06331824);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.05091615);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.03537741);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.01596778);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.005455122);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.005287094);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.004682214);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.003764571);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.002407699);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(20,0.003348055);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,3.171622);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,3.071743);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,1.763134);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,1.068861);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,0.6092427);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,0.292175);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.09083397);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.02703764);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.006359405);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.003770654);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.001830709);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.002026197);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.002140134);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.000625399);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.0005058178);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0005368742);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.04489211);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.04422806);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.03360408);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.02616667);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.01971105);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.01366635);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.00759637);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.004078734);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.002023529);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.001525432);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.001057582);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001014428);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001075469);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.000625399);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0005058178);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0005368742);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2094835);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.1635859);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.05559416);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.07742165);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.05008892);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.02403969);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.002532203);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02383266);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.02209367);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01268484);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01434413);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01151538);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.008248171);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.002532203);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.07677833);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.06506808);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.02846046);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.02291723);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.01375761);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.009897365);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002146471);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.0003603593);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.001051532);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(12,0.0003035629);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.005519172);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.004779706);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003128972);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.002847426);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002845639);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001845548);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0008872775);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0003603593);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0006091153);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(12,0.0003035629);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__309 = new TH1D("VbbHcc_algo_Sphericity__309","",25,0,1);
   VbbHcc_algo_Sphericity__309->SetBinContent(1,103038);
   VbbHcc_algo_Sphericity__309->SetBinContent(2,94460);
   VbbHcc_algo_Sphericity__309->SetBinContent(3,53607);
   VbbHcc_algo_Sphericity__309->SetBinContent(4,28731);
   VbbHcc_algo_Sphericity__309->SetBinContent(5,14217);
   VbbHcc_algo_Sphericity__309->SetBinContent(6,5842);
   VbbHcc_algo_Sphericity__309->SetBinContent(7,1925);
   VbbHcc_algo_Sphericity__309->SetBinContent(8,636);
   VbbHcc_algo_Sphericity__309->SetBinContent(9,280);
   VbbHcc_algo_Sphericity__309->SetBinContent(10,116);
   VbbHcc_algo_Sphericity__309->SetBinContent(11,77);
   VbbHcc_algo_Sphericity__309->SetBinContent(12,52);
   VbbHcc_algo_Sphericity__309->SetBinContent(13,29);
   VbbHcc_algo_Sphericity__309->SetBinContent(14,20);
   VbbHcc_algo_Sphericity__309->SetBinContent(15,14);
   VbbHcc_algo_Sphericity__309->SetBinContent(16,7);
   VbbHcc_algo_Sphericity__309->SetBinContent(17,7);
   VbbHcc_algo_Sphericity__309->SetBinContent(18,10);
   VbbHcc_algo_Sphericity__309->SetBinContent(19,2);
   VbbHcc_algo_Sphericity__309->SetBinContent(22,1);
   VbbHcc_algo_Sphericity__309->SetEntries(303071);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__309->SetLineColor(ci);
   VbbHcc_algo_Sphericity__309->SetLineWidth(2);
   VbbHcc_algo_Sphericity__309->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__309->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__309->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__309->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__309->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__309->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__309->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__309->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__309->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__309->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__309->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__309->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__309->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__309->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__309->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__309->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__309->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1309[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1309[25] = {
   83862.91,
   71117.66,
   37174.89,
   19411.39,
   10411.41,
   4825.934,
   1198.638,
   336.1991,
   68.94099,
   31.71774,
   65.63614,
   20.44897,
   16.45788,
   39.54822,
   5.327379,
   2.531142,
   3.681489,
   0.7904483,
   0.3420022,
   0.2510523,
   0,
   0,
   0.03959583,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1309[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1309[25] = {
   4721.429,
   4332.877,
   2410.101,
   1512.633,
   1107.671,
   808.5727,
   154.6446,
   61.84713,
   13.23152,
   3.511354,
   30.06155,
   7.956324,
   9.783757,
   31.69355,
   0.9866784,
   0.4954788,
   1.834561,
   0.3549737,
   0.1271471,
   0.1482228,
   0,
   0,
   0.03959583,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1309,Graph_from_VbbHcc_algo_Sphericity_fy1309,Graph_from_VbbHcc_algo_Sphericity_fex1309,Graph_from_VbbHcc_algo_Sphericity_fey1309);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1309 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1309","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMaximum(97442.78);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1309);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algo_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__310 = new TH1D("data_mc_ratio__310","",25,0,1);
   data_mc_ratio__310->SetBinContent(1,1.228648);
   data_mc_ratio__310->SetBinContent(2,1.328221);
   data_mc_ratio__310->SetBinContent(3,1.442022);
   data_mc_ratio__310->SetBinContent(4,1.48011);
   data_mc_ratio__310->SetBinContent(5,1.365521);
   data_mc_ratio__310->SetBinContent(6,1.210543);
   data_mc_ratio__310->SetBinContent(7,1.605989);
   data_mc_ratio__310->SetBinContent(8,1.891736);
   data_mc_ratio__310->SetBinContent(9,4.061445);
   data_mc_ratio__310->SetBinContent(10,3.65726);
   data_mc_ratio__310->SetBinContent(11,1.173134);
   data_mc_ratio__310->SetBinContent(12,2.542916);
   data_mc_ratio__310->SetBinContent(13,1.762074);
   data_mc_ratio__310->SetBinContent(14,0.5057117);
   data_mc_ratio__310->SetBinContent(15,2.627934);
   data_mc_ratio__310->SetBinContent(16,2.76555);
   data_mc_ratio__310->SetBinContent(17,1.901405);
   data_mc_ratio__310->SetBinContent(18,12.65105);
   data_mc_ratio__310->SetBinContent(19,5.847916);
   data_mc_ratio__310->SetBinError(1,0.00382762);
   data_mc_ratio__310->SetBinError(2,0.004321619);
   data_mc_ratio__310->SetBinError(3,0.006228178);
   data_mc_ratio__310->SetBinError(4,0.008732101);
   data_mc_ratio__310->SetBinError(5,0.01145234);
   data_mc_ratio__310->SetBinError(6,0.01583797);
   data_mc_ratio__310->SetBinError(7,0.03660388);
   data_mc_ratio__310->SetBinError(8,0.07501222);
   data_mc_ratio__310->SetBinError(9,0.2427177);
   data_mc_ratio__310->SetBinError(10,0.339568);
   data_mc_ratio__310->SetBinError(11,0.133691);
   data_mc_ratio__310->SetBinError(12,0.352639);
   data_mc_ratio__310->SetBinError(13,0.327209);
   data_mc_ratio__310->SetBinError(14,0.1130806);
   data_mc_ratio__310->SetBinError(15,0.7023449);
   data_mc_ratio__310->SetBinError(16,1.04528);
   data_mc_ratio__310->SetBinError(17,0.7186634);
   data_mc_ratio__310->SetBinError(18,4.000613);
   data_mc_ratio__310->SetBinError(19,4.135101);
   data_mc_ratio__310->SetMinimum(0.4);
   data_mc_ratio__310->SetMaximum(1.6);
   data_mc_ratio__310->SetEntries(33.56443);
   data_mc_ratio__310->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__310->SetLineColor(ci);
   data_mc_ratio__310->SetLineWidth(2);
   data_mc_ratio__310->SetMarkerStyle(20);
   data_mc_ratio__310->SetMarkerSize(1.2);
   data_mc_ratio__310->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__310->GetXaxis()->SetRange(1,25);
   data_mc_ratio__310->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__310->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__310->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__310->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__310->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__310->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1310[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1310[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1310[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1310[25] = {
   0.05629936,
   0.06092547,
   0.06483142,
   0.07792501,
   0.1063901,
   0.1675474,
   0.1290169,
   0.1839598,
   0.1919253,
   0.1107063,
   0.458003,
   0.3890819,
   0.5944726,
   0.80139,
   0.185209,
   0.195753,
   0.4983203,
   0.449079,
   0.3717727,
   0.5904063,
   0,
   0,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1310,Graph_from_mc_statistical_error_fy1310,Graph_from_mc_statistical_error_fex1310,Graph_from_mc_statistical_error_fey1310);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1310 = new TH1F("Graph_Graph_from_mc_statistical_error1310","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1310->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1310->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1310->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1310->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1310->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1310);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
