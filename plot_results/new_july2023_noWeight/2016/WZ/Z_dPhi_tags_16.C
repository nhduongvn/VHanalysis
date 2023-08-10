void Z_dPhi_tags_16()
{
//=========Macro generated from canvas: Z_dPhi_tags_16/Z_dPhi_tags_16
//=========  (Thu Aug 10 12:27:39 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_tags_16 = new TCanvas("Z_dPhi_tags_16", "Z_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_16->SetHighLightColor(2);
   Z_dPhi_tags_16->Range(-0.8,-0.04294184,4.533333,0.3864766);
   Z_dPhi_tags_16->SetFillColor(0);
   Z_dPhi_tags_16->SetBorderMode(0);
   Z_dPhi_tags_16->SetBorderSize(2);
   Z_dPhi_tags_16->SetLeftMargin(0.15);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi_stack_7 = new TH1D("VbbHcc_tags_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(0,1.63588);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(1,0.2181173);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(2,0.3271759);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(3,0.3271759);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(4,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(23,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(31,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(32,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(33,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(35,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(42,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(44,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(55,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(81,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(0,0.4223823);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(1,0.1542322);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(2,0.1888951);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(3,0.1888951);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(4,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(6,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(7,0.1542322);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(10,0.1542322);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(11,0.1542322);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(13,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(20,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(21,0.1542322);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(22,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(23,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(27,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(31,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(32,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(33,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(35,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(42,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(44,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(55,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(81,0.1090586);
   VbbHcc_tags_Z_dPhi_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_16->Modified();
   Z_dPhi_tags_16->cd();
   Z_dPhi_tags_16->SetSelected(Z_dPhi_tags_16);
}
