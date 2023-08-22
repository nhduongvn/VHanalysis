void Z_dR_both_17()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Tue Aug 22 09:22:41 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.2,-0.004206216,6.8,0.03785594);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLeftMargin(0.15);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.02059252);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01230006);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03204736);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01493307);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.004543207);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.006709729);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.004753969);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.00348426);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.001917841);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.009431983);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.001052596);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.001676953);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.006889878);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.002745678);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002176473);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.002009449);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.003770382);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.003160696);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.003260446);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.00344075);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.001174952);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.003274426);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.001291342);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.005757668);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.00440774);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.00712917);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.004763056);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.002374171);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003359021);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.00287641);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002502184);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.001917841);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.003907524);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.001052596);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.001676953);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.003485939);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.001943489);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002176473);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.001669739);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.002667107);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.00224032);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.00232838);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.002438184);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.001174952);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.002354108);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.001291342);
   VbbHcc_both_Z_dR_stack_11->SetEntries(95);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
