#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Mon Dec 19 11:11:21 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-0.3182513,7.264125,2.333843);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.068633);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(2.068633);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.2171813);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.4815141);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.6413923);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.7197608);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.8752478);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.975588);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1.031769);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1.02734);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,1.087023);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,1.009811);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,1.024907);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,1.057159);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,1.059962);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,1.100095);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.4589339);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.23579);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.1246748);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.07223211);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.04726983);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.03534498);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01664687);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.009530682);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.002496094);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.003915935);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,0.002177811);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.02324556);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.03542982);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.04156839);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.04320794);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.04885807);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.05083333);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.05421028);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.05194842);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.05414256);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.05195598);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.05158456);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.05270328);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.05177623);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.05533775);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.0367392);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.02431405);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01801135);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.013115);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.01086321);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.009099648);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.006311494);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.004442169);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.002496094);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.00286248);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,0.002177811);
   VbbHcc_tags_H_dR_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.1001283);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.1838927);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.2324241);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.3154484);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.3812083);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.4035008);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.3284965);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.3134981);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.263172);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.2629602);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.2512578);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.2587815);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.2877728);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.2581598);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.140316);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.08413436);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.05164617);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.02904092);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.02474651);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.01460271);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.01024386);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.008275886);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.002047458);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.002065267);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.001170853);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.006323627);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.008352613);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.009421901);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.01100557);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.01217383);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.01256165);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.01117711);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.01097577);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.009958664);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.01003118);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.009827946);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.009916397);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.01054495);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.009994191);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.007180054);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.005579031);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.004425232);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.003252588);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.00302244);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.002283351);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001981731);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.001745555);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0008595409);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0008133297);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.000868135);
   VbbHcc_tags_H_dR_stack_2->SetEntries(12320);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
