void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Aug 22 09:16:03 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-3.22622,6.8,-1.504665);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.00716626);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.008652945);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.006314229);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01110787);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.004240709);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.004216984);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.00193606);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.004064582);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.002251171);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.002272667);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.006306363);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.001765897);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.003861509);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002108704);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.00218387);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.002042848);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.007104478);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.004141557);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.004329205);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.00367449);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.005097711);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.002998647);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.002985267);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.00193606);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.002874957);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002251171);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.002272667);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.00364159);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.001765897);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.002744127);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002108704);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.00218387);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.002042848);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.004101821);
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
