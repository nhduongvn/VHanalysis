#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(-1.310117,0.4865834,7.029799,2.791447);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetLogy();
   H_dR_Bj1_both_18->SetLeftMargin(0.15709);
   H_dR_Bj1_both_18->SetRightMargin(0.1234783);
   H_dR_Bj1_both_18->SetBottomMargin(0.12);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(282.0642);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",30,0,6);
   st_stack_159->SetMinimum(5.796517);
   st_stack_159->SetMaximum(363.8824);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_159->GetXaxis()->SetRange(1,30);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetTitleOffset(1);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Events/0.2");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetTitleSize(0.037);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetTitleOffset(1);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.4460971);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,1.477697);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,2.081786);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,1.881972);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,1.6566);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,1.470726);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,1.182622);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.95725);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.8201681);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.6970267);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.5250934);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.462361);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.4460971);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.4112457);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.329926);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.3415431);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.1417288);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.1324351);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.07899636);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.04879187);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.03485133);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.01161711);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.01161711);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.009293689);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,0.002323422);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.03219428);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.05859448);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.0695476);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.06612576);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.06204016);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.05845612);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.0524188);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.04716032);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.04365314);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.04024285);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.0349287);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.0327759);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.03219428);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.03091112);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.02768677);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.02817);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.01814651);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.01754145);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.01354776);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.01064726);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.008998576);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.00519533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.00519533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.004646845);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.002323422);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,0.002323422);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.1817027);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.6166879);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.7388554);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.6552309);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.5327192);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.4342969);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.3489517);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.2532825);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.1999418);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.1669049);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.1373094);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.125953);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.108058);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.09670161);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.09326028);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.08259213);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.04198433);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.02993965);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.02064803);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.01376535);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.009291614);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.005506142);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.003097205);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.001376535);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.001376535);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.001032402);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.0006882677);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.007907594);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.01456788);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.01594569);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.01501623);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.01353982);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.01222523);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.01095838);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.009336118);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.008294982);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.007578762);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.006874068);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.006583668);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.006098068);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.005768735);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.005665158);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.005331299);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.003801083);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.003209867);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.002665649);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.002176494);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.001788172);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.001376535);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.001032402);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0006882677);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0006882677);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0005960573);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.0004866788);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
