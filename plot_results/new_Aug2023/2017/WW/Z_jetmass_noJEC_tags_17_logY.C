void Z_jetmass_noJEC_tags_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_17/Z_jetmass_noJEC_tags_17
//=========  (Tue Aug 22 09:16:47 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_17 = new TCanvas("Z_jetmass_noJEC_tags_17", "Z_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_17->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_17->Range(-60,-1.032071,340,-0.04989431);
   Z_jetmass_noJEC_tags_17->SetFillColor(0);
   Z_jetmass_noJEC_tags_17->SetBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetBorderSize(2);
   Z_jetmass_noJEC_tags_17->SetLogy();
   Z_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinContent(4,0.3049337);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinContent(5,0.2950387);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinContent(8,0.232904);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinContent(10,0.2355824);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinContent(24,0.3752659);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinError(4,0.3049337);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinError(5,0.2950387);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinError(8,0.232904);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinError(10,0.2355824);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetBinError(24,0.3752659);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_17->Modified();
   Z_jetmass_noJEC_tags_17->cd();
   Z_jetmass_noJEC_tags_17->SetSelected(Z_jetmass_noJEC_tags_17);
}
