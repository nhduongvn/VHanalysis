void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Aug 10 12:21:33 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.2,-3.453548,6.8,-0.8928737);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
   Z_dR_both_18->SetLeftMargin(0.15);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.03156909);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.03745501);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03327313);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01859948);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.008202727);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.005727716);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.00272295);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.005642558);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.001269256);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.008826058);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.00569676);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.009121097);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.004830859);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.002662043);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.01255373);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.00283147);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.003551429);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.009674758);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.01048442);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.01008923);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.007383077);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.004739857);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.004050224);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.00272295);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003989917);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.001269256);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.005098108);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.004028563);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.005289296);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.003466234);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.002662043);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.006320737);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.00283147);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.003551429);
   VbbHcc_both_Z_dR_stack_11->SetEntries(69);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
