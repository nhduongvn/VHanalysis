void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Aug 10 12:23:17 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-0.001559392,6.8,0.01403452);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.01188108);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.006085156);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.008329597);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.006364174);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.008994494);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.005802646);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002821306);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.005783177);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.002864632);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.01169776);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.003218024);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.01180623);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.005558844);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.002817849);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002994311);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.002672373);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.002248041);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.002756475);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.005943513);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004309814);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.004821736);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.004500845);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.005199944);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.004103342);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002821306);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.004089399);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.002864632);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.005849346);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003218024);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.005905378);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.003943475);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.002817849);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002994311);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002672373);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002248041);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.002756475);
   VbbHcc_tags_H_dR_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
