void Z_jetmass_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_18/Z_jetmass_noJEC_tags_18
//=========  (Tue Aug 22 09:16:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_18 = new TCanvas("Z_jetmass_noJEC_tags_18", "Z_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_18->Range(-60,-1.418606,340,1.723161);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLogy();
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(4,4.731929);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(5,10.27987);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(6,13.53429);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(7,9.303027);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(8,6.674293);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(9,6.736898);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(10,5.521281);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(11,2.717459);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(12,2.258447);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(13,1.457217);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(14,1.475035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(15,1.124498);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.3570146);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.3107587);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.1943129);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(20,0.528385);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(21,0.2743643);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.1572536);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(32,0.264633);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(4,1.240868);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(5,1.775831);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(6,2.077372);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(7,1.767821);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(8,1.434491);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(9,1.46377);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(10,1.257084);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(11,0.8643926);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(12,0.8602955);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(13,0.6562118);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(14,0.6652708);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(15,0.5653265);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(17,0.297515);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(18,0.3107587);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(19,0.1943129);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(20,0.3736371);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(21,0.2743643);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(22,0.1572536);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(32,0.264633);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetEntries(230);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_18->Modified();
   Z_jetmass_noJEC_tags_18->cd();
   Z_jetmass_noJEC_tags_18->SetSelected(Z_jetmass_noJEC_tags_18);
}
