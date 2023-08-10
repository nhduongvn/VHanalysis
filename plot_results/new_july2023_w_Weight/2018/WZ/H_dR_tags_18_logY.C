void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Aug 10 12:20:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-1.485918,6.8,0.781018);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,1.355405);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,1.883605);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,1.891365);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,1.027309);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,1.389715);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.4019721);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.9833285);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.9953587);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,1.053926);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3805224);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.748679);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.6738216);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.5093878);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.1101045);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.7883238);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.946305);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.9594801);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.5998066);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.8094488);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.4019721);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.9833285);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.7043367);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.774094);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3805224);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.529497);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.4804391);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.5093878);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.1101045);
   VbbHcc_tags_H_dR_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
