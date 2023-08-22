void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Tue Aug 22 09:18:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-1.545991,6.8,-0.1737434);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,0.07803031);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,0.1195687);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,0.1173155);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,0.2295285);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,0.1234178);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,0.2579188);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,0.1297649);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(28,0.1294336);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,0.07803031);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.1195687);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.1173155);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.1623026);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.1234178);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.1824914);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.1297649);
   VbbHcc_both_Z_dR_stack_6->SetBinError(28,0.1294336);
   VbbHcc_both_Z_dR_stack_6->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->Draw("HIST");
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
