void Z_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_17/Z_jetmass_noJEC_tags_17
//=========  (Tue Aug 22 09:21:06 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_17 = new TCanvas("Z_jetmass_noJEC_tags_17", "Z_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_17->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_17->Range(-60,-0.003555465,340,0.03199918);
   Z_jetmass_noJEC_tags_17->SetFillColor(0);
   Z_jetmass_noJEC_tags_17->SetBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetBorderSize(2);
   Z_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(3,0.001602781);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.009170687);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.01788712);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.02677418);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.02708925);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.0155122);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.01040557);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.008180665);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.001144273);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(12,0.003254505);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.001535121);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(15,0.00214307);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(17,0.00111652);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(18,0.001845983);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(19,0.00174143);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(21,0.001421741);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(28,0.001898466);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(3,0.001602781);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(4,0.003759843);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(5,0.005201739);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(6,0.006380819);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(7,0.006519914);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(8,0.005131316);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(9,0.004148421);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(10,0.003710155);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(11,0.001144273);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(12,0.002317591);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(13,0.001535121);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(15,0.00214307);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(17,0.00111652);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(18,0.001845983);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(19,0.00174143);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(21,0.001421741);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(28,0.001898466);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetEntries(87);

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
