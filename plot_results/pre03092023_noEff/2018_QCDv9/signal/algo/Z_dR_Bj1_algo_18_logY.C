#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(-1.310117,-0.1166768,7.029799,0.8556297);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetLogy();
   Z_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(-2.456613e+09);
   st_stack_119->SetMaximum(-0.7426954);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_119->GetXaxis()->SetRange(1,30);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Event/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetTitleSize(0.037);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.3067934);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.534746);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.3564973);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.1748208);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.05484574);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.03427859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.02570894);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.006855717);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.008569647);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.01028358);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.008569647);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.006855717);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.005141788);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.008569647);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.005141788);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.001713929);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.001713929);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.003427859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.02293081);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.03027403);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.02471864);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.01730984);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.009695449);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.007664925);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.00663802);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.003427859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.003832463);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.004198252);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.003832463);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.003427859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.002968613);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.003832463);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.002968613);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.001713929);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.001713929);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.002423862);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.06476974);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.1875389);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1437572);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.05416285);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.0146691);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.008350105);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.007447391);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.006770356);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.004287892);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.002482464);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.002933821);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.002708142);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.001805428);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.00157975);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.002031107);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.001805428);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.0009027141);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.001128393);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,0.000451357);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.003823237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.006505651);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.005695868);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.003496197);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.001819478);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.001372749);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.001296424);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.001236092);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.0009837099);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.000748491);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.0008136955);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.0007817733);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0006383153);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0005970892);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0006770356);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0006383153);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.000451357);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0005046325);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,0.0003191576);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
