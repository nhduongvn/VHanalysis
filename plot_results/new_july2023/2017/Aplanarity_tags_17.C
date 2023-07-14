void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Fri Jul 14 13:38:03 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(0,0,1,1);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-4186.358,1.052419,4182182);
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
   st->SetMaximum(3584328);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0.01);
   st_stack_62->SetMaximum(3763545);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetLabelSize(0.035);
   st_stack_62->GetXaxis()->SetTitleSize(0.035);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetLabelSize(0.05);
   st_stack_62->GetYaxis()->SetTitleSize(0.057);
   st_stack_62->GetYaxis()->SetTitleOffset(1.2);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetLabelSize(0.035);
   st_stack_62->GetZaxis()->SetTitleSize(0.035);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1319033);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,160389.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,39972.18);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,13488.65);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,6710.638);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1987.178);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,1052.903);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,1054.107);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,564.4615);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,435.3379);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,194.9846);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,58.16179);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,32.79769);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,37.5283);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,28.16147);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.4810506);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,16.76432);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,52.49255);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,32122.09);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,5777.173);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,2879.362);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1615.067);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,1669.359);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,367.0981);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,251.6168);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,342.1027);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,197.9335);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,294.9977);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,57.96313);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,23.53007);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,13.89133);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,27.50327);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,12.70129);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.4810506);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,11.58186);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,37.12488);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,14246.99);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,2031.924);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,533.3959);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,168.4651);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,77.06562);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,38.85647);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,22.79125);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,11.79898);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,6.441496);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,5.144968);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,3.355663);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,2.345252);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,1.192132);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,1.649693);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.4500526);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.1853239);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.2165286);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.4704085);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.05727117);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,53.42696);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,20.22743);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,10.33903);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,5.790465);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,3.859368);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,2.786127);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,2.188034);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,1.461446);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,1.182916);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,1.100511);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.7988211);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.697474);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.5537837);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.6716684);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.3101051);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.09823964);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.1985621);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.3018801);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.05727117);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(0,0.09234008);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,262718.7);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,36583.56);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,9446.343);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,3430.069);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,1515.25);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,780.4673);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,436.696);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,255.3404);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,153.8128);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,103.3708);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,67.55286);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,41.07914);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,27.01935);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,17.65242);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,11.24813);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,5.889243);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,3.556379);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,1.84562);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.8255358);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.8623636);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(21,0.2508355);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(22,0.1840208);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(0,0.09234008);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,142.349);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,52.92768);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,26.78419);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,16.09424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,10.66676);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,7.640717);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,5.717424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,4.38481);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,3.393391);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,2.776582);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,2.248441);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,1.761152);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,1.408491);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,1.152862);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.924184);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.6524924);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.5220282);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.3810743);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.2277617);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.2506425);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(21,0.1279424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(22,0.1301232);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,10558.24);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,1194.346);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,296.6868);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,122.5855);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,39.20316);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,18.47813);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,10.27117);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,7.350409);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,4.491109);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,3.617066);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,2.237747);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.6123962);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.299507);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.49227);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.1592256);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1112028);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(17,0.1484468);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,69.99069);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,26.73941);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,13.46742);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,10.58833);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,2.992186);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,2.011752);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,1.52305);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,3.529244);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.008327);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.9457508);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.7574218);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.2135546);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1542149);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.2086357);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1125911);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1112028);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(17,0.1050182);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,6086.226);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,656.5396);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,163.2927);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,65.60157);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,21.96893);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,11.51193);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,6.850391);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,3.161151);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,1.393194);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,0.4998194);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.8590044);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(12,0.4235821);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(13,0.132561);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(14,0.102701);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,88.7993);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,33.72312);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,17.98859);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,9.631066);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,3.704856);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,2.523991);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,2.261601);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,0.9903688);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.415056);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.2731294);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.311245);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(12,0.2575847);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(13,0.1162222);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(14,0.102701);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,35.83426);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,4.741953);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(3,1.224379);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(4,0.4605891);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(6,0.2475784);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(8,0.1512027);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,2.859612);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,1.043258);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(3,0.5246214);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(4,0.267582);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(6,0.2475784);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(8,0.1512027);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,83.16497);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,10.08068);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,1.686613);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(4,0.9691741);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(5,0.1775775);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(6,0.3527655);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(8,0.110044);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(11,0.1760317);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,3.763689);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,1.292617);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.5393555);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(4,0.384572);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(5,0.1775775);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(6,0.2497029);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(8,0.110044);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(11,0.1760317);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,81.51703);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,8.572438);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,2.726081);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.5918729);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,4.233961);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.348314);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.7716881);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.3449621);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,54.63933);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,5.242975);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,1.221165);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.3632798);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1827325);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.06153917);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.05281065);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.0167726);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01748509);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.01234414);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.003655157);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.007158899);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.002968075);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(19,0.004395012);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.3228418);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.09966587);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.04825501);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.02600942);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01850253);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01055796);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.009797572);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.005684659);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.005802351);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.00488548);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002103263);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.003692055);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.0021186);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(19,0.002571783);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,46.82165);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,5.36167);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,1.266475);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.4189813);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.2045588);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.08406946);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.06160471);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.0275574);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01678374);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.01238829);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.005397291);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.004186334);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002227226);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.002292869);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0006424311);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004739372);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(19,0.0004739372);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(21,0.0004316519);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1440057);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.04871468);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.02363714);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01362717);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.009483493);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.006056605);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.005217895);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.00348733);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002726623);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002306509);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001545375);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001301799);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0009970909);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.001026248);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.000481262);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004739372);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(19,0.0004739372);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(21,0.0004316519);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,1.659357);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.1544597);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.03367031);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.01660151);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(5,0.007271055);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.002014015);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(7,0.0002174701);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(9,0.001952183);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(11,0.001318812);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.0558258);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.01688874);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.007988061);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.005373252);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(5,0.003726826);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.002014015);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(7,0.0002174701);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(9,0.001952183);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(11,0.001318812);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.8012524);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.09391318);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.01949905);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.006003381);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.003398035);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.0003720122);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(7,0.0009610227);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.001133237);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(10,0.0002624265);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(11,0.0008805845);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.01386371);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.004753827);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.002150783);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.00119425);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0009150384);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0002799538);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(7,0.000482034);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0005135651);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(10,0.0002624265);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(11,0.000446635);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__123 = new TH1D("VbbHcc_tags_Aplanarity__123","",50,0,1);
   VbbHcc_tags_Aplanarity__123->SetBinContent(1,424874);
   VbbHcc_tags_Aplanarity__123->SetBinContent(2,54217);
   VbbHcc_tags_Aplanarity__123->SetBinContent(3,15549);
   VbbHcc_tags_Aplanarity__123->SetBinContent(4,6098);
   VbbHcc_tags_Aplanarity__123->SetBinContent(5,2814);
   VbbHcc_tags_Aplanarity__123->SetBinContent(6,1486);
   VbbHcc_tags_Aplanarity__123->SetBinContent(7,831);
   VbbHcc_tags_Aplanarity__123->SetBinContent(8,510);
   VbbHcc_tags_Aplanarity__123->SetBinContent(9,289);
   VbbHcc_tags_Aplanarity__123->SetBinContent(10,178);
   VbbHcc_tags_Aplanarity__123->SetBinContent(11,120);
   VbbHcc_tags_Aplanarity__123->SetBinContent(12,77);
   VbbHcc_tags_Aplanarity__123->SetBinContent(13,51);
   VbbHcc_tags_Aplanarity__123->SetBinContent(14,27);
   VbbHcc_tags_Aplanarity__123->SetBinContent(15,23);
   VbbHcc_tags_Aplanarity__123->SetBinContent(16,12);
   VbbHcc_tags_Aplanarity__123->SetBinContent(17,4);
   VbbHcc_tags_Aplanarity__123->SetBinContent(18,8);
   VbbHcc_tags_Aplanarity__123->SetBinContent(19,1);
   VbbHcc_tags_Aplanarity__123->SetBinContent(21,1);
   VbbHcc_tags_Aplanarity__123->SetEntries(507170);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__123->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__123->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__123->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__123->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__123->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__123->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__123->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__123->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__123->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__123->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__123->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__123->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__123->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__123->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__123->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__123->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__123->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__123->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__123->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1123[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1123[50] = {
   1612948,
   200889.8,
   50420.08,
   17278.2,
   8364.701,
   2837.24,
   1529.627,
   1332.064,
   730.6364,
   547.9956,
   269.1772,
   102.6335,
   61.44643,
   57.42767,
   40.01888,
   6.667462,
   20.68615,
   54.80858,
   0.8876759,
   0.8623636,
   0.2512671,
   0.1840208,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1123[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1123[50] = {
   32122.65,
   5777.612,
   2879.593,
   1615.221,
   1669.405,
   367.2025,
   251.7061,
   342.1536,
   197.9691,
   295.0145,
   58.01826,
   23.60856,
   13.97487,
   27.53659,
   12.73915,
   0.8241197,
   11.59579,
   37.12807,
   0.2348664,
   0.2506425,
   0.1279431,
   0.1301232,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1123,Graph_from_VbbHcc_tags_Aplanarity_fy1123,Graph_from_VbbHcc_tags_Aplanarity_fex1123,Graph_from_VbbHcc_tags_Aplanarity_fey1123);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1123 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1123","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMaximum(1809577);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1123);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__124 = new TH1D("data_mc_ratio__124","",50,0,1);
   data_mc_ratio__124->SetBinContent(1,0.2634146);
   data_mc_ratio__124->SetBinContent(2,0.2698842);
   data_mc_ratio__124->SetBinContent(3,0.3083891);
   data_mc_ratio__124->SetBinContent(4,0.3529303);
   data_mc_ratio__124->SetBinContent(5,0.3364137);
   data_mc_ratio__124->SetBinContent(6,0.5237484);
   data_mc_ratio__124->SetBinContent(7,0.5432697);
   data_mc_ratio__124->SetBinContent(8,0.3828644);
   data_mc_ratio__124->SetBinContent(9,0.3955456);
   data_mc_ratio__124->SetBinContent(10,0.3248201);
   data_mc_ratio__124->SetBinContent(11,0.4458031);
   data_mc_ratio__124->SetBinContent(12,0.7502423);
   data_mc_ratio__124->SetBinContent(13,0.8299912);
   data_mc_ratio__124->SetBinContent(14,0.4701566);
   data_mc_ratio__124->SetBinContent(15,0.5747287);
   data_mc_ratio__124->SetBinContent(16,1.799785);
   data_mc_ratio__124->SetBinContent(17,0.1933661);
   data_mc_ratio__124->SetBinContent(18,0.1459625);
   data_mc_ratio__124->SetBinContent(19,1.126537);
   data_mc_ratio__124->SetBinContent(21,3.979828);
   data_mc_ratio__124->SetBinError(1,0.0004041195);
   data_mc_ratio__124->SetBinError(2,0.00115907);
   data_mc_ratio__124->SetBinError(3,0.002473134);
   data_mc_ratio__124->SetBinError(4,0.004519551);
   data_mc_ratio__124->SetBinError(5,0.006341787);
   data_mc_ratio__124->SetBinError(6,0.01358668);
   data_mc_ratio__124->SetBinError(7,0.01884582);
   data_mc_ratio__124->SetBinError(8,0.01695352);
   data_mc_ratio__124->SetBinError(9,0.02326739);
   data_mc_ratio__124->SetBinError(10,0.0243463);
   data_mc_ratio__124->SetBinError(11,0.04069606);
   data_mc_ratio__124->SetBinError(12,0.08549805);
   data_mc_ratio__124->SetBinError(13,0.116222);
   data_mc_ratio__124->SetBinError(14,0.09048169);
   data_mc_ratio__124->SetBinError(15,0.1198392);
   data_mc_ratio__124->SetBinError(16,0.5195532);
   data_mc_ratio__124->SetBinError(17,0.09668305);
   data_mc_ratio__124->SetBinError(18,0.05160555);
   data_mc_ratio__124->SetBinError(19,1.126537);
   data_mc_ratio__124->SetBinError(21,3.979828);
   data_mc_ratio__124->SetMinimum(0.4);
   data_mc_ratio__124->SetMaximum(1.6);
   data_mc_ratio__124->SetEntries(8.958926);
   data_mc_ratio__124->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__124->SetLineColor(ci);
   data_mc_ratio__124->SetLineWidth(2);
   data_mc_ratio__124->SetMarkerStyle(20);
   data_mc_ratio__124->SetMarkerSize(1.2);
   data_mc_ratio__124->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__124->GetXaxis()->SetRange(1,50);
   data_mc_ratio__124->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__124->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__124->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__124->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__124->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__124->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__124->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__124->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__124->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__124->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__124->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__124->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__124->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__124->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__124->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__124->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__124->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1124[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1124[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1124[50] = {
   0.01991549,
   0.0287601,
   0.05711202,
   0.09348317,
   0.1995773,
   0.1294224,
   0.1645539,
   0.2568597,
   0.2709544,
   0.5383519,
   0.2155393,
   0.2300278,
   0.2274317,
   0.4795005,
   0.3183284,
   0.1236032,
   0.5605582,
   0.6774134,
   0.2645858,
   0.290646,
   0.5091917,
   0.7071115,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1124,Graph_from_mc_statistical_error_fy1124,Graph_from_mc_statistical_error_fex1124,Graph_from_mc_statistical_error_fey1124);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1124 = new TH1F("Graph_Graph_from_mc_statistical_error1124","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1124->SetMinimum(0.1514661);
   Graph_Graph_from_mc_statistical_error1124->SetMaximum(1.848534);
   Graph_Graph_from_mc_statistical_error1124->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1124->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1124);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
