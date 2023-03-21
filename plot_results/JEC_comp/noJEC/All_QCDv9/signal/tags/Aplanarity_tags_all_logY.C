#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Mon Mar 20 11:48:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-0.3642868,1.171633,1.221919);
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
   st->SetMinimum(1);
   st->SetMaximum(9.664747);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0.669974);
   st_stack_64->SetMaximum(11.56907);
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
   st_stack_64->GetYaxis()->SetTitle("Event/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,5.74334);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,3.783);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,2.492618);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,1.61121);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,1.147152);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,0.8811592);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,0.6010303);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,0.4499982);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,0.3006317);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,0.2244);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,0.1828546);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,0.1051869);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,0.1314564);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,0.06370952);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,0.03298423);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,0.0130651);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,0.01003691);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,0.006145459);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,0.003248252);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(22,0.002019195);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,0.1308526);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,0.09779409);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,0.08208166);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,0.06376326);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,0.05698698);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,0.04655232);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,0.03920226);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,0.03380389);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,0.02836986);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,0.02351549);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,0.02131935);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,0.01660552);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,0.01886802);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,0.0123964);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,0.008562143);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,0.005044753);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,0.00449813);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,0.003555881);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,0.002358393);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(22,0.002019195);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);
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
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2.2784);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,1.700553);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,1.127855);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,0.774731);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,0.5255581);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,0.376525);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,0.2600931);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,0.1812971);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,0.1187018);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,0.08199102);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.06349853);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.03862871);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.02953801);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.0155681);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,0.008464874);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,0.006352792);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.003150997);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,0.0005997423);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,0.002614172);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,0.0008124419);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,0.0004800258);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,0.02765622);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,0.02371569);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,0.01934792);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,0.01608429);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,0.01308082);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.01101464);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.009368495);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.009208618);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.00615111);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.005462546);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.005693863);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.00434709);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.00317984);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.002180775);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.001661319);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,0.001436838);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.001028051);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,0.0004577005);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,0.001001197);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,0.0005150179);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,0.0003412046);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
