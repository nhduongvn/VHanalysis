void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:23:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.476858,1.133333,22.29172);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,18.8713);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.992918);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.4580364);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1712048);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.06368304);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.03394654);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02264495);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01087029);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01022685);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.00627555);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002241959);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001849532);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002160997);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0009737663);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0004326543);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004554951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004512559);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001462825);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.09201867);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02988102);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01430013);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.008707123);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.005313447);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00388279);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.003169187);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002181891);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002140699);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001683308);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001012501);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0009270259);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.000966558);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0006885632);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0004326543);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004554951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004512559);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0008446158);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(48968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
