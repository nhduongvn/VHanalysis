void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug  3 10:21:04 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(0,0,1,1);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-284.7735,1.052419,284498.7);
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
   st->SetMaximum(243828.9);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(0.01);
   st_stack_59->SetMaximum(256020.3);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetLabelSize(0.035);
   st_stack_59->GetXaxis()->SetTitleSize(0.035);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetLabelSize(0.035);
   st_stack_59->GetZaxis()->SetTitleSize(0.035);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,69256.89);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,60316.17);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,33579.97);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,21794.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,12963.79);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,7355.445);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,4569.572);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1859.747);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1007.946);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,697.6301);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,775.8188);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,367.404);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,380.7753);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,53.37641);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,196.3118);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,231.6985);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,125.9898);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,37.84994);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,60.12448);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,3724.576);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4004.18);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2567.647);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2030.07);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,2168.626);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1209.467);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1002.951);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,414.3618);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,385.6215);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,130.9145);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,383.046);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,86.56829);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,92.01096);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,21.30663);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,57.09642);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,70.59689);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,57.33765);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,17.99832);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,34.92229);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,443.3775);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,336.1533);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,196.3735);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,119.9009);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,70.12198);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,37.05136);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,23.79611);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,13.86219);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,10.31112);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,7.489922);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,5.82195);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,4.638097);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,3.554599);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,2.134938);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.992664);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.470899);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,1.130693);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.5576908);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.194403);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.04860075);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,8.647367);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,7.413782);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,5.75566);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,4.496998);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,3.529843);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.482595);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.01899);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.517132);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.339773);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.179065);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.9870867);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.934632);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.7908928);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.5484655);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.6422939);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4570374);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.4385761);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.3232716);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.09720149);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.04860075);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,8452.41);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,6941.004);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,3921.684);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,2287.888);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1316.416);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,774.3372);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,466.8847);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,291.3392);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,195.7307);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,133.5716);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,91.84864);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,69.51365);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,50.00326);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,39.94627);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,30.66043);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,22.23084);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,14.34703);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,9.876845);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,6.220977);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.548088);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,1.092113);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.2998553);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,22.84842);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,20.69606);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,15.55779);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,11.88364);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,9.013445);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.91198);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,5.358284);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,4.225639);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.47246);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.866176);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.376406);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.061833);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.758149);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.566377);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.370932);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.169221);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.9388427);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.7806187);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.6203193);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3993367);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.2678624);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1361806);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,1161.779);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,873.7306);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,501.3697);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,307.4928);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,181.5982);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,96.34151);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,59.06373);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,28.52047);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,19.64469);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,13.55521);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,10.06864);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,8.587001);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,6.965502);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,6.158975);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,4.081187);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.447612);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.348463);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.4960702);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.7078452);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.5292756);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.09257296);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,24.56028);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,21.78947);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,14.54571);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,12.171);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,9.7174);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,6.166982);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,5.400542);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.429245);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,2.018094);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.545698);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.418494);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.293183);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.13593);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.187419);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.8919776);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.6677816);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.7917497);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2238285);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.5138037);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.2394779);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.09257296);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,128.0507);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,69.90079);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,51.79515);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,20.79885);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,17.605);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,11.24559);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,8.117941);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,5.907556);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.614117);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.289526);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,1.310166);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,1.459342);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.003111);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,1.547857);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3439623);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.6279484);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.3983092);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1023102);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,13.96635);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,6.438862);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,7.430972);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.847368);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.721566);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,3.160413);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,2.317505);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.142651);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4323061);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4575087);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.5161366);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.5170688);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.3412886);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.6249858);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1899505);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.3220575);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.2889793);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1023102);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.9040853);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.6392849);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,0.4520427);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.4520427);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,5.312987);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,1.770996);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.416796);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.3541991);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,1.371807);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.7920133);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.7083982);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.5009132);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.5009132);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.3541991);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,24.58846);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,17.88252);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,8.382431);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,5.029458);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,4.750044);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.117657);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.8382431);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.5588287);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(13,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.621139);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.235315);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.530415);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.185455);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.152055);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.5588287);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.4839599);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.3951516);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(13,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,20.36857);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,16.91705);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,9.1294);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,6.539613);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,4.555557);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.475498);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.9051683);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.4342979);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.258293);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1942912);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1394325);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1165747);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.06857336);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.06171602);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.04571557);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03428668);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01828623);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01142889);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.01828623);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.2157731);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1966434);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1444569);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1222625);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1020441);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.07522261);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.04548642);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.03150728);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02429816);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02107384);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.0178525);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01632372);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01251973);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01187725);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01022231);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.008852783);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.006465158);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.005111156);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.006465158);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,9.547853);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,7.990723);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,4.418028);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.900244);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.7318);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.9872155);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.5174535);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.2950916);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.222362);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1639398);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.1102868);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.09180627);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.07332579);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.05782603);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.05663374);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.03517253);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02563422);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.02324964);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.01013446);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.002384579);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001788434);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.001192289);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0005961446);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.07544469);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.06901903);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.0513204);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.04158082);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.03213103);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.0242595);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01756352);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01326338);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01151347);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.00988594);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.008108444);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.00739796);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.006611564);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.005871344);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.005810499);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004579074);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.003909182);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003722922);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002457967);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001192289);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001032553);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0008430758);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0005961446);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.05916981);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.05916981);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01365457);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.02503338);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.01365457);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01160415);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.01160415);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005574455);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.007547848);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.005574455);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.03296225);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.02067632);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.01198627);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.009888674);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.005094166);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.002696911);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001498284);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0005993136);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.001797941);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.001498284);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.003142827);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002489136);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001895196);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001721397);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001235517);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0008989704);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.000670053);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0004237787);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0007340063);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.000670053);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__117 = new TH1D("VbbHcc_tags_Sphericity__117","",25,0,1);
   VbbHcc_tags_Sphericity__117->SetBinContent(1,109723);
   VbbHcc_tags_Sphericity__117->SetBinContent(2,86134);
   VbbHcc_tags_Sphericity__117->SetBinContent(3,49346);
   VbbHcc_tags_Sphericity__117->SetBinContent(4,28671);
   VbbHcc_tags_Sphericity__117->SetBinContent(5,16576);
   VbbHcc_tags_Sphericity__117->SetBinContent(6,9100);
   VbbHcc_tags_Sphericity__117->SetBinContent(7,4803);
   VbbHcc_tags_Sphericity__117->SetBinContent(8,2894);
   VbbHcc_tags_Sphericity__117->SetBinContent(9,1923);
   VbbHcc_tags_Sphericity__117->SetBinContent(10,1404);
   VbbHcc_tags_Sphericity__117->SetBinContent(11,972);
   VbbHcc_tags_Sphericity__117->SetBinContent(12,695);
   VbbHcc_tags_Sphericity__117->SetBinContent(13,569);
   VbbHcc_tags_Sphericity__117->SetBinContent(14,425);
   VbbHcc_tags_Sphericity__117->SetBinContent(15,328);
   VbbHcc_tags_Sphericity__117->SetBinContent(16,241);
   VbbHcc_tags_Sphericity__117->SetBinContent(17,188);
   VbbHcc_tags_Sphericity__117->SetBinContent(18,133);
   VbbHcc_tags_Sphericity__117->SetBinContent(19,68);
   VbbHcc_tags_Sphericity__117->SetBinContent(20,25);
   VbbHcc_tags_Sphericity__117->SetBinContent(21,11);
   VbbHcc_tags_Sphericity__117->SetBinContent(22,5);
   VbbHcc_tags_Sphericity__117->SetBinContent(23,1);
   VbbHcc_tags_Sphericity__117->SetEntries(314259);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__117->SetLineColor(ci);
   VbbHcc_tags_Sphericity__117->SetLineWidth(2);
   VbbHcc_tags_Sphericity__117->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__117->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__117->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1117[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1117[25] = {
   79503.32,
   68581.6,
   38275.01,
   24547.02,
   14561.29,
   8279.714,
   5129.699,
   2200.106,
   1236.083,
   854.1739,
   885.6782,
   452.0899,
   442.7231,
   103.2843,
   233.4927,
   258.5453,
   144.2582,
   48.81523,
   67.37844,
   3.410049,
   1.18876,
   0.3010476,
   0.0005961446,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1117[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1117[25] = {
   3724.765,
   4004.306,
   2567.753,
   2030.149,
   2168.671,
   1209.509,
   1002.984,
   414.3948,
   385.6451,
   130.9614,
   383.0579,
   86.60953,
   92.03922,
   21.41325,
   57.12377,
   70.61195,
   57.35321,
   18.01953,
   34.93186,
   0.545216,
   0.283419,
   0.1361832,
   0.0005961446,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1117,Graph_from_VbbHcc_tags_Sphericity_fy1117,Graph_from_VbbHcc_tags_Sphericity_fex1117,Graph_from_VbbHcc_tags_Sphericity_fey1117);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1117 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1117","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMaximum(91550.89);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1117);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",25,0,1);
   data_mc_ratio__118->SetBinContent(1,1.380106);
   data_mc_ratio__118->SetBinContent(2,1.255935);
   data_mc_ratio__118->SetBinContent(3,1.289248);
   data_mc_ratio__118->SetBinContent(4,1.168003);
   data_mc_ratio__118->SetBinContent(5,1.138361);
   data_mc_ratio__118->SetBinContent(6,1.099072);
   data_mc_ratio__118->SetBinContent(7,0.9363122);
   data_mc_ratio__118->SetBinContent(8,1.315391);
   data_mc_ratio__118->SetBinContent(9,1.555721);
   data_mc_ratio__118->SetBinContent(10,1.643693);
   data_mc_ratio__118->SetBinContent(11,1.097464);
   data_mc_ratio__118->SetBinContent(12,1.537305);
   data_mc_ratio__118->SetBinContent(13,1.285228);
   data_mc_ratio__118->SetBinContent(14,4.114856);
   data_mc_ratio__118->SetBinContent(15,1.404755);
   data_mc_ratio__118->SetBinContent(16,0.9321385);
   data_mc_ratio__118->SetBinContent(17,1.303218);
   data_mc_ratio__118->SetBinContent(18,2.72456);
   data_mc_ratio__118->SetBinContent(19,1.009225);
   data_mc_ratio__118->SetBinContent(20,7.331273);
   data_mc_ratio__118->SetBinContent(21,9.253339);
   data_mc_ratio__118->SetBinContent(22,16.60867);
   data_mc_ratio__118->SetBinContent(23,1677.445);
   data_mc_ratio__118->SetBinError(1,0.004166425);
   data_mc_ratio__118->SetBinError(2,0.004279368);
   data_mc_ratio__118->SetBinError(3,0.005803776);
   data_mc_ratio__118->SetBinError(4,0.006897992);
   data_mc_ratio__118->SetBinError(5,0.008841785);
   data_mc_ratio__118->SetBinError(6,0.0115214);
   data_mc_ratio__118->SetBinError(7,0.01351028);
   data_mc_ratio__118->SetBinError(8,0.02445151);
   data_mc_ratio__118->SetBinError(9,0.0354766);
   data_mc_ratio__118->SetBinError(10,0.04386693);
   data_mc_ratio__118->SetBinError(11,0.03520118);
   data_mc_ratio__118->SetBinError(12,0.0583133);
   data_mc_ratio__118->SetBinError(13,0.05387955);
   data_mc_ratio__118->SetBinError(14,0.1995998);
   data_mc_ratio__118->SetBinError(15,0.07756461);
   data_mc_ratio__118->SetBinError(16,0.06004432);
   data_mc_ratio__118->SetBinError(17,0.09504698);
   data_mc_ratio__118->SetBinError(18,0.2362493);
   data_mc_ratio__118->SetBinError(19,0.1223865);
   data_mc_ratio__118->SetBinError(20,1.466255);
   data_mc_ratio__118->SetBinError(21,2.789987);
   data_mc_ratio__118->SetBinError(22,7.427623);
   data_mc_ratio__118->SetBinError(23,1677.445);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(0.5372507);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__118->GetXaxis()->SetRange(1,25);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1118[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1118[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1118[25] = {
   0.04685043,
   0.05838746,
   0.06708692,
   0.08270449,
   0.148934,
   0.146081,
   0.195525,
   0.1883522,
   0.3119896,
   0.1533194,
   0.4325023,
   0.1915759,
   0.2078934,
   0.2073234,
   0.244649,
   0.2731125,
   0.3975732,
   0.3691374,
   0.5184428,
   0.1598851,
   0.2384156,
   0.4523643,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
