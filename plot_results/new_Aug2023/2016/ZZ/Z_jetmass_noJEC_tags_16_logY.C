void Z_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Tue Aug 22 09:16:46 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-1.290804,340,1.405645);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLogy();
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.1904895);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(4,2.113098);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(5,7.218568);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(6,6.311839);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(7,5.080809);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(8,3.897184);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(9,1.958681);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(10,1.441558);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(11,1.388961);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(12,0.6723447);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(13,0.4346498);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(15,0.4507042);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(16,0.2278237);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.2139249);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(20,0.2304019);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(3,0.1904895);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(4,0.6464325);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(5,1.235253);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(6,1.144953);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(7,1.016286);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(8,0.8993927);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(9,0.65563);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(10,0.5465977);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(11,0.5679869);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(12,0.3519409);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(13,0.3074138);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(15,0.3193254);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(16,0.2278237);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(17,0.2139249);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(20,0.2304019);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetEntries(156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->Draw("HIST");
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
