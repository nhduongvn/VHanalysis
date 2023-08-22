void Z_dPhi_both_16_logY()
{
//=========Macro generated from canvas: Z_dPhi_both_16/Z_dPhi_both_16
//=========  (Tue Aug 22 09:18:20 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_16 = new TCanvas("Z_dPhi_both_16", "Z_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_16->SetHighLightColor(2);
   Z_dPhi_both_16->Range(-0.8,-1.628648,4.533333,0.0164833);
   Z_dPhi_both_16->SetFillColor(0);
   Z_dPhi_both_16->SetBorderMode(0);
   Z_dPhi_both_16->SetBorderSize(2);
   Z_dPhi_both_16->SetLogy();
   Z_dPhi_both_16->SetLeftMargin(0.15);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_7 = new TH1D("VbbHcc_both_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(0,1.759895);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(1,0.2706275);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(2,0.3753369);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(3,0.09516179);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(6,0.09049555);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(10,0.1049263);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(11,0.08513152);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(12,0.08117422);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(13,0.07699256);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(19,0.07725225);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(20,0.1087961);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(21,0.09124724);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(22,0.1896029);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(23,0.08656424);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(24,0.08729333);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(29,0.0686903);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(30,0.0860683);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(31,0.07823021);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(32,0.07985163);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(35,0.09408829);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(37,0.09813325);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(44,0.101844);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(48,0.09988796);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(55,0.07873842);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(0,0.3979115);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(1,0.1562502);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(2,0.1879684);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(3,0.09516179);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(6,0.09049555);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(10,0.1049263);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(11,0.08513152);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(12,0.08117422);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(13,0.07699256);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(19,0.07725225);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(20,0.1087961);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(21,0.09124724);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(22,0.1341253);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(23,0.08656424);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(24,0.08729333);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(29,0.0686903);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(30,0.0860683);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(31,0.07823021);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(32,0.07985163);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(35,0.09408829);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(37,0.09813325);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(44,0.101844);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(48,0.09988796);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(55,0.07873842);
   VbbHcc_both_Z_dPhi_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_16->Modified();
   Z_dPhi_both_16->cd();
   Z_dPhi_both_16->SetSelected(Z_dPhi_both_16);
}
