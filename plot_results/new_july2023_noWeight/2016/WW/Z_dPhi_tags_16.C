void Z_dPhi_tags_16()
{
//=========Macro generated from canvas: Z_dPhi_tags_16/Z_dPhi_tags_16
//=========  (Thu Aug 10 12:27:39 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_tags_16 = new TCanvas("Z_dPhi_tags_16", "Z_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_16->SetHighLightColor(2);
   Z_dPhi_tags_16->Range(-0.8,-0.01763597,4.533333,0.1587237);
   Z_dPhi_tags_16->SetFillColor(0);
   Z_dPhi_tags_16->SetBorderMode(0);
   Z_dPhi_tags_16->SetBorderSize(2);
   Z_dPhi_tags_16->SetLeftMargin(0.15);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi_stack_6 = new TH1D("VbbHcc_tags_Z_dPhi_stack_6","",120,0,4);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinContent(0,0.9405851);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinContent(50,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinContent(58,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinError(0,0.3555077);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinError(20,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinError(50,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetBinError(58,0.1343693);
   VbbHcc_tags_Z_dPhi_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_6->Draw("HIST");
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
