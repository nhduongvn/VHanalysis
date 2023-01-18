#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_18()
{
//=========Macro generated from canvas: Aplanarity_seljet_18/Aplanarity_seljet_18
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_18 = new TCanvas("Aplanarity_seljet_18", "Aplanarity_seljet_18",0,0,600,600);
   Aplanarity_seljet_18->SetHighLightColor(2);
   Aplanarity_seljet_18->Range(-0.2183529,-31.85201,1.171633,233.5814);
   Aplanarity_seljet_18->SetFillColor(0);
   Aplanarity_seljet_18->SetFillStyle(4000);
   Aplanarity_seljet_18->SetBorderMode(0);
   Aplanarity_seljet_18->SetBorderSize(2);
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
   st->SetMaximum(207.0381);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",50,0,1);
   st_stack_319->SetMinimum(0);
   st_stack_319->SetMaximum(207.0381);
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
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,106.2095);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,81.12477);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,55.62951);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,37.01959);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,26.0778);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,18.71655);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,13.73942);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,9.647032);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,7.118344);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,5.261637);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,3.852631);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,2.862968);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,1.94864);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,1.293003);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.7986731);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.5983438);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.3247476);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.2193525);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.136022);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.04440524);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.02371167);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.004774161);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,0.006890942);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.5321332);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.4640059);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.386112);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.3136894);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.2632454);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.2223221);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.1914892);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.1587055);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.1374815);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.118903);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.1000057);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.08685582);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.07213429);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.05836788);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.04625145);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.03955042);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.02987872);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.02376869);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01885163);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.01050738);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.007719214);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.00337936);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,0.004216929);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(165424);

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
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,31.81585);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,22.05809);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,14.07197);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,9.195045);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,6.175644);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,4.284007);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,2.840817);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.994752);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,1.32115);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.8931392);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.5940443);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.437441);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.2833);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.1683371);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.1072611);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.06682677);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.03834017);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.02668929);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.01648653);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.00368316);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.002901586);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.0006279033);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,0.000377906);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,0.0003905493);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.1109501);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.09221122);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.07355172);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.05938845);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.04879223);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.04084875);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.03293672);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.02817079);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.02237117);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01850509);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01505198);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.01301112);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.01035661);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.008085887);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.006392013);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.005007026);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.003845527);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.00320376);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.002496765);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.001179459);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.001028109);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0004441618);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,0.000377906);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,0.0003905493);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(280952);

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
