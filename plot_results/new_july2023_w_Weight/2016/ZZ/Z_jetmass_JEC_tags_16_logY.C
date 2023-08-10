void Z_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Thu Aug 10 12:20:34 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-1.171393,340,1.608167);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLogy();
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(3,0.2638274);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,1.310871);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,11.28918);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,10.80709);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,7.146995);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,5.343067);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,3.164604);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,1.159191);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,1.982799);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,1.248928);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,0.2662654);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,0.5535951);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.2872458);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2556187);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.2603336);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(3,0.2638274);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.5883714);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,1.747665);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,1.690655);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.362488);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.18575);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,0.9144234);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,0.5396301);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.7498433);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.5596103);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.2662654);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.3917342);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.2872458);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(17,0.2556187);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.2603336);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}
