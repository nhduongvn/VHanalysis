#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Mon Mar 27 11:09:53 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-1.446361,1.171633,10.60664);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.401344);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0);
   st_stack_256->SetMaximum(9.401344);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Event/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,5.577773);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,1.754046);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,0.6544219);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,0.301282);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,0.1471375);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,0.0900391);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,0.04942225);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,0.04020978);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,0.01673567);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,0.0226127);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,0.009866848);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,0.007820977);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,0.003606138);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,0.002008212);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,0.002958322);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,0.128647);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,0.06607893);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,0.04052411);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,0.02659105);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,0.01953236);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,0.0146601);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,0.01105461);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,0.009772787);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,0.006000756);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,0.007343946);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,0.004685087);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,0.004614536);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,0.002817318);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,0.002008212);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,0.002958322);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(3908);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,2.225343);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,0.7306894);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,0.297087);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,0.1395143);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,0.07449375);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,0.04229883);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,0.02218069);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,0.01875594);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,0.008790075);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,0.007721605);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,0.004107035);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,0.002421806);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,0.002686418);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,0.0008188917);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,0.0003186975);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,0.0002481348);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.000795291);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,0.02736004);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,0.01556719);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,0.009915412);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,0.006667407);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,0.004827635);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,0.003731612);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,0.002591889);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,0.002448166);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,0.001647182);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,0.001571993);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,0.001092417);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.0008230105);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.0008830002);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.0004764298);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.0003186975);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.0002481348);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.0005632369);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(12102);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
