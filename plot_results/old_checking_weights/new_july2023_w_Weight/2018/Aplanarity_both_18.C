void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(0,0,1,1);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.914028,1.052419,14.05069);
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
   st->SetMaximum(6.018756e+11);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0.001267467);
   st_stack_255->SetMaximum(2.260585e+12);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetLabelSize(0.035);
   st_stack_255->GetXaxis()->SetTitleSize(0.035);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetLabelSize(0.05);
   st_stack_255->GetYaxis()->SetTitleSize(0.057);
   st_stack_255->GetYaxis()->SetTitleOffset(1.2);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetLabelSize(0.035);
   st_stack_255->GetZaxis()->SetTitleSize(0.035);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,148569.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,39091.73);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,21772.36);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,14829.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,6557.535);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2864.979);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2968.687);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1227.856);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,3956.88);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,800.9947);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,325.5279);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,953.2061);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,541.5935);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,155.1366);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,592.7567);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.3055015);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,88.54962);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,7.538753);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,34.38015);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5563.321);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,3274.117);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,3153.49);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,2107.547);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1665.067);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,560.5901);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,825.5175);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,407.5654);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,2032.772);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,413.6259);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,96.43374);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,711.4158);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,341.0267);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,59.12655);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,544.6279);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.3055015);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,55.85195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,7.538753);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,34.38015);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,869.791);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,251.7938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,124.7493);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,72.2312);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,40.52183);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,27.84993);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,19.30754);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,11.73437);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,8.488091);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,5.462913);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,3.085917);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,2.496945);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,2.176014);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.247279);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,1.083277);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4623007);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.4087229);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1375434);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.05543612);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.0782043);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,13.89878);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,7.488913);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,5.216247);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.956036);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.906493);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.448475);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.980143);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.529114);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.406095);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,1.108863);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.7262369);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.7775468);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.7614365);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.4928665);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.5355981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3986453);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.3139999);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.08256418);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.05543612);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.0782043);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,17584.69);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,5729.113);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2778.362);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1605.358);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,979.5776);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,647.8393);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,436.6191);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,294.6999);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,199.7601);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,144.4889);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,95.85716);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,67.58286);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,46.95493);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,28.65955);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,20.32876);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,12.56081);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,7.548158);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,4.827579);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.359489);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.8102115);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.3145379);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.1080958);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.08098213);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,41.84152);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,23.1205);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,17.1496);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,12.62346);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,10.0962);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,7.855961);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,6.529232);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,6.146461);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,4.284893);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,3.820188);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.902149);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,2.539499);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,2.236442);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.601121);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.327616);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,1.032027);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.8315439);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.6972208);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.4472787);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2523363);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.145208);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.06721854);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.08098213);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2414.751);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,663.737);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,324.6402);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,177.4943);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,113.3366);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,63.76788);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,36.96521);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,29.64998);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,20.29935);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,11.29771);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,5.86213);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.768342);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,6.686001);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.503204);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,0.9319312);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,1.00194);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.9101802);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.5271876);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,39.41736);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,21.03151);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,18.02857);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,10.55069);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,9.849318);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.793804);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.872631);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,5.215413);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.987448);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.015695);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.404842);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.9773);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.723225);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.6797702);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.7001956);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.6552349);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.6752615);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.5271876);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,235.8502);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,78.00453);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,28.92382);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,17.36452);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,9.757907);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.456273);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,5.243415);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.685311);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.698531);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.03774);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.4692067);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.541201);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.2059173);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.4432178);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.3662907);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,15.5924);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,8.780212);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,5.446037);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.966372);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,3.657671);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.6478724);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.522864);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.5992502);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3349802);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.5093484);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3141295);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.256914);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.1863024);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.2408524);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.2590286);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,2.278734);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,1.064444);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,5.818253);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,3.87487);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,1.372052);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,1.028739);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.4604326);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,1.362234);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.3805224);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(15,0.5093878);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.664451);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.302788);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.79836);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.6638107);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.4604326);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,1.053805);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.3805224);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(15,0.5093878);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,46.59164);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,13.06724);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.395492);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,3.81594);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,1.798589);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,1.025328);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.548818);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.7077554);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.2830566);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,3.92203);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,2.092501);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.150187);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.13013);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.8166838);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.5946468);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.70829);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.5061875);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2830566);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,43.58567);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,12.2639);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.90459);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.295478);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,2.005914);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.297911);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.8383716);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.5068887);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3192118);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2314725);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1516345);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.1025787);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.06665295);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03267797);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03742547);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.009989377);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.005830618);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.002488613);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.003449065);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.382466);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1923667);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1365322);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.1045517);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0752283);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.07734177);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.04893393);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0363742);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.03037737);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.02843659);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.0203827);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01660091);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.0136283);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.009039619);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.01215756);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.005769998);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.004156292);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002488613);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.003449065);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,17.66212);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,5.932739);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,3.071275);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.810873);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,1.125824);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.7274315);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.495432);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.3517431);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.2178295);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1464931);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.09326851);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.07053818);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.04829988);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.0334426);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.01162079);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.009563266);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.01050986);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.00319598);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002692429);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.001281443);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.1066734);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.06186602);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.04453604);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0341632);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02697156);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.02166707);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01789221);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01508483);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.01185075);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.009742226);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.007753823);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.006775712);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.005576188);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.004628731);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002742239);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.00247694);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.002577747);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.001430147);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.00134703);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0009061174);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1202506);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.0344278);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.0148003);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01372282);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.004722339);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.003551429);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.003060115);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.0186091);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.01047376);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.006757283);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.006202697);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.003378167);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.003551429);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.003060115);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.0663095);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01856215);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.007140858);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.006404336);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002703779);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.004432383);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001619787);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0007515073);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.001362586);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004848114);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0003105083);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.0003228833);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.0004371028);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.004845621);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.002518495);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001582574);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001486257);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0009610752);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.001290244);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0007371246);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0005370982);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0006952546);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.000369593);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0003105083);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0003228833);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0004371028);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__700 = new TH1D("VbbHcc_both_Aplanarity__700","",50,0,1);
   VbbHcc_both_Aplanarity__700->SetBinContent(1,199884);
   VbbHcc_both_Aplanarity__700->SetBinContent(2,57697);
   VbbHcc_both_Aplanarity__700->SetBinContent(3,26926);
   VbbHcc_both_Aplanarity__700->SetBinContent(4,15050);
   VbbHcc_both_Aplanarity__700->SetBinContent(5,9107);
   VbbHcc_both_Aplanarity__700->SetBinContent(6,5682);
   VbbHcc_both_Aplanarity__700->SetBinContent(7,3763);
   VbbHcc_both_Aplanarity__700->SetBinContent(8,2476);
   VbbHcc_both_Aplanarity__700->SetBinContent(9,1692);
   VbbHcc_both_Aplanarity__700->SetBinContent(10,1160);
   VbbHcc_both_Aplanarity__700->SetBinContent(11,804);
   VbbHcc_both_Aplanarity__700->SetBinContent(12,562);
   VbbHcc_both_Aplanarity__700->SetBinContent(13,363);
   VbbHcc_both_Aplanarity__700->SetBinContent(14,211);
   VbbHcc_both_Aplanarity__700->SetBinContent(15,157);
   VbbHcc_both_Aplanarity__700->SetBinContent(16,101);
   VbbHcc_both_Aplanarity__700->SetBinContent(17,63);
   VbbHcc_both_Aplanarity__700->SetBinContent(18,33);
   VbbHcc_both_Aplanarity__700->SetBinContent(19,17);
   VbbHcc_both_Aplanarity__700->SetBinContent(20,14);
   VbbHcc_both_Aplanarity__700->SetBinContent(21,3);
   VbbHcc_both_Aplanarity__700->SetBinContent(22,1);
   VbbHcc_both_Aplanarity__700->SetBinContent(24,1);
   VbbHcc_both_Aplanarity__700->SetEntries(325816);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__700->SetLineColor(ci);
   VbbHcc_both_Aplanarity__700->SetLineWidth(2);
   VbbHcc_both_Aplanarity__700->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__700->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1509[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1509[50] = {
   169790.9,
   45849.57,
   25043.8,
   16711.82,
   7706.127,
   3611.313,
   3469.707,
   1567.573,
   4186.664,
   963.6604,
   431.3336,
   1029.769,
   597.7317,
   187.056,
   616.0254,
   14.35011,
   97.43302,
   13.03675,
   36.74578,
   0.8656476,
   0.3158194,
   0.1080958,
   0.1591864,
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1509[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1509[50] = {
   5563.659,
   3274.287,
   3153.597,
   2107.618,
   1665.133,
   560.6934,
   825.5589,
   407.6489,
   2032.779,
   413.6502,
   96.49129,
   711.4251,
   341.0393,
   59.15468,
   544.6306,
   1.321628,
   55.8631,
   7.589708,
   34.38305,
   0.258354,
   0.1452108,
   0.06721854,
   0.1125789,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1509,Graph_from_VbbHcc_both_Aplanarity_fy1509,Graph_from_VbbHcc_both_Aplanarity_fex1509,Graph_from_VbbHcc_both_Aplanarity_fey1509);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1509 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1509","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMinimum(192.89);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMaximum(192890);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1509);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__701 = new TH1D("data_mc_ratio__701","",50,0,1);
   data_mc_ratio__701->SetBinContent(1,1.177236);
   data_mc_ratio__701->SetBinContent(2,1.258398);
   data_mc_ratio__701->SetBinContent(3,1.075156);
   data_mc_ratio__701->SetBinContent(4,0.9005604);
   data_mc_ratio__701->SetBinContent(5,1.181787);
   data_mc_ratio__701->SetBinContent(6,1.573389);
   data_mc_ratio__701->SetBinContent(7,1.08453);
   data_mc_ratio__701->SetBinContent(8,1.579512);
   data_mc_ratio__701->SetBinContent(9,0.4041404);
   data_mc_ratio__701->SetBinContent(10,1.203744);
   data_mc_ratio__701->SetBinContent(11,1.863986);
   data_mc_ratio__701->SetBinContent(12,0.5457535);
   data_mc_ratio__701->SetBinContent(13,0.6072958);
   data_mc_ratio__701->SetBinContent(14,1.128004);
   data_mc_ratio__701->SetBinContent(15,0.2548596);
   data_mc_ratio__701->SetBinContent(16,7.038274);
   data_mc_ratio__701->SetBinContent(17,0.646598);
   data_mc_ratio__701->SetBinContent(18,2.531306);
   data_mc_ratio__701->SetBinContent(19,0.4626382);
   data_mc_ratio__701->SetBinContent(20,16.17286);
   data_mc_ratio__701->SetBinContent(21,9.499101);
   data_mc_ratio__701->SetBinContent(22,9.251057);
   data_mc_ratio__701->SetBinError(1,0.002633144);
   data_mc_ratio__701->SetBinError(2,0.005238915);
   data_mc_ratio__701->SetBinError(3,0.006552177);
   data_mc_ratio__701->SetBinError(4,0.00734082);
   data_mc_ratio__701->SetBinError(5,0.01238373);
   data_mc_ratio__701->SetBinError(6,0.02087303);
   data_mc_ratio__701->SetBinError(7,0.01767968);
   data_mc_ratio__701->SetBinError(8,0.03174297);
   data_mc_ratio__701->SetBinError(9,0.009824988);
   data_mc_ratio__701->SetBinError(10,0.03534313);
   data_mc_ratio__701->SetBinError(11,0.06573773);
   data_mc_ratio__701->SetBinError(12,0.02302122);
   data_mc_ratio__701->SetBinError(13,0.03187477);
   data_mc_ratio__701->SetBinError(14,0.07765502);
   data_mc_ratio__701->SetBinError(15,0.02034001);
   data_mc_ratio__701->SetBinError(16,0.7003344);
   data_mc_ratio__701->SetBinError(17,0.0814637);
   data_mc_ratio__701->SetBinError(18,0.4406439);
   data_mc_ratio__701->SetBinError(19,0.1122062);
   data_mc_ratio__701->SetBinError(20,4.322379);
   data_mc_ratio__701->SetBinError(21,5.484308);
   data_mc_ratio__701->SetBinError(22,9.251057);
   data_mc_ratio__701->SetMinimum(0.4);
   data_mc_ratio__701->SetMaximum(1.6);
   data_mc_ratio__701->SetEntries(17.57669);
   data_mc_ratio__701->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__701->SetLineColor(ci);
   data_mc_ratio__701->SetLineWidth(2);
   data_mc_ratio__701->SetMarkerStyle(20);
   data_mc_ratio__701->SetMarkerSize(1.2);
   data_mc_ratio__701->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__701->GetXaxis()->SetRange(1,50);
   data_mc_ratio__701->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__701->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__701->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__701->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__701->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__701->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__701->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__701->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__701->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__701->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__701->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__701->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__701->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__701->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1510[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1510[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1510[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1510[50] = {
   0.03276771,
   0.07141369,
   0.1259232,
   0.1261154,
   0.2160791,
   0.1552602,
   0.2379333,
   0.260051,
   0.4855367,
   0.4292489,
   0.2237046,
   0.690859,
   0.5705557,
   0.3162404,
   0.8841041,
   0.09209884,
   0.5733488,
   0.582178,
   0.9357009,
   0.2984517,
   0.4597906,
   0.6218426,
   0.7072144,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1510,Graph_from_mc_statistical_error_fy1510,Graph_from_mc_statistical_error_fex1510,Graph_from_mc_statistical_error_fey1510);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1510 = new TH1F("Graph_Graph_from_mc_statistical_error1510","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1510->SetMinimum(0.05786921);
   Graph_Graph_from_mc_statistical_error1510->SetMaximum(2.122841);
   Graph_Graph_from_mc_statistical_error1510->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1510->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1510);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
