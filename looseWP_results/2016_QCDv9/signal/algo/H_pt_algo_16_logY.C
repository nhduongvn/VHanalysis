#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_16_logY()
{
//=========Macro generated from canvas: H_pt_algo_16/H_pt_algo_16
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_16 = new TCanvas("H_pt_algo_16", "H_pt_algo_16",0,0,600,600);
   H_pt_algo_16->SetHighLightColor(2);
   H_pt_algo_16->Range(37.97653,-0.1754171,1705.96,0.556976);
   H_pt_algo_16->SetFillColor(0);
   H_pt_algo_16->SetFillStyle(4000);
   H_pt_algo_16->SetBorderMode(0);
   H_pt_algo_16->SetBorderSize(2);
   H_pt_algo_16->SetLogy();
   H_pt_algo_16->SetLeftMargin(0.15709);
   H_pt_algo_16->SetRightMargin(0.1234783);
   H_pt_algo_16->SetBottomMargin(0.12);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.796293);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",40,0,2000);
   st_stack_77->SetMinimum(0.8174668);
   st_stack_77->SetMaximum(3.046048);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_77->GetXaxis()->SetRange(7,30);
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetTitleOffset(1);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetTitleOffset(1);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.3330365);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1.418261);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,2.320923);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,2.011898);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,1.174881);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.8020085);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.4453865);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.272017);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.1764534);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.09185741);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.06414928);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.01580055);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.005907581);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.006889983);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(15,0.008796035);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(16,0.002476568);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(20,0.002993593);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.0311535);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.06551601);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.08377968);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.07769064);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.05997018);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.04997123);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.03736678);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.02910641);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.02345711);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.01702678);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.0137851);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.006521219);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.004178792);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.004137038);
   VbbHcc_algo_H_pt_stack_1->SetBinError(15,0.005079939);
   VbbHcc_algo_H_pt_stack_1->SetBinError(16,0.002476568);
   VbbHcc_algo_H_pt_stack_1->SetBinError(20,0.002993593);
   VbbHcc_algo_H_pt_stack_1->SetEntries(3307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.09024559);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.4164827);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.7956677);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.8553698);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.606513);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.3180358);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.1783263);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.08818129);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.045802);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.02030871);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.01172025);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.002953555);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.001650225);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,0.0004315001);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,0.001284699);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,0.001645161);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,0.0003961915);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(24,0.0004083722);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.005880697);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.01261785);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.01745293);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.01807553);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.01519806);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.01101359);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.008220663);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.005797263);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.004186159);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.002764758);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.002100339);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.001024431);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0007524031);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,0.0004315001);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,0.0006997555);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,0.0007607199);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,0.0003961915);
   VbbHcc_algo_H_pt_stack_2->SetBinError(24,0.0004083722);
   VbbHcc_algo_H_pt_stack_2->SetEntries(9173);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   H_pt_algo_16->Modified();
   H_pt_algo_16->cd();
   H_pt_algo_16->SetSelected(H_pt_algo_16);
}
