#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-0.03869783,7.264125,0.2837841);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2515359);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0);
   st_stack_119->SetMaximum(0.2515359);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_119->GetXaxis()->SetRange(1,31);
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
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,0.002840873);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.02157197);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.07400382);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.09480248);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.167506);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.09187581);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.08826817);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.04488528);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.03735179);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.02592608);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.02946937);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.03840153);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.01727243);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02764911);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.03068282);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.01909077);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.01123207);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.006029947);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.002582708);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,0.002420368);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,0.003305389);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,0.002840873);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.007218455);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01416293);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01640209);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.04405456);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.0160204);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01551163);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01210417);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.009772649);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.008214591);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.008663643);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01048119);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.006692558);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.008267773);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.009327474);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.007243392);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.005645537);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.004270919);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.002582708);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,0.002420368);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,0.003305389);
   VbbHcc_algo_H_dR_stack_1->SetEntries(321);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(1,0.000741842);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.0005485569);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.007537219);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.0173018);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.02970486);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.04126884);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.0420548);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.0333144);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.02183365);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.01569794);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.01188547);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.006528982);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.008933431);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.007886803);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01061645);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.009267645);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.007061184);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.003158647);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.002807917);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.003110853);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0009813651);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.00087602);
   VbbHcc_algo_H_dR_stack_2->SetBinError(1,0.0005291179);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.0003933715);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001597187);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002459509);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.003223464);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.004918749);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.003844131);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.003460636);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.002835533);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.002387239);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.002005765);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001488787);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001849779);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.00171224);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001925663);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001788896);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001548534);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.001073525);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.00100718);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.001255228);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0005754263);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.000619441);
   VbbHcc_algo_H_dR_stack_2->SetEntries(830);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
