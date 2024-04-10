#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_bjet1_tagFirst_18_logY()
{
//=========Macro generated from canvas: pt_bjet1_tagFirst_18/pt_bjet1_tagFirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_bjet1_tagFirst_18 = new TCanvas("pt_bjet1_tagFirst_18", "pt_bjet1_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_bjet1_tagFirst_18->SetHighLightColor(2);
   pt_bjet1_tagFirst_18->Range(-400,-3.770629e+08,2266.667,3.393565e+09);
   pt_bjet1_tagFirst_18->SetFillColor(0);
   pt_bjet1_tagFirst_18->SetFillStyle(4000);
   pt_bjet1_tagFirst_18->SetBorderMode(0);
   pt_bjet1_tagFirst_18->SetBorderSize(2);
   pt_bjet1_tagFirst_18->SetLeftMargin(0.15);
   pt_bjet1_tagFirst_18->SetFrameFillStyle(1000);
   pt_bjet1_tagFirst_18->SetFrameBorderMode(0);
   pt_bjet1_tagFirst_18->SetFrameFillStyle(1000);
   pt_bjet1_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_bjet1__91 = new TH1D("Jets_cut_pt_bjet1__91","",500,0,2000);
   Jets_cut_pt_bjet1__91->SetBinContent(12,2.372638e+09);
   Jets_cut_pt_bjet1__91->SetBinContent(13,2.87286e+09);
   Jets_cut_pt_bjet1__91->SetBinContent(14,2.202539e+09);
   Jets_cut_pt_bjet1__91->SetBinContent(15,1.440636e+09);
   Jets_cut_pt_bjet1__91->SetBinContent(16,1.046398e+09);
   Jets_cut_pt_bjet1__91->SetBinContent(17,6.739088e+08);
   Jets_cut_pt_bjet1__91->SetBinContent(18,4.670455e+08);
   Jets_cut_pt_bjet1__91->SetBinContent(19,2.712258e+08);
   Jets_cut_pt_bjet1__91->SetBinContent(20,1.822026e+08);
   Jets_cut_pt_bjet1__91->SetBinContent(21,1.048569e+08);
   Jets_cut_pt_bjet1__91->SetBinContent(22,6.620571e+07);
   Jets_cut_pt_bjet1__91->SetBinContent(23,4.4453e+07);
   Jets_cut_pt_bjet1__91->SetBinContent(24,1.688447e+07);
   Jets_cut_pt_bjet1__91->SetBinContent(25,2.743878e+07);
   Jets_cut_pt_bjet1__91->SetBinContent(26,9054670);
   Jets_cut_pt_bjet1__91->SetBinContent(28,3006453);
   Jets_cut_pt_bjet1__91->SetBinContent(29,4311626);
   Jets_cut_pt_bjet1__91->SetBinContent(32,2877067);
   Jets_cut_pt_bjet1__91->SetBinContent(33,1907568);
   Jets_cut_pt_bjet1__91->SetBinContent(35,2064382);
   Jets_cut_pt_bjet1__91->SetBinContent(43,2432219);
   Jets_cut_pt_bjet1__91->SetBinError(12,7.681306e+07);
   Jets_cut_pt_bjet1__91->SetBinError(13,8.804907e+07);
   Jets_cut_pt_bjet1__91->SetBinError(14,7.513671e+07);
   Jets_cut_pt_bjet1__91->SetBinError(15,6.157075e+07);
   Jets_cut_pt_bjet1__91->SetBinError(16,5.088701e+07);
   Jets_cut_pt_bjet1__91->SetBinError(17,3.968463e+07);
   Jets_cut_pt_bjet1__91->SetBinError(18,3.377094e+07);
   Jets_cut_pt_bjet1__91->SetBinError(19,2.450162e+07);
   Jets_cut_pt_bjet1__91->SetBinError(20,2.084012e+07);
   Jets_cut_pt_bjet1__91->SetBinError(21,1.451297e+07);
   Jets_cut_pt_bjet1__91->SetBinError(22,1.118054e+07);
   Jets_cut_pt_bjet1__91->SetBinError(23,1.056024e+07);
   Jets_cut_pt_bjet1__91->SetBinError(24,5089618);
   Jets_cut_pt_bjet1__91->SetBinError(25,1.159849e+07);
   Jets_cut_pt_bjet1__91->SetBinError(26,4361960);
   Jets_cut_pt_bjet1__91->SetBinError(28,2177268);
   Jets_cut_pt_bjet1__91->SetBinError(29,4311626);
   Jets_cut_pt_bjet1__91->SetBinError(32,2877067);
   Jets_cut_pt_bjet1__91->SetBinError(33,1907568);
   Jets_cut_pt_bjet1__91->SetBinError(35,2064382);
   Jets_cut_pt_bjet1__91->SetBinError(43,2432219);
   Jets_cut_pt_bjet1__91->SetEntries(6255);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_bjet1__91->SetLineColor(ci);
   Jets_cut_pt_bjet1__91->GetXaxis()->SetTitle("p_{T} (subleading b-jet) [GeV]");
   Jets_cut_pt_bjet1__91->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_bjet1__91->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet1__91->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet1__91->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet1__91->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_bjet1__91->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet1__91->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_bjet1__91->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_bjet1__91->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_bjet1__91->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet1__91->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet1__91->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet1__91->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet1__91->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_bjet1_tagFirst_18->Modified();
   pt_bjet1_tagFirst_18->cd();
   pt_bjet1_tagFirst_18->SetSelected(pt_bjet1_tagFirst_18);
}
