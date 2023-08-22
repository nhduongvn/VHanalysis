void Z_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Tue Aug 22 09:16:47 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-4.075467,340,-1.569851);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLogy();
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.0003106139);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.002845797);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.005807982);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.007980657);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.005779294);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.002846783);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.003625603);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.0008651475);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.0008236871);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.001980664);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.0002993123);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0005785762);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(21,0.0002995277);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(22,0.0006090247);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(24,0.0003572505);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(26,0.0003034595);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(33,0.0003153252);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0003106139);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(4,0.0009015474);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001271239);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(6,0.001512339);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001271518);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(8,0.000875322);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(9,0.00101236);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0004996333);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0004814254);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0007526905);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0002993123);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(16,0.000409187);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(21,0.0002995277);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(22,0.000430838);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(24,0.0003572505);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(26,0.0003034595);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(33,0.0003153252);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->Draw("HIST");
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
