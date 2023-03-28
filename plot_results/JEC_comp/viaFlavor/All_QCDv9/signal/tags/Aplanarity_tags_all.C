#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-1.419005,1.171633,10.40604);
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
   st->SetMaximum(9.223533);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(9.223533);
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
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,5.478981);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,1.724969);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,0.6477322);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,0.2952262);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,0.1471375);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,0.0881248);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,0.04942225);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,0.04020978);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,0.01673567);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,0.0226127);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,0.009866848);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,0.007820977);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,0.003606138);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,0.002008212);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,0.002958322);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,0.1277697);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,0.06550927);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,0.04033062);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,0.02635521);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,0.01953236);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,0.01453458);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,0.01105461);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,0.009772787);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,0.006000756);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,0.007343946);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,0.004685087);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,0.004614536);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,0.002817318);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,0.002008212);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,0.002958322);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(3843);

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
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2.176551);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,0.7164529);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,0.2912967);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,0.1356922);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,0.07005302);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,0.04033175);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,0.02218069);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,0.01728066);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,0.008869917);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,0.007721605);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.004107035);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.002421806);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.002686418);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.0008188917);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,0.0003186975);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,0.0002481348);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.000795291);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,0.02704563);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,0.01542914);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,0.009816525);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,0.006574397);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,0.004679708);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.003640699);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.002591889);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.002323969);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.001665499);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.001571993);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.001092417);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.0008230105);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.0008830002);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.0004764298);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.0003186975);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,0.0002481348);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.0005632369);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(11833);

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
