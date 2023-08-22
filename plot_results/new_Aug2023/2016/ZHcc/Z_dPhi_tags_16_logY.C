void Z_dPhi_tags_16_logY()
{
//=========Macro generated from canvas: Z_dPhi_tags_16/Z_dPhi_tags_16
//=========  (Tue Aug 22 09:16:07 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_tags_16 = new TCanvas("Z_dPhi_tags_16", "Z_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_16->SetHighLightColor(2);
   Z_dPhi_tags_16->Range(-0.8,-3.224963,4.533333,-1.948895);
   Z_dPhi_tags_16->SetFillColor(0);
   Z_dPhi_tags_16->SetBorderMode(0);
   Z_dPhi_tags_16->SetBorderSize(2);
   Z_dPhi_tags_16->SetLogy();
   Z_dPhi_tags_16->SetLeftMargin(0.15);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi_stack_11 = new TH1D("VbbHcc_tags_Z_dPhi_stack_11","",120,0,4);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(0,0.04407299);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(3,0.001598357);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(6,0.00442537);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(8,0.002332089);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(9,0.00193606);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(10,0.002450362);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(11,0.00218387);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(13,0.002251171);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(14,0.002477054);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(16,0.001737613);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(18,0.001982459);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(23,0.002067091);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(27,0.001771715);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(30,0.002120116);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(31,0.002108704);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinContent(60,0.002082123);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(0,0.009925066);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(3,0.001598357);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(6,0.003129428);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(8,0.002332089);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(9,0.00193606);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(10,0.002450362);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(11,0.00218387);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(13,0.002251171);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(14,0.002477054);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(16,0.001737613);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(18,0.001982459);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(23,0.002067091);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(27,0.001771715);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(30,0.002120116);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(31,0.002108704);
   VbbHcc_tags_Z_dPhi_stack_11->SetBinError(60,0.002082123);
   VbbHcc_tags_Z_dPhi_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_11->Draw("HIST");
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
