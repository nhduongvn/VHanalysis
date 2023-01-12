#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-0.1075315,7.029799,0.7885642);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLogy();
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(66.56711);
   
   TH1F *st_stack_103 = new TH1F("st_stack_103","",30,0,6);
   st_stack_103->SetMinimum(-3.237954e+09);
   st_stack_103->SetMaximum(-42.29328);
   st_stack_103->SetDirectory(0);
   st_stack_103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_103->SetLineColor(ci);
   st_stack_103->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_103->GetXaxis()->SetRange(1,30);
   st_stack_103->GetXaxis()->SetLabelFont(42);
   st_stack_103->GetXaxis()->SetTitleOffset(1);
   st_stack_103->GetXaxis()->SetTitleFont(42);
   st_stack_103->GetYaxis()->SetTitle("Events/0.2");
   st_stack_103->GetYaxis()->SetLabelFont(42);
   st_stack_103->GetYaxis()->SetTitleSize(0.037);
   st_stack_103->GetYaxis()->SetTitleFont(42);
   st_stack_103->GetZaxis()->SetLabelFont(42);
   st_stack_103->GetZaxis()->SetTitleOffset(1);
   st_stack_103->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_103);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.02323422);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.2114314);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.3066917);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.4739781);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.5204466);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.4530673);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.4135692);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.2811341);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.2067846);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.1254648);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.07667294);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.0627324);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.08131978);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.03717476);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.0627324);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.02555765);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.006970267);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.006970267);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.002323422);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,0.009293689);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.007347306);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.02216404);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.02669409);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.03318511);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.0347738);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.03244483);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.03099832);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.02555765);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.02191912);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.0170736);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.01334704);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.01207286);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.01374555);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.009293689);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.01207286);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.00770592);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.004024285);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.004024285);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.002323422);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,0.004646845);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(1458);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.01342122);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.05643795);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.1084022);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1445362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.1452245);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.1073698);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.07570945);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.06469717);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.03406925);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.02064803);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.02064803);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.01583016);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.01445362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.01101228);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.01307709);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.004817874);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.003441339);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001376535);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.001720669);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.001376535);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,0.0003441339);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.002149115);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.004407064);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.00610777);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.007052645);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.007069418);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.006078616);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.00510433);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.004718526);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.003424089);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.002665649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.002665649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.002334029);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.002230242);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001946715);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.002121384);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.001287631);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.001088247);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0006882677);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0007695067);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0006882677);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,0.0003441339);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2495);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
