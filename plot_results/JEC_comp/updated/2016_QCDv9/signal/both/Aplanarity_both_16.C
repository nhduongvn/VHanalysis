#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-0.3021256,1.171633,2.215587);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.963816);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0);
   st_stack_253->SetMaximum(1.963816);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Event/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.143449);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.349671);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.09419455);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.04037466);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.01836231);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.01418661);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.002417997);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.002804771);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.05792233);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.03227793);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.01659265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.01068467);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.007054271);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.006345013);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.002417997);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.002804771);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(591);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.4865183);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.1401071);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.04472917);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.02768019);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.01038733);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.003082147);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.002684523);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.003284008);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.001516987);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.0003705224);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.0003880459);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0003753755);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01356874);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.007247117);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.004108111);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.003216455);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.002006861);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.001090839);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.00101915);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.001078851);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.0007585318);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.0003705224);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.0003880459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0003753755);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(1958);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
