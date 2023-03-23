#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-0.0395515,7.264125,0.2900443);
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
   st->SetMaximum(0.2570847);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0);
   st_stack_119->SetMaximum(0.2570847);
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
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.02706649);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.08352619);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.0886207);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.1690347);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.09704901);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.09383675);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.04501605);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.02850284);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.02507059);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.03315657);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.03657143);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.01464347);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02075455);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.03414251);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.01872628);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.007891924);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.006029947);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.005541029);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.008797465);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01521109);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01605446);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.04415145);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.01618818);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01596554);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01129614);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.008593827);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.008021833);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.009362967);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01009482);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.005983847);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.007015533);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.009583856);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.007113687);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.004574273);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.004270919);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.003927091);
   VbbHcc_algo_H_dR_stack_1->SetEntries(320);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.007878778);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.01652595);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.0276295);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.04434561);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.04499632);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.03309349);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.02301625);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.01149424);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.008833776);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.006753653);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.008356551);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.0081381);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01069262);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.0101225);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.003854025);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.00663545);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.002246433);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.001884348);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.001418468);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0007651647);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,0.0004309483);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001705201);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002387946);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.003069735);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.005012425);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.004046674);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.00343801);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.002928617);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.001993459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.001727041);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001551198);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001787421);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001681482);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.00203575);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001837783);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001121744);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.001551597);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0009043661);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0007990734);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0007226163);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0005468873);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,0.0004309483);
   VbbHcc_algo_H_dR_stack_2->SetEntries(817);

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
