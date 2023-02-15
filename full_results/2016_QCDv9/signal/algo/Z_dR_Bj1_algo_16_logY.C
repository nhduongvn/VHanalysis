#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(-1.310117,-0.1079718,7.029799,0.7917935);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetLogy();
   Z_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(66.83971);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(-3.238885e+09);
   st_stack_117->SetMaximum(-42.44276);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_117->GetXaxis()->SetRange(1,30);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.2379456);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.4704213);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.5169164);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.382901);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.2297406);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.1203403);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.07658021);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.05470015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.0355551);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.02551045);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.03586929);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.03760014);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.03236104);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.02506676);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.01814199);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.0144723);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.01223133);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.00986121);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(804);

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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.06109246);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.1511235);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1514807);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.1032498);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.03894198);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.01893509);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.01321884);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.005358988);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.004644456);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.003215393);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.001786329);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.001786329);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.001071798);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.004671857);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.007347874);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.007356554);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.006073519);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.003729965);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.002600935);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.002173163);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.001383685);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.001597741);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.00128814);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.001071798);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0007988707);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0007988707);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.001129774);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0006188026);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(1609);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
