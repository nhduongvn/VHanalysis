void Z_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_17/Z_jetmass_JEC_tags_17
//=========  (Tue Aug 22 09:21:08 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_17 = new TCanvas("Z_jetmass_JEC_tags_17", "Z_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_17->SetHighLightColor(2);
   Z_jetmass_JEC_tags_17->Range(-60,-1.142296,340,10.28066);
   Z_jetmass_JEC_tags_17->SetFillColor(0);
   Z_jetmass_JEC_tags_17->SetBorderMode(0);
   Z_jetmass_JEC_tags_17->SetBorderSize(2);
   Z_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,0.6936071);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,3.929714);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,6.316118);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,8.703205);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,6.580448);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,4.242314);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,3.36602);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,2.603217);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,0.4399032);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,1.352709);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,0.3031352);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(15,0.2306696);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.509267);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(17,0.1833627);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(18,0.2688617);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.2107384);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(21,0.2076434);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(22,0.2559921);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(25,0.2016896);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(29,0.2089677);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(44,0.3456672);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.3904167);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,0.9625195);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,1.236365);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.453437);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.261354);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,1.037187);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,0.9405334);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.8049543);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.3152093);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.5651256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.3031352);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(15,0.2306696);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.3659176);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(17,0.1833627);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(18,0.2688617);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.2107384);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(21,0.2076434);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(22,0.2559921);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(25,0.2016896);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(29,0.2089677);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(44,0.3456672);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(178);

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
