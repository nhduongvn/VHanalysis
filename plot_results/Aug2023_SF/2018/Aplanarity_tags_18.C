#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(0,0,1,1);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-715.2725,1.052419,714567.2);
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
   st->SetMaximum(643039);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",50,0,1);
   st_stack_16->SetMinimum(0.01);
   st_stack_16->SetMaximum(643039);
   st_stack_16->SetDirectory(nullptr);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->SetLineWidth(0);
   st_stack_16->GetXaxis()->SetRange(1,50);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/0.02");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,253362.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,23066.97);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,10310.86);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3799.265);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1546.159);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,433.2068);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,185.0541);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,38.36869);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,121.6543);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,39.47564);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,7.790419);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,39.61843);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,15216.11);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2358.77);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1809.492);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1122.011);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,634.4333);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,136.3247);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,84.08986);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,17.11253);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,79.18253);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,31.24163);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,7.790419);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,39.61843);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10096);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1447.436);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,192.1701);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,58.8835);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,17.33831);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,12.46444);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,3.385927);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,3.378652);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,2.224569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,1.179357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.7423163);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.08698704);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.05502477);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.203191);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.4549307);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,-0.07936056);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,24.14703);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,10.88285);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,5.149825);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.962559);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,2.544798);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.9793181);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,1.071141);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.8114882);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.9109604);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.429473);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.08698704);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.2148255);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.157925);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.4198054);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.07936056);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(13198);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,29935.94);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,4184.971);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,1166.499);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,427.1494);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,207.1968);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,98.92936);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,55.8446);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,33.11796);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,19.18076);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,13.26122);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,7.264041);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,5.830337);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,3.363366);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,2.045823);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.548489);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,1.077921);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.5587799);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.7249389);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.2030633);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.4156745);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,67.60264);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,24.92245);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,13.17228);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,7.98644);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,8.465228);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,4.149962);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,2.744644);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,2.065674);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,1.560891);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,1.297089);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,1.0132);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.9338197);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.6897887);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.4753008);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.4212609);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.3772104);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.2195014);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.2923024);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.1545185);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.2806449);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(419014);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,3989.286);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,408.105);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,115.6064);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,36.66085);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,12.64373);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,8.969242);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.635621);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.574127);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.483942);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,4.764898);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.2621142);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.4551654);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.1327388);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.268349);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.08820658);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,67.29512);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,17.43797);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,10.63955);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,4.504336);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.926897);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.791893);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.9087446);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4398108);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.15486);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,3.292421);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1878862);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.2899285);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1327388);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1925592);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.08820658);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(18512);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,436.6093);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,60.76429);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,12.24505);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,5.46867);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,1.370693);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.497295);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.7035704);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,0.4542113);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.01113943);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,0.4703396);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.1744653);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,27.75421);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,23.57605);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,2.628126);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,2.402493);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.6047094);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3023649);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.4064169);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,0.2616741);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.01113943);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.4703396);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.1744653);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2245);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,3.673926);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,2.283448);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,18.20349);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.9532567);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,1.26728);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,4.396832);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.9532567);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.9238119);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,76.29707);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,3.469896);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.349003);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.6700941);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(6,0.8210679);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(12,0.4163885);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,5.599832);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.127794);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.349003);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.4948273);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(6,0.8210679);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(12,0.4163885);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,74.94692);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,5.159017);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.925416);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.4354668);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1681006);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.07708228);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.05146614);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.007987122);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01541593);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.01062758);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.002372771);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.004304116);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.009147466);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.5928191);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.140785);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.05855455);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.07676049);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02414688);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01780694);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.01432841);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004371452);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.006670157);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.005387073);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002372771);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.004304116);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.009147466);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,22.19572);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.298951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.5485809);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.2045617);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.07799534);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.0419113);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02569859);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01313623);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01267815);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.007648478);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002797402);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002305181);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002391218);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.00111153);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0005972935);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0006388652);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004398179);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001974588);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1097966);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.03500534);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01740526);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01057481);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.006612416);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.004856928);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.003657421);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002677797);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002691682);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002111987);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001291525);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001174139);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.001083358);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0007893573);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0005972935);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0006388652);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004398179);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.001163792);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1754652);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.009438183);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.002928909);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.004685718);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.02185568);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.004753313);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.002928909);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.004685718);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.09302256);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.0103705);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001652675);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.000818522);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0007018874);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0002560032);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.006329337);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.002134243);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0007523519);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0005944804);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0005054415);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0002560032);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__226 = new TH1D("VbbHcc_tags_Aplanarity__226","",50,0,1);
   VbbHcc_tags_Aplanarity__226->SetBinContent(1,260171);
   VbbHcc_tags_Aplanarity__226->SetBinContent(2,33265);
   VbbHcc_tags_Aplanarity__226->SetBinContent(3,8461);
   VbbHcc_tags_Aplanarity__226->SetBinContent(4,2918);
   VbbHcc_tags_Aplanarity__226->SetBinContent(5,1242);
   VbbHcc_tags_Aplanarity__226->SetBinContent(6,676);
   VbbHcc_tags_Aplanarity__226->SetBinContent(7,331);
   VbbHcc_tags_Aplanarity__226->SetBinContent(8,194);
   VbbHcc_tags_Aplanarity__226->SetBinContent(9,104);
   VbbHcc_tags_Aplanarity__226->SetBinContent(10,69);
   VbbHcc_tags_Aplanarity__226->SetBinContent(11,55);
   VbbHcc_tags_Aplanarity__226->SetBinContent(12,26);
   VbbHcc_tags_Aplanarity__226->SetBinContent(13,24);
   VbbHcc_tags_Aplanarity__226->SetBinContent(14,16);
   VbbHcc_tags_Aplanarity__226->SetBinContent(15,7);
   VbbHcc_tags_Aplanarity__226->SetBinContent(16,7);
   VbbHcc_tags_Aplanarity__226->SetBinContent(17,6);
   VbbHcc_tags_Aplanarity__226->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity__226->SetEntries(307623);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__226->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__226->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__226->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__226->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__226->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__226->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__226->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__226->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__226->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__226->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__226->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__226->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__226->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__226->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1031[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1031[50] = { 289367.5, 27924.88, 11667.18, 4287.198, 1780.082, 545.9286, 248.6937, 75.76095, 145.5376, 58.73269, 15.5832, 6.763524, 3.701687, 2.511012, 41.43587, 1.166767, 0.4798591,
   0.7269135, 0.2030633, 0.4156745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1031[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1031[50] = { 15216.45, 2359.11, 1809.581, 1122.052, 634.498, 136.406, 84.14735, 17.26344, 79.21157, 31.44785, 7.860695, 1.084263, 0.7199788, 0.6342174, 39.62114, 0.3873868, 0.2334077,
   0.2923048, 0.1545185, 0.2806449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1031,Graph_from_VbbHcc_tags_Aplanarity_fy1031,Graph_from_VbbHcc_tags_Aplanarity_fex1031,Graph_from_VbbHcc_tags_Aplanarity_fey1031);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1031 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1031","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->SetMaximum(335042.4);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__227 = new TH1D("data_mc_ratio__227","",50,0,1);
   data_mc_ratio__227->SetBinContent(1,0.8991023);
   data_mc_ratio__227->SetBinContent(2,1.191232);
   data_mc_ratio__227->SetBinContent(3,0.7251964);
   data_mc_ratio__227->SetBinContent(4,0.680631);
   data_mc_ratio__227->SetBinContent(5,0.6977208);
   data_mc_ratio__227->SetBinContent(6,1.238257);
   data_mc_ratio__227->SetBinContent(7,1.330954);
   data_mc_ratio__227->SetBinContent(8,2.560686);
   data_mc_ratio__227->SetBinContent(9,0.7145919);
   data_mc_ratio__227->SetBinContent(10,1.174814);
   data_mc_ratio__227->SetBinContent(11,3.529443);
   data_mc_ratio__227->SetBinContent(12,3.84415);
   data_mc_ratio__227->SetBinContent(13,6.483531);
   data_mc_ratio__227->SetBinContent(14,6.371932);
   data_mc_ratio__227->SetBinContent(15,0.1689358);
   data_mc_ratio__227->SetBinContent(16,5.999485);
   data_mc_ratio__227->SetBinContent(17,12.50367);
   data_mc_ratio__227->SetBinContent(20,4.811457);
   data_mc_ratio__227->SetBinError(1,0.001762705);
   data_mc_ratio__227->SetBinError(2,0.006531343);
   data_mc_ratio__227->SetBinError(3,0.007883967);
   data_mc_ratio__227->SetBinError(4,0.01259996);
   data_mc_ratio__227->SetBinError(5,0.01979798);
   data_mc_ratio__227->SetBinError(6,0.04762527);
   data_mc_ratio__227->SetBinError(7,0.07315587);
   data_mc_ratio__227->SetBinError(8,0.1838465);
   data_mc_ratio__227->SetBinError(9,0.0700715);
   data_mc_ratio__227->SetBinError(10,0.141431);
   data_mc_ratio__227->SetBinError(11,0.4759099);
   data_mc_ratio__227->SetBinError(12,0.7538998);
   data_mc_ratio__227->SetBinError(13,1.323445);
   data_mc_ratio__227->SetBinError(14,1.592983);
   data_mc_ratio__227->SetBinError(15,0.06385172);
   data_mc_ratio__227->SetBinError(16,2.267592);
   data_mc_ratio__227->SetBinError(17,5.104602);
   data_mc_ratio__227->SetBinError(20,3.402214);
   data_mc_ratio__227->SetMinimum(0.4);
   data_mc_ratio__227->SetMaximum(1.6);
   data_mc_ratio__227->SetEntries(27.80515);
   data_mc_ratio__227->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__227->SetLineColor(ci);
   data_mc_ratio__227->SetLineWidth(2);
   data_mc_ratio__227->SetMarkerStyle(20);
   data_mc_ratio__227->SetMarkerSize(1.2);
   data_mc_ratio__227->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__227->GetXaxis()->SetRange(1,50);
   data_mc_ratio__227->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__227->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__227->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__227->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__227->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__227->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__227->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__227->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__227->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__227->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__227->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__227->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__227->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__227->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__227->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__227->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1032[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1032[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1032[50] = { 0.05258521, 0.08448057, 0.1551, 0.2617216, 0.3564432, 0.2498604, 0.3383573, 0.2278672, 0.5442687, 0.5354403, 0.504434, 0.1603104, 0.1945002, 0.2525744, 0.9562039, 0.3320173, 0.4864087,
   0.4021176, 0.7609376, 0.6751554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0.03941646);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(2.147445);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
