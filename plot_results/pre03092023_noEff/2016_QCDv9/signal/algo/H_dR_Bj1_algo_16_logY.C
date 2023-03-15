#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.03566123,7.029799,0.2615157);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLogy();
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(-2.310515e+09);
   st_stack_109->SetMaximum(-0.2497272);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Event/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.0163207);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.1060846);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.1693273);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.1326057);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.1081247);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.04896211);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.02856123);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.02244097);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.008160352);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.01428062);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.006120264);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.008160352);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.004080176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.004080176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.008160352);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.002040088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.002040088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.002040088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.00577024);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01471128);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.01858609);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.01644772);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.01485206);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.009994349);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.00763331);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.006766206);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.004080176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.005397566);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.003533536);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.004080176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.00288512);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.00288512);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.004080176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.002040088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002040088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.002040088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.003730868);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.02505012);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.05143269);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.05996038);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.03597623);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.01785487);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.01065962);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.005596303);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.004796831);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.003997359);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.003197887);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.002931397);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.002664906);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.001865434);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.002931397);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.001598944);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.0007994718);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0005329812);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.0009971165);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.002583722);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.003702206);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.003997359);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.003096341);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.00218132);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.001685435);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.001221213);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001130624);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001032114);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.0009231505);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.0008838493);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.0008427173);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.0007050679);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.0008838493);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.000652766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0004615753);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0003768746);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
