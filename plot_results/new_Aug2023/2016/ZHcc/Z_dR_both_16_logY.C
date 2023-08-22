void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Tue Aug 22 09:18:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-3.29162,6.8,-1.348985);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.006803305);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01510785);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.004194113);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01181013);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002209336);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.00193606);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.006191193);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.002332089);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.002272667);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.002042848);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.001765897);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.003861509);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.004116352);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002067091);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.001598357);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.009288348);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.003935239);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.00571368);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.003001164);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.00536432);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002209336);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.00193606);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003576011);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.002332089);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.002272667);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.002042848);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.001765897);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.002744127);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.002911577);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002067091);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.001598357);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.004646959);
   VbbHcc_both_Z_dR_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
