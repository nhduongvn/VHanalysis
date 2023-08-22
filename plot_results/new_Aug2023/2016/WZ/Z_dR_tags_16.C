void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Aug 22 09:20:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-0.0867204,6.8,0.7804835);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.6607268);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.6328337);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.2603627);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.2596262);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.07873842);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.07985163);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.1825174);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.228064);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.08729333);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.108763);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3090167);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.3704408);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.2827811);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,0.09132081);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.09078265);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,0.1805163);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.07823021);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.08656424);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.2507009);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.2397693);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.1505751);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.1503824);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.07873842);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.07985163);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.1290644);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.1319954);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.08729333);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.108763);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.1785686);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.1854659);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.1633181);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.09132081);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.09078265);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.1276761);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.07823021);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.08656424);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->Draw("HIST");
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
