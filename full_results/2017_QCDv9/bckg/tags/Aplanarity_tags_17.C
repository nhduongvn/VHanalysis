#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-5632557,1.171633,4.130542e+07);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15709);
   Aplanarity_tags_17->SetRightMargin(0.1234783);
   Aplanarity_tags_17->SetBottomMargin(0.12);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.661162e+07);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0);
   st_stack_62->SetMaximum(3.661162e+07);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("Aplanarity");
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2.349247e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.102692e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,5706523);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3211035);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1820475);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1222946);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,841137.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,464074);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,377978.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,203753.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,137957.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,101803.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,66485.61);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,36977.36);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,21907.06);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,24863.16);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,18265.73);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,5371.584);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,2259.482);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,1874.314);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,30.79111);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,321277.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,252248.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,182961.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,140631.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,96329.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,87571.36);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,79370.07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,40962.58);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,57247.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,32227.12);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,18273.28);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,23124.29);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,19726.13);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,6363.313);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,4533.156);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,12697.75);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,14933.91);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,2281.337);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,773.186);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,1458.911);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,23.04608);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(517600);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.2756689);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,915280.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,650697.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,435824.1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,299744);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,211196.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,151051.1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,108906.3);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,79050.86);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,57423.11);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,41517.46);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,29731.39);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,21202.73);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,14816.08);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,10164.67);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,6816.71);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,4433.479);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,2732.185);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,1612.931);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,898.0708);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,459.9942);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,200.1149);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,75.92822);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,19.10413);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,3.542102);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.07282258);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.1418976);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,258.368);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,219.3286);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,179.907);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,149.3857);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,125.4821);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,106.195);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,90.20641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,76.86874);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,65.5706);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,55.76023);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,47.19812);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,39.89501);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,33.33773);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,27.63351);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,22.64172);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,18.25057);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,14.32412);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,11.0015);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,8.215405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,5.866929);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,3.891558);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,2.395819);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,1.205285);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.5271166);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.07282258);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(4.530053e+07);

   ci = TColor::GetColor("#990099");
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
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
