void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Mon Jul 24 10:11:25 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(0,0,1,1);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1698.47,1.052419,1696781);
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
   st->SetMaximum(1454222);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0.01);
   st_stack_58->SetMaximum(1526933);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetLabelSize(0.035);
   st_stack_58->GetXaxis()->SetTitleSize(0.035);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Events/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetLabelSize(0.05);
   st_stack_58->GetYaxis()->SetTitleSize(0.057);
   st_stack_58->GetYaxis()->SetTitleOffset(1.2);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetLabelSize(0.035);
   st_stack_58->GetZaxis()->SetTitleSize(0.035);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,537890.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,468086.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,234511.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,138039.7);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,73012.03);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,39206.01);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,19626.17);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,10403.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,6781.633);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,4142.314);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,3019.935);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,2615.902);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,1746.141);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,2086.537);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,1334.151);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,746.9284);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,1141.667);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,322.511);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,264.9162);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,118.5761);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,12.94468);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.175389);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,17222.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,26286.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,6706.536);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,4658.046);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,3660.825);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,2358.23);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1912.991);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,969.1064);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,690.2404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,463.3569);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,342.14);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,299.0116);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,225.422);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,483.5408);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,340.6671);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,96.48562);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,418.3393);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,55.53942);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,64.77099);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,44.26962);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,8.933766);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.175389);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(158509);

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
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,5783.557);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,4786.801);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,2794.276);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,1593.749);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,907.0042);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,497.2211);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,280.1736);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,167.0337);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,97.47713);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,71.2672);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,48.21484);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,36.00604);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,26.93095);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,20.15356);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,14.6234);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,9.544056);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,7.360884);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,5.424327);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,3.85253);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.904744);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.9180019);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,0.3069751);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,33.9524);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,30.68754);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,23.59669);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,18.01859);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,13.80911);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,10.24665);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,7.735909);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,5.966259);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,4.50719);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,3.917851);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,3.169668);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,2.73019);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,2.33701);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,2.01038);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,1.727442);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,1.371364);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,1.152009);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,1.072253);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.8956721);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.3794122);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.4327008);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,0.3069751);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(208682);

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
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,103708.7);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,90893.75);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,50484.28);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,28630.53);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,16426.96);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,9326.715);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,5371.983);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,3264.079);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,2123.504);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,1464.911);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,1047.755);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,774.8474);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,591.9232);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,448.7815);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,352.6134);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,264.3094);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,183.0789);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,124.6716);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,75.21063);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,29.03148);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,10.46777);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,2.589037);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(23,0.5808998);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(24,0.3589865);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,89.22276);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,83.81127);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,62.43385);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,47.00399);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,35.57874);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,26.75404);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,20.25961);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,15.74051);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,12.66519);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,10.52583);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,8.880703);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,7.654841);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,6.679075);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,5.81012);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,5.151672);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,4.448882);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,3.710582);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,3.071427);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,2.375091);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,1.459218);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.8871016);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.4468727);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(23,0.1966103);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(24,0.1680035);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(4592799);

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
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,4322.915);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,3303.855);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,1889.965);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,1183.13);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,647.4057);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,355.7653);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,185.6939);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,107.2296);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,74.60682);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,47.45358);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,36.21051);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,27.66732);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,21.89348);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,15.47788);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,12.64484);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,7.366505);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,11.47484);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,6.008084);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,1.637791);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.6810946);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.2450975);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,41.5913);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,44.33257);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,30.95296);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,26.64561);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,16.10187);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,12.26462);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,7.64147);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,5.391865);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,5.907906);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,2.901411);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,2.515649);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,2.101103);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.871567);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.502568);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,1.305375);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.8498103);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,3.651684);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,1.103933);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.5120949);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.2388492);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.1416493);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(91213);

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
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,2577.508);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,1809.965);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,1077.956);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,645.2396);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,375.6962);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,217.1619);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,101.456);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,56.73139);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,51.30443);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,23.64363);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,18.16004);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,18.7649);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,13.33429);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,16.10609);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,4.491008);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,4.136328);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,2.513354);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,3.301702);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,1.01845);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.07449076);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,57.29058);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,52.00905);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,39.69213);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,27.37869);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,25.1542);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,14.79061);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,10.21862);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,4.825205);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,9.32164);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,2.420751);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,2.465235);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,2.896497);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,1.967934);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,7.7894);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.6991975);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.6739683);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.547382);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,1.014446);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.2953879);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.06135413);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(43154);

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
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,16.14018);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,9.673659);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,6.958583);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,3.000365);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,3.029421);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(6,1.659466);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(7,0.8868051);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(8,0.9126978);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(13,0.2475784);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(15,0.1512027);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,1.94164);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,1.455966);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,1.266917);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.8132053);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.7950165);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(6,0.6348549);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(7,0.4597764);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(8,0.4581745);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(13,0.2475784);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(15,0.1512027);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(198);

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
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,28.76899);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,27.77564);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,17.49776);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,9.686154);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,5.303124);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,4.32418);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,1.244727);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(8,0.1844377);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.3391238);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,0.419936);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(11,0.5763214);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.05969659);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.1828711);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(16,0.2448549);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(17,0.110044);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,2.210093);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,2.153238);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,1.739841);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,1.28836);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.9478454);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.8535399);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.4756918);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(8,0.1844377);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.2406399);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.2507761);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(11,0.3335525);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.05969659);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.1828711);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(16,0.1890074);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(17,0.110044);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(598);

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
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,33.33315);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,24.68076);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,13.65872);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,8.319316);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,7.291221);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,3.251235);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.8024997);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,1.290722);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.16149);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.3410339);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(13,0.2772775);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.705712);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.333954);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.740932);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.327914);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.2576);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.8340545);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.4064427);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.5335941);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.16149);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.2576325);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(13,0.2772775);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(445);

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
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,19.89547);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,17.16159);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,9.566661);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,6.380935);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,4.22003);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.155883);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.926855);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.4614207);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2926423);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.2207384);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1501073);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.109215);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.08584012);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.06042503);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.04028835);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03630596);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.02834929);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01176451);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.01493275);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.004758446);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(22,0.001801797);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(23,0.002593215);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1944403);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1808448);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1352737);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1106303);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.09008766);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.06407572);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.04170411);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.02928433);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02315753);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02059461);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01648403);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01408849);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01242006);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01057763);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.008931012);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.008170245);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.007393481);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004854644);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.005468977);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.002780354);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(22,0.001801797);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(23,0.0018351);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(35311);

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
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,17.80556);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,14.895);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,8.509017);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,5.327474);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,3.180324);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,1.759641);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.9378491);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.5627017);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.3171318);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.2542931);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.1871364);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.1610182);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.1161618);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.08641079);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.06748208);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.04811135);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.03409618);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.02344452);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.01300458);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.00426509);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001313257);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0004316519);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.08872731);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.0812411);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.0614257);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.04862505);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.03756366);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.02792842);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.0203567);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01572396);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01181879);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.01057992);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.009095891);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.008409247);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.007120909);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.006149303);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.005453846);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004574091);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.003892038);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003219698);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002395581);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001359069);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007583553);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0004316519);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(124885);

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
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.629421);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.4768009);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.3005849);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.1796373);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.1426);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.0682892);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.01647742);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(8,0.0103085);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.01336904);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.01500553);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(11,0.01068835);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(12,0.007345127);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(13,0.001318812);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(14,0.0002174701);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(15,0.00284611);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(16,0.001952183);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.03393662);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.02972827);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.02396454);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.01875801);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.01694138);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.01116307);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.005511484);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(8,0.00426749);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.004849094);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.005416987);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(11,0.004416062);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(12,0.003717472);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(13,0.001318812);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(14,0.0002174701);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(15,0.002087809);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(16,0.001952183);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(1088);

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
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.3050243);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.255721);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.1376054);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.09132875);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.05825369);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.02991994);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0158091);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.01087016);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.00606985);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.004107868);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.00278743);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.002811826);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.002390693);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.002153368);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.001171025);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(16,0.0006859645);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(17,0.0005284205);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(19,0.0004366594);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.008570406);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.007801557);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.00575124);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.004714404);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.003705279);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.002673747);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.001973916);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.00159643);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.001251181);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.001003131);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0008154799);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0008265371);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0007346358);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0006938606);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0005051317);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(16,0.0003987025);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(17,0.0003736501);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(19,0.0003121578);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(4044);

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
   
   TH1D *VbbHcc_tags_Sphericity__115 = new TH1D("VbbHcc_tags_Sphericity__115","",25,0,1);
   VbbHcc_tags_Sphericity__115->SetBinContent(1,186403);
   VbbHcc_tags_Sphericity__115->SetBinContent(2,127660);
   VbbHcc_tags_Sphericity__115->SetBinContent(3,73656);
   VbbHcc_tags_Sphericity__115->SetBinContent(4,44350);
   VbbHcc_tags_Sphericity__115->SetBinContent(5,26813);
   VbbHcc_tags_Sphericity__115->SetBinContent(6,16087);
   VbbHcc_tags_Sphericity__115->SetBinContent(7,9576);
   VbbHcc_tags_Sphericity__115->SetBinContent(8,6277);
   VbbHcc_tags_Sphericity__115->SetBinContent(9,4353);
   VbbHcc_tags_Sphericity__115->SetBinContent(10,3035);
   VbbHcc_tags_Sphericity__115->SetBinContent(11,2331);
   VbbHcc_tags_Sphericity__115->SetBinContent(12,1712);
   VbbHcc_tags_Sphericity__115->SetBinContent(13,1375);
   VbbHcc_tags_Sphericity__115->SetBinContent(14,1084);
   VbbHcc_tags_Sphericity__115->SetBinContent(15,826);
   VbbHcc_tags_Sphericity__115->SetBinContent(16,654);
   VbbHcc_tags_Sphericity__115->SetBinContent(17,451);
   VbbHcc_tags_Sphericity__115->SetBinContent(18,283);
   VbbHcc_tags_Sphericity__115->SetBinContent(19,144);
   VbbHcc_tags_Sphericity__115->SetBinContent(20,60);
   VbbHcc_tags_Sphericity__115->SetBinContent(21,34);
   VbbHcc_tags_Sphericity__115->SetBinContent(22,6);
   VbbHcc_tags_Sphericity__115->SetEntries(507194);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__115->SetLineColor(ci);
   VbbHcc_tags_Sphericity__115->SetLineWidth(2);
   VbbHcc_tags_Sphericity__115->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__115->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__115->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__115->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__115->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__115->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__115->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__115->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__115->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__115->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__115->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__115->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__115->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__115->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__115->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__115->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__115->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1115[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1115[25] = {
   654400.1,
   568975.6,
   290814.2,
   170125.4,
   91392.32,
   49616.12,
   25570.31,
   14001.61,
   9129.656,
   5750.845,
   4171.202,
   3473.528,
   2400.954,
   2587.388,
   1718.787,
   1032.617,
   1346.268,
   461.952,
   346.664,
   149.277,
   24.57686,
   3.073634,
   0.583493,
   0.3589865,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1115[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1115[25] = {
   17223.33,
   26286.74,
   6707.057,
   4658.475,
   3661.146,
   2358.482,
   1913.156,
   969.2799,
   690.4596,
   463.5085,
   342.2882,
   299.1434,
   225.5497,
   483.645,
   340.7137,
   96.60414,
   418.3736,
   55.65482,
   64.82341,
   44.29597,
   8.989239,
   0.569819,
   0.1966188,
   0.1680035,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1115,Graph_from_VbbHcc_tags_Sphericity_fy1115,Graph_from_VbbHcc_tags_Sphericity_fex1115,Graph_from_VbbHcc_tags_Sphericity_fey1115);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1115 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1115","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMaximum(738785.7);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1115);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__116 = new TH1D("data_mc_ratio__116","",25,0,1);
   data_mc_ratio__116->SetBinContent(1,0.2848456);
   data_mc_ratio__116->SetBinContent(2,0.2243682);
   data_mc_ratio__116->SetBinContent(3,0.2532751);
   data_mc_ratio__116->SetBinContent(4,0.2606901);
   data_mc_ratio__116->SetBinContent(5,0.2933835);
   data_mc_ratio__116->SetBinContent(6,0.3242293);
   data_mc_ratio__116->SetBinContent(7,0.3744969);
   data_mc_ratio__116->SetBinContent(8,0.4483057);
   data_mc_ratio__116->SetBinContent(9,0.4767978);
   data_mc_ratio__116->SetBinContent(10,0.5277486);
   data_mc_ratio__116->SetBinContent(11,0.5588318);
   data_mc_ratio__116->SetBinContent(12,0.4928707);
   data_mc_ratio__116->SetBinContent(13,0.5726891);
   data_mc_ratio__116->SetBinContent(14,0.4189554);
   data_mc_ratio__116->SetBinContent(15,0.4805714);
   data_mc_ratio__116->SetBinContent(16,0.6333425);
   data_mc_ratio__116->SetBinContent(17,0.3350002);
   data_mc_ratio__116->SetBinContent(18,0.6126178);
   data_mc_ratio__116->SetBinContent(19,0.4153878);
   data_mc_ratio__116->SetBinContent(20,0.4019375);
   data_mc_ratio__116->SetBinContent(21,1.383415);
   data_mc_ratio__116->SetBinContent(22,1.952086);
   data_mc_ratio__116->SetBinError(1,0.0006597556);
   data_mc_ratio__116->SetBinError(2,0.0006279626);
   data_mc_ratio__116->SetBinError(3,0.0009332296);
   data_mc_ratio__116->SetBinError(4,0.001237878);
   data_mc_ratio__116->SetBinError(5,0.001791691);
   data_mc_ratio__116->SetBinError(6,0.002556317);
   data_mc_ratio__116->SetBinError(7,0.003826979);
   data_mc_ratio__116->SetBinError(8,0.005658459);
   data_mc_ratio__116->SetBinError(9,0.007226699);
   data_mc_ratio__116->SetBinError(10,0.009579607);
   data_mc_ratio__116->SetBinError(11,0.01157471);
   data_mc_ratio__116->SetBinError(12,0.0119119);
   data_mc_ratio__116->SetBinError(13,0.01544428);
   data_mc_ratio__116->SetBinError(14,0.01272486);
   data_mc_ratio__116->SetBinError(15,0.01672122);
   data_mc_ratio__116->SetBinError(16,0.02476565);
   data_mc_ratio__116->SetBinError(17,0.01577454);
   data_mc_ratio__116->SetBinError(18,0.03641635);
   data_mc_ratio__116->SetBinError(19,0.03461565);
   data_mc_ratio__116->SetBinError(20,0.0518899);
   data_mc_ratio__116->SetBinError(21,0.2372538);
   data_mc_ratio__116->SetBinError(22,0.7969359);
   data_mc_ratio__116->SetMinimum(0.4);
   data_mc_ratio__116->SetMaximum(1.6);
   data_mc_ratio__116->SetEntries(119.2314);
   data_mc_ratio__116->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__116->SetLineColor(ci);
   data_mc_ratio__116->SetLineWidth(2);
   data_mc_ratio__116->SetMarkerStyle(20);
   data_mc_ratio__116->SetMarkerSize(1.2);
   data_mc_ratio__116->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__116->GetXaxis()->SetRange(1,25);
   data_mc_ratio__116->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__116->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__116->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__116->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__116->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__116->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__116->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__116->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__116->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__116->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__116->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__116->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__116->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__116->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__116->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__116->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__116->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1116[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1116[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1116[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1116[25] = {
   0.02631927,
   0.04620013,
   0.02306303,
   0.0273826,
   0.04005967,
   0.04753459,
   0.07481945,
   0.06922632,
   0.07562822,
   0.08059834,
   0.08205985,
   0.08612092,
   0.09394171,
   0.1869241,
   0.1982292,
   0.09355276,
   0.3107655,
   0.1204775,
   0.1869921,
   0.2967368,
   0.3657603,
   0.1853893,
   0.3369687,
   0.4679939,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1116,Graph_from_mc_statistical_error_fy1116,Graph_from_mc_statistical_error_fex1116,Graph_from_mc_statistical_error_fey1116);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1116 = new TH1F("Graph_Graph_from_mc_statistical_error1116","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1116->SetMinimum(0.4384073);
   Graph_Graph_from_mc_statistical_error1116->SetMaximum(1.561593);
   Graph_Graph_from_mc_statistical_error1116->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1116->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1116);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
