#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.01389062,7.264125,0.1018645);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.090289);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0);
   st_stack_117->SetMaximum(0.090289);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_117->GetXaxis()->SetRange(1,31);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Event/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(1,0.00283072);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.01122613);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.01813565);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.04783524);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.04163279);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.05549996);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.04352288);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.02415651);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.02026747);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.01118621);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.01851479);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.01178685);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.008872494);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02135404);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.009144282);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.009180009);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.008559474);
   VbbHcc_algo_H_dR_stack_1->SetBinError(1,0.00283072);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.005618066);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.007408181);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01173918);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01115682);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.01276569);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01126983);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.008547504);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.007669237);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.00561751);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.007566726);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.005895972);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.005128472);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.008079877);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.005297121);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.005308612);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.004972611);
   VbbHcc_algo_H_dR_stack_1->SetEntries(124);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.003183036);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.00657499);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.01445383);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.0143083);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.01943991);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.01478459);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.006199596);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.007657557);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.004395822);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.003870746);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.003822695);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.003497239);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.006703607);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.004320908);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.001939787);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.002260037);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.0007801736);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0003003481);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001084837);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.001557075);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002362168);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.002361127);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.002722549);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.002386175);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.001551773);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.001717896);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.001278698);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001225401);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001186839);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001169296);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001595509);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001259469);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.0008680115);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0009232282);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0005516767);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0003003481);
   VbbHcc_algo_H_dR_stack_2->SetEntries(317);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
