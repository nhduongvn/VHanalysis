#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-1.116526,1.171633,10.66984);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLogy();
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.18515e+09);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(1.985353);
   st_stack_64->SetMaximum(3.098877e+09);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,1.084789e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,5250283);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,2742390);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,1507804);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,894227.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,529909);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,409287.6);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,231035.2);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,195445.2);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,101282.7);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,78560.45);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,74228.06);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,34673.89);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,18246.51);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,17693.54);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,6006.942);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,1818.499);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,3833.212);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,2270.691);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(20,392.7199);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(21,62.03478);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,126359.3);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,112665.3);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,81283.29);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,61430.81);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,38911.78);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,19135.95);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,43275.01);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,13545.96);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,28403.11);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,9638.138);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,16459.37);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,24966.72);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,5619.96);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,3485.97);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,4224.68);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,1228.424);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,665.406);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,1566.334);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,885.2385);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(20,316.0169);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(21,46.21151);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(756507);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(0,0.3563127);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,1003609);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,729300.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,490074.1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,336075);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,235795.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,168455.4);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,121347.3);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,87960.92);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,64020.73);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,46211.82);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,33292.47);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,23601.32);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,16589.9);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,11379.9);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,7672.318);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,5007.96);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,3113.078);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,1837.476);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,1021.976);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,517.2268);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,226.6279);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(22,87.51016);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(23,22.0751);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(24,3.234179);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(25,0.05997242);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(0,0.1605218);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,287.5766);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,244.847);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,201.2255);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,166.7585);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,139.9673);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,118.3082);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,100.8371);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,85.22645);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,72.86733);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,61.67579);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,52.78623);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,43.91553);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,37.37496);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,31.19479);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,25.96894);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,20.53481);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,16.41501);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,12.23648);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,9.635654);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,6.616841);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,4.304104);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(22,2.623757);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(23,1.331799);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(24,0.4994131);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(25,0.05997242);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(4.738046e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
