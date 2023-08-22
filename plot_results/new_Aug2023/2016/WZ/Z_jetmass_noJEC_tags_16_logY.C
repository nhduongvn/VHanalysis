void Z_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Tue Aug 22 09:16:46 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-1.602001,340,0.3397487);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLogy();
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(3,0.07819951);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(4,0.4248202);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(5,0.6108649);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(6,0.700363);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(7,0.7379465);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(8,0.4550086);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(9,0.2840307);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(10,0.28971);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(13,0.08558222);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(14,0.09753612);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinContent(18,0.3043682);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(3,0.07819951);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(4,0.1903902);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(5,0.2318812);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(6,0.2490487);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(7,0.2614925);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(8,0.2043338);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(9,0.1642941);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(10,0.1675848);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(13,0.08558222);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(14,0.09753612);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetBinError(18,0.176021);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_7->Draw("HIST");
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
