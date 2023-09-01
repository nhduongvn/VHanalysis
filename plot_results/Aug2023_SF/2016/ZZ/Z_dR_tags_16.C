#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-0.4866818,6.8,4.380136);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__71 = new TH1D("VbbHcc_tags_Z_dR__71","",30,0,6);
   VbbHcc_tags_Z_dR__71->SetBinContent(4,3.708052);
   VbbHcc_tags_Z_dR__71->SetBinContent(5,1.574256);
   VbbHcc_tags_Z_dR__71->SetBinContent(6,1.712373);
   VbbHcc_tags_Z_dR__71->SetBinContent(7,0.6528761);
   VbbHcc_tags_Z_dR__71->SetBinContent(8,0.7999647);
   VbbHcc_tags_Z_dR__71->SetBinContent(9,1.886999);
   VbbHcc_tags_Z_dR__71->SetBinContent(10,0.4015434);
   VbbHcc_tags_Z_dR__71->SetBinContent(11,1.405746);
   VbbHcc_tags_Z_dR__71->SetBinContent(12,2.569005);
   VbbHcc_tags_Z_dR__71->SetBinContent(13,2.525725);
   VbbHcc_tags_Z_dR__71->SetBinContent(14,2.388796);
   VbbHcc_tags_Z_dR__71->SetBinContent(15,2.466945);
   VbbHcc_tags_Z_dR__71->SetBinContent(16,2.209121);
   VbbHcc_tags_Z_dR__71->SetBinContent(17,3.312798);
   VbbHcc_tags_Z_dR__71->SetBinContent(18,2.759384);
   VbbHcc_tags_Z_dR__71->SetBinContent(19,1.757622);
   VbbHcc_tags_Z_dR__71->SetBinContent(20,0.966157);
   VbbHcc_tags_Z_dR__71->SetBinContent(21,0.1714438);
   VbbHcc_tags_Z_dR__71->SetBinContent(22,0.9029794);
   VbbHcc_tags_Z_dR__71->SetBinContent(23,0.2105237);
   VbbHcc_tags_Z_dR__71->SetBinContent(25,0.4690822);
   VbbHcc_tags_Z_dR__71->SetBinContent(26,0.5321242);
   VbbHcc_tags_Z_dR__71->SetBinContent(27,0.1795003);
   VbbHcc_tags_Z_dR__71->SetBinContent(28,0.2621723);
   VbbHcc_tags_Z_dR__71->SetBinContent(29,0.4519816);
   VbbHcc_tags_Z_dR__71->SetBinContent(30,0.1640944);
   VbbHcc_tags_Z_dR__71->SetBinContent(31,0.2061981);
   VbbHcc_tags_Z_dR__71->SetBinError(4,0.9468038);
   VbbHcc_tags_Z_dR__71->SetBinError(5,0.560655);
   VbbHcc_tags_Z_dR__71->SetBinError(6,0.6124496);
   VbbHcc_tags_Z_dR__71->SetBinError(7,0.3382728);
   VbbHcc_tags_Z_dR__71->SetBinError(8,0.4067013);
   VbbHcc_tags_Z_dR__71->SetBinError(9,0.6367771);
   VbbHcc_tags_Z_dR__71->SetBinError(10,0.2844057);
   VbbHcc_tags_Z_dR__71->SetBinError(11,0.5393555);
   VbbHcc_tags_Z_dR__71->SetBinError(12,0.7629986);
   VbbHcc_tags_Z_dR__71->SetBinError(13,0.7770093);
   VbbHcc_tags_Z_dR__71->SetBinError(14,0.7709722);
   VbbHcc_tags_Z_dR__71->SetBinError(15,0.7542066);
   VbbHcc_tags_Z_dR__71->SetBinError(16,0.6731719);
   VbbHcc_tags_Z_dR__71->SetBinError(17,0.858757);
   VbbHcc_tags_Z_dR__71->SetBinError(18,0.7569865);
   VbbHcc_tags_Z_dR__71->SetBinError(19,0.6120981);
   VbbHcc_tags_Z_dR__71->SetBinError(20,0.4391724);
   VbbHcc_tags_Z_dR__71->SetBinError(21,0.1714438);
   VbbHcc_tags_Z_dR__71->SetBinError(22,0.4556267);
   VbbHcc_tags_Z_dR__71->SetBinError(23,0.2105237);
   VbbHcc_tags_Z_dR__71->SetBinError(25,0.3367571);
   VbbHcc_tags_Z_dR__71->SetBinError(26,0.3775231);
   VbbHcc_tags_Z_dR__71->SetBinError(27,0.1795003);
   VbbHcc_tags_Z_dR__71->SetBinError(28,0.2621723);
   VbbHcc_tags_Z_dR__71->SetBinError(29,0.3219494);
   VbbHcc_tags_Z_dR__71->SetBinError(30,0.1640944);
   VbbHcc_tags_Z_dR__71->SetBinError(31,0.2061981);
   VbbHcc_tags_Z_dR__71->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR__71->SetFillColor(ci);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__71->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__71->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__71->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__71->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__71->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__71->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
