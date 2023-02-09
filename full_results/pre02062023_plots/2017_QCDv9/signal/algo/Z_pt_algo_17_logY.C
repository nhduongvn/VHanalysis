#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_17_logY()
{
//=========Macro generated from canvas: Z_pt_algo_17/Z_pt_algo_17
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_17 = new TCanvas("Z_pt_algo_17", "Z_pt_algo_17",0,0,600,600);
   Z_pt_algo_17->SetHighLightColor(2);
   Z_pt_algo_17->Range(37.97653,0.6419346,1705.96,2.198989);
   Z_pt_algo_17->SetFillColor(0);
   Z_pt_algo_17->SetFillStyle(4000);
   Z_pt_algo_17->SetBorderMode(0);
   Z_pt_algo_17->SetBorderSize(2);
   Z_pt_algo_17->SetLogy();
   Z_pt_algo_17->SetLeftMargin(0.15709);
   Z_pt_algo_17->SetRightMargin(0.1234783);
   Z_pt_algo_17->SetBottomMargin(0.12);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(92.58299);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",40,0,2000);
   st_stack_74->SetMinimum(6.741881);
   st_stack_74->SetMaximum(110.4799);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_74->GetXaxis()->SetRange(7,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/50.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.2051977);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.9258299);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.709009);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.3064366);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.106678);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.05570625);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.03514962);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.02222137);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.007116718);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.002681073);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.001469136);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.001698028);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.001739168);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.01938078);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.04137696);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.03642603);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.02394614);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.01371025);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01016955);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.007926976);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.006042572);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.00358996);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.00187665);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.001469136);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.001698028);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.001739168);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(1599);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.02553546);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.1415534);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.2458005);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.1309215);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.0407431);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.01751835);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.007698433);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.002513927);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.0013147);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.0008777196);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.0007527799);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,8.474453e-06);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.002529355);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.005875007);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.00775661);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.00565192);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.003152862);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.002114005);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.001342186);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.0007730685);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0005912927);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0004370208);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.0004406655);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,8.474453e-06);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(2887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_algo_17->Modified();
   Z_pt_algo_17->cd();
   Z_pt_algo_17->SetSelected(Z_pt_algo_17);
}
