void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Jul 14 13:38:26 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(0,0,1,1);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-407.4308,1.052419,407033.3);
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
   st->SetMaximum(348846.9);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(0.01);
   st_stack_153->SetMaximum(366289.3);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetRange(1,25);
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetLabelSize(0.035);
   st_stack_153->GetXaxis()->SetTitleSize(0.035);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Events/0.04");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetLabelSize(0.05);
   st_stack_153->GetYaxis()->SetTitleSize(0.057);
   st_stack_153->GetYaxis()->SetTitleOffset(1.2);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetLabelSize(0.035);
   st_stack_153->GetZaxis()->SetTitleSize(0.035);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,140773.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,146186.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,66348.75);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,36956.66);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,20273.45);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,6231.121);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,2197.592);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,220.9896);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,376.3299);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,336.4821);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,51.0118);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,5.104851);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,6.311216);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,2.066338);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.991057);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,7473.663);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,23510.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,4817.033);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,3671.533);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,2869.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,1700.314);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,705.8434);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,60.01192);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,318.3515);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,295.1984);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,28.44292);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,5.104851);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,6.311216);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,2.066338);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.991057);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(15710);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,786.288);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,743.9051);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,445.6082);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,224.5574);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,115.2083);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,52.9125);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,18.01775);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,8.272217);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,3.538631);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,2.244347);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.8457252);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.439116);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.4009284);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.5579098);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.08505112);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.2906565);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.04678649);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.12844);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,11.03874);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,10.50027);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,8.423096);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,6.006479);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,4.411087);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,3.20187);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,1.8586);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,1.257267);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.8305606);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.7209963);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.3261439);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.2932821);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.2986868);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.3028607);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.07337023);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.2035463);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.04678649);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.074555);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(39281);

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
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,8356.31);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,8804.073);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,4808.797);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,2582.007);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,1339.87);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,646.8791);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,290.448);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,143.6104);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,71.2374);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,38.85855);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,24.46245);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,15.48676);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,10.4129);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,5.280857);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,3.293133);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,2.345791);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,1.723889);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,1.278829);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,0.8964898);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,0.124069);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.2081678);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,23.20144);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,23.95715);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,17.69356);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,12.96631);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,9.312819);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,6.420551);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,4.271602);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,2.964277);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,2.06226);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,1.496873);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,1.173879);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,0.9306913);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,0.7649319);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,0.5371929);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,0.4150442);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.3650301);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.2958928);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.2609739);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.2284748);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.08835807);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1107921);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(446835);

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
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,890.9507);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,765.6564);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,470.6086);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,247.725);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,136.0814);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,59.43021);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,16.42372);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,4.611979);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,1.229845);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,0.3500417);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,0.2735668);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,0.1447148);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.1065415);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.7437431);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.04565873);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.02501185);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.07066921);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,27.0454);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,25.7661);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,21.38083);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,12.72842);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,10.15958);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,5.819099);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,3.268011);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,1.004656);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,0.4362019);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.1575251);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.2094496);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.1025905);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.07538787);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.4454235);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.04565873);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.02501185);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.07066921);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(15848);

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
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,466.9396);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,455.1972);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,229.5282);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,138.9782);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,73.05847);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,34.72279);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,10.03745);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,2.294792);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,1.247074);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.171103);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.008286773);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.3948591);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.03202563);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,6.5226e-05);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.03222546);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,30.15609);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,32.34745);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,20.96778);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,16.05995);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,12.24438);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,4.745827);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,2.379587);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.195489);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,1.059243);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.069892);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.008286773);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.3947906);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.03202563);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,6.5226e-05);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.03222546);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(9338);

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
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,1.510407);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,1.693157);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,0.7347303);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,0.4136548);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,0.4530546);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,0.1907278);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.09122876);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,0.367274);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,0.3908843);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,0.2605645);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,0.1865835);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.2026622);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.1353248);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.09122876);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(57);

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
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,10.58021);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,8.665955);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,5.457032);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,2.847546);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,1.920358);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,1.108453);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.06696388);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.1717439);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.06245006);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,0.8510297);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,0.7671248);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,0.6089929);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,0.4414952);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.3702403);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.2783788);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.06696388);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.1087257);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.06245006);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(458);

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
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,9.615129);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,9.149215);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,5.272182);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,2.999452);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,2.187122);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,0.1473163);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2026665);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,1.35591);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,1.325978);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,1.020293);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,0.7554353);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,0.6601425);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.1473163);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2026665);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(156);

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
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,4.544878);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,4.438506);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,2.540508);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,1.768417);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,1.045674);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,0.5209745);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.1239666);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.02551648);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.00746181);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.001636969);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.001429165);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.001447078);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001478464);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.0007648387);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.08314332);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.0822084);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.06230532);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.05194393);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.04025698);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.02844503);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.01367568);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.006196807);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.003351013);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.001636969);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.001429165);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001447078);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001478464);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.0007648387);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(10635);

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
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,1.904885);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,1.844898);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,1.058943);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,0.6419608);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,0.365913);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,0.1754811);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.05455515);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.01623889);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.003819477);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.002264665);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.001099529);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.00121694);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.001285371);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.0003756165);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.0003037956);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0003224482);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.02696233);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.0265635);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.02018271);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.01571578);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.01183852);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.008208051);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.004562402);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.0024497);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.001215337);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.0009161786);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.0006351866);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.0006092683);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.0006459301);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.0003756165);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0003037956);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0003224482);
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
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.1972569);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.156394);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.09252839);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.09360543);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.05947742);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03309176);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.00291638);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02405069);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.0219279);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01650756);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01658808);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01333814);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.009786769);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.00291638);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(222);

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
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.07169949);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.08234788);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.034742);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.02385037);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.01070816);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.008221501);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.001533784);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.0007883951);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.005250127);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.005612236);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003659015);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.003043336);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002031755);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001783438);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0007670467);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0005578398);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(620);

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
   
   TH1D *VbbHcc_algo_Sphericity__305 = new TH1D("VbbHcc_algo_Sphericity__305","",25,0,1);
   VbbHcc_algo_Sphericity__305->SetBinContent(1,37802);
   VbbHcc_algo_Sphericity__305->SetBinContent(2,31868);
   VbbHcc_algo_Sphericity__305->SetBinContent(3,17954);
   VbbHcc_algo_Sphericity__305->SetBinContent(4,10112);
   VbbHcc_algo_Sphericity__305->SetBinContent(5,5347);
   VbbHcc_algo_Sphericity__305->SetBinContent(6,2419);
   VbbHcc_algo_Sphericity__305->SetBinContent(7,912);
   VbbHcc_algo_Sphericity__305->SetBinContent(8,305);
   VbbHcc_algo_Sphericity__305->SetBinContent(9,127);
   VbbHcc_algo_Sphericity__305->SetBinContent(10,69);
   VbbHcc_algo_Sphericity__305->SetBinContent(11,47);
   VbbHcc_algo_Sphericity__305->SetBinContent(12,22);
   VbbHcc_algo_Sphericity__305->SetBinContent(13,17);
   VbbHcc_algo_Sphericity__305->SetBinContent(14,9);
   VbbHcc_algo_Sphericity__305->SetBinContent(15,10);
   VbbHcc_algo_Sphericity__305->SetBinContent(16,8);
   VbbHcc_algo_Sphericity__305->SetBinContent(17,4);
   VbbHcc_algo_Sphericity__305->SetBinContent(18,1);
   VbbHcc_algo_Sphericity__305->SetEntries(107033);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__305->SetLineColor(ci);
   VbbHcc_algo_Sphericity__305->SetLineWidth(2);
   VbbHcc_algo_Sphericity__305->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__305->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__305->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__305->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__305->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__305->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1305[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1305[25] = {
   151302.4,
   156981.1,
   72318.48,
   40158.71,
   21943.71,
   7027.25,
   2532.86,
   380.1959,
   453.5941,
   379.1084,
   76.60457,
   21.17808,
   17.69019,
   8.682696,
   3.425321,
   2.636817,
   2.819735,
   1.407592,
   0.967159,
   0.124069,
   0.2081678,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1305[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1305[25] = {
   7473.817,
   23510.65,
   4817.166,
   3671.618,
   2869.763,
   1700.346,
   705.8703,
   60.11896,
   318.3613,
   295.2051,
   28.46978,
   5.198292,
   6.3774,
   2.202154,
   0.4239479,
   0.4179452,
   1.036147,
   0.2714147,
   0.2391545,
   0.08835807,
   0.1107921,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1305,Graph_from_VbbHcc_algo_Sphericity_fy1305,Graph_from_VbbHcc_algo_Sphericity_fex1305,Graph_from_VbbHcc_algo_Sphericity_fey1305);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1305 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1305","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMaximum(198540.9);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1305);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__306 = new TH1D("data_mc_ratio__306","",25,0,1);
   data_mc_ratio__306->SetBinContent(1,0.2498441);
   data_mc_ratio__306->SetBinContent(2,0.2030053);
   data_mc_ratio__306->SetBinContent(3,0.248263);
   data_mc_ratio__306->SetBinContent(4,0.2518009);
   data_mc_ratio__306->SetBinContent(5,0.243669);
   data_mc_ratio__306->SetBinContent(6,0.3442314);
   data_mc_ratio__306->SetBinContent(7,0.3600673);
   data_mc_ratio__306->SetBinContent(8,0.8022179);
   data_mc_ratio__306->SetBinContent(9,0.279986);
   data_mc_ratio__306->SetBinContent(10,0.182006);
   data_mc_ratio__306->SetBinContent(11,0.6135405);
   data_mc_ratio__306->SetBinContent(12,1.03881);
   data_mc_ratio__306->SetBinContent(13,0.9609848);
   data_mc_ratio__306->SetBinContent(14,1.036544);
   data_mc_ratio__306->SetBinContent(15,2.919434);
   data_mc_ratio__306->SetBinContent(16,3.033961);
   data_mc_ratio__306->SetBinContent(17,1.418573);
   data_mc_ratio__306->SetBinContent(18,0.7104333);
   data_mc_ratio__306->SetBinError(1,0.001285025);
   data_mc_ratio__306->SetBinError(2,0.001137182);
   data_mc_ratio__306->SetBinError(3,0.001852812);
   data_mc_ratio__306->SetBinError(4,0.002504025);
   data_mc_ratio__306->SetBinError(5,0.003332308);
   data_mc_ratio__306->SetBinError(6,0.006998944);
   data_mc_ratio__306->SetBinError(7,0.01192302);
   data_mc_ratio__306->SetBinError(8,0.04593486);
   data_mc_ratio__306->SetBinError(9,0.02484474);
   data_mc_ratio__306->SetBinError(10,0.02191095);
   data_mc_ratio__306->SetBinError(11,0.08949407);
   data_mc_ratio__306->SetBinError(12,0.221475);
   data_mc_ratio__306->SetBinError(13,0.2330731);
   data_mc_ratio__306->SetBinError(14,0.3455148);
   data_mc_ratio__306->SetBinError(15,0.9232061);
   data_mc_ratio__306->SetBinError(16,1.072667);
   data_mc_ratio__306->SetBinError(17,0.7092866);
   data_mc_ratio__306->SetBinError(18,0.7104333);
   data_mc_ratio__306->SetMinimum(0.4);
   data_mc_ratio__306->SetMaximum(1.6);
   data_mc_ratio__306->SetEntries(51.63525);
   data_mc_ratio__306->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__306->SetLineColor(ci);
   data_mc_ratio__306->SetLineWidth(2);
   data_mc_ratio__306->SetMarkerStyle(20);
   data_mc_ratio__306->SetMarkerSize(1.2);
   data_mc_ratio__306->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__306->GetXaxis()->SetRange(1,25);
   data_mc_ratio__306->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__306->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__306->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__306->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__306->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__306->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__306->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__306->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__306->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__306->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__306->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__306->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__306->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__306->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__306->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__306->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__306->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1306[25] = {
   0.04939656,
   0.1497674,
   0.06661044,
   0.09142767,
   0.1307784,
   0.2419647,
   0.2786851,
   0.1581262,
   0.7018638,
   0.7786826,
   0.371646,
   0.2454562,
   0.360505,
   0.2536256,
   0.1237688,
   0.1585037,
   0.3674625,
   0.192822,
   0.2472752,
   0.7121688,
   0.5322249,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1306,Graph_from_mc_statistical_error_fy1306,Graph_from_mc_statistical_error_fex1306,Graph_from_mc_statistical_error_fey1306);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1306 = new TH1F("Graph_Graph_from_mc_statistical_error1306","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1306->SetMinimum(0.0655809);
   Graph_Graph_from_mc_statistical_error1306->SetMaximum(1.934419);
   Graph_Graph_from_mc_statistical_error1306->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1306->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1306->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1306);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
