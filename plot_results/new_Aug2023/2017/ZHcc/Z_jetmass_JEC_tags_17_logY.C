void Z_jetmass_JEC_tags_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_17/Z_jetmass_JEC_tags_17
//=========  (Tue Aug 22 09:16:50 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_17 = new TCanvas("Z_jetmass_JEC_tags_17", "Z_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_17->SetHighLightColor(2);
   Z_jetmass_JEC_tags_17->Range(-60,-3.513532,340,-0.9098451);
   Z_jetmass_JEC_tags_17->SetFillColor(0);
   Z_jetmass_JEC_tags_17->SetBorderMode(0);
   Z_jetmass_JEC_tags_17->SetBorderSize(2);
   Z_jetmass_JEC_tags_17->SetLogy();
   Z_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(4,0.007761769);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(5,0.02118416);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(6,0.01975282);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(7,0.0356646);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(8,0.01171011);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(9,0.01236834);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(10,0.006015678);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(11,0.001571673);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(12,0.004992092);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(13,0.001535121);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(15,0.00214307);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(16,0.00111652);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(19,0.003587413);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(21,0.001421741);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(28,0.001898466);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(4,0.003485854);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(5,0.00570954);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(6,0.005525324);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(7,0.007422357);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(8,0.004356701);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(9,0.004601725);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(10,0.003096006);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(11,0.001571673);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(12,0.002896625);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(13,0.001535121);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(15,0.00214307);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(16,0.00111652);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(19,0.002537761);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(21,0.001421741);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(28,0.001898466);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_17->Modified();
   Z_jetmass_JEC_tags_17->cd();
   Z_jetmass_JEC_tags_17->SetSelected(Z_jetmass_JEC_tags_17);
}
