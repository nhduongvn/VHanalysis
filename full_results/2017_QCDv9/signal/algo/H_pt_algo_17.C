#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_17()
{
//=========Macro generated from canvas: H_pt_algo_17/H_pt_algo_17
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_17 = new TCanvas("H_pt_algo_17", "H_pt_algo_17",0,0,600,600);
   H_pt_algo_17->SetHighLightColor(2);
   H_pt_algo_17->Range(37.97653,-0.08499658,1705.96,0.6233082);
   H_pt_algo_17->SetFillColor(0);
   H_pt_algo_17->SetFillStyle(4000);
   H_pt_algo_17->SetBorderMode(0);
   H_pt_algo_17->SetBorderSize(2);
   H_pt_algo_17->SetLeftMargin(0.15709);
   H_pt_algo_17->SetRightMargin(0.1234783);
   H_pt_algo_17->SetBottomMargin(0.12);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5524778);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",40,0,2000);
   st_stack_78->SetMinimum(0);
   st_stack_78->SetMaximum(0.5524778);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_78->GetXaxis()->SetRange(7,30);
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Events/50.0");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.02350189);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.1531515);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.3683185);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.3516198);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.2874973);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.1526292);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.09401782);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.05765457);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.03099138);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.01199883);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.004056246);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.004016422);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.005361586);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.006415125);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.01679425);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.0267845);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.02582492);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.02345945);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.01725183);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.01309487);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01055208);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.007924468);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.004601591);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.00292029);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.002840039);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.003096431);
   VbbHcc_algo_H_pt_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.005047198);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.03414289);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.1393071);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.1625507);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.1133611);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.05644149);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.02335201);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.01387589);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.006122206);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.001759935);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0009641862);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.0005044512);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.00109577);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.002898594);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.005821384);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.006254254);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.005257222);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.003645445);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.00232927);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.001806753);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001213569);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0006808232);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0004877896);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0003569464);
   VbbHcc_algo_H_pt_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_17->Modified();
   H_pt_algo_17->cd();
   H_pt_algo_17->SetSelected(H_pt_algo_17);
}
