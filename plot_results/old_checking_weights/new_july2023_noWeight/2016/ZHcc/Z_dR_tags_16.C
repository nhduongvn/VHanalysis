void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Aug  3 12:23:04 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-0.001794849,6.8,0.01615364);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01094003);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01367504);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.006115663);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
