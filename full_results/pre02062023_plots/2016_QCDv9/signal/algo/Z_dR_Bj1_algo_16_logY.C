#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(-1.310117,-0.07539674,7.029799,0.5529094);
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
   st->SetMaximum(46.67417);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(-3.159097e+09);
   st_stack_117->SetMaximum(-31.09362);
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
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,0.001440646);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.1022859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.2852479);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.3558396);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.329908);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.1728775);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.1051672);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.06482908);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.0374568);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.03025357);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.02305034);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.008643877);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.0187284);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.007203231);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.005762585);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.004321938);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.01008452);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.002881292);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,0.001440646);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,0.001440646);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.0121391);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.02027169);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.02264153);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.02180093);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.01578149);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.01230889);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.009664148);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.007345883);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.00660187);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.005762585);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.003528848);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.005194323);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.003221383);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.002881292);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.002495272);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.003811591);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.002037381);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,0.001440646);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(1088);

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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.02214442);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.0961392);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1109021);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.07291456);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.04050809);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.02394478);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.01260252);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.00846169);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.005581114);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.003420683);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.003600719);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.003060611);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.003600719);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.00180036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.00180036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.00180036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.0005401079);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.000180036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,0.0003600719);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,0.0003600719);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.001996695);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.00416035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.004468375);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.003623154);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.002700539);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.002076276);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.001506289);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.001234264);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.001002398);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.0007847585);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.0008051453);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.0007423072);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0008051453);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0005693237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0005693237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0005693237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0003118314);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.000180036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,0.0002546093);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,0.0002546093);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2298);

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
