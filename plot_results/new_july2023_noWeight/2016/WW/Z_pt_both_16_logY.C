void Z_pt_both_16_logY()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Thu Aug 10 12:32:39 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(-400,-4.620052,2266.667,-0.1468287);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
   Z_pt_both_16->SetLogy();
   Z_pt_both_16->SetLeftMargin(0.15);
   Z_pt_both_16->SetFrameBorderMode(0);
   Z_pt_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_pt_stack_6 = new TH1D("VbbHcc_both_Z_pt_stack_6","",1000,0,2000);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(35,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(53,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(54,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(56,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(78,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(81,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(90,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(112,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(126,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(160,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(172,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(35,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(53,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(54,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(56,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(78,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(81,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(90,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(112,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(126,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(160,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetBinError(172,0.1343693);
   VbbHcc_both_Z_pt_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_pt_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
