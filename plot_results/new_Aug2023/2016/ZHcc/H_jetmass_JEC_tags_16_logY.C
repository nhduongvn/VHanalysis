void H_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:16:39 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-3.143765,340,-1.319225);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLogy();
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(3,0.002186347);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(5,0.01452865);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(6,0.01662539);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(7,0.01242119);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(8,0.006740453);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(9,0.004018807);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(10,0.006657939);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(12,0.006694889);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(14,0.00235356);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(15,0.002243723);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(40,0.003126194);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(3,0.002186347);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(5,0.005527224);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(6,0.005913642);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(7,0.005085341);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(8,0.003895588);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(9,0.002841981);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(10,0.003862608);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(12,0.003869898);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(14,0.00235356);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(15,0.002243723);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(40,0.003126194);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}
