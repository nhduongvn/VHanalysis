#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-2.541664,1.171633,18.63887);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
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
   st->SetMaximum(16.52081);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(16.52081);
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
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,8.029159);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,5.960778);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,4.237394);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,2.982654);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,2.092552);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,1.595956);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,1.18743);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,0.8650705);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,0.6085112);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,0.4335612);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,0.378026);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,0.2374142);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,0.1885832);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,0.1144672);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,0.07763583);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,0.04546508);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,0.02591062);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,0.01872028);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,0.00665922);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(20,0.01296269);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(21,0.002636796);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,0.1312026);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,0.1135216);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,0.09621744);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,0.08004296);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,0.06684865);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,0.05784809);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,0.05104454);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,0.04325403);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,0.03603531);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,0.03118739);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,0.02827775);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,0.02277538);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,0.02061121);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,0.0157339);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,0.01345411);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,0.01008673);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,0.007298982);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,0.006148471);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,0.003171742);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(20,0.005217855);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(21,0.002636796);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(16887);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2.984717);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,1.998137);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,1.345198);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,0.8941532);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,0.6092879);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,0.4320276);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,0.3046498);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,0.2108395);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,0.132906);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,0.0823796);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.05245241);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.04324795);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.02879613);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.01859066);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,0.01144271);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,0.007269553);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.002921213);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,0.001616437);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,0.0007277405);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,0.001040741);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(22,8.976682e-05);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,0.02955062);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,0.0242943);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,0.01985294);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,0.01626819);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,0.01347042);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.01131349);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.009501128);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.007900741);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.006214769);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.00488654);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.003947542);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.003611473);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.002863258);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.00223853);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.00181418);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,0.001490214);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.0008995665);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,0.0007541327);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,0.0004414792);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,0.0005385209);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(22,8.976682e-05);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(38012);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","ZHcc","F");

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
