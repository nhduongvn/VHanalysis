#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_noJEC_tagOnly_18_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_tagOnly_18/Z_jetpt_noJEC_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_noJEC_tagOnly_18 = new TCanvas("Z_jetpt_noJEC_tagOnly_18", "Z_jetpt_noJEC_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_tagOnly_18->SetHighLightColor(2);
   Z_jetpt_noJEC_tagOnly_18->Range(-60,-0.13125,340,1.18125);
   Z_jetpt_noJEC_tagOnly_18->SetFillColor(0);
   Z_jetpt_noJEC_tagOnly_18->SetFillStyle(4000);
   Z_jetpt_noJEC_tagOnly_18->SetBorderMode(0);
   Z_jetpt_noJEC_tagOnly_18->SetBorderSize(2);
   Z_jetpt_noJEC_tagOnly_18->SetLeftMargin(0.15);
   Z_jetpt_noJEC_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetpt_noJEC_tagOnly_18->SetFrameBorderMode(0);
   Z_jetpt_noJEC_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetpt_noJEC_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetpt_noJEC__45 = new TH1D("VH_tagOnly_Z_jetpt_noJEC__45","",75,0,300);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetpt_noJEC__45->SetLineColor(ci);
   VH_tagOnly_Z_jetpt_noJEC__45->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VH_tagOnly_Z_jetpt_noJEC__45->GetXaxis()->SetRange(1,75);
   VH_tagOnly_Z_jetpt_noJEC__45->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetpt_noJEC__45->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetpt_noJEC__45->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetpt_noJEC__45->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagOnly_Z_jetpt_noJEC__45->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetpt_noJEC__45->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetpt_noJEC__45->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetpt_noJEC__45->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetpt_noJEC__45->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetpt_noJEC__45->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetpt_noJEC__45->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetpt_noJEC__45->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetpt_noJEC__45->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_tagOnly_18->Modified();
   Z_jetpt_noJEC_tagOnly_18->cd();
   Z_jetpt_noJEC_tagOnly_18->SetSelected(Z_jetpt_noJEC_tagOnly_18);
}
