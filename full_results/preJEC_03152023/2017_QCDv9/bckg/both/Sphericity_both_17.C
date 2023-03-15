#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Mar  9 13:18:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2183529,-197518.6,1.171633,1448470);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15709);
   Sphericity_both_17->SetRightMargin(0.1234783);
   Sphericity_both_17->SetBottomMargin(0.12);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1283871);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",25,0,1);
   st_stack_186->SetMinimum(0);
   st_stack_186->SetMaximum(1283871);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("Sphericity");
   st_stack_186->GetXaxis()->SetRange(1,25);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Event/0.04");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,351441.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,851230.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,968544.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,842316.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,880163.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,682821.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,514588.6);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,453351.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,423225.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,361015.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,304874.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,272003.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,214937.4);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,160198.4);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,144382.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,98469.22);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,89091.09);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,78072.18);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,30752.38);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,8036.966);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,17447.28);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,1265.721);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,304.9627);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,9631.283);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,38105.08);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,41326.53);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,31891.64);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,56679.32);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,32157.83);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,15290.07);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,14945.41);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,28097.3);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,27221.59);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,19791.43);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,22724.24);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,20789.19);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,8140.754);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,19836.33);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,5899.658);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,17752.12);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,22380.68);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,3891.057);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,1288.093);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,11680.74);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,582.0121);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,272.9369);
   VbbHcc_both_Sphericity_stack_1->SetEntries(278187);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,25393.35);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,71348.73);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,97068.15);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,103632.4);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,100876.1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,94577.36);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,87215.67);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,79797.23);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,72845.43);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,66020.8);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,59521.59);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,53528.59);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,47574.25);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,41694.31);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,35891.12);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,30068.8);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,24056.46);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,17915.26);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,11573.82);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,5972.128);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,2593.773);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,945.8316);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,249.8063);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(24,39.41415);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,1.061536);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,42.34462);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,72.06708);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,84.80781);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,88.06379);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,87.09596);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,84.43756);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,81.1677);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,77.67635);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,74.25302);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,70.70465);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,67.15071);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,63.72336);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,60.09032);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,56.27148);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,52.23656);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,47.82139);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,42.80492);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,36.95405);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,29.71013);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,21.38474);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,14.10805);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,8.527695);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,4.396271);
   VbbHcc_both_Sphericity_stack_2->SetBinError(24,1.733197);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.2885903);
   VbbHcc_both_Sphericity_stack_2->SetEntries(1.677555e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
