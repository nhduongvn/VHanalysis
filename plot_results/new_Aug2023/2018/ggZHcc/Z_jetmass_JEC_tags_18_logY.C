void Z_jetmass_JEC_tags_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Tue Aug 22 09:16:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-4.512349,340,-1.164903);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLogy();
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0006110697);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(4,0.002479017);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(5,0.01145654);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01670333);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01552438);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(8,0.0134163);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(9,0.009740729);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(10,0.009237504);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(11,0.004238375);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(12,0.00231224);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(13,0.001655634);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0006942513);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(15,0.0009860023);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0003027456);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(18,0.0005910572);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(19,0.0006852623);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0002063381);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0006485962);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(24,0.0003077663);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(30,0.0002697151);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(31,0.0002955286);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(43,0.0001328696);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(3,0.0006110697);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(4,0.0009507178);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(5,0.001956588);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(6,0.002357363);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(7,0.002220215);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(8,0.002039195);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(9,0.001797493);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(10,0.001734622);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(11,0.001166043);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(12,0.0008784881);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(13,0.0006789836);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(14,0.0004968436);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(15,0.0005799326);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(16,0.0003027456);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(18,0.0004179406);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(19,0.0004891639);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(20,0.0002063381);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(21,0.0004608173);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(24,0.0003077663);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(30,0.0002697151);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(31,0.0002955286);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(43,0.0001328696);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
