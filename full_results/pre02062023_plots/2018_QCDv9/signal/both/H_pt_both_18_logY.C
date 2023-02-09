#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_18_logY()
{
//=========Macro generated from canvas: H_pt_both_18/H_pt_both_18
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_18 = new TCanvas("H_pt_both_18", "H_pt_both_18",0,0,600,600);
   H_pt_both_18->SetHighLightColor(2);
   H_pt_both_18->Range(37.97653,0.4006735,1705.96,3.136157);
   H_pt_both_18->SetFillColor(0);
   H_pt_both_18->SetFillStyle(4000);
   H_pt_both_18->SetBorderMode(0);
   H_pt_both_18->SetBorderSize(2);
   H_pt_both_18->SetLogy();
   H_pt_both_18->SetLeftMargin(0.15709);
   H_pt_both_18->SetRightMargin(0.1234783);
   H_pt_both_18->SetBottomMargin(0.12);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(541.1875);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",40,0,2000);
   st_stack_143->SetMinimum(5.357122);
   st_stack_143->SetMaximum(728.8007);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_143->GetXaxis()->SetRange(7,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetTitleOffset(1);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/50.0");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetTitleSize(0.037);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetTitleOffset(1);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,3.058628);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,5.411875);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,3.348126);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,1.605813);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.7258623);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.3839412);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.2566028);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.1241924);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.06186145);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.04063708);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.02618055);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.01323707);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.004707417);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.01112049);
   VbbHcc_both_H_pt_stack_1->SetBinContent(17,0.002900369);
   VbbHcc_both_H_pt_stack_1->SetBinContent(18,0.002496094);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.005373985);
   VbbHcc_both_H_pt_stack_1->SetBinContent(25,0.002551435);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.08988858);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.1205077);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.09427875);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.0656227);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.04354389);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.03144365);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.02592329);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.01735704);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01256888);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.009901065);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.008340304);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.005480989);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.003328646);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.005606798);
   VbbHcc_both_H_pt_stack_1->SetBinError(17,0.002900369);
   VbbHcc_both_H_pt_stack_1->SetBinError(18,0.002496094);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.003829101);
   VbbHcc_both_H_pt_stack_1->SetBinError(25,0.002551435);
   VbbHcc_both_H_pt_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.5177989);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,1.201236);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,1.301853);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.8390093);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.4116491);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.2303924);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.1323506);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.07822394);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.04638249);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.026573);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.02303171);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.01772264);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.007419665);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.005924193);
   VbbHcc_both_H_pt_stack_2->SetBinContent(15,0.006555099);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.003671868);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.001347453);
   VbbHcc_both_H_pt_stack_2->SetBinContent(18,0.001336295);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.0004650931);
   VbbHcc_both_H_pt_stack_2->SetBinContent(20,0.0005040642);
   VbbHcc_both_H_pt_stack_2->SetBinContent(21,0.0008644701);
   VbbHcc_both_H_pt_stack_2->SetBinContent(22,0.0004650931);
   VbbHcc_both_H_pt_stack_2->SetBinContent(23,0.0008348022);
   VbbHcc_both_H_pt_stack_2->SetBinContent(24,0.000377906);
   VbbHcc_both_H_pt_stack_2->SetBinContent(25,0.0006061945);
   VbbHcc_both_H_pt_stack_2->SetBinContent(27,0.0004949126);
   VbbHcc_both_H_pt_stack_2->SetBinContent(35,0.0003681385);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.01404256);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.02140043);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.02241561);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01794211);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.01242044);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.009387295);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.007074253);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.00549779);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.004205553);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.003137032);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.002959897);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.002989433);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.001663274);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.001441842);
   VbbHcc_both_H_pt_stack_2->SetBinError(15,0.001681896);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.001151785);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0006832579);
   VbbHcc_both_H_pt_stack_2->SetBinError(18,0.0006824046);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0004650931);
   VbbHcc_both_H_pt_stack_2->SetBinError(20,0.0005040642);
   VbbHcc_both_H_pt_stack_2->SetBinError(21,0.0006191794);
   VbbHcc_both_H_pt_stack_2->SetBinError(22,0.0004650931);
   VbbHcc_both_H_pt_stack_2->SetBinError(23,0.000594135);
   VbbHcc_both_H_pt_stack_2->SetBinError(24,0.000377906);
   VbbHcc_both_H_pt_stack_2->SetBinError(25,0.0005105519);
   VbbHcc_both_H_pt_stack_2->SetBinError(27,0.0004949126);
   VbbHcc_both_H_pt_stack_2->SetBinError(35,0.0003681385);
   VbbHcc_both_H_pt_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_18->Modified();
   H_pt_both_18->cd();
   H_pt_both_18->SetSelected(H_pt_both_18);
}
