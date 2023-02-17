#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Thu Feb 16 10:37:20 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.310117,-0.1418075,7.029799,1.039922);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLogy();
   H_dR_Bj0_both_16->SetLeftMargin(0.15709);
   H_dR_Bj0_both_16->SetRightMargin(0.1234783);
   H_dR_Bj0_both_16->SetBottomMargin(0.12);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(87.7856);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",30,0,6);
   st_stack_169->SetMinimum(-3.302195e+09);
   st_stack_169->SetMaximum(-53.66469);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_169->GetXaxis()->SetRange(1,30);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Events/0.2");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.08752024);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,0.5141814);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,0.6099067);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,0.5661465);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,0.4567462);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,0.2707657);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.2133306);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.1750405);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.1531604);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.1094003);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.08205022);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.1094003);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.07931522);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.07931522);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.06564018);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.08478523);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.01914505);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.02188006);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.02735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.02188006);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.01547154);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.03750053);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.04084237);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.0393499);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.03534409);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.02721298);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.02415493);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.02188006);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.02046692);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.01729771);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.01498025);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.01729771);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.01472847);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.01472847);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.01339875);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.01522788);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.00723615);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.007735769);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.008648853);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.007735769);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.003867885);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.003867885);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.03858471);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.2036415);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.2679494);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.2500861);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.1786329);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.1318311);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.09431818);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.07466856);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.05287535);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.04215737);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.04037104);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.03822745);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.03322572);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.03179666);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.02750947);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.02000689);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.01429063);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.01107524);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.006073519);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.005358988);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.002500861);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.004644456);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.001786329);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001429063);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.003712816);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.008529605);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.009784128);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.009452366);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.007988707);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.006862853);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.005804883);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.005164932);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.004346327);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.0038809);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.003797788);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.003695587);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.003445347);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.003370439);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.003134995);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.002673533);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.002259548);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.001989172);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001473045);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.001383685);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.0009452366);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.00128814);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.0007988707);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
