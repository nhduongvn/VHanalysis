void Z_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Tue Aug 22 09:16:47 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-3.166856,340,-1.245004);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLogy();
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.008752086);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.01232488);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.01928686);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.01474668);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.002123896);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.004176277);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.004511511);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.002381752);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.004803923);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(16,0.002120116);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(23,0.002369166);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(4,0.004391111);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(5,0.005044945);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(6,0.006552616);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(7,0.00559044);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(8,0.002123896);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(9,0.002953223);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(10,0.00319021);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(11,0.002381752);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(13,0.003397576);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(16,0.002120116);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(23,0.002369166);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_16->Modified();
   Z_jetmass_noJEC_tags_16->cd();
   Z_jetmass_noJEC_tags_16->SetSelected(Z_jetmass_noJEC_tags_16);
}
