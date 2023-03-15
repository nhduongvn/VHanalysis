#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Mar  9 13:18:01 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2183529,-0.4341184,1.171633,7.003489);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15709);
   Sphericity_tags_16->SetRightMargin(0.1234783);
   Sphericity_tags_16->SetBottomMargin(0.12);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(912894.6);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(2.87339);
   st_stack_57->SetMaximum(1818563);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetTitle("Sphericity");
   st_stack_57->GetXaxis()->SetRange(1,25);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetTitleOffset(1);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Event/0.04");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetTitleSize(0.037);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetTitleOffset(1);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,261935.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,625521.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,689868.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,639182.4);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,498448);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,449182.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,396558.4);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,346092);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,258901.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,245508);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,219804.4);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,164426.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,163119.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,115488.6);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,91446.72);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,71787.89);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,50600.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,39943.17);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,18533.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,8156.31);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,2860.427);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,397.8582);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(23,28.76496);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,7682.909);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,24525.23);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,27843.48);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,24286.79);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,15418.94);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,14489.13);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,26946.82);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,25683.71);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,10730.83);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,24436.55);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,23902.07);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,9150.433);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,22941.99);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,7461.528);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,6227.936);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,5267.936);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,4218.014);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,4330.98);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,3086.862);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,2145.485);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,827.7021);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,294.3085);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(23,26.49273);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(247451);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,18509.52);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,50947.77);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,67834.42);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,71267.95);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,68757.53);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,63904.66);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,58639.24);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,53445.92);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,48613.29);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,43922.42);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,39545.62);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,35321.69);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,31437.17);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,27430.85);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,23529.23);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,19645.27);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,15695.98);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,11635.08);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,7531.155);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,3873.089);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,1689.523);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,600.591);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(23,161.3367);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(24,21.9401);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(25,0.4903137);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,35.12192);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,58.90115);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,68.34823);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,70.27755);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,69.15186);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,66.72804);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,63.95757);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,61.11049);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,58.29213);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,55.44245);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,52.61306);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,49.73761);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,46.94272);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,43.87316);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,40.6463);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,37.14523);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,33.22467);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,28.60555);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,23.02912);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,16.54561);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,10.94673);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,6.517797);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(23,3.382426);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(24,1.242485);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(25,0.1811579);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(1.175949e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","t#bar{t}","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
