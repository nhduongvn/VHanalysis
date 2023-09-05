#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_18()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Tue Sep  5 10:48:05 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-1177.838,453.3333,10600.54);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__3 = new TH1D("VbbHcc_tags_Z_mass__3","",40,0,400);
   VbbHcc_tags_Z_mass__3->SetBinContent(3,34);
   VbbHcc_tags_Z_mass__3->SetBinContent(4,1073);
   VbbHcc_tags_Z_mass__3->SetBinContent(5,4258);
   VbbHcc_tags_Z_mass__3->SetBinContent(6,7271);
   VbbHcc_tags_Z_mass__3->SetBinContent(7,8689);
   VbbHcc_tags_Z_mass__3->SetBinContent(8,8974);
   VbbHcc_tags_Z_mass__3->SetBinContent(9,8781);
   VbbHcc_tags_Z_mass__3->SetBinContent(10,8152);
   VbbHcc_tags_Z_mass__3->SetBinContent(11,7621);
   VbbHcc_tags_Z_mass__3->SetBinContent(12,7340);
   VbbHcc_tags_Z_mass__3->SetBinContent(13,6928);
   VbbHcc_tags_Z_mass__3->SetBinContent(14,6582);
   VbbHcc_tags_Z_mass__3->SetBinContent(15,6275);
   VbbHcc_tags_Z_mass__3->SetBinContent(16,5885);
   VbbHcc_tags_Z_mass__3->SetBinContent(17,5644);
   VbbHcc_tags_Z_mass__3->SetBinContent(18,5459);
   VbbHcc_tags_Z_mass__3->SetBinContent(19,5125);
   VbbHcc_tags_Z_mass__3->SetBinContent(20,4761);
   VbbHcc_tags_Z_mass__3->SetBinContent(21,4660);
   VbbHcc_tags_Z_mass__3->SetBinContent(22,4374);
   VbbHcc_tags_Z_mass__3->SetBinContent(23,4372);
   VbbHcc_tags_Z_mass__3->SetBinContent(24,4199);
   VbbHcc_tags_Z_mass__3->SetBinContent(25,4009);
   VbbHcc_tags_Z_mass__3->SetBinContent(26,3907);
   VbbHcc_tags_Z_mass__3->SetBinContent(27,3657);
   VbbHcc_tags_Z_mass__3->SetBinContent(28,3660);
   VbbHcc_tags_Z_mass__3->SetBinContent(29,3637);
   VbbHcc_tags_Z_mass__3->SetBinContent(30,3522);
   VbbHcc_tags_Z_mass__3->SetBinContent(31,3426);
   VbbHcc_tags_Z_mass__3->SetBinContent(32,3269);
   VbbHcc_tags_Z_mass__3->SetBinContent(33,3258);
   VbbHcc_tags_Z_mass__3->SetBinContent(34,3199);
   VbbHcc_tags_Z_mass__3->SetBinContent(35,3098);
   VbbHcc_tags_Z_mass__3->SetBinContent(36,3178);
   VbbHcc_tags_Z_mass__3->SetBinContent(37,3065);
   VbbHcc_tags_Z_mass__3->SetBinContent(38,2964);
   VbbHcc_tags_Z_mass__3->SetBinContent(39,2990);
   VbbHcc_tags_Z_mass__3->SetBinContent(40,2923);
   VbbHcc_tags_Z_mass__3->SetBinContent(41,127355);
   VbbHcc_tags_Z_mass__3->SetEntries(307574);
   VbbHcc_tags_Z_mass__3->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__3->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
