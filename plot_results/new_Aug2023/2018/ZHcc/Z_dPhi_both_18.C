void Z_dPhi_both_18()
{
//=========Macro generated from canvas: Z_dPhi_both_18/Z_dPhi_both_18
//=========  (Tue Aug 22 09:22:48 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_18 = new TCanvas("Z_dPhi_both_18", "Z_dPhi_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_18->SetHighLightColor(2);
   Z_dPhi_both_18->Range(-0.8,-0.001167181,4.533333,0.01050463);
   Z_dPhi_both_18->SetFillColor(0);
   Z_dPhi_both_18->SetBorderMode(0);
   Z_dPhi_both_18->SetBorderSize(2);
   Z_dPhi_both_18->SetLeftMargin(0.15);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_11 = new TH1D("VbbHcc_both_Z_dPhi_stack_11","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(0,0.1091349);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(2,0.001009086);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(3,0.006440421);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(4,0.002219202);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(6,0.005351992);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(7,0.004460786);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(8,0.006679146);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(9,0.00889281);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(10,0.001567047);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(11,0.00292757);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(12,0.004419142);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(13,0.003107726);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(14,0.00143181);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(16,0.003427859);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(19,0.002212627);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(21,0.004359285);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(26,0.008123642);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(28,0.004525399);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(35,0.002390853);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(37,0.002640973);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(47,0.002141222);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(87,0.00281116);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(0,0.01611491);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(2,0.001009086);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(3,0.003721654);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(4,0.002219202);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(6,0.003810625);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(7,0.003155169);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(8,0.00396608);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(9,0.004455304);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(10,0.001567047);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(11,0.00292757);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(12,0.003136362);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(13,0.003107726);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(14,0.00143181);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(16,0.002423892);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(19,0.002212627);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(21,0.003083151);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(26,0.004756898);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(28,0.003202934);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(35,0.002390853);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(37,0.002640973);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(47,0.002141222);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(87,0.00281116);
   VbbHcc_both_Z_dPhi_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_18->Modified();
   Z_dPhi_both_18->cd();
   Z_dPhi_both_18->SetSelected(Z_dPhi_both_18);
}
