#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.310117,0.5617498,7.029799,2.499682);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLogy();
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(162.7989);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(6.227326);
   st_stack_49->SetMaximum(202.25);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetTitleOffset(1);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Events/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetTitleSize(0.037);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetTitleOffset(1);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.2794853);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,0.8845567);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.139551);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,0.9781987);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,0.7707457);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.5157513);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.4134654);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.2910105);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.236266);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.1959279);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.1642337);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.1325394);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.1296582);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.1339801);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.08211683);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.08787941);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.0561852);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.04754132);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.0187284);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.01296582);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.01296582);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.005762585);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.002881292);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,0.002881292);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.02006588);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.0356978);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.04051777);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.03753982);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.03332224);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.0272583);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.02440609);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.02047543);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.01844927);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.01680068);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.01538189);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.01381819);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.01366717);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01389309);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.01087664);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.01125181);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.008996832);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.008275882);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.005194323);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.004321938);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.004321938);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.002881292);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.002037381);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,0.002037381);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(4581);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.1467293);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.4499098);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.4884375);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.3552109);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.2345868);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.1487097);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.09919981);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.08029603);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.06499298);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.05167032);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.04734946);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.04050809);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.03564712);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.03852769);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.03708741);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.03348669);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.01548309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.01224244);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.007201438);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.004320863);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.003240647);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.002520503);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001440288);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.0009001798);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0003600719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.005139703);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.008999997);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.009377437);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.007996921);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.006498774);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.005174272);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.004226054);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.003802127);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.003420683);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.003050002);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.002919692);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.002700539);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.00253333);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.002633699);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.002584002);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.002455363);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.001669585);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001484614);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001138647);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.0008819924);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0007638279);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.0006736328);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0005092186);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0004025726);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.0002546093);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
