#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Mon Mar 20 11:48:32 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.05485782,7.029799,0.4022907);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
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
   st->SetMaximum(0.3565758);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",30,0,6);
   st_stack_141->SetMinimum(0);
   st_stack_141->SetMaximum(0.3565758);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_141->GetXaxis()->SetRange(1,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetTitleOffset(1);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Event/0.2");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetTitleSize(0.037);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetTitleOffset(1);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.02188006);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.1422204);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.2270056);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.1777755);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.1449554);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.06564018);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.0382901);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.01914505);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.007735769);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01972242);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.0249171);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.02205034);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.01991115);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.01339875);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.01023346);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.00723615);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.004737172);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.005001722);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.03358299);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.06895231);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.08038482);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.04823089);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.02393681);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.01429063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.007502583);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.006430785);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.005358988);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.00428719);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.003929924);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.003929924);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.002143595);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0007145317);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001336766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.003463821);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.004963296);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.005358988);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.004151054);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.002924347);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.002259548);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.001637198);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001515751);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001383685);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.001237605);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001184917);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001184917);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.000875119);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0005052502);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
