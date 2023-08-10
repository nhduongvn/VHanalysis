void Z_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_17/Z_jetmass_noJEC_tags_17
//=========  (Thu Aug 10 12:23:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_17 = new TCanvas("Z_jetmass_noJEC_tags_17", "Z_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_17->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_17->Range(-60,-1.443012,340,12.98711);
   Z_jetmass_noJEC_tags_17->SetFillColor(0);
   Z_jetmass_noJEC_tags_17->SetBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetBorderSize(2);
   Z_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(4,1.51065);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(5,5.671351);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(6,6.67887);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(7,10.99438);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(8,6.741267);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(9,5.530867);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(10,4.969958);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(11,1.421932);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(12,1.534772);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(13,0.830967);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(14,0.3217996);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(15,0.5641309);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(16,0.2407183);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.5110731);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.2854158);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.262766);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.5126897);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(24,0.2111933);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(29,0.2188144);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(43,0.3669504);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(4,0.6659709);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(5,1.280663);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(6,1.369569);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(7,1.815385);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(8,1.401423);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(9,1.297559);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(10,1.220022);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(11,0.6509257);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(12,0.6367673);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(13,0.4854638);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(14,0.3217996);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(15,0.3995429);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(16,0.2407183);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(17,0.3723855);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(18,0.2854158);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(19,0.262766);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(22,0.3666803);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(24,0.2111933);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(29,0.2188144);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(43,0.3669504);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetEntries(178);

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
