#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_all()
{
//=========Macro generated from canvas: Aplanarity_seljet_all/Aplanarity_seljet_all
//=========  (Wed Jan 18 11:40:28 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_all = new TCanvas("Aplanarity_seljet_all", "Aplanarity_seljet_all",0,0,600,600);
   Aplanarity_seljet_all->SetHighLightColor(2);
   Aplanarity_seljet_all->Range(-0.2183529,-71.79239,1.171633,526.4775);
   Aplanarity_seljet_all->SetFillColor(0);
   Aplanarity_seljet_all->SetFillStyle(4000);
   Aplanarity_seljet_all->SetBorderMode(0);
   Aplanarity_seljet_all->SetBorderSize(2);
   Aplanarity_seljet_all->SetLeftMargin(0.15709);
   Aplanarity_seljet_all->SetRightMargin(0.1234783);
   Aplanarity_seljet_all->SetBottomMargin(0.12);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(466.6505);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",50,0,1);
   st_stack_320->SetMinimum(0);
   st_stack_320->SetMaximum(466.6505);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetTitle("Aplanarity");
   st_stack_320->GetXaxis()->SetRange(1,50);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetTitleOffset(1);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.02");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetTitleSize(0.037);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetTitleOffset(1);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(1,239.801);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(2,183.5929);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(3,124.1493);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(4,84.65674);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(5,59.02269);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(6,42.81453);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(7,31.19179);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(8,22.18899);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(9,16.45224);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(10,12.16814);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(11,8.794252);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(12,6.395376);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(13,4.440913);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(14,3.043104);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(15,1.964243);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(16,1.290127);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(17,0.7449343);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(18,0.4668592);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(19,0.2921805);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(20,0.1246827);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(21,0.05097057);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(22,0.02375346);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(23,0.006890942);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(1,0.7113065);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(2,0.623685);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(3,0.5157555);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(4,0.4237082);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(5,0.3544858);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(6,0.301254);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(7,0.2584484);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(8,0.2161885);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(9,0.1869834);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(10,0.1608168);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(11,0.1359875);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(12,0.1164882);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(13,0.09723488);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(14,0.0800794);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(15,0.06453618);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(16,0.05253186);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(17,0.04018281);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(18,0.03158632);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(19,0.0251299);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(20,0.0162214);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(21,0.01045711);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(22,0.006679317);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(23,0.004216929);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetEntries(490549);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(1,71.29937);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(2,50.02799);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(3,32.06151);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(4,21.17487);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(5,14.15365);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(6,9.702258);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(7,6.522034);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(8,4.530183);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(9,3.052932);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(10,2.036496);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(11,1.388538);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(12,0.983084);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(13,0.6510404);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(14,0.3897618);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(15,0.2554623);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(16,0.1511078);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(17,0.08771085);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(18,0.06167471);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(19,0.03230083);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(20,0.01295021);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(21,0.006229491);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(22,0.001741969);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(23,0.0005622135);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(24,0.0003905493);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(1,0.1441605);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(2,0.1208858);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(3,0.09680614);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(4,0.07856629);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(5,0.06441299);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(6,0.05357539);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(7,0.0436241);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(8,0.03681241);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(9,0.02975277);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(10,0.02439624);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(11,0.02009055);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(12,0.01701049);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(13,0.01374372);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(14,0.01069041);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(15,0.008573211);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(16,0.006601161);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(17,0.005071061);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(18,0.004235614);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(19,0.003093261);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(20,0.001841522);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(21,0.001353021);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(22,0.0006361068);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(23,0.0004204548);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(24,0.0003905493);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetEntries(908823);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_seljet_all->Modified();
   Aplanarity_seljet_all->cd();
   Aplanarity_seljet_all->SetSelected(Aplanarity_seljet_all);
}
