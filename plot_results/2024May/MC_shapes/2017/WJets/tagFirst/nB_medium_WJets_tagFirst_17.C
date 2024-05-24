#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WJets_tagFirst_17()
{
//=========Macro generated from canvas: nB_medium_WJets_tagFirst_17/nB_medium_WJets_tagFirst_17
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WJets_tagFirst_17 = new TCanvas("nB_medium_WJets_tagFirst_17", "nB_medium_WJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WJets_tagFirst_17->SetHighLightColor(2);
   nB_medium_WJets_tagFirst_17->Range(-2.5,-1.809864e+07,10.83333,1.628877e+08);
   nB_medium_WJets_tagFirst_17->SetFillColor(0);
   nB_medium_WJets_tagFirst_17->SetFillStyle(4000);
   nB_medium_WJets_tagFirst_17->SetBorderMode(0);
   nB_medium_WJets_tagFirst_17->SetBorderSize(2);
   nB_medium_WJets_tagFirst_17->SetLeftMargin(0.15);
   nB_medium_WJets_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_WJets_tagFirst_17->SetFrameBorderMode(0);
   nB_medium_WJets_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_WJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4451 = new TH1D("Jets_cut_nB_medium__4451","",10,-0.5,9.5);
   Jets_cut_nB_medium__4451->SetBinContent(1,1.378944e+08);
   Jets_cut_nB_medium__4451->SetBinContent(2,1.035807e+07);
   Jets_cut_nB_medium__4451->SetBinContent(3,471688.2);
   Jets_cut_nB_medium__4451->SetBinContent(4,16068.63);
   Jets_cut_nB_medium__4451->SetBinContent(5,540.1066);
   Jets_cut_nB_medium__4451->SetBinContent(6,15.20789);
   Jets_cut_nB_medium__4451->SetBinContent(7,0.4910567);
   Jets_cut_nB_medium__4451->SetBinContent(8,0.01379731);
   Jets_cut_nB_medium__4451->SetBinError(1,21177.4);
   Jets_cut_nB_medium__4451->SetBinError(2,5951.828);
   Jets_cut_nB_medium__4451->SetBinError(3,1165.549);
   Jets_cut_nB_medium__4451->SetBinError(4,181.5536);
   Jets_cut_nB_medium__4451->SetBinError(5,30.67401);
   Jets_cut_nB_medium__4451->SetBinError(6,1.987349);
   Jets_cut_nB_medium__4451->SetBinError(7,0.2442179);
   Jets_cut_nB_medium__4451->SetBinError(8,0.009267356);
   Jets_cut_nB_medium__4451->SetEntries(1.628249e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4451->SetLineColor(ci);
   Jets_cut_nB_medium__4451->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4451->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4451->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4451->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4451->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4451->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4451->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4451->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4451->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4451->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4451->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4451->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4451->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4451->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4451->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WJets_tagFirst_17->Modified();
   nB_medium_WJets_tagFirst_17->cd();
   nB_medium_WJets_tagFirst_17->SetSelected(nB_medium_WJets_tagFirst_17);
}
