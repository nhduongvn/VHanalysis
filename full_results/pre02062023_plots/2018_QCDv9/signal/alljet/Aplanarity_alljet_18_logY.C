#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_18/Aplanarity_alljet_18
//=========  (Wed Jan 18 11:42:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_18 = new TCanvas("Aplanarity_alljet_18", "Aplanarity_alljet_18",0,0,600,600);
   Aplanarity_alljet_18->SetHighLightColor(2);
   Aplanarity_alljet_18->Range(-0.2183529,-0.1622007,1.171633,5.653704);
   Aplanarity_alljet_18->SetFillColor(0);
   Aplanarity_alljet_18->SetFillStyle(4000);
   Aplanarity_alljet_18->SetBorderMode(0);
   Aplanarity_alljet_18->SetBorderSize(2);
   Aplanarity_alljet_18->SetLogy();
   Aplanarity_alljet_18->SetLeftMargin(0.15709);
   Aplanarity_alljet_18->SetRightMargin(0.1234783);
   Aplanarity_alljet_18->SetBottomMargin(0.12);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(66888.49);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(3.433269);
   st_stack_255->SetMaximum(118062.9);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,595.2827);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,163.0798);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,90.60531);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,56.61864);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,38.79838);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,26.53034);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,19.16528);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,13.49754);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,9.904981);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,7.218048);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,5.149498);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,3.718605);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.61035);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.721862);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,1.072092);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,0.7590749);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,0.4501629);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,0.2774257);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,0.1616765);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,0.05506174);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,0.02968909);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,0.01226667);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,0.004537234);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.287081);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,0.6652923);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,0.4962573);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,0.3901062);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,0.3248091);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,0.2670896);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,0.2271572);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,0.1901234);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,0.1627224);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,0.139817);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,0.1163142);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,0.09991479);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,0.08368249);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,0.06729876);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,0.05389174);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,0.04504852);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,0.03494518);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,0.02678808);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,0.02083035);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,0.01195951);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,0.008487035);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,0.005489342);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,0.003498935);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(475576);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,73.60214);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,28.04089);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,15.70858);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,9.779851);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,6.391083);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,4.324159);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,2.849659);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,1.97014);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,1.292068);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,0.8961023);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,0.5799346);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,0.4203924);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,0.271993);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,0.1693385);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,0.1038009);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,0.06745871);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,0.03770171);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,0.02535791);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,0.01669911);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,0.004390285);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,0.003067807);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,0.0006279033);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,0.000377906);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,0.1683088);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,0.1041344);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,0.07782446);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,0.06132349);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,0.04975923);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,0.0410457);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,0.03301225);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,0.02801849);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,0.02217116);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,0.01855164);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,0.01491469);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,0.01278588);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,0.01016778);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,0.008131059);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,0.006285669);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,0.005029365);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,0.003806161);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,0.003120243);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,0.002525412);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,0.001281272);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,0.001041459);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,0.0004441618);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,0.000377906);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(426641);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_18->Modified();
   Aplanarity_alljet_18->cd();
   Aplanarity_alljet_18->SetSelected(Aplanarity_alljet_18);
}
