#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_18/Aplanarity_seljet_18
//=========  (Tue Feb 14 10:43:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_18 = new TCanvas("Aplanarity_seljet_18", "Aplanarity_seljet_18",0,0,600,600);
   Aplanarity_seljet_18->SetHighLightColor(2);
   Aplanarity_seljet_18->Range(-0.2183529,0.003880261,1.171633,4.868509);
   Aplanarity_seljet_18->SetFillColor(0);
   Aplanarity_seljet_18->SetFillStyle(4000);
   Aplanarity_seljet_18->SetBorderMode(0);
   Aplanarity_seljet_18->SetBorderSize(2);
   Aplanarity_seljet_18->SetLogy();
   Aplanarity_seljet_18->SetLeftMargin(0.15709);
   Aplanarity_seljet_18->SetRightMargin(0.1234783);
   Aplanarity_seljet_18->SetBottomMargin(0.12);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(14752.13);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",50,0,1);
   st_stack_319->SetMinimum(3.869329);
   st_stack_319->SetMaximum(24101.6);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetTitle("Aplanarity");
   st_stack_319->GetXaxis()->SetRange(1,50);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetTitleOffset(1);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.02");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetTitleSize(0.037);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetTitleOffset(1);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,113.8985);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,86.39236);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,58.15723);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,39.5063);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,28.08176);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,20.09305);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,14.73494);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,10.43792);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,7.911228);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,5.636422);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,3.999809);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,2.816848);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,2.082549);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,1.34989);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.8490129);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.5804489);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.3069072);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.2379745);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.1171142);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.1048184);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.03200854);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.00932108);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.5947691);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.5169427);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.4299448);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.3461164);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.3023581);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.2425558);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.2212042);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.1754376);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.1880304);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.1256793);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.1099576);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.08852131);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.08566361);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.063728);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.04999555);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.04038802);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.02836896);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.02544811);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01831145);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.03126576);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.008945496);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.004281877);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(157735);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,33.62279);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,24.02365);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,15.56195);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,10.33244);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,6.88283);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,4.72068);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,3.216889);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,2.226107);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,1.541356);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,1.030136);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.7365876);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.5030637);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.3128464);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.2033498);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.1281933);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.07729585);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.04356731);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.02392535);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.01031692);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.006046614);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.002373912);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.001101816);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.1152576);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.0977552);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.07933016);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.0630762);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.05138329);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.04188719);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.03464131);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.02944076);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.02545459);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01964139);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01805221);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.02038028);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.01073307);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.008484304);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.006821695);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.005233431);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.004763805);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.002922687);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001839907);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.001440495);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0009145669);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.000641865);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(308688);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_seljet_18->Modified();
   Aplanarity_seljet_18->cd();
   Aplanarity_seljet_18->SetSelected(Aplanarity_seljet_18);
}
