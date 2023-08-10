void Z_dPhi_both_17_logY()
{
//=========Macro generated from canvas: Z_dPhi_both_17/Z_dPhi_both_17
//=========  (Thu Aug 10 10:43:05 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_17 = new TCanvas("Z_dPhi_both_17", "Z_dPhi_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_17->SetHighLightColor(2);
   Z_dPhi_both_17->Range(-0.8,-1.008968,4.533333,0.3088094);
   Z_dPhi_both_17->SetFillColor(0);
   Z_dPhi_both_17->SetBorderMode(0);
   Z_dPhi_both_17->SetBorderSize(2);
   Z_dPhi_both_17->SetLogy();
   Z_dPhi_both_17->SetLeftMargin(0.15);
   Z_dPhi_both_17->SetFrameBorderMode(0);
   Z_dPhi_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_7 = new TH1D("VbbHcc_both_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(0,2.045213);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(1,0.7439646);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(3,0.3317125);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(5,0.2891015);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(8,0.2751033);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(9,0.2900543);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(11,0.2653625);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(15,0.3092578);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(17,0.3503188);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(28,0.2948417);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(31,0.3136654);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(35,0.2655071);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(37,0.5620224);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(41,0.7933827);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(0,0.7385779);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(1,0.4379141);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(3,0.3317125);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(5,0.2891015);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(8,0.2751033);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(9,0.2900543);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(11,0.2653625);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(15,0.3092578);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(17,0.3503188);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(28,0.2948417);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(31,0.3136654);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(35,0.2655071);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(37,0.398823);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(41,0.4657511);
   VbbHcc_both_Z_dPhi_stack_7->SetEntries(26);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_17->Modified();
   Z_dPhi_both_17->cd();
   Z_dPhi_both_17->SetSelected(Z_dPhi_both_17);
}
