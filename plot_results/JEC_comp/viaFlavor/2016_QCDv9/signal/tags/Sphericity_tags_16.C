#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Mon Mar 27 11:09:49 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2183529,-0.08591155,1.171633,0.630018);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
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
   st->SetMaximum(0.5584251);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(0);
   st_stack_57->SetMaximum(0.5584251);
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
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.03855033);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.2456876);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.3318063);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.3185377);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.2514383);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.1818313);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.0985598);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.06612694);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.03364746);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.03662606);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.0269217);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.01937496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.005277898);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.03415951);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.005818593);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.01341316);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.002931423);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.01055148);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.02676573);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.03111664);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.03086358);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.02748421);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02296042);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.01745244);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.01396891);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.009645127);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.01030202);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.008995181);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.007346454);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.003740383);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.009879258);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.004114659);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.006072325);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.002931423);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(603);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
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
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.03765803);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.1119097);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.1316864);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.1338687);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.09283206);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.05997489);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.04286037);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.02673427);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.02107254);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.01251158);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.01381576);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.0105414);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.01121072);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.006265335);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.00448492);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.006379693);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.002953559);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.001394972);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.0004181933);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.003790436);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.006508335);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.007039363);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.007154514);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.005926792);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.004804104);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.004037607);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.003196761);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.002847911);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.002157781);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.002287531);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.002036566);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.00203854);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.001570861);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.001312487);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.001559);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.001053496);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.000709457);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.0004181933);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(1957);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
