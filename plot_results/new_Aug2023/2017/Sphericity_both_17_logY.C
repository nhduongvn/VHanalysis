void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(0,0,1,1);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.870408,1.052419,12.39381);
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
   st->SetMaximum(2.126291e+10);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0.001395905);
   st_stack_250->SetMaximum(7.368713e+10);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetLabelSize(0.035);
   st_stack_250->GetXaxis()->SetTitleSize(0.035);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Events/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetLabelSize(0.05);
   st_stack_250->GetYaxis()->SetTitleSize(0.057);
   st_stack_250->GetYaxis()->SetTitleOffset(1.2);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetLabelSize(0.035);
   st_stack_250->GetZaxis()->SetTitleSize(0.035);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,23295.35);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,29564.01);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,24996.07);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,16608.33);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,13741.72);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,10631.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,8687.475);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,4843.051);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,43549.88);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,4839.198);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,3968.848);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,2869.064);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2370.103);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,1962.623);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1335.46);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1547.67);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1663.799);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,520.6975);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,438.5646);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,238.0885);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,49.16548);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,30.39194);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,261.4261);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,1703.187);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2079.241);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2364.581);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,1584.322);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1396.247);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1261.72);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1177.196);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,635.674);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,26419.47);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,816.318);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,732.4102);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,569.3964);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,542.2073);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,449.8321);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,388.0794);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,456.0441);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,548.2949);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,105.1192);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,246.9533);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,201.8466);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,27.4759);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,20.19994);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,237.597);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9795);

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
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,156.3833);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,158.8838);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,122.1638);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,88.77512);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,68.34692);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,54.31152);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,48.88575);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,41.6823);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,34.39167);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,28.65775);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,23.00522);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,22.2684);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,16.08691);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,16.34697);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,12.411);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,9.89253);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,8.196117);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,4.670476);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.142154);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,2.228522);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.03833158);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.2832007);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.05752587);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,5.179159);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,5.135454);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.618646);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.91903);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.443202);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.953266);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.001767);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.820708);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.524334);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.236486);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.994889);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.098528);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.725757);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.745393);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.534655);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.378132);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.294869);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.863173);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.5699495);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.6646665);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.03833158);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.2832007);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.05752587);
   VbbHcc_both_Sphericity_stack_2->SetEntries(12402);

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
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,3134.601);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,3483.353);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2591.228);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1976.308);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1528.471);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1230.798);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1026.537);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,839.6177);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,714.4002);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,614.7542);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,525.0352);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,445.8002);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,388.0578);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,314.242);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,270.0436);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,221.5905);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,165.3715);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,115.152);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,70.23782);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,32.51225);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,12.3612);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.010399);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.7802632);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.1271596);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,14.40971);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,15.13453);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,13.09531);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,11.45527);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,10.07953);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,9.068238);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,8.283409);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,7.484236);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,6.90005);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,6.421239);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,5.941758);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,5.467409);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.094655);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,4.581668);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.260461);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.84346);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.317299);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.757768);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.149792);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.455039);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.8835768);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5014405);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2192094);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.07657627);
   VbbHcc_both_Sphericity_stack_3->SetEntries(333238);

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
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,389.6236);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,409.9765);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,285.8694);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,246.8649);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,166.1823);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,146.7169);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,127.7977);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,101.9557);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,87.99611);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,68.79831);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,55.1973);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,51.87858);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,47.98863);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,43.11389);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,31.60668);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,22.87618);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,21.46867);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,10.62189);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,6.255534);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,2.943308);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,0.8938303);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.119283);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.0810002);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,11.79892);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,13.25698);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,9.119702);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,9.800655);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,6.697229);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,7.434976);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,7.563628);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,6.790086);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,5.821738);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,3.70866);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,3.53744);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,4.364901);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,2.946266);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,4.926298);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.322295);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.005247);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.709651);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,1.317631);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.015874);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,0.8111938);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.4850418);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.119283);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.0810002);
   VbbHcc_both_Sphericity_stack_4->SetEntries(18334);

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
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,56.87092);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,35.75624);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,33.10146);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,24.05344);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,20.93098);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,15.50158);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,10.58623);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,11.77448);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,13.18744);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,5.97969);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,8.445434);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.222286);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,3.872443);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.419762);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.726491);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.840795);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.224338);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.4953003);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,1.034903);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,8.790998);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.274909);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.837518);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.255551);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,3.07664);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.649458);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.647067);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,1.873806);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,5.571334);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.037007);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.032373);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6416667);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.7494951);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5254389);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.5691001);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,1.317718);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.4027355);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.2155564);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.5153401);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2217);

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
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.232904);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.3752659);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.2950387);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,0.2355824);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.3049337);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.232904);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.3752659);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.2950387);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.2355824);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.3049337);
   VbbHcc_both_Sphericity_stack_6->SetEntries(5);

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
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,1.657764);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.6861364);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,1.091422);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.4641428);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.3983082);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.6061748);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.6901933);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.2275793);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.2849003);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.2364404);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.1699058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.6803981);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.4027076);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.5482108);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.3497805);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.2827442);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.4315985);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.4058153);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.2275793);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.2849003);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.2364404);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1699058);
   VbbHcc_both_Sphericity_stack_7->SetEntries(26);

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
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,4.952327);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,8.027398);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,3.767071);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,3.668179);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,3.929443);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,2.557105);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,3.455661);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.882378);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.273459);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.006522);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.159243);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.579916);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.9350753);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.061052);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2791256);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.1969568);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.103339);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.398536);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,0.9310877);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,0.9561792);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.9757695);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.7886736);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.9430467);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.8393758);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.7314189);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.7563477);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.5300917);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.6131336);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4770413);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.5310058);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2791256);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.1969568);
   VbbHcc_both_Sphericity_stack_8->SetEntries(184);

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
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,6.453424);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,6.999957);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,5.090714);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.091818);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.490268);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,2.967358);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.435776);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.072058);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.813728);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.470115);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.285685);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.104194);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.8743361);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.7928382);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.5841792);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4334209);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.3935564);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2134793);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1409537);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06005026);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.01850994);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.004666703);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1023711);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1054145);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.09014696);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.08135079);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.07525423);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.06931009);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.06302803);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.05820582);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.05425255);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.04927498);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.0455406);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.04249872);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.03758973);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03605341);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03045608);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02615486);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02513812);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01830587);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01506881);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.009362325);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.005459729);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002722517);
   VbbHcc_both_Sphericity_stack_9->SetEntries(29329);

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
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.396693);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,2.595635);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,1.917146);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.495935);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.303758);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.038768);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,0.867553);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.765272);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.6483833);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.5636255);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.4845872);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.4151686);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.3514198);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.3075392);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2488482);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2124051);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1478179);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1083903);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.06561447);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03195899);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.006110556);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002288433);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0003480914);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03063981);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03165838);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.02727429);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02410434);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02252327);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02011557);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.01836216);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01723334);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01591499);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01481351);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01374316);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01271104);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01173035);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01097118);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.009837562);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.009053458);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.007611258);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.006461335);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.004983978);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.003472742);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001501648);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.000938577);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0003480914);
   VbbHcc_both_Sphericity_stack_10->SetEntries(41891);

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
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02294742);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02392125);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01651046);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.01133166);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01271716);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01206772);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.009401315);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.006077784);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.007646481);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.006397411);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005100843);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.00491805);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002995462);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.0006310176);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.001697729);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.002276254);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.006222298);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.006043482);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005149679);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.004051476);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.004605622);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.004350933);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.003853581);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003167824);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.003470835);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003237624);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003027586);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002841993);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002125726);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.0006310176);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.001697729);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.002276254);
   VbbHcc_both_Sphericity_stack_11->SetEntries(95);

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
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.00871479);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.009757958);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.007620059);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.004595728);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.005239261);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.004334012);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.003987178);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.003597966);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.00273715);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.00250851);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.001905996);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002100935);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001533025);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.001585783);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0004356115);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0008774249);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0001487072);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001313123);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001419208);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001294948);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.000996147);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001025343);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0009506949);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.0009153703);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.000880081);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.0007526777);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0007665505);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0006393931);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0006688215);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0005461805);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.000568039);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0003080243);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004440539);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0001487072);
   VbbHcc_both_Sphericity_stack_12->SetEntries(308);

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
   
   TH1D *VbbHcc_both_Sphericity__686 = new TH1D("VbbHcc_both_Sphericity__686","",25,0,1);
   VbbHcc_both_Sphericity__686->SetBinContent(1,11834);
   VbbHcc_both_Sphericity__686->SetBinContent(2,11360);
   VbbHcc_both_Sphericity__686->SetBinContent(3,8634);
   VbbHcc_both_Sphericity__686->SetBinContent(4,6369);
   VbbHcc_both_Sphericity__686->SetBinContent(5,5188);
   VbbHcc_both_Sphericity__686->SetBinContent(6,4154);
   VbbHcc_both_Sphericity__686->SetBinContent(7,3530);
   VbbHcc_both_Sphericity__686->SetBinContent(8,2940);
   VbbHcc_both_Sphericity__686->SetBinContent(9,2506);
   VbbHcc_both_Sphericity__686->SetBinContent(10,1968);
   VbbHcc_both_Sphericity__686->SetBinContent(11,1814);
   VbbHcc_both_Sphericity__686->SetBinContent(12,1561);
   VbbHcc_both_Sphericity__686->SetBinContent(13,1315);
   VbbHcc_both_Sphericity__686->SetBinContent(14,1054);
   VbbHcc_both_Sphericity__686->SetBinContent(15,881);
   VbbHcc_both_Sphericity__686->SetBinContent(16,696);
   VbbHcc_both_Sphericity__686->SetBinContent(17,497);
   VbbHcc_both_Sphericity__686->SetBinContent(18,373);
   VbbHcc_both_Sphericity__686->SetBinContent(19,231);
   VbbHcc_both_Sphericity__686->SetBinContent(20,79);
   VbbHcc_both_Sphericity__686->SetBinContent(21,33);
   VbbHcc_both_Sphericity__686->SetBinContent(22,13);
   VbbHcc_both_Sphericity__686->SetBinContent(23,5);
   VbbHcc_both_Sphericity__686->SetBinContent(24,1);
   VbbHcc_both_Sphericity__686->SetEntries(67060);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__686->SetLineColor(ci);
   VbbHcc_both_Sphericity__686->SetLineWidth(2);
   VbbHcc_both_Sphericity__686->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__686->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1499[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1499[25] = {
   27048.32,
   33670.56,
   28039.23,
   18955.07,
   15535.15,
   12086.11,
   9908.896,
   5844.5,
   44404.83,
   5561.437,
   4583.468,
   3395.93,
   2828.511,
   2341.079,
   1653.362,
   1805.517,
   1860.798,
   651.9591,
   518.4439,
   275.8646,
   62.48347,
   34.81178,
   262.3453,
   0.1271596,
   0};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1499[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1499[25] = {
   1703.32,
   2079.348,
   2364.642,
   1584.402,
   1396.308,
   1261.781,
   1177.255,
   635.764,
   26419.47,
   816.3557,
   732.4486,
   569.4441,
   542.2427,
   449.8864,
   388.1133,
   456.0687,
   548.3192,
   105.1674,
   246.9659,
   201.8546,
   27.49441,
   20.2085,
   237.5971,
   0.07657627,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1499,Graph_from_VbbHcc_both_Sphericity_fy1499,Graph_from_VbbHcc_both_Sphericity_fex1499,Graph_from_VbbHcc_both_Sphericity_fey1499);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1499 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1499","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMinimum(77.90673);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMaximum(77906.73);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1499);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__687 = new TH1D("data_mc_ratio__687","",25,0,1);
   data_mc_ratio__687->SetBinContent(1,0.4375133);
   data_mc_ratio__687->SetBinContent(2,0.3373867);
   data_mc_ratio__687->SetBinContent(3,0.3079257);
   data_mc_ratio__687->SetBinContent(4,0.336005);
   data_mc_ratio__687->SetBinContent(5,0.3339524);
   data_mc_ratio__687->SetBinContent(6,0.3437003);
   data_mc_ratio__687->SetBinContent(7,0.3562455);
   data_mc_ratio__687->SetBinContent(8,0.503037);
   data_mc_ratio__687->SetBinContent(9,0.0564353);
   data_mc_ratio__687->SetBinContent(10,0.3538654);
   data_mc_ratio__687->SetBinContent(11,0.3957702);
   data_mc_ratio__687->SetBinContent(12,0.4596679);
   data_mc_ratio__687->SetBinContent(13,0.4649089);
   data_mc_ratio__687->SetBinContent(14,0.4502198);
   data_mc_ratio__687->SetBinContent(15,0.5328535);
   data_mc_ratio__687->SetBinContent(16,0.3854851);
   data_mc_ratio__687->SetBinContent(17,0.2670898);
   data_mc_ratio__687->SetBinContent(18,0.5721217);
   data_mc_ratio__687->SetBinContent(19,0.4455641);
   data_mc_ratio__687->SetBinContent(20,0.2863723);
   data_mc_ratio__687->SetBinContent(21,0.5281397);
   data_mc_ratio__687->SetBinContent(22,0.3734368);
   data_mc_ratio__687->SetBinContent(23,0.01905885);
   data_mc_ratio__687->SetBinContent(24,7.864135);
   data_mc_ratio__687->SetBinError(1,0.004021847);
   data_mc_ratio__687->SetBinError(2,0.003165475);
   data_mc_ratio__687->SetBinError(3,0.003313904);
   data_mc_ratio__687->SetBinError(4,0.004210272);
   data_mc_ratio__687->SetBinError(5,0.004636439);
   data_mc_ratio__687->SetBinError(6,0.005332694);
   data_mc_ratio__687->SetBinError(7,0.005996006);
   data_mc_ratio__687->SetBinError(8,0.0092774);
   data_mc_ratio__687->SetBinError(9,0.001127354);
   data_mc_ratio__687->SetBinError(10,0.007976742);
   data_mc_ratio__687->SetBinError(11,0.009292326);
   data_mc_ratio__687->SetBinError(12,0.01163437);
   data_mc_ratio__687->SetBinError(13,0.0128205);
   data_mc_ratio__687->SetBinError(14,0.01386769);
   data_mc_ratio__687->SetBinError(15,0.01795229);
   data_mc_ratio__687->SetBinError(16,0.01461178);
   data_mc_ratio__687->SetBinError(17,0.01198061);
   data_mc_ratio__687->SetBinError(18,0.02962334);
   data_mc_ratio__687->SetBinError(19,0.02931597);
   data_mc_ratio__687->SetBinError(20,0.0322194);
   data_mc_ratio__687->SetBinError(21,0.09193732);
   data_mc_ratio__687->SetBinError(22,0.1035727);
   data_mc_ratio__687->SetBinError(23,0.008523379);
   data_mc_ratio__687->SetBinError(24,7.864135);
   data_mc_ratio__687->SetMinimum(0.4);
   data_mc_ratio__687->SetMaximum(1.6);
   data_mc_ratio__687->SetEntries(3.18473);
   data_mc_ratio__687->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__687->SetLineColor(ci);
   data_mc_ratio__687->SetLineWidth(2);
   data_mc_ratio__687->SetMarkerStyle(20);
   data_mc_ratio__687->SetMarkerSize(1.2);
   data_mc_ratio__687->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__687->GetXaxis()->SetRange(1,25);
   data_mc_ratio__687->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__687->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__687->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__687->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__687->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__687->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__687->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__687->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__687->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__687->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__687->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__687->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__687->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__687->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1500[25] = {
   0.06297324,
   0.06175568,
   0.08433335,
   0.08358724,
   0.08988055,
   0.1043992,
   0.1188079,
   0.1087799,
   0.5949684,
   0.1467886,
   0.1598023,
   0.1676843,
   0.1917061,
   0.1921705,
   0.2347418,
   0.2525973,
   0.2946689,
   0.1613098,
   0.47636,
   0.7317161,
   0.4400269,
   0.5805075,
   0.9056658,
   0.6022061,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1500,Graph_from_mc_statistical_error_fy1500,Graph_from_mc_statistical_error_fex1500,Graph_from_mc_statistical_error_fey1500);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1500 = new TH1F("Graph_Graph_from_mc_statistical_error1500","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1500->SetMinimum(0.08490074);
   Graph_Graph_from_mc_statistical_error1500->SetMaximum(2.086799);
   Graph_Graph_from_mc_statistical_error1500->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1500->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1500);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
