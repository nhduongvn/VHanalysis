#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Wed Feb 14 12:33:09 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(0,0,1,1);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7281.795,1.052419,7274523);
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
   st->SetMaximum(6546342);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0.01);
   st_stack_192->SetMaximum(6546342);
   st_stack_192->SetDirectory(nullptr);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->SetLineWidth(0);
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetLabelSize(0.05);
   st_stack_192->GetYaxis()->SetTitleSize(0.057);
   st_stack_192->GetYaxis()->SetTitleOffset(1.2);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,2333790);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,292274);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,69808.02);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,22535.22);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,7159.858);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,4003.374);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,2431.939);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,6660.061);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,1082.391);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,449.966);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,117.034);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,69.96823);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,942.3469);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,37.42997);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,23.6653);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,11.89543);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,19.98715);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,0.6597134);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,49005.57);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,14128.69);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,6529.688);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,3096.274);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,1031.419);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,938.367);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,962.1422);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,4613.321);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,562.3081);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,195.9906);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,35.40429);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,23.15976);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,884.6308);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,20.45931);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,13.16024);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,11.20514);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,14.25459);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,0.6597134);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(167585);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,31339.28);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,4216.356);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,1097.183);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,403.9766);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,178.2708);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,70.45996);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,47.71774);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,33.65824);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,13.65002);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,8.52128);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.405043);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.063942);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,2.194459);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.397386);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,1.120152);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.2591282);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.2468984);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.09023147);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.04773404);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,121.9506);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,43.34442);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,22.68943);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,12.93861);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,9.384457);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,5.194631);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,7.867414);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,4.696895);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,2.208046);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.888813);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.9489006);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.6476667);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.8577632);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.6703171);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.5552934);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.1564324);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.1389091);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.09023147);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.04773404);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(226646);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,545568.7);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,73521.54);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,19632.52);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,7124.258);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,3328.554);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1678.025);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,945.4652);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,543.1958);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,333.7399);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,214.9796);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,134.3934);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,90.15501);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,51.27513);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,33.545);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,18.61332);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,12.52847);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,9.627563);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,4.131788);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.334575);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.5011607);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.8846526);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.2032185);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.2494543);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,320.7295);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,117.1889);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,62.04929);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,35.92914);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,26.84504);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,17.23434);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,13.56038);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,9.721974);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,7.757951);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,6.093695);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,5.002957);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,4.015433);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,2.817904);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,4.002654);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,1.78822);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,1.505879);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,2.649036);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.8535738);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.3592145);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2223801);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.5050123);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.1464132);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(23,0.2494543);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(5679256);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,22560.39);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,2460.507);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,640.2307);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,215.8256);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,94.86708);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,49.70626);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,31.1452);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,17.27553);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,10.99871);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,8.609468);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.750882);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,3.721251);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.7002334);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,1.287221);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.4970763);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.3026933);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.326589);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(20,1.364529);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,145.1668);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,51.81595);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,23.60249);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,12.24894);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,7.589171);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,5.701869);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,13.56808);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.970149);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,2.051449);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,4.669203);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,1.085453);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,1.623893);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.3755104);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.7878252);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.3644271);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.2187793);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(19,0.2152034);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(20,1.364529);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(87627);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,11816.51);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,1267.662);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,348.8185);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,125.463);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,63.12148);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,42.36178);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,14.69198);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,13.5186);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,6.731366);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.8564304);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.6459541);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,2.622883);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.1527246);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.0004116047);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,2.724299);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.1470552);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,197.667);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,64.59127);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,32.88406);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,16.88751);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,22.528);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,14.43231);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,3.991647);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,6.33593);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,3.683942);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.3536737);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3281038);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,1.74663);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.1296666);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.0004116047);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,2.34943);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1470552);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(41187);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,95.64935);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,9.194326);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.161111);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,1.05673);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,1.826458);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.9792848);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.5362758);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,9.457736);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,2.628322);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,1.382135);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,1.05673);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,1.826458);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.9792848);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.5362758);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,275.51);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,33.95549);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,5.410523);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,7.984324);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.9633526);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,14.82059);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,6.199299);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,2.018757);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,3.489668);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.9633526);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,225.3899);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,10.66286);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.600406);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,1.224459);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,24.18938);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,4.134649);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,2.864169);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,1.224459);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(129);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,117.1731);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,10.72541);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,2.677868);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.8510267);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.4899513);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1577574);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.08924196);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.08939993);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.02788004);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.04925304);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.02701289);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.003202693);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.004432613);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.009189734);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.00330621);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.005930946);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.8717006);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.2484098);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.1269663);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.06841041);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.09912635);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.02850579);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.0200425);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.02750625);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.01021028);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.01845882);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.01349114);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.003202693);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.004432613);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.005467347);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.00330621);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(16,0.004196243);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(33398);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,61.6422);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,6.963882);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.690434);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.5782532);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.2816984);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.1248698);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.08170027);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.04083064);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.02410734);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01527865);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.007129342);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.005572458);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.003240865);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.001748262);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0005944209);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.001736221);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003079843);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.001153623);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0005791563);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0006478491);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0005886763);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1841695);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.06108567);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03013945);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01791718);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01258147);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.008325108);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.006793826);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.004754811);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.003611808);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.002890191);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.002185409);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001734221);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001338343);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.001009776);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0005944209);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.001010815);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003079843);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(18,0.0008385517);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0005791563);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0006478491);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0005886763);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,2.533073);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.2047919);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.05465833);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.0115283);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.002487843);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001750385);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.006058982);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.005370295);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.1009731);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02584474);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.0163804);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.006184668);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002487843);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001750385);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.004310176);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(8,0.005370295);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,1.286886);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1405332);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.03106189);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.008328002);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.003353772);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.001213938);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0005187041);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.002539062);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0003673797);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0003321995);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.001578001);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.02600683);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.00849201);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.003976354);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001909394);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.001141947);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0007206238);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0005187041);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.001127976);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0003673797);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0003321995);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(12,0.0008214925);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__383 = new TH1D("VH_tagFirst_Aplanarity__383","",50,0,1);
   VH_tagFirst_Aplanarity__383->SetBinContent(0,2);
   VH_tagFirst_Aplanarity__383->SetBinContent(1,2651716);
   VH_tagFirst_Aplanarity__383->SetBinContent(2,347424);
   VH_tagFirst_Aplanarity__383->SetBinContent(3,91320);
   VH_tagFirst_Aplanarity__383->SetBinContent(4,31080);
   VH_tagFirst_Aplanarity__383->SetBinContent(5,13037);
   VH_tagFirst_Aplanarity__383->SetBinContent(6,6366);
   VH_tagFirst_Aplanarity__383->SetBinContent(7,3423);
   VH_tagFirst_Aplanarity__383->SetBinContent(8,1979);
   VH_tagFirst_Aplanarity__383->SetBinContent(9,1164);
   VH_tagFirst_Aplanarity__383->SetBinContent(10,790);
   VH_tagFirst_Aplanarity__383->SetBinContent(11,455);
   VH_tagFirst_Aplanarity__383->SetBinContent(12,312);
   VH_tagFirst_Aplanarity__383->SetBinContent(13,189);
   VH_tagFirst_Aplanarity__383->SetBinContent(14,91);
   VH_tagFirst_Aplanarity__383->SetBinContent(15,80);
   VH_tagFirst_Aplanarity__383->SetBinContent(16,51);
   VH_tagFirst_Aplanarity__383->SetBinContent(17,29);
   VH_tagFirst_Aplanarity__383->SetBinContent(18,17);
   VH_tagFirst_Aplanarity__383->SetBinContent(19,13);
   VH_tagFirst_Aplanarity__383->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__383->SetBinContent(21,2);
   VH_tagFirst_Aplanarity__383->SetEntries(3149590);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__383->SetLineColor(ci);
   VH_tagFirst_Aplanarity__383->SetLineWidth(2);
   VH_tagFirst_Aplanarity__383->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__383->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1383[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1383[50] = { 2945854, 373811.9, 91542.41, 30416.46, 10828.24, 5845.192, 3471.673, 7267.847, 1447.564, 682.9976, 258.2634, 168.5417, 996.6771, 73.67052, 43.90016, 27.71769, 30.00898,
   4.882886, 1.709477, 1.866338, 0.8852412, 0.2032185, 0.2494543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1383[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1383[50] = { 49007.4, 14129.49, 6530.148, 3096.582, 1032.087, 938.6685, 962.374, 4613.339, 562.3817, 196.1503, 35.78659, 23.63484, 884.6358, 20.87282, 13.29777, 11.55054, 14.50006,
   1.082568, 0.4214575, 1.382532, 0.5050126, 0.1464132, 0.2494543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1383,Graph_from_VH_tagFirst_Aplanarity_fy1383,Graph_from_VH_tagFirst_Aplanarity_fex1383,Graph_from_VH_tagFirst_Aplanarity_fey1383);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1383 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1383","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetMaximum(3294348);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1383);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__384 = new TH1D("data_mc_ratio__384","",50,0,1);
   data_mc_ratio__384->SetBinContent(1,0.9001519);
   data_mc_ratio__384->SetBinContent(2,0.9294087);
   data_mc_ratio__384->SetBinContent(3,0.9975705);
   data_mc_ratio__384->SetBinContent(4,1.021815);
   data_mc_ratio__384->SetBinContent(5,1.203982);
   data_mc_ratio__384->SetBinContent(6,1.0891);
   data_mc_ratio__384->SetBinContent(7,0.9859799);
   data_mc_ratio__384->SetBinContent(8,0.2722952);
   data_mc_ratio__384->SetBinContent(9,0.8041098);
   data_mc_ratio__384->SetBinContent(10,1.156666);
   data_mc_ratio__384->SetBinContent(11,1.761767);
   data_mc_ratio__384->SetBinContent(12,1.851174);
   data_mc_ratio__384->SetBinContent(13,0.1896301);
   data_mc_ratio__384->SetBinContent(14,1.23523);
   data_mc_ratio__384->SetBinContent(15,1.822317);
   data_mc_ratio__384->SetBinContent(16,1.83998);
   data_mc_ratio__384->SetBinContent(17,0.9663774);
   data_mc_ratio__384->SetBinContent(18,3.481547);
   data_mc_ratio__384->SetBinContent(19,7.604665);
   data_mc_ratio__384->SetBinContent(20,0.5358086);
   data_mc_ratio__384->SetBinContent(21,2.259271);
   data_mc_ratio__384->SetBinError(1,0.0005527799);
   data_mc_ratio__384->SetBinError(2,0.001576801);
   data_mc_ratio__384->SetBinError(3,0.003301115);
   data_mc_ratio__384->SetBinError(4,0.005796046);
   data_mc_ratio__384->SetBinError(5,0.01054462);
   data_mc_ratio__384->SetBinError(6,0.01365006);
   data_mc_ratio__384->SetBinError(7,0.01685251);
   data_mc_ratio__384->SetBinError(8,0.006120926);
   data_mc_ratio__384->SetBinError(9,0.02356888);
   data_mc_ratio__384->SetBinError(10,0.04115233);
   data_mc_ratio__384->SetBinError(11,0.08259291);
   data_mc_ratio__384->SetBinError(12,0.1048021);
   data_mc_ratio__384->SetBinError(13,0.01379356);
   data_mc_ratio__384->SetBinError(14,0.1294872);
   data_mc_ratio__384->SetBinError(15,0.2037412);
   data_mc_ratio__384->SetBinError(16,0.2576488);
   data_mc_ratio__384->SetBinError(17,0.1794518);
   data_mc_ratio__384->SetBinError(18,0.8443993);
   data_mc_ratio__384->SetBinError(19,2.109155);
   data_mc_ratio__384->SetBinError(20,0.5358086);
   data_mc_ratio__384->SetBinError(21,1.597546);
   data_mc_ratio__384->SetMinimum(0.4);
   data_mc_ratio__384->SetMaximum(1.6);
   data_mc_ratio__384->SetEntries(68.24025);
   data_mc_ratio__384->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__384->SetLineColor(ci);
   data_mc_ratio__384->SetLineWidth(2);
   data_mc_ratio__384->SetMarkerStyle(20);
   data_mc_ratio__384->SetMarkerSize(1.2);
   data_mc_ratio__384->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__384->GetXaxis()->SetRange(1,50);
   data_mc_ratio__384->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__384->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__384->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__384->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__384->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__384->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__384->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1384[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1384[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1384[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1384[50] = { 0.01663606, 0.03779839, 0.07133468, 0.1018061, 0.09531439, 0.1605881, 0.2772076, 0.6347601, 0.3885023, 0.2871903, 0.1385662, 0.1402314, 0.8875852, 0.2833266, 0.3029094, 0.4167209, 0.4831907,
   0.2217065, 0.2465418, 0.7407724, 0.5704802, 0.7204721, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1384,Graph_from_mc_statistical_error_fy1384,Graph_from_mc_statistical_error_fex1384,Graph_from_mc_statistical_error_fey1384);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1384 = new TH1F("Graph_Graph_from_mc_statistical_error1384","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1384->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1384->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1384->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1384->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1384);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}
