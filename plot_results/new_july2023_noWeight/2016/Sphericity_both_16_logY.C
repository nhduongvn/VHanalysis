void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:33:04 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(0,0,1,1);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.86479,1.052419,12.19113);
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
   st->SetMaximum(1.413307e+10);
   
   TH1F *st_stack_249 = new TH1F("st_stack_249","",25,0,1);
   st_stack_249->SetMinimum(0.001413404);
   st_stack_249->SetMaximum(4.84771e+10);
   st_stack_249->SetDirectory(0);
   st_stack_249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_249->SetLineColor(ci);
   st_stack_249->GetXaxis()->SetRange(1,25);
   st_stack_249->GetXaxis()->SetLabelFont(42);
   st_stack_249->GetXaxis()->SetLabelSize(0.035);
   st_stack_249->GetXaxis()->SetTitleSize(0.035);
   st_stack_249->GetXaxis()->SetTitleFont(42);
   st_stack_249->GetYaxis()->SetTitle("Events/0.04");
   st_stack_249->GetYaxis()->SetLabelFont(42);
   st_stack_249->GetYaxis()->SetLabelSize(0.05);
   st_stack_249->GetYaxis()->SetTitleSize(0.057);
   st_stack_249->GetYaxis()->SetTitleOffset(1.2);
   st_stack_249->GetYaxis()->SetTitleFont(42);
   st_stack_249->GetZaxis()->SetLabelFont(42);
   st_stack_249->GetZaxis()->SetLabelSize(0.035);
   st_stack_249->GetZaxis()->SetTitleSize(0.035);
   st_stack_249->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_249);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,27124.86);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,33792.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,22436.02);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,20057.97);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,13241.03);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,10375.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,9945.253);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5409.385);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,4260.215);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6910.338);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4267.124);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,4970.952);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2994.841);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2396.001);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,4004.699);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1465.961);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1003.233);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1405.913);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,63.34631);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,133.5598);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,25.34796);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,33.96282);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2107.067);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,3565.737);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2973.321);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2661.378);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1974.352);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1837.579);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1853.535);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,874.7474);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,736.5696);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,2120.842);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,864.8459);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1616.226);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,722.8159);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,613.9251);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1569.037);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,476.7447);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,389.0674);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,542.3561);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,26.12635);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,50.7109);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,11.35382);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,23.70945);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,131.8673);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,133.2009);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,111.2385);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,77.77457);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,61.54679);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,44.40271);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,38.72808);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,35.46739);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,29.99675);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,25.42736);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,19.36696);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,17.64965);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,18.83331);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,10.77761);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,11.87175);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,9.990891);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,4.64321);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.555754);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.245541);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.991556);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.453798);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04373405);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,4.535088);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,4.4025);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.154634);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.461164);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.149022);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.600412);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,2.469106);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.37422);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.217831);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.02821);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.666229);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.693455);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.862216);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.339524);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.483944);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.390103);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.8269329);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.9795159);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.5787871);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4040875);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.2813042);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04373405);
   VbbHcc_both_Sphericity_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,2282.676);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,2625.746);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,1988.739);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1487.373);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1177.333);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,928.8452);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,775.072);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,641.8823);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,539.4564);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,459.5307);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,391.1838);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,336.6359);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,288.5373);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,241.4997);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,197.599);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,161.1148);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,124.9258);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,91.13727);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,53.84474);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,27.91747);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,8.685856);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.454588);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.145167);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.06964491);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,11.97917);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,12.85965);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,11.19148);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,9.679568);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,8.606883);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,7.647624);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,6.993506);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,6.357156);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,5.834872);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,5.387251);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,4.977516);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,4.610231);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,4.269044);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,3.905118);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,3.537993);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.200086);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,2.807859);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.408134);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,1.843343);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.32795);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.7316928);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5388198);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2730469);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.06964491);
   VbbHcc_both_Sphericity_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,331.3817);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,350.2704);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,262.6248);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,218.4234);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,160.8353);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,141.6466);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,90.04551);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,77.27422);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,76.71739);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,66.01104);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,63.88002);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,51.96195);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,40.73061);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,37.24182);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,23.84833);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,18.27703);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,16.39641);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,12.63338);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,9.177605);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,5.372759);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.474398);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.9388196);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,13.96652);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,14.9234);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,13.94726);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,13.35501);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,9.721971);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,9.889372);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,4.672981);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,5.133325);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,6.792457);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,6.167506);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,6.664293);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,5.958511);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,4.504519);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,4.4761);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,3.260932);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.106167);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.026621);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.98187);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,2.90041);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,2.78087);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.5814451);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.4303684);
   VbbHcc_both_Sphericity_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,36.36565);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,30.1135);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,28.13031);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,15.17157);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,15.1518);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,12.45615);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,9.430079);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,15.43056);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,6.979783);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,12.96241);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,3.505102);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.346513);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,2.606563);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.977874);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,3.406609);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.044671);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.200731);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.2457302);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4131073);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.0002136538);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.0006409613);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,3.530094);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.300154);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.163218);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,1.635305);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,2.529716);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.246223);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.733863);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,6.381075);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,1.673164);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,6.213928);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,0.6185418);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6567382);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.4657392);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.6476085);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,1.164707);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.5261371);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3396378);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.1239065);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.19677);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.0002136538);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.0003700592);
   VbbHcc_both_Sphericity_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(1,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.4031079);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.4031079);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinError(1,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.2327345);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.2327345);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.1343693);
   VbbHcc_both_Sphericity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,1.090586);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,0.8724691);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,0.5452932);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.3271759);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.4362346);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.5452932);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.4362346);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.2181173);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.2438625);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.3448737);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.3084644);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.2438625);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.1888951);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.2181173);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.2438625);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.2181173);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1542322);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.1090586);
   VbbHcc_both_Sphericity_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,8.755457);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,6.080179);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,5.350557);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,4.620936);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,2.432072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.4049);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,1.945657);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.675279);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,0.9728286);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,1.216036);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,0.9728286);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.70245);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.7296215);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.459243);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.216036);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.140743);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.060115);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.7690885);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.9099978);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.6878937);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.8066269);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.5438277);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.6434656);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4212471);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinError(18,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,5.810438);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,6.629313);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,4.752496);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,3.919882);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.298856);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,2.710805);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.268393);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,1.790258);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.718812);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.400056);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.133509);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.009854);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.7776561);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.6924712);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.5921728);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4314205);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.3311221);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.250059);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1373951);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.05633198);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02747902);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.006869754);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.001373951);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.08934907);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.09543767);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.08080653);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.07338749);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.06732359);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.06102878);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.05582705);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.04959563);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.04859592);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.04385895);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.03946373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.03724902);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.03268733);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03084512);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.02852396);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02434647);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02132945);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01853561);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01373951);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.008797578);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.006144495);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.003072247);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.001373951);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.683914);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,2.943498);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.162957);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.672434);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.471212);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.175466);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,0.9785403);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.8618172);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.7264758);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.6373223);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.5470946);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.4640279);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.3920606);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.3498111);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2746214);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2309398);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1593306);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1217357);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.07554775);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03401439);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.00751897);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002506323);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001074139);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03099944);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03246395);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.02782874);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02447057);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02295129);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02051514);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.01871798);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01756617);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01612798);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01510599);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.0139959);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01288966);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01184803);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01119145);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.009916006);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.009093246);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.007552993);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.006602046);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.005200922);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.003489803);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001640774);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.0009473012);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0006201542);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02188006);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02188006);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.02461507);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.007735769);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.007735769);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.008205022);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.007502583);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.007859849);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.00428719);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.004644456);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.005716254);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.001786329);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.002143595);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003929924);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.001429063);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002858127);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.001429063);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0003572658);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0003572658);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001637198);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001675725);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001237605);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.00128814);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001429063);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0007988707);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.000875119);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.0010105);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.001184917);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0007145317);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0010105);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0007145317);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0003572658);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0003572658);
   VbbHcc_both_Sphericity_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__683 = new TH1D("VbbHcc_both_Sphericity__683","",25,0,1);
   VbbHcc_both_Sphericity__683->SetBinContent(1,17424);
   VbbHcc_both_Sphericity__683->SetBinContent(2,17833);
   VbbHcc_both_Sphericity__683->SetBinContent(3,13291);
   VbbHcc_both_Sphericity__683->SetBinContent(4,10025);
   VbbHcc_both_Sphericity__683->SetBinContent(5,7873);
   VbbHcc_both_Sphericity__683->SetBinContent(6,6537);
   VbbHcc_both_Sphericity__683->SetBinContent(7,5342);
   VbbHcc_both_Sphericity__683->SetBinContent(8,4356);
   VbbHcc_both_Sphericity__683->SetBinContent(9,3673);
   VbbHcc_both_Sphericity__683->SetBinContent(10,3083);
   VbbHcc_both_Sphericity__683->SetBinContent(11,2627);
   VbbHcc_both_Sphericity__683->SetBinContent(12,2248);
   VbbHcc_both_Sphericity__683->SetBinContent(13,1961);
   VbbHcc_both_Sphericity__683->SetBinContent(14,1576);
   VbbHcc_both_Sphericity__683->SetBinContent(15,1287);
   VbbHcc_both_Sphericity__683->SetBinContent(16,1008);
   VbbHcc_both_Sphericity__683->SetBinContent(17,776);
   VbbHcc_both_Sphericity__683->SetBinContent(18,573);
   VbbHcc_both_Sphericity__683->SetBinContent(19,316);
   VbbHcc_both_Sphericity__683->SetBinContent(20,145);
   VbbHcc_both_Sphericity__683->SetBinContent(21,45);
   VbbHcc_both_Sphericity__683->SetBinContent(22,14);
   VbbHcc_both_Sphericity__683->SetBinContent(23,5);
   VbbHcc_both_Sphericity__683->SetEntries(102042);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__683->SetLineColor(ci);
   VbbHcc_both_Sphericity__683->SetLineWidth(2);
   VbbHcc_both_Sphericity__683->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__683->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1497[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1497[25] = {
   29925.11,
   36949.32,
   24839.92,
   21867.88,
   14663.57,
   11511.02,
   10864.4,
   6184.988,
   4916.897,
   7477.966,
   4747.83,
   5383.97,
   3347.451,
   2690.248,
   4242.401,
   1658.538,
   1151.134,
   1516.101,
   129.2402,
   168.1754,
   35.99765,
   39.36561,
   1.191349,
   0,
   0.06964491};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1497[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1497[25] = {
   2107.155,
   3565.796,
   2973.38,
   2661.432,
   1974.399,
   1837.625,
   1853.557,
   874.8125,
   736.6294,
   2120.868,
   864.8878,
   1616.244,
   722.8453,
   613.9557,
   1569.045,
   476.768,
   389.0904,
   542.3706,
   26.3585,
   50.80664,
   11.39569,
   23.71948,
   0.2765313,
   0,
   0.06964491};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1497,Graph_from_VbbHcc_both_Sphericity_fy1497,Graph_from_VbbHcc_both_Sphericity_fex1497,Graph_from_VbbHcc_both_Sphericity_fey1497);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1497 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1497","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMinimum(44.56662);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMaximum(44566.62);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1497);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__684 = new TH1D("data_mc_ratio__684","",25,0,1);
   data_mc_ratio__684->SetBinContent(1,0.5822536);
   data_mc_ratio__684->SetBinContent(2,0.4826341);
   data_mc_ratio__684->SetBinContent(3,0.5350662);
   data_mc_ratio__684->SetBinContent(4,0.4584349);
   data_mc_ratio__684->SetBinContent(5,0.5369089);
   data_mc_ratio__684->SetBinContent(6,0.5678905);
   data_mc_ratio__684->SetBinContent(7,0.4916975);
   data_mc_ratio__684->SetBinContent(8,0.7042859);
   data_mc_ratio__684->SetBinContent(9,0.7470159);
   data_mc_ratio__684->SetBinContent(10,0.4122779);
   data_mc_ratio__684->SetBinContent(11,0.5533054);
   data_mc_ratio__684->SetBinContent(12,0.4175357);
   data_mc_ratio__684->SetBinContent(13,0.5858188);
   data_mc_ratio__684->SetBinContent(14,0.5858196);
   data_mc_ratio__684->SetBinContent(15,0.303366);
   data_mc_ratio__684->SetBinContent(16,0.607764);
   data_mc_ratio__684->SetBinContent(17,0.6741181);
   data_mc_ratio__684->SetBinContent(18,0.3779433);
   data_mc_ratio__684->SetBinContent(19,2.445059);
   data_mc_ratio__684->SetBinContent(20,0.8621951);
   data_mc_ratio__684->SetBinContent(21,1.250082);
   data_mc_ratio__684->SetBinContent(22,0.3556404);
   data_mc_ratio__684->SetBinContent(23,4.196921);
   data_mc_ratio__684->SetBinError(1,0.004411012);
   data_mc_ratio__684->SetBinError(2,0.003614147);
   data_mc_ratio__684->SetBinError(3,0.004641183);
   data_mc_ratio__684->SetBinError(4,0.004578629);
   data_mc_ratio__684->SetBinError(5,0.006051047);
   data_mc_ratio__684->SetBinError(6,0.007023853);
   data_mc_ratio__684->SetBinError(7,0.006727381);
   data_mc_ratio__684->SetBinError(8,0.010671);
   data_mc_ratio__684->SetBinError(9,0.01232592);
   data_mc_ratio__684->SetBinError(10,0.007425117);
   data_mc_ratio__684->SetBinError(11,0.0107953);
   data_mc_ratio__684->SetBinError(12,0.008806341);
   data_mc_ratio__684->SetBinError(13,0.01322892);
   data_mc_ratio__684->SetBinError(14,0.01475658);
   data_mc_ratio__684->SetBinError(15,0.008456245);
   data_mc_ratio__684->SetBinError(16,0.01914277);
   data_mc_ratio__684->SetBinError(17,0.02419943);
   data_mc_ratio__684->SetBinError(18,0.01578881);
   data_mc_ratio__684->SetBinError(19,0.1375453);
   data_mc_ratio__684->SetBinError(20,0.0716014);
   data_mc_ratio__684->SetBinError(21,0.1863512);
   data_mc_ratio__684->SetBinError(22,0.09504889);
   data_mc_ratio__684->SetBinError(23,1.87692);
   data_mc_ratio__684->SetMinimum(0.4);
   data_mc_ratio__684->SetMaximum(1.6);
   data_mc_ratio__684->SetEntries(66.19709);
   data_mc_ratio__684->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__684->SetLineColor(ci);
   data_mc_ratio__684->SetLineWidth(2);
   data_mc_ratio__684->SetMarkerStyle(20);
   data_mc_ratio__684->SetMarkerSize(1.2);
   data_mc_ratio__684->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__684->GetXaxis()->SetRange(1,25);
   data_mc_ratio__684->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__684->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__684->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__684->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__684->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__684->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__684->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__684->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__684->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__684->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__684->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__684->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__684->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__684->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1498[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1498[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1498[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1498[25] = {
   0.0704143,
   0.09650505,
   0.1197017,
   0.1217051,
   0.1346466,
   0.1596405,
   0.1706083,
   0.1414413,
   0.1498159,
   0.2836156,
   0.1821649,
   0.3001956,
   0.215939,
   0.2282153,
   0.3698484,
   0.2874628,
   0.3380063,
   0.3577405,
   0.2039496,
   0.3021051,
   0.3165676,
   0.6025432,
   0.232116,
   0,
   1};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1498,Graph_from_mc_statistical_error_fy1498,Graph_from_mc_statistical_error_fex1498,Graph_from_mc_statistical_error_fey1498);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1498 = new TH1F("Graph_Graph_from_mc_statistical_error1498","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1498->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1498->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1498->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1498->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1498->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1498);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
